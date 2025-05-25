#include <iostream>
#include<ctime>
#include <string>
#include<vector>
#include<queue>
using namespace std;

//Stack Node Class
class stackNode
{
public:
    string customerName;
    string roomType;
    int roomNumber;
    int floorNumber;
    int stayPeriod;
    stackNode* next;
    //Constructor
    stackNode(string name, string type, int romNum, int floorNum, int duration)
    {
        customerName = name;
        roomType = type;
        stayPeriod = duration;
        roomNumber = romNum;
        floorNumber = floorNum;
        next = nullptr;
    }
};
//Stack Class
class Stack
{
private:
    stackNode* top;
public:
    //Constructor
    Stack()
    {
        top = nullptr;
    }
    //isEmpty Function
    bool isEmpty()
    {
        return top == nullptr;
    }
    //Push Function
    void push(string name, string type, int roomNum, int floorNum, int duration)
    {
        stackNode* newNode;
        newNode = new stackNode(name, type, roomNum, floorNum, duration);
        newNode->next = top;
        top = newNode;
    }
    //Pop Fucntion
    void pop()
    {
        if (isEmpty())
        {
            cout << "No Booking History" << endl;
            return;
        }
        stackNode* temp = top;
        top = top->next;
        cout << "Cancelling this Booking: " << temp->customerName
            << ", Room: " << temp->roomType
            << ", Floor NumberL " << temp->floorNumber
            << ", Room Number: " << temp->roomNumber
            << ", Stay: " << temp->stayPeriod << " days.\n";
        delete temp;
    }
    //Peak Function
    stackNode* peak()
    {
        if (isEmpty())
        {
            cout << "No Booking History" << endl;
            return nullptr;
        }
        return top;
    }
    //Display Function
    void displayStack()
    {
        if (isEmpty())
        {
            cout << "No bookings in the stack.\n";
            return;
        }
        stackNode* temp = top;
        cout << "Bookings in Stack:\n";
        while (temp != nullptr)
        {
            cout << "Customer: " << temp->customerName
                << ", Room: " << temp->roomType
                << ", Floor Number: " << temp->floorNumber
                << ", Room Number: " << temp->roomNumber
                << ", Stay: " << temp->stayPeriod << " days\n";
            temp = temp->next;
        }
    }
    //Destructor
    ~Stack()
    {
        while (!isEmpty())
        {
            pop();
        }
    }
};
//Queue Node Class
class QueueNode
{
public:
    string customerName;
    string roomType;
    int roomNumber;
    int floorNumber;
    int stayPeriod;
    bool priority;
    int customerID;
    QueueNode* next;
    //Constructors
    QueueNode(string Cname, string romtype, int stay, int roomNum, int floorNum, bool prior, int ID)
    {
        customerName = Cname;
        roomType = romtype;
        stayPeriod = stay;
        priority = prior;
        roomNumber = roomNum;
        floorNumber = floorNum;
        customerID = ID;
        next = nullptr;
    }
};
//Queue Class
class Queue
{
private:
    QueueNode* front;
    QueueNode* rear;
    Stack& bookingHistory; //Reference Type Object for Pushing in Stack while Poping Queue
    int size;
public:
    //Constructor
    Queue(Stack& history) : bookingHistory(history)
    {
        front = nullptr;
        rear = nullptr;
        size = 0;
    }
    bool isEmpty()
    {
        return front == nullptr;
    }
    //Push Function
    void push(string name, string type, int duration, int roomNum, int floorNum, bool priority, int ID)
    {
        QueueNode* newNode = new QueueNode(name, type, duration, roomNum, floorNum, priority, ID);

        if (isEmpty())
        {
            front = rear = newNode;
        }
        else if (priority == 0) // Low priority booking
        {
            rear->next = newNode;
            rear = newNode;
        }
        else // High priority booking
        {
            if (front == nullptr || front->priority == 0) // if booking on front is low add before it 
            {
                // If no high priority nodes are present, add it to the front.
                newNode->next = front;
                front = newNode;
            }
            else // high priority is present so insert after or in midle of low and high
            {
                // Insert after the first high priority node
                QueueNode* temp = front;
                while (temp->next != nullptr && temp->next->priority == 1)
                {
                    temp = temp->next;
                }

                // Now temp points to the last high-priority node or the first low-priority node.
                newNode->next = temp->next;
                temp->next = newNode;

                if (newNode->next == nullptr) // If it's added at the end, then update rear
                {
                    rear = newNode;
                }
            }
        }
        size++;
    }
    //Pop Function

