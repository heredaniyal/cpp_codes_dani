#include <iostream>
using namespace std;

/*
FINALIZED CODE 10/12/2025
LEARNED SOMETHING NEW
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

        // ** LEARNED SOMETHING NEW ** 10/12/2025
        // C++ always checks from left to right
        // error using while (temp->next->roll != r && temp->next != nullptr)
        // because it's checking left condition first then right condition
        // which is wrong, c++ compiles from left to right
        while (temp->next != nullptr && temp->next->roll != r) // better explained with diagram
        {
            temp = temp->next;
        }

        // reached node before position
        // now pointer game better with diagram
        if (temp->next == nullptr) // is it last node?
        {
            // it means it reached the last node still didn't find the number
            cout << "ROLL NUMBER DOESN'T EXIST \n " << endl;
        }
        else { // it's in between
            // this will work for every possible case InshaAllah
            Student * studentdelete = temp->next;
           temp->next = temp->next->next;
           delete studentdelete;
        output(); // for display
        }
    }
}

int main()
{
    // P.S Make your modifications here, tested everything logging out
    // 1:44 am 10/12/2025
    for (int i = 10; i <=40; i = i + 10) {
        insertAtEnd(i);
    }
    deleteAnywhere(40);
    return 0;
}
