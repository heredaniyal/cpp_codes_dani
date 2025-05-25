#include <iostream>
#include <string>
#include <limits>  // For input validation
#include <cstdlib> // For system("cls") to clear the screen

using namespace std;

// Base class for Book & Member
class LibraryEntity {
protected:
    int id;

public:
    LibraryEntity(int id = 0) : id(id) {}
    virtual void displayInfo() = 0;
    int getId() { return id; }
    virtual ~LibraryEntity() {}
};

// Singly Linked List Node for Books
class Book : public LibraryEntity {
private:
    string title;
    string author;
    bool isIssued;
    int issuedToId;
    Book* next;  // Pointer to the next book (Linked List)

public:
    Book(int id, string title, string author)
        : LibraryEntity(id), title(title), author(author), isIssued(false), issuedToId(0), next(nullptr) {}

    void displayInfo() override {
        cout << "Book ID: " << id << "\nTitle: " << title << "\nAuthor: " << author << endl;
        cout << (isIssued ? "Issued to Member ID " + to_string(issuedToId) : "Available") << endl;
    }

    bool getIsIssued() { return isIssued; }
    void setIssued(int memberId) { isIssued = true; issuedToId = memberId; }
    void setAvailable() { isIssued = false; issuedToId = 0; }
    int getIssuedToId() { return issuedToId; }

    // Get next node
    Book* getNext() { return next; }
    void setNext(Book* nextBook) { next = nextBook; }
};

// Singly Linked List Node for Members
class Member : public LibraryEntity {
private:
    string name;
    string password;
    Member* next;  // Pointer to the next member (Linked List)

public:
    Member(int id, string name, string password)
        : LibraryEntity(id), name(name), password(password), next(nullptr) {}

    void displayInfo() override {
        cout << "Member ID: " << id << "\nName: " << name << endl;
    }

    bool verifyPassword(string inputPassword) { return password == inputPassword; }

    // Get next node
    Member* getNext() { return next; }
    void setNext(Member* nextMember) { next = nextMember; }
};

// Library System with Linked Lists
class LibrarySystem {
private:
    Book* bookHead;   // Head of Book Linked List
    Member* memberHead; // Head of Member Linked List
    int loggedInMemberId;
    int memberIdCounter;
    int bookIdCounter;

public:
    LibrarySystem() : bookHead(nullptr), memberHead(nullptr), loggedInMemberId(-1), memberIdCounter(1), bookIdCounter(1) {}

    int getLoggedInMemberId() { return loggedInMemberId; }
    void setLoggedInMemberId(int memberId) { loggedInMemberId = memberId; }

    // Add Book (Linked List Insertion)
    void addBook(string title, string author) {
        Book* newBook = new Book(bookIdCounter++, title, author);
        newBook->setNext(bookHead);
        bookHead = newBook;
        cout << "Book added successfully! Generated Book ID: " << newBook->getId() << endl;
    }

    // Add Member (Linked List Insertion)
    void addMember(string name, string password) {
        Member* newMember = new Member(memberIdCounter++, name, password);
        newMember->setNext(memberHead);
        memberHead = newMember;
        cout << "Member added successfully! Generated Member ID: " << newMember->getId() << endl;
    }

    // Display Books (Linked List Traversal)
    void displayBooks() {
        if (!bookHead) {
            cout << "No books available." << endl;
            return;
        }

        Book* temp = bookHead;
        while (temp) {
            temp->displayInfo();
            cout << "--------------------------\n";
            temp = temp->getNext();
        }
    }

    // Display Members (Linked List Traversal)
    void displayMembers() {
        if (!memberHead) {
            cout << "No members available." << endl;
            return;
        }

        Member* temp = memberHead;
        while (temp) {
            temp->displayInfo();
            cout << "--------------------------\n";
            temp = temp->getNext();
        }
    }

    // Member Login
    bool login(int memberId, string password) {
        Member* temp = memberHead;
        while (temp) {
            if (temp->getId() == memberId && temp->verifyPassword(password)) {
                setLoggedInMemberId(memberId);
                cout << "Logged in successfully as " << temp->getId() << endl;
                return true;
            }
            temp = temp->getNext();
        }
        cout << "Invalid Member ID or Password!" << endl;
        return false;
    }

    // Issue Book
    void issueBook(int bookId) {
        if (getLoggedInMemberId() == -1) {
            cout << "You must log in first!" << endl;
            return;
        }

        Book* temp = bookHead;
        while (temp) {
            if (temp->getId() == bookId) {
                if (temp->getIsIssued()) {
                    cout << "Book is already issued to Member ID " << temp->getIssuedToId() << endl;
                } else {
                    temp->setIssued(getLoggedInMemberId());
                    cout << "Book issued successfully!" << endl;
                }
                return;
            }
            temp = temp->getNext();
        }

        cout << "Invalid Book ID!" << endl;
    }

    // Logout
    void logout() {
        setLoggedInMemberId(-1);
        cout << "Logged out successfully!" << endl;
    }
};

int main() {
    LibrarySystem library;
    int choice;

    while (true) {
        system("cls");  // Clear screen
        cout << "\nLibrary Management System Menu:" << endl;

        if (library.getLoggedInMemberId() == -1) {
            cout << "1. Log In\n2. Create Account\n3. Exit\n";
        } else {
            cout << "1. Add Book\n2. Display Books\n3. Issue Book\n4. Log Out";
        }

        cout << "Enter your choice: ";
        cin >> choice;

        if (cin.fail()) { // Input validation
            cin.clear();
            cin.ignore();
            cout << "Invalid input! Please enter a number.\n";
            continue;
        }

        if (library.getLoggedInMemberId() == -1) {  // Login or Create Account
            if (choice == 1) {
                int memberId;
                string password;
                library.displayMembers();
                cout << "\nEnter Member ID: ";
                cin >> memberId;
                cout << "Enter Password: ";
                cin.ignore();
                getline(cin, password);
                library.login(memberId, password);
            } else if (choice == 2) {
                string name, password;
                cout << "Enter Member Name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter Password: ";
                getline(cin, password);
                library.addMember(name, password);
            } else if (choice == 3) {
                cout << "Exiting program..." << endl;
                break;
            }
        } else {  // Logged in, manage books and members
            if (choice == 1) {
                string title, author;
                cout << "Enter Book Title: ";
                cin.ignore();
                getline(cin, title);
                cout << "Enter Book Author: ";
                getline(cin, author);
                library.addBook(title, author);
            } else if (choice == 2) {
                library.displayBooks();
            } else if (choice == 3) { // rearrangement
                int bookId;
                library.displayBooks();
                cout << "\nEnter Book ID to issue: ";
                cin >> bookId;
                library.issueBook(bookId);
            } else if (choice == 4) {
                library.logout();
            }
        }

        cout << "\nPress Enter to continue...";
        cin.ignore();
        cin.get();
    }

    return 0;
}