    void pop()
    {
        if (isEmpty())
        {
            cout << "No Bookings" << endl;
            return;
        }

        // Storing Bookings in a vector
        vector<QueueNode*> nodes1;
        vector<QueueNode*> nodes2;
        while (front != nullptr)
        {
            QueueNode* temp = front;
            front = front->next;
            if (front == nullptr)
            {
                rear = nullptr;
            }
            nodes1.push_back(temp);
            nodes2.push_back(temp);

        } // gr1 , hr saad mateen ali

        // Now pushing Bookings according to their ID, lower being pushed first
        int count = 0;
        while (count < 3 && !nodes1.empty())
        {
            int minID = 9999;
            QueueNode* minNode = nullptr ;
            int minIndex = -1;

            // Find the node with the lowest CustomerID
            for (int i = 0; i < nodes1.size(); i++)                                     
            {
                if (nodes1[i]->customerID < minID)
                {
                    minID = nodes1[i]->customerID;
                    minNode = nodes1[i];
                    minIndex = i;
                }
            }

            // Push the found node to the stack
            bookingHistory.push(minNode->customerName, minNode->roomType, minNode->roomNumber, minNode->floorNumber, minNode->stayPeriod);


            // Removing
            nodes1.erase(nodes1.begin() + minIndex);  // Erase the node from the vector

            count++;  // Increment counter for each processed node
        }

        // Now deleting the processed nodes from the vector
        for (int i = 0; i < nodes2.size(); i++)
        {
            QueueNode* nodeToDelete = nodes2[i];  // Get the node
            cout << "Processed Booking: Customer " << nodeToDelete->customerName
                << ", Room: " << nodeToDelete->roomType
                << ", Duration: " << nodeToDelete->stayPeriod << " days." << endl;

            // Delete the node

            delete nodeToDelete;
            size--;
        }

        cout << "Total bookings processed: " << count << endl;
    }
    //Front Function
    QueueNode* frontt()
    {
        return front;
    }
    //Size Function
    int getSize()
    {
        return size;
    }
    //Display Function
    void displayQueue()
    {
        if (front == nullptr)
        {
            cout << "\nNo Bookings \n";
            return;
        }
        QueueNode* temp = front;
        cout << "Booking Requests in Queue:\n";
        while (temp != nullptr)
        {
            cout << "Customer ID: " << temp->customerID;
            cout << "Customer: " << temp->customerName
                << ", Room Type: " << temp->roomType
                << ", Duration: " << temp->stayPeriod
                << " days, Priority: " << (temp->priority ? "High" : "Normal") << endl;
            temp = temp->next;
        }
    }
    
    // Getting Today's date
    void getTodayDate(int& todayDay, int& todayMonth, int& todayYear)
    {
        time_t t = time(0);
        struct tm now;
        localtime_s(&now, &t);

        todayDay = now.tm_mday;
        todayMonth = now.tm_mon + 1;  // months are 0 indexed in struct
        todayYear = now.tm_year + 1900;  // Adding standarf 1900
    }

