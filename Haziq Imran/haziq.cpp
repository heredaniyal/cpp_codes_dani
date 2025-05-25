#include <iostream>
#include <fstream>
#include <unordered_map>
using namespace std;

class node
{
public:
    char character;
    int frequency;
    node *next;
    node *left;
    node *right;

    // for leaf nodes and priority queue
    node(char c, int freq) : character(c), frequency(freq), next(NULL), left(NULL), right(NULL) {}

    // for internal nodes
    node(int freq, node *l, node *r) : character('\0'), frequency(freq), next(NULL), left(l), right(r) {}
};

class priority_queue
{
public:
    node *head;
    priority_queue() : head(NULL) {}

    void insert(node *newnode)
    {
        if (head == NULL || newnode->frequency < head->frequency)
        {
            newnode->next = head;
            head = newnode;
        }
        else
        {
            node *temp = head;
            while (temp->next != NULL && newnode->frequency > temp->next->frequency)
            {
                temp = temp->next;
            }
            newnode->next = temp->next;
            temp->next = newnode;
        }
    }

    node *extractmin()
    {
        if (!head)
        {
            throw runtime_error("empty queue");
        }

        node *minnode = head;
        head = head->next;
        return minnode;
    }

    bool isempty()
    {
        return (head == NULL);
    }
};

class huffmantree
{
public:
    node *root;
    int ascii[256];
    priority_queue queue;
    fstream input_file;
    fstream output_file;
    unordered_map<char, string> codes;

    huffmantree() : root(NULL)
    {
        for (int i = 0; i < 256; i++)
        {
            ascii[i] = 0;
        }
    }

    void count_frequency()
    {
        input_file.open("input.txt", ios::in);
        if (!input_file)
        {
            cout << "File not found" << endl;
        }
        else
        {
            char c;
            while (input_file.get(c))
            {
                ascii[c]++;
            }
        }
        input_file.close();
    }

    void create_queue()
    {
        for (int i = 0; i < 256; i++)
        {
            if (ascii[i] != 0)
            {
                node *newnode = new node(char(i), ascii[i]);
                queue.insert(newnode);
            }
        }
    }

    void print_queue()
    {
        node *temp = queue.head;
        while (temp)
        {
            cout << temp->character << ":" << temp->frequency << endl;
            temp = temp->next;
        }
    }

    void build_tree()
    {
        while (!queue.isempty() && queue.head->next != NULL)
        {
            node *left = queue.extractmin();
            node *right = queue.extractmin();
            int freq = left->frequency + right->frequency;
            node *internalnode = new node(freq, left, right);
            queue.insert(internalnode);
        }
        root = queue.extractmin();
    }

    void generate_codes(node *current, string code)
    {
        if (!current)
            return;

        if (current->left == NULL && current->right == NULL)
        {
            codes[current->character] = code;
        }

        generate_codes(current->left, code + "0");
        generate_codes(current->right, code + "1");
    }

    void compress()
    {
        input_file.open("input.txt", ios::in);
        if (!input_file)
        {
            cout << "No data to compress" << endl;
            return;
        }
        output_file.open("compressed.txt", ios::out | ios::binary);
        if (!output_file)
        {
            cout << "Error opening output file" << endl;
            return;
        }

        char c;
        string bitstream = "";
        while (input_file.get(c))
        {
            bitstream += codes[c];
        }

        while (bitstream.length() >= 8)
        {
            char byte = 0;
            for (int i = 0; i < 8; i++)
            {
                byte = (byte << 1) | (bitstream[i] - '0');
            }
            output_file.put(byte);
            bitstream.erase(0, 8);
        }

        if (!bitstream.empty())
        {
            unsigned char byte = 0;
            int i = 0;
            for (; i < bitstream.length(); ++i)
            {
                byte = (byte << 1) | (bitstream[i] - '0');
            }
            byte <<= (8 - i);
            output_file.put(byte);
        }

        input_file.close();
        output_file.close();
    }

    void decompress()
    {
        input_file.open("compressed.txt", ios::in | ios::binary);
        if (!input_file)
        {
            cout << "No compressed data found" << endl;
            return;
        }

        output_file.open("decompressed.txt", ios::out);
        if (!output_file)
        {
            cout << "Error opening decompressed output file" << endl;
            return;
        }

        node *current = root;
        char byte;
        while (input_file.get(byte))
        {
            for (int i = 7; i >= 0; i--)
            {
                bool bit = (byte >> i) & 1;
                current = bit ? current->right : current->left;

                if (!current->left && !current->right)
                {
                    output_file.put(current->character);
                    current = root;
                }
            }
        }

        input_file.close();
        output_file.close();
        cout << "Decompression completed. Check decompressed.txt" << endl;
    }
};

int main()
{
    huffmantree tree;
    tree.count_frequency();
    tree.create_queue();
    tree.build_tree();
    tree.generate_codes(tree.root, "");
    tree.compress();
    cout << "Compression completed. Check compressed.txt" << endl;
    tree.decompress();
    return 0;
}
