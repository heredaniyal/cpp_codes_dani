#include <iostream>
using namespace std;

/*
A school stores its active students’ roll numbers in a Singly Linked List. 
Initially, the admin inserts these roll numbers at the end: 
10, 20, 30, 40 
Later, one student withdraws from the school, and the admin enters the roll number to delete. 
Task: 
Write a C++ program to: 
●  Create the list 
●  Insert the 4 roll numbers at end 
●  Delete the roll number entered by the user 
●  Display the updated student list 
*/

struct Student {
int roll;
Student *next = nullptr; // address of next node
};

Student * head = nullptr; // at the start no node

// OUTPUT ENTIRE LINKED LIST
void output() {
    Student *temp = head; // copy of head
    while (temp != nullptr) // till it finishes
    {
        cout << temp->roll << " -> ";
        temp = temp->next;
    }
    cout << "EMPTY" << endl;
}

// INSERT STUDENT AT START OF HEAD POINTER
void insertAtStart(int r) {
    Student * s = new Student(); // dynamic memory being feed
    s->roll = r; // MAKING WITH DIAGRAM I GET IT NOW
    s->next = head;
    head = s;
    output();
}

void insertAtEnd(int r) {
    if (head == nullptr) // meaning no node?
    {
        insertAtStart(r); // redirect back to insertAtStart
    }
    else { // at least 1 node is there
      Student * temp = head; // a copy of head is made
      while (temp->next != nullptr) { // this will reach the last node
        // last node has it's next pointer NULL ALWAYS
        // make diagram you'll get it
        temp = temp->next; // traversal like i++
      }
      // we have reached last node now
      Student * s = new Student(); // dynamic memory being feed
      s->roll = r;
      temp->next = s; // successfully connected
      output();
    }
}

// now for deletions (-)
void deleteatStart() { // no + only -
    if (head == nullptr) // is linked list empty?
    {
        cout << " LINKED LIST IS EMPTY! \n";
    }
    else // it's not empty
    {
    Student * temp = head; // draw diagram for learning
    head = head->next;
    temp->next = nullptr; // link killed
    delete temp;
    output(); // display
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
        Student *temp = head; // indirectly using head
        while (temp->next->next != nullptr) // better explained with diagram
        { 
          temp = temp->next; // traversing  
        }
        // reached second last node
        temp->next = nullptr; // roadblock
        output(); // for automatic display
    }
}

void deleteAnywhere(int r) // delete at Anywhere
{
    if (head == nullptr) // 1st node ki jagha meaning insertathead
    {
        // tab chale jab linked list empty ho ya position hi head ki ho
       cout << " LINKED LIST IS EMPTY! \n";
    }
    else if (head->roll == r) // 1st node delete
    {
        deleteatStart();
    }
    else // 1st node sai agai ki baat hai jigar
    {
        // position >= 2
        Student *temp = head; // indirectly using head

        while (temp->next->roll != r && temp != nullptr) // better explained with diagram
        {
            cout << "MAI PHAS GAYA" << endl;
            temp = temp->next;
        }

        // reached node before position
        // now pointer game better with diagram
        if (temp == nullptr) { // if the roll doesn't exist
            cout << "ROLL NUMBER DOESN'T EXIST" << endl;
        }
        else if (temp->next == nullptr) // is it last node?
        {
            deleteEnd();
        }
        else { // it's in between
           temp->next = temp->next->next;
        output(); // for display
        }
    }
}

int main()
{
    for (int i = 10; i <=40; i = i + 10) {
        insertAtEnd(i);
    }
    deleteAnywhere(50);
    return 0;
}