    // Check if an year is a leap or n
    bool isLeapYear(int year)
    {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    // Days in a Specific Month
    int daysInMonth(int month, int year)
    {
        if (month == 2) // February
        {
            //Ternary Operator
            return isLeapYear(year) ? 29 : 28;
        }
        if (month == 4 || month == 6 || month == 9 || month == 11) // April, June, September, November
        {
            return 30;
        }
        return 31; // Other months
    }

    // Function to check if the booking date is within 30 days from today
    bool isBookingWithin30Days(int bookingDay, int bookingMonth, int bookingYear)
    {
        int todayDay, todayMonth, todayYear;
        getTodayDate(todayDay, todayMonth, todayYear);

        // If the year is different
        if (bookingYear < todayYear || bookingYear > todayYear) //checking Year (Future or previous)
        {
            return false;
        }

        // Same Year
        if (bookingMonth == todayMonth)
        {
            // Same month: Check day difference
            return bookingDay >= todayDay && bookingDay <= todayDay + 30;
        }
        else if (bookingMonth == todayMonth + 1)
        {
            // Next month: Check if the booking day falls within the remaining days of this month + days into the next month
            int remainingDaysThisMonth = daysInMonth(todayMonth, todayYear) - todayDay;
            return bookingDay <= (30 - remainingDaysThisMonth);
        }//

        return false; // Not within the same month or the next month
    }
    //Destructor
    ~Queue()
    {

        while (!isEmpty())  // Keep popping until the queue is empty
        {
            pop();  // Pass counter to pop
        }
    }
};
// Room Class
class Room
{
public:
    int roomNumber;
    string roomType; // Single, Double, Suite
    string status;   // Occupied, Booked, Ready, Unavailable
    Room* nextRoom;
    Room* prevRoom;
    //Constructor
    Room(int romNum, string romtype, string stat)
    {
        roomNumber = romNum;
        roomType = romtype;
        status = stat;
        nextRoom = nullptr;
        prevRoom = nullptr;
    }
};

// Floor Class
class Floor
{
public:
    int floorNumber;
    Room* roomHead; // Room LL head
    Room* roomTail; // Room LL tail
    //Constructora
    Floor(int floorNum)
    {
        floorNumber = floorNum;
        roomHead = nullptr;
        roomTail = nullptr;
    }
    //Add Room Function
    void addRoom(int romNum, string romtype, string stat, int floorNumber)
    {
        Room* temp = searchRoom(romNum);
        if (temp)
        {
            cout << "Room Already Exists" << endl;
            return;
        }
        Room* newRoom = new Room(romNum, romtype, stat);
        if (roomHead == nullptr && roomTail == nullptr)
        {
            roomHead = newRoom;
            roomTail = newRoom;
        }
        else
        {
            roomTail->nextRoom = newRoom;
            newRoom->prevRoom = roomTail;
            roomTail = newRoom;
        }
        cout << "Room " << romNum << " added to Floor " << floorNumber << " successfully.\n";
        bubbleSortRooms();
    }
    //Search Function
    Room* searchRoom(int romNum)
    {
        Room* temp = roomHead;
        while (temp != nullptr)
        {
            if (temp->roomNumber == romNum)
            {
                return temp;
            }
            else
            {
                temp = temp->nextRoom;
            }
        }
        return nullptr;
    }
    //Change Status of Room in case of Booking and in case of canelling Booking
    void changeStatus(int romNum, string newStatus)
    {
        Room* temp = searchRoom(romNum);
        if (temp)
        {
            temp->status = newStatus;
            cout << "Room " << romNum << " status updated to " << newStatus << ".\n";
            return;
        }
        else
        {

            cout << "Room " << romNum << " not found.\n";
        }
    }
    //Deleting Room
    void deletingRoom(int romNum)
    {
        if (roomHead == nullptr)
        {
            cout << "There is No Room to Delete" << endl;
            return;
        }
        Room* key = searchRoom(romNum);
        if (key == nullptr) //Nullptr
        {
            cout << "Room Doesn't Exist" << endl;
            return;
        }
        // Case 1: 1 node
        if (key == roomHead && key == roomTail)
        {
            roomHead = nullptr;
            roomTail = nullptr;
            delete key;
            cout << "Room Deleted Successfully" << endl;
            return;
        }
        // Case 2: Room To be deleted is Head
        if (key == roomHead)
        {
            roomHead = roomHead->nextRoom;
            roomHead->prevRoom = nullptr;
        }
        // Case 3: Room To be deleted is Tail
        else if (key == roomTail)
        {
            roomTail = roomTail->prevRoom;
            roomTail->nextRoom = nullptr;
        }
        // Case 4: Room is Somewhere Between
        else
        {
            Room* temp1 = key->prevRoom;
            Room* temp2 = key->nextRoom;
            temp1->nextRoom = temp2;
            temp2->prevRoom = temp1;
        }
        // Freeing Key
        key->nextRoom = nullptr;
        key->prevRoom = nullptr;
        delete key;
        cout << "Room Deleted Successfully" << endl;
    }
    //Sorting to maintain room's order
    void bubbleSortRooms()
    {
        if (roomHead == nullptr || roomHead->nextRoom == nullptr)
        {
            return; // No sorting needed
        }

        bool swapped;
        do
        {
            swapped = false;
            Room* current = roomHead;

            while (current->nextRoom != nullptr)
            {
                if (current->roomNumber > current->nextRoom->roomNumber)
                {
                    //Swapping
                    swap(current->roomNumber, current->nextRoom->roomNumber);
                    swap(current->roomType, current->nextRoom->roomType);
                    swap(current->status, current->nextRoom->status);
                    //Swapping
                    swapped = true;
                }
                current = current->nextRoom;
            }
        } while (swapped);
    }
    //Displaying Room
    void displayAllRooms()
    {
        cout << "Floor Number: " << floorNumber << endl;
        cout << endl;
        if (roomHead == nullptr) {
            cout << "No Rooms on this Floor\n";
            return;
        }
        Room* temp = roomHead;
        while (temp != nullptr)
        {
            cout << "Room Number: " << temp->roomNumber << "\tType: " << temp->roomType << "\tStatus: " << temp->status << endl;
            cout << endl;
            temp = temp->nextRoom;
        }
    }
    //Destructor
    ~Floor()
    {
        Room* current = roomHead;
        while (current != nullptr)
        {
            Room* temp = current->nextRoom;
            delete current;
            current = temp;
        }
    }
};
//AVL tree Node
class AVLNode
{
public:
    Floor* floor;
    AVLNode* left;
    AVLNode* right;
    //Constructor
    AVLNode(Floor* flr)
    {
        floor = flr;
        left = nullptr;
        right = nullptr;
    }
};
//Tree class
class AVL
{
private:
    AVLNode* root;
public:
    //Default Constructor
    AVL()
    {
        root = nullptr;
    }
    //Getiing Height
    int getHeight(AVLNode* root)
    {
        if (root == nullptr)
        {
            return -1;
        }
        int left = getHeight(root->left);
        int right = getHeight(root->right);
        return max(left, right) + 1;
    }
    //Getting Balance
    int getBalance(AVLNode* root)
    {
        if (root == nullptr)
        {
            return 0;
        }
        int left = getHeight(root->left);
        int right = getHeight(root->right);
        return left - right;
    }
    //Right Rotation
    AVLNode* rightRotation(AVLNode* root)
    {
        AVLNode* x = root->left;
        AVLNode* y = x->right;

        //Rotating
        x->right = root;
        root->left = y;

        return x;
    }
    //Left Rotation
    AVLNode* leftRotation(AVLNode* root)
    {
        AVLNode* x = root->right;
        AVLNode* y = x->left;

        //Rotating
        x->left = root;
        root->right = y;

        return x;
    }
    AVLNode* reBalance(AVLNode* root)
    {
        int balance = getBalance(root);

        // LL Rotation
        if (balance > 1 && getBalance(root->left) >= 0)
        {
            return rightRotation(root);
        }

        // RR Rotation
        if (balance < -1 && getBalance(root->right) <= 0)
        {
            return leftRotation(root);
        }

        // LR Rotation
        if (balance > 1 && getBalance(root->left) < 0)
        {
            root->left = leftRotation(root->left);
            return rightRotation(root);
        }

        // RL Rotation
        if (balance < -1 && getBalance(root->right) > 0)
        {
            root->right = rightRotation(root->right);
            return leftRotation(root);

        }
        return root;
    }
    //Balancing Function (making it bcz we have to have twice after insertion and deletion)
    AVLNode* insertion(AVLNode* root, Floor* flr) 
    {
        if (root == nullptr)
        {
            return new AVLNode(flr);
        }

        if (flr->floorNumber < root->floor->floorNumber) 
        {
            root->left = insertion(root->left, flr);
        }
        else if (flr->floorNumber > root->floor->floorNumber) 
        {
            root->right = insertion(root->right, flr);
        }
        else {
            cout << "Floor " << flr->floorNumber << " Already Exists" << endl;
            return root;
        }

        // Rebalancing
        return reBalance(root);
    }

