#include <iostream>
#include <fstream> // for data gathering and Reciept printing 
#include <cstdlib> // For rand() function
#include <ctime>   // For time() function
using namespace std;

int aroom() // FOR GENERATING UNIQUE ROOM NUMBER 
{
	// Initialize random number generator it heslps to generate 
    srand(time(0));
    
    // Generate a random room number till 100
    int roomnum = rand() % 100 ;
    return roomnum;
}

int main() 
{
	cout << "\t      Welcome to  HS RESORTS co. Reservations system \n \n \n";
	
    cout << "\t\t******************************************" << endl;
    cout << "\t\t*             HS RESORTS co.             *" << endl;
    cout << "\t\t*            _    _     ______           *" << endl;
    cout << "\t\t*           | |  | |   |   ___|          *" << endl;
    cout << "\t\t*           | |__| |   |  (___           *" << endl;
    cout << "\t\t*           |  __  |   |___   |          *" << endl;
    cout << "\t\t*           | |  | |    ___)  |          *" << endl;
    cout << "\t\t*           |_|  |_|   |______|          *" << endl;
    cout << "\t\t*                                        *" << endl;
    cout << "\t\t*      where hospitality meets luxury    *" << endl;
    cout << "\t\t*                                        *" << endl;
	cout << "\t\t******************************************" << endl;
	cout << endl << endl ;
	cout << "INSTRUCTIONS: "<<endl;
	cout << "1. EVERY SPACE IS NEEDED TO BE FILLED"<<endl;
	cout << "2. EVERY INFORMATION MENTIONED SHOULD BE CORRECT"<<endl;
	cout << "3. IF ANY OF THE INFORMATION FOUND MISLEADING OR EMPTY OR FALSE IN PRINTED FORM "<<endl;
	cout << "WILL RESULT IN CANCELING OF YOUR RESERVATION "<<endl;
	cout << "4. PROOF READ THE DATA ENTERED IN hotel_reservation.txt AND GET IT PRINTED AND MOVE TO RECEPTION"<<endl;
	cout << "5. RESERVATION ONCE MADE CANNOT BE CHANGED"<<endl;
	cout << "6. COST OF ROOM WILL NOT BE CHANGED"<<endl;
	cout <<endl <<endl;
	
    string name, address, checkin, checkout , meal;
    char  pd;
    long double CNIC;
    int  room , Guests , price=2560 ;
    cout << "Enter your name: ";
    getline (cin,name);
    cout << "Enter your address: ";
    getline (cin,address);
    cout << "Enter your valid CNIC (without dashes) :";
    cin >> CNIC;
    cout << "Enter the number of guests (max. 3 guests will be entertained per reservation): ";
    cin >> Guests;
    if (Guests > 3)
    {
    	cout << "We don't provide room for more than 3 in one reservation"<<endl;
    	exit(0);
	}
    cout << "Enter check-in date (DD/MM/YYYY): ";
    cin >> checkin;
    cout << "Enter check-out date (DD/MM/YYYY): ";
    cin >> checkout;
    cout <<"Utilities : " << endl;
    cout << "Do you need Breakfast and dinner package? ";
    cin >> meal;
    cout <<endl;
    cout << "Room Available is ";
    room=aroom();
    cout << room << endl;
    cout << endl ;  
	cout <<endl;
	cout << "This will be allocated to you at a cost of " << price << " PKR + tax / per night " << endl ;
	cout << "if you want to continue press y and to cancel press anyother key ";
	cin >> pd;
    if ( pd != 'y' && pd != 'Y')
    {
    	cout << "Your reservation has been terminated" << endl;
    	exit(0);
	}
	cout << endl << endl ;
	// Save input to a text file
    ofstream outputFile("hotel_reservation.txt");
    if (outputFile.is_open()) {
        outputFile << "\t\t******************************************" << endl;
	    outputFile << "\t\t*             HS RESORTS co.             *" << endl;
        outputFile << "\t\t*            _    _     ______           *" << endl;
        outputFile << "\t\t*           | |  | |   |   ___|          *" << endl;
        outputFile << "\t\t*           | |__| |   |  (___           *" << endl;
        outputFile << "\t\t*           |  __  |   |___   |          *" << endl;
        outputFile << "\t\t*           | |  | |    ___)  |          *" << endl;
        outputFile << "\t\t*           |_|  |_|   |______|          *" << endl;
        outputFile << "\t\t*                                        *" << endl;
        outputFile << "\t\t*      where hospitality meets luxury    *" << endl;
        outputFile << "\t\t*                                        *" << endl;
	    outputFile << "\t\t******************************************" << endl;
	    outputFile << endl << endl ;
		outputFile << "Name: " << name << endl;
        outputFile << "CNIC: " << CNIC << endl;
		outputFile << "Address: " << address << endl;
        outputFile << "Room number: " << room << endl;
        outputFile << "Number of guests: " << Guests << endl;
        outputFile << "Check-in date: " << checkin << endl;
        outputFile << "Check-out date: " << checkout << endl;
        outputFile << "Breakfast and dinner Package : " << meal << endl;
        outputFile << "Cost per night : " << price << " PKR + tax" << endl;
        outputFile.close();
        cout << "Reservations have been saved to hotel_reservation.txt " << endl;
        cout << "Get the print out of the reservation and head towards the reception" << endl;
        cout << "THANK YOU FOR CHOOSING US :)";
    } else {
        cout << "Error: could not open file" << endl;
    }

    return 0;
}
