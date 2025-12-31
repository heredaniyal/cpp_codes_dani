#include <iostream>
using namespace std;

// DONE 21/12/2025 DSA
// SINGLE ENDED QUEUE USING ARRAYS
// front = deletion (-)
// rear = insertion (+)

int arr[5], front = -1, rear = -1;

void display() {
    if (front == -1) { // QUEUE IS EMPTY!
       cout << "NOTHING TO DISPLAY, QUEUE IS EMPTY! \n";
    }
    else {
        for (int i = front; i <= rear; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; // FOR SPACING
    }
    
}

void enqueue(int value) { // INSERTION (+)
// kya front -1 hain? meaning it's empty
if (front == -1) 
{
    front = front + 1; // front++, ++front
    rear = rear + 1; // rear++, ++rear
    arr[rear] = value;
}
else if (rear == 4) { // is array full?
cout << "QUEUE IS FULL! \n"; 
}
else { // na hi full hai na hi empty hai, it's in the middle
rear++;
arr[rear] = value;
}
display();
}

void dequeue() { // DELETION (-)
// kya front aur rear dono -1 hain? meaning it's empty
if (front == -1) 
{
    cout << "QUEUE IS EMPTY! NOTHING TO DELETE! \n";
}
else if(front == rear) { // there is only 1 value left
 front = -1;
 rear = -1;
}
else { // na hi full hai na hi empty hai, it's in the middle
front++;
}
display();
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6); // is full
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue(); // EMPTY
    return 0;
}