    // Getting Minimum
    AVLNode* getMinimum(AVLNode* root)
    {
        while (root->left != nullptr)
        {
            root = root->left;
        }
        return root;
    }
    AVLNode* deleteFloor(AVLNode* root, int floorNumber) 
    {
        if (root == nullptr) 
        {
            cout << "No Floor To Delete" << endl;
            return nullptr;
        }

        if (floorNumber < root->floor->floorNumber)
        {
            root->left = deleteFloor(root->left, floorNumber);

        }
        else if (floorNumber > root->floor->floorNumber)
        {
            root->right = deleteFloor(root->right, floorNumber);

        }
        else
        {

            if (root->left == nullptr && root->right == nullptr)
            {
                delete root;
                return nullptr;
            }
            if (root->left == nullptr && root->right != nullptr)
            {
                AVLNode* temp = root->right;
                delete root;
                return temp;
            }
            if (root->left != nullptr && root->right == nullptr)
            {
                AVLNode* temp = root->left;
                delete root;
                return temp;
            }
            if (root->left != nullptr && root->right != nullptr)
            {
                AVLNode* min = getMinimum(root->right);
                //Replacing
                root->floor->floorNumber = min->floor->floorNumber;
                root->right = deleteFloor(root->right, min->floor->floorNumber);
            }

        }
        //Checking Balance
        return reBalance(root);
    }
    //Finding Floor
    AVLNode* findFloor(AVLNode* root, int floorNum)
    {
        AVLNode* temp = root;
        while (temp)
        {
            if (temp->floor->floorNumber == floorNum)
            {
                return temp;
            }
            else if (floorNum < temp->floor->floorNumber)
            {
                temp = temp->left;
            }
            else
            {
                temp = temp->right;
            }
        }
        return nullptr;
    }
    //Adding Room to a Floor
    void addRoomToFloor(AVLNode* root, int floorNumber)
    {
        AVLNode* floorNode = findFloor(root, floorNumber);
        if (floorNode)
        {
            int  roomNumber;
            string roomType, status;

            cout << "Enter the room number: ";
            cin >> roomNumber;
            cin.ignore(); // Clear the newline character
            cout << "Enter the room type (Single, Double, Suite): ";
            getline(cin, roomType);
            cout << "Enter the room status (Available, Occupied, Booked, Unavailable): ";
            getline(cin, status);
            floorNode->floor->addRoom(roomNumber, roomType, status, floorNumber);
            cout << endl;
        }
        else
        {
            cout << "Floor " << floorNumber << " not found.\n";
        }
    }
    //Update Function
    void updateRoomStatus(AVLNode* root, int floorNum, int roomNum, string newStatus)
    {
        AVLNode* floorNode = findFloor(root, floorNum);
        if (floorNode)
        {
            floorNode->floor->changeStatus(roomNum, newStatus);
            cout << "Room " << roomNum << " status updated on Floor " << floorNum << ".\n";
        }
        else
        {
            cout << "Floor " << floorNum << " not found.\n";
        }
    }

