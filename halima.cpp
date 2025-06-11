#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    void appendNode(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

      // SWAPPING CUSTOMERS CODE FROM HALIMA IN 
     void swapGroups(int M, int N) {
        Node* current = head;
        Node* prevGroupEnd = NULL;

        while (current) {
            Node* M_start = current;
            Node* M_end = current;
            for (int i = 1; i < M && M_end->next; i++) {
                M_end = M_end->next;
            }

            Node* N_start = M_end->next;
            if (!N_start) break;

            Node* N_end = N_start;
            for (int i = 1; i < N && N_end->next; i++) {
                N_end = N_end->next;
            }

            Node* nextGroupStart = N_end->next;

            if (prevGroupEnd) {
                prevGroupEnd->next = N_start;
            } else {
                head = N_start;
            }

            N_end->next = M_start;
            M_end->next = nextGroupStart;

            prevGroupEnd = M_end;
            current = nextGroupStart;
        }
    }

    void removeBooks(int I, int J) {
        Node* current = head;
        Node* prev = NULL;

        while (current) {
            for (int i = 1; i < I && current != NULL; i++) {
                current = current->next;
            }

            if (current == NULL) break;

            Node* temp = current->next;
            for (int j = 1; j <= J && temp != NULL; j++) {
                Node* toDelete = temp;
                temp = temp->next;
                delete toDelete;
            }

            current->next = temp;
            current = temp;
        }
    }

    void printList() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
       cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;

    list.appendNode(1);
    list.appendNode(2);
    list.appendNode(3);
    list.appendNode(4);
    list.appendNode(5);
    list.appendNode(6);
    list.appendNode(7);
    list.appendNode(8);

    cout << "Original Shelf: " << endl;
    list.printList();

    int I = 2, J = 2;

    list.removeBooks(I, J);

    cout << "Shelf after Removal: " << endl;
    list.printList();

    return 0;
}