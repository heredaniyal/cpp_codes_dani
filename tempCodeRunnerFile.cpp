// modified version
#include <iostream>
#include <string>
#include <map> // for std::map
#include <vector> // for std::vector
#include <algorithm> // for std::all_of
using namespace std;

// Structure for Participant information
struct Participant {
    string fullName;
    string rollNumber;
    string cnic;         // CNIC should be exactly 13 digits
    string university;
    string contactNumber; // Contact should be exactly 11 digits
    string competition;
    string teamDetails;
    Participant* next;

    // Constructor
    Participant(string fn, string rn, string cn, string un, string contact, string comp, string team = "")
        : fullName(fn), rollNumber(rn), cnic(cn), university(un), contactNumber(contact), competition(comp), teamDetails(team), next(nullptr) {}
};

class LinkedList {
public:
    Participant* head;

    // Constructor
    LinkedList() : head(nullptr) {}

    // Destructor to clean up linked list memory
    ~LinkedList() {
        clear();
    }

    // Add participant to the linked list
    void addParticipant(Participant* participant) {
        if (!isDuplicate(participant->cnic)) {
            if (!head) {
                head = participant;
            } else {
                Participant* current = head;
                while (current->next) {
                    current = current->next;
                }
                current->next = participant;
            }
        } else {
            cout << "Duplicate entry detected. Participant not added." << endl;
            delete participant;  // Free memory if the entry is duplicate
        }
    }

    // Check if a CNIC already exists in the list
    bool isDuplicate(const string& cnic) {
        Participant* current = head;
        while (current) {
            if (current->cnic == cnic) {
                return true;
            }
            current = current->next;
        }
        return false;
    }

    // Find participant by CNIC
    Participant* findParticipantByCNIC(const string& cnic) {
        Participant* current = head;
        while (current) {
            if (current->cnic == cnic) {
                return current;
            }
            current = current->next;
        }
        return nullptr;
    }

    // Remove duplicate entries from the linked list
    void removeDuplicates() {
        vector<string> seen;
        Participant* current = head;
        Participant* prev = nullptr;
        while (current) {
            if (find(seen.begin(), seen.end(), current->cnic) != seen.end()) {
                // Remove duplicate
                prev->next = current->next;
                delete current;  // Free memory
                current = prev->next;
            } else {
                seen.push_back(current->cnic);
                prev = current;
                current = current->next;
            }
        }
    }

    // Display all participants
    void display() const {
        Participant* current = head;
        while (current) {
            cout << "Name: " << current->fullName
                 << ", CNIC: " << current->cnic
                 << ", Competition: " << current->competition << endl;
            current = current->next;
        }
    }

    // Count the number of participants
    int count() const {
        int count = 0;
        Participant* current = head;
        while (current) {
            count++;
            current = current->next;
        }
        return count;
    }