    //Delete Room Function of a Specific Floor
    void deleteRoom(AVLNode* root, int floorNum, int roomNum)
    {
        AVLNode* floorNode = findFloor(root, floorNum);
        if (floorNode)
        {
            floorNode->floor->deletingRoom(roomNum);
            // cout << "Room " << roomNum << " Deleted Successfully" << endl;
        }
        else
        {
            cout << "Floor Does'nt Exist" << endl;
        }
    }
    //Displaying rooms of Specific Floor
    void displaySpecificFloor(AVLNode* root, int floorNum)
    {

        AVLNode* floorNode = findFloor(root, floorNum);
        if (floorNode)
        {
            floorNode->floor->displayAllRooms();
        }
        else
        {
            cout << "Floor Doesnt Exist" << endl;
        }
    }
    //Printing in Sorted Order
    void inOrderTraversal(AVLNode* root)
    {
        if (root != nullptr)
        {
            inOrderTraversal(root->left);
            root->floor->displayAllRooms();
            inOrderTraversal(root->right);
        }
    }
    void displayFloors(AVLNode* root)
    {
        if (root == nullptr)
        {
            cout << "No Floors To Display" << endl;
            return;
        }
        inOrderTraversal(root);
    }

    //Book Room Function
    void bookRoom(AVLNode* root, Queue& bookingQueue)
    {
        static int customerIDCounter = 1;
        //Printing all Floors and Rooms
        if (root == nullptr)
        {
            cout << "No Rooms Available" << endl;
            return;
        }
        cout << "Available rooms in the Hotel" << endl;
        inOrderTraversal(root);

        int floorNumber, roomNumber;
        cout << endl << "Enter the Floor Number: " << endl;
        cin >> floorNumber;
        cout << "Enter the Room Number: " << endl;
        cin >> roomNumber;


        AVLNode* floorNode = findFloor(root, floorNumber); //Finding Floor
        if (floorNode)
        {
            Room* room = floorNode->floor->searchRoom(roomNumber); //Finding Room
            if (room != nullptr && (room->status == "Available" || room->status == "available" || room->status == "AVAILABLE"))//If available and Room Exists
            {
                cout << "Room " << roomNumber << " is available.\n";

                // Get customer details
                string customerName, roomType;
                int stayPeriod, bookingDay, bookingMonth, bookingYear;
                bool priority;

                cout << "Enter Customer Name: ";
                cin.ignore();  // clearing buufer
                getline(cin, customerName);

                cout << "Enter Room Type: ";
                getline(cin, roomType);

                cout << "Enter Stay Period (in days): ";
                cin >> stayPeriod;

                cout << "Enter Booking Day (1-31): ";
                cin >> bookingDay;
                cout << "Enter Booking Month (1-12): ";
                cin >> bookingMonth;
                cout << "Enter Booking Year: ";
                cin >> bookingYear;

                // Check if the booking date is within the next 30 days
                if (!bookingQueue.isBookingWithin30Days(bookingDay, bookingMonth, bookingYear))
                {
                    cout << "Booking cannot be made for dates beyond 30 days from today.\n";
                    return;
                }

                cout << "Is this a high-priority request? (1 for Yes, 0 for No): ";
                cin >> priority;

                // pushing Request in QUeue
                bookingQueue.push(customerName, roomType, stayPeriod, roomNumber, floorNumber, priority, customerIDCounter);
                cout << "Assigned Customer ID: " << customerIDCounter << endl;
                customerIDCounter++;
                // Mark the room as booked
                // Changing Room Status
                room->status = "Booked";
                cout << "Booking for " << customerName << " in Room " << roomNumber << " has been successfully processed.\n";


                //Processing 3 Bookings
                if (bookingQueue.getSize() == 3)
                {
                    bookingQueue.pop();
                }

            }
            else
            {
                cout << "Room " << roomNumber << " is not available.\n";
            }
        }
        else
        {
            cout << "Floor " << floorNumber << " not found.\n";
        }
    }
    //Removing Last Booking From Stack
    void removeLastBooking(Stack& bookingHistory, AVLNode* root)
    {
        if (bookingHistory.isEmpty())
        {
            cout << "No last Booking Available" << endl;
            return;
        }
        stackNode* top = bookingHistory.peak();
        int roomNum = top->roomNumber;
        int floorNumber = top->floorNumber;
        AVLNode* floorNode = findFloor(root, floorNumber);
        Room* room = floorNode->floor->searchRoom(roomNum);
        room->status = "Available";
        bookingHistory.pop();

    }
    void levelOrderTraversal(AVLNode* root)
    {
        cout << "Level Order Traversal is: " << endl;
        queue<AVLNode*> qt;
        qt.push(root);
        qt.push(nullptr);
        while (!qt.empty())
        {
            AVLNode* temp = qt.front();
            qt.pop();
            if (temp == nullptr)
            {
                cout << endl;
                if (!qt.empty())
                {
                    qt.push(nullptr);
                }
            }
            else
            {
                cout << temp->floor->floorNumber << " ";
                if (temp->left)
                {
                    qt.push(temp->left);
                }
                if (temp->right)
                {
                    qt.push(temp->right);
                }
            }
        }
    }
    void deleteTree(AVLNode* root)
    {
        if (root == nullptr)
        {
            return;
        }

        // First delete the left and right subtrees
        deleteTree(root->left);
        deleteTree(root->right);

        // Now delete the current node
        delete root;
    }
    ~AVL()
    {
        deleteTree(root);
    }
};
void displayMainMenu()
{
    cout << "\n";
    cout << "+----------------------------------------------------------+\n";
    cout << "|                       GALAXY HOTEL                       |\n";
    cout << "|         Welcome to the Hotel Management System!          |\n";
    cout << "+----------------------------------------------------------+\n";
    cout << "|                          MAIN MENU                       |\n";
    cout << "+----------------------------------------------------------+\n";
    cout << "|  1. Customer Options                                     |\n";
    cout << "|  2. Manager Options                                      |\n";
    cout << "|  3. Exit                                                 |\n";
    cout << "+----------------------------------------------------------+\n";
    cout << "Enter your choice: ";
}
void displayCustomerMenu()
{
    cout << "\n";
    cout << "+----------------------------------------------------------+\n";
    cout << "|                       CUSTOMER MENU                      |\n";
    cout << "+----------------------------------------------------------+\n";
    cout << "|  1. Book a room                                          |\n";
    cout << "|  2. Back to Main Menu                                    |\n";
    cout << "+----------------------------------------------------------+\n";
    cout << "Enter your choice: ";
}
void displayManagerMenu()
{
    cout << "\n";
    cout << "+----------------------------------------------------------+\n";
    cout << "|                       MANAGER MENU                       |\n";
    cout << "+----------------------------------------------------------+\n";
    cout << "|  1.  Add a new floor                                     |\n";
    cout << "|  2.  Add a room to a floor                               |\n";
    cout << "|  3.  Delete a Floor                                      |\n";
    cout << "|  4.  Delete a specific room                              |\n";
    cout << "|  5.  Update room status                                  |\n";
    cout << "|  6.  Display all rooms on a specific floor               |\n";
    cout << "|  7.  Display all floors and rooms (In-Order Traversal)   |\n";
    cout << "|  8.  Level Order Traversal                               |\n";
    cout << "|  9.  See All the Bookings                                |\n";
    cout << "|  10. See booking history                                 |\n";
    cout << "|  11. Remove last booking                                 |\n";
    cout << "|  12. Back to Main Menu                                   |\n";
    cout << "+----------------------------------------------------------+\n";
    cout << "Enter your choice: ";
}
bool authentication(string password)
{
    return password == "1234";
}
int main()
{
    AVLNode* root = nullptr;
    AVL hotelManagementSystem;
    Stack S;
    Queue Q(S);
    int wrongAttempts = 0;
    int mainChoice, customerChoice, managerChoice;
    string pass;



    do
    {
        displayMainMenu();
        cin >> mainChoice;

        switch (mainChoice)
        {
        case 1: // Customer Options
            do
            {
                displayCustomerMenu();
                cin >> customerChoice;

                switch (customerChoice)
                {
                case 1: // Book a room
                    hotelManagementSystem.bookRoom(root, Q);
                    break;
                case 2: // Back to Main Menu
                    cout << "Returning to Main Menu...\n";
                    break;
                default:
                    cout << "Invalid choice! Please try again.\n";
                }
            } while (customerChoice != 2);
            break;

        case 2: // Manager Options

            while (wrongAttempts < 3)
            {
                cout << "Enter the Password: ";
                cin >> pass;
                cin.ignore();
                if (authentication(pass))
                {
                    do
                    {
                        wrongAttempts = 0;
                        displayManagerMenu();
                        cin >> managerChoice;

                        switch (managerChoice)
                        {
                        case 1: // Add a new floor
                        {
                            int floorNumber;
                            cout << "Enter the floor number to add: ";
                            cin >> floorNumber;
                            // Floor* newFloor = new Floor(floorNumber);
                            root = hotelManagementSystem.insertion(root, new Floor(floorNumber));
                            break;
                        }
                        case 2: // Add a room to a floor
                        {
                            int floorNumber;

                            cout << "Enter the floor number: ";
                            cin >> floorNumber;

                            hotelManagementSystem.addRoomToFloor(root, floorNumber);
                            break;
                        }
                        case 3:
                        {
                            int floorNumber;
                            cout << "Enter the Floor Number You Want to Delete: ";
                            cin >> floorNumber;
                            root = hotelManagementSystem.deleteFloor(root, floorNumber);
                            break;
                        }

                        case 4: // Delete a specific room
                        {
                            int floorNumber, roomNumber;
                            cout << "Enter Floor Number: ";
                            cin >> floorNumber;
                            cout << "Enter the Room Number: ";
                            cin >> roomNumber;
                            hotelManagementSystem.deleteRoom(root, floorNumber, roomNumber);
                            break;
                        }
                        case 5: // Update room status
                        {
                            int floorNumber, roomNumber;
                            string newStatus;
                            cout << "Enter the floor number: ";
                            cin >> floorNumber;
                            cout << "Enter the room number: ";
                            cin >> roomNumber;
                            cin.ignore();
                            cout << "Enter the new status (e.g., Available, Occupied): ";
                            getline(cin, newStatus);
                            hotelManagementSystem.updateRoomStatus(root, floorNumber, roomNumber, newStatus);
                            break;
                        }
                        case 6: // Display all rooms on a specific floor
                        {
                            int floorNumber;
                            cout << "Enter the Floor Number: ";
                            cin >> floorNumber;
                            hotelManagementSystem.displaySpecificFloor(root, floorNumber);
                            break;
                        }
                        case 7: // Display all floors and rooms (In-Order Traversal)
                            hotelManagementSystem.displayFloors(root);
                            break;
                        case 8:
                            hotelManagementSystem.levelOrderTraversal(root);
                            break;
                        case 9:
                            Q.displayQueue();
                            break;
                        case 10: // See booking history
                            S.displayStack();
                            break;
                        case 11: // Remove last booking
                            hotelManagementSystem.removeLastBooking(S, root);
                            break;

                        case 12: // Back to Main Menu
                            cout << "Returning to Main Menu...\n";
                            break;
                        default:
                            cout << "Invalid choice! Please try again.\n";
                        }
                    } while (managerChoice != 12);
                    break;
                }
                else
                {
                    wrongAttempts++;
                    cout << "Wrong Password: Attempts Left " << (3 - wrongAttempts) << endl;
                }
                if (wrongAttempts == 3)
                {
                    cout << "Too Many Wrong Attempts... Exiting " << endl;
                    exit(0);
                }
            }
            break;
        case 3: // Exit
            cout << "Exiting Program\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (mainChoice != 3);

    return 0;
}
//Thank you
