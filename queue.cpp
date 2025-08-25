#include <iostream>
using namespace std;

/*

DONE
learning queues here. 15/12/2024

USING LINKED LIST

front -> 1st
rear -> last

enqueue()
dequeue()

*/

struct Node // singly
{
    int data;
    Node *next = nullptr; // taakay direction clear ho
};

// pointers kay andar values pari hotin na
Node * front1 = nullptr, * rear = nullptr; // nullptr in array == nullptr in linked list

void enqueue(int data) // + adding
{
    Node * dani = new Node(); // giving memory as pointer kay pass khud kch nahi hota
    dani->data = data; // simple
    // MAIN CONDITION, is the queue empty?
    if (front1 == nullptr) // first value hi nahi hai?
    {
        front1 = rear = dani; // 1st and last value for now
    }
    // full hone ki baat khatam idhar as no fixed size
    else // abhi rehti hai jagha
    {
         rear->next = dani; // rear -> LAST
         rear = rear->next; // moved on to recently added node -> last node
    }
}

// boht major masle hain iske
void dequeue() // - deleting
{
    /* saari game hi front ki hai
    but actually mai memory delete nahi hoti, ignore hoti hai
    */
    // main condition is empty tou nahi
    if (front1 == nullptr)
    {
        cout << " QUEUE IS EMPTY! \n";
    }
    else if (front1 == rear) // 1st and last node
    {
        front1 = rear = nullptr; // saari game yeh chalate hain
    }
    else // 1 sai ziyada data hai
    {
        Node * temp = front1; // for deleting indirectly
        front1 = front1->next; // agai hojao jissei ilussion of deletion mile ga but
        delete temp; // this is actually deleting the nodes
    }
}

void output() // displaying the queue
{
    Node * temp = front1; // takay front ko kuch na ho actually
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl; // spacing
}

int main()
{
    // adding 1 to 5
    for (int i = 1; i <= 5; i++)
    {
        enqueue(i); // 1 to 5 added
        output(); // added value dikhata rahe ga
    }

    // deleting from 1 to 5
    for (int i = 1; i <= 6; i++)
    {
        dequeue(); // 1 to 5 added
        output(); // added value dikhata rahe ga
    }
    return 0;
}
