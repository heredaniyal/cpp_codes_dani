#include <iostream>
using namespace std;

/* DONE TESTING
Question 1: Simple Queue – Patient Registration  
Patients arrive at the hospital reception for registration on a First Come First Serve (FCFS) 
basis. 
Tasks : 
1.  Analyze the given registration scenario and select the most appropriate data structure. 
2.  Apply queue concepts to design a simple queue using an array. 
3.  Implement the following operations: 
o  Enqueue (Register Patient) 
o  Dequeue (Send Patient to Doctor) 
o  Display Queue 
4.  Justify your selection of a simple queue for this application. 
*/

// as it's FCFS, i'll use QUEUE as it runs on this methodology.
// QUEUE USING ARRAYS

// GLOBAL ARRAY AND INDEXES (i)
string patient[5]; // FOR NOW ONLY 5 PATIENTS
int front = -1; // 1st value
int rear = -1; // LAST VALUE

void display() {
    if (front == -1) {cout << "PATIENTS QUEUE IS EMPTY NOW!" << endl;}
    else {
    for (int i = front; i <= rear; i++) { // front to rear
        cout << patient[i] << " ";
    }
    cout << endl; // SPACING AFTER EVERY FULL QUEUE DISPLAY
   }
}

void enqueue(string p) { // +
if (rear == 4) { // is it full?
 cout << "PATIENTS QUEUE IS FULL!" << endl;
}
else if (front == -1) { // is queue empty?
front++;
rear++; // both are pointing to 0 index
patient[front] = p; // idhar aap rear index bhi use krskte ho
display();
}
else { // in between
rear++;
patient[rear] = p; // main function is this
display();
}
}

void dequeue() { // -
if (front == -1) { // is it empty?
 cout << "PATIENTS QUEUE IS EMPTY NOW!" << endl;
}
else if (front == rear) { // is there only one value left?
front = rear = -1; // deletion complete of last value
display();
}
else { // in between
front++;
display();
}
}

int main()
{
    // Your code here
    enqueue("DANIYAL");
    enqueue("ABDULLAH");
    enqueue("AREEB");
    enqueue("ANAS");
    enqueue("MUJEEB");
    enqueue("TAHIR"); // FULL AJANA CHAHIYE IDHAR
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue(); // idhar ajana chahiye empty queue
    return 0;
}