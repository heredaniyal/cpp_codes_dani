#include <iostream>
using namespace std;

/*
insertHead(), InsertEnd(), InsertAnywhere() +
deleteHead(), DeleteEnd(), DeleteAnywhere() -
DONE
*/

struct Node
{
 int data; 
 Node *next = nullptr; // by default next null hona behtar hai
};

Node * head = nullptr; // for now nothing (global)

void output() // display singly linked list
{
    Node *temp = head; // indirectly using head

    while (temp != nullptr) // tab tak chale jab tak null na hojaye
    {
        cout << temp->data << " -> ";
        temp = temp->next; // traversal
    }
    // reached empty
    cout << "EMPTY\n";
}

void insertHead(int data) // insert at start
{
    Node * dani = new Node(); // pointer object made
    dani->data = data; // data daal do in node
    dani->next = head; // linking
    head = dani; // making it permanent
}

void insertEnd(int data) // insert at end
{
    if (head == nullptr) // is linked list empty?
    {
        insertHead(data); // best yehi hai
    }
    else // no it's not empty
    {
        Node * dani = new Node(); // pointer object made
        dani->data = data; // data daal do in node
        Node * temp = head; // indirectly using head
        while (temp->next != nullptr) // last node ka next hi null hota hai
        {
            temp = temp->next; // traversal
        }
        // reached last node
        temp->next = dani; // link is formed
    }
}

void insertAnywhere(int data, int position) // insert at Anywhere
{
    if (head == nullptr || position == 1) // 1st node ki jagha meaning insertathead
    {
        // tab chale jab linked list empty ho ya position hi head ki ho
       insertHead(data);
    }
    else // 1st node sai agai ki baat hai jigar
    {
        Node * dani = new Node(); // pointer object made
        dani->data = data; // data daal do in node
        // position >= 2
        int currentposition = 1; // currently temp kidhar lye karta hai tracking
        Node *temp = head; // indirectly using head

        while (currentposition != position - 1)
        {
            temp = temp->next;
            ++currentposition;
        }

        // reached node before position
        // now pointer game better with diagram
        dani->next = temp->next;
        temp->next = dani; // completed

    }

}

// NOW FOR DELETION (-)

void deleteHead()
{
    if (head == nullptr) // is linked list empty?
    {
        cout << " LINKED LIST IS EMPTY! \n";
    }
    else // it's not empty
    {
        Node *temp = head; // indirectly using head
        head = head->next;
        delete temp;
    }
}

void deleteEnd() // delete last node
{
    if (head == nullptr) // is linked list empty?
    {
        cout << " LINKED LIST IS EMPTY! \n";
    }
    else // it's not empty
    {
        Node *temp = head; // indirectly using head
        while (temp->next->next != nullptr) // better explained with diagram
        { 
          temp = temp->next; // traversing  
        }
        // reached second last node
        temp->next = nullptr; // roadblock
    }
}

void deleteAnywhere(int position) // delete at Anywhere
{
    if (head == nullptr) // 1st node ki jagha meaning insertathead
    {
        // tab chale jab linked list empty ho ya position hi head ki ho
       cout << " LINKED LIST IS EMPTY! \n";
    }
    else if (position == 1) // 1st node delete
    {
        deleteHead();
    }
    else // 1st node sai agai ki baat hai jigar
    {
        // position >= 2
        int currentposition = 1; // currently temp kidhar lye karta hai tracking
        Node *temp = head; // indirectly using head

        while (currentposition != position - 1)
        {
            temp = temp->next;
            ++currentposition;
        }

        // reached node before position
        // now pointer game better with diagram
        temp->next = temp->next->next;
        temp = temp->next;
        temp->next = nullptr;
    }

}

int main()
{
    for (int i = 1; i < 5; i++) // 1 to 4
    {
        insertEnd(i);
    }
    output(); // 1 -> 2 -> 3 -> 4 

    insertAnywhere(69, 3); // 1 -> 2 -> 69 -> 3 -> 4
    output();

    /* deleting one by one through loop running
    for (int i = 0; i < 6; i++) // 0 to 5 meaning 6 times
    {
        deleteHead(); // deletion on start
        output(); // displaying saath saath
    }*/

   deleteEnd(); // 4 will be ignored
   output(); // 1 -> 2 -> 69 -> 3

   deleteAnywhere(3); // 69 should be deleted
   output();

    return 0;
}