    // Clear the entire linked list and free memory
    void clear() {
        while (head) {
            Participant* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

// Match participants from slipList with formList and categorize them
void matchParticipants(LinkedList& slipList, LinkedList& formList, LinkedList& verifiedList, LinkedList& paidList) {
    Participant* current = slipList.head;
    while (current) {
        if (formList.findParticipantByCNIC(current->cnic)) {
            verifiedList.addParticipant(new Participant(*current));  // Add to verified if match found
        } else {
            paidList.addParticipant(new Participant(*current));      // Add to paid list if no match found
        }
        current = current->next;
    }
}

// Categorize participants based on their competition
void categorizeCompetitions(LinkedList& verifiedList, map<string, LinkedList>& competitions) {
    Participant* current = verifiedList.head;
    while (current) {
        competitions[current->competition].addParticipant(new Participant(*current));
        current = current->next;
    }
}

// Display all lists and participants
void displayAll(LinkedList& slipList, LinkedList& formList, LinkedList& verifiedList, LinkedList& paidList, map<string, LinkedList>& competitions) {
    cout << "\nSlip List:\n";
    slipList.display();
    cout << "\nOnline Form List:\n";
    formList.display();
    cout << "\nVerified Participants List:\n";
    verifiedList.display();
    cout << "\nPaid Only Participants List:\n";
    paidList.display();

    cout << "\nCompetition-wise Participants:\n";
    for (const auto& [compName, compList] : competitions) {
        cout << "\n" << compName << " Participants:\n";
        compList.display();
        cout << "Total in " << compName << ": " << compList.count() << endl;
    }

    cout << "\nTotal Participants Overall: " << verifiedList.count() + paidList.count() << endl;
}

// Validate if the CNIC is valid (13 numeric digits)
bool isValidCNIC(const string& cnic) {
    return cnic.length() == 13 && all_of(cnic.begin(), cnic.end(), ::isdigit);
}

// Validate if the contact number is valid (11 numeric digits)
bool isValidContactNumber(const string& contact) {
    return contact.length() == 11 && all_of(contact.begin(), contact.end(), ::isdigit);
}

// Main menu for the system
void menu() {
    LinkedList slipList, formList, verifiedList, paidList;
    map<string, LinkedList> competitions = {
        {"Code Clash", LinkedList()},
        {"Web Warriors", LinkedList()},
        {"Wire Sprint Challenge", LinkedList()},
        {"Blind Programming", LinkedList()},
        {"Typing Competition", LinkedList()},
        {"Call of Duty", LinkedList()},
        {"Tekken 8", LinkedList()},
        {"PUBG", LinkedList()},
        {"Chess", LinkedList()},
        {"Ludo", LinkedList()}
    };

    while (true) {
        cout << "\nMenu:\n";
        cout << "S: Add data to the registration slip list\n";
        cout << "O: Add data to the online form list\n";
        cout << "R: Remove duplicate entries from both lists\n";
        cout << "V: Verify participants and categorize competitions\n";
        cout << "D: Display all lists and counts\n";
        cout << "E: Exit\n";

        char choice;
        cin >> choice;
        choice = toupper(choice);

        if (choice == 'S') {
            // Get and validate input, then add to slipList
            string fullName, rollNumber, cnic, university, contact, competition, teamDetails;
            cout << "Enter Full Name: "; cin.ignore(); getline(cin, fullName);
            cout << "Enter Roll Number: "; getline(cin, rollNumber);
            cout << "Enter CNIC (13 digits): "; cin >> cnic;
            if (!isValidCNIC(cnic)) { cout << "Invalid CNIC.\n"; continue; }
            cout << "Enter University: "; cin.ignore(); getline(cin, university);
            cout << "Enter Contact Number (11 digits): "; cin >> contact;
            if (!isValidContactNumber(contact)) { cout << "Invalid Contact Number.\n"; continue; }
            cout << "Enter Competition: "; cin.ignore(); getline(cin, competition);
            cout << "Enter Team Details (if any): "; getline(cin, teamDetails);

            slipList.addParticipant(new Participant(fullName, rollNumber, cnic, university, contact, competition, teamDetails));
        }
        else if (choice == 'O') {
            // Get and validate input, then add to formList
            string fullName, rollNumber, cnic, university, contact, competition, teamDetails;
            cout << "Enter Full Name: "; cin.ignore(); getline(cin, fullName);
            cout << "Enter Roll Number: "; getline(cin, rollNumber);
            cout << "Enter CNIC (13 digits): "; cin >> cnic;
            if (!isValidCNIC(cnic)) { cout << "Invalid CNIC.\n"; continue; }
            cout << "Enter University: "; cin.ignore(); getline(cin, university);
            cout << "Enter Contact Number (11 digits): "; cin >> contact;
            if (!isValidContactNumber(contact)) { cout << "Invalid Contact Number.\n"; continue; }
            cout << "Enter Competition: "; cin.ignore(); getline(cin, competition);
            cout << "Enter Team Details (if any): "; getline(cin, teamDetails);

            formList.addParticipant(new Participant(fullName, rollNumber, cnic, university, contact, competition, teamDetails));
        }
        else if (choice == 'R') {
            slipList.removeDuplicates();
            formList.removeDuplicates();
        }
        else if (choice == 'V') {
            matchParticipants(slipList, formList, verifiedList, paidList);
            categorizeCompetitions(verifiedList, competitions);
        }
        else if (choice == 'D') {
            displayAll(slipList, formList, verifiedList, paidList, competitions);
        }
        else if (choice == 'E') {
            break;
        }
        else {
            cout << "Invalid choice. Please try again.\n";
        }
    }
}

int main() {
    menu();
    return 0;
}