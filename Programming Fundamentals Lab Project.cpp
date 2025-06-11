#include <iostream>
#include <string> // For string properties being accessed
#include <cstdlib> // For randomizing invoice number
#include <iomanip> // For formatting output
#include <cctype>  // For use of 'toupper' function
using namespace std;

/* A Program to simulate an efficient Automobile Rental System. 
Its Key Features include:
1. Secure Login System
2. Car Selection 
3. Package Details
3. Fee Invoice
*/

char a_choice[2];
int choice[5], no_of_cars=0;
string models[50], model[50];

// Login procedure here
string login() {
	string ID, password,password2, first_name,last_name;
	long int phone_num;
	cout<<"To access your account, Press 'L'.\n";
	cout<<"Don't have one? 'Press 'C' to create an account.\n";
	cout<<"Your choice: ";
	cin>>a_choice[0];
	cout<<endl;
	if (a_choice[0]=='L' || a_choice[0]=='l') {
	// Login details entered by the user 
	cout << "Enter your First Name: ";
	cin >> first_name;
	cout << "Enter your Password: ";
	cin >> password;
	cout<<endl;
	}
	else {
		cout<<"To create an account, Enter your: \n";
		cout<<"First Name: ";
		cin>>first_name;
		cout<<"CNIC Number (without dashes): ";
		cin>>ID;
		cout<<"Phone Number: ";
		cin>>phone_num;
		do {
			cout<<"Enter a Password: ";
			cin>>password;
			cout<<"Confirm Password: ";
			cin>>password2;
			cout<<endl;
		} while (password2!=password);
		cout<<endl;
	}
	return first_name;
}

string Mercedes(int cars) {
    cout << "What type of car are you looking for?\n";
    cout << "1. SUV\n";
    cout << "2. Crossover\n";
    cout << "3. Sedan\n";
    cout << "4. Minivan\n";
    cout << "5. Roadster\n";
    cout<<"6. Exit\n";
    cout<<endl;
    do {
   		cout<<"To select one, Enter the corresponding number: \n";
   		cout<<"Your choice: ";
		cin >>choice[2];
		cout<<endl;
	} while (choice[2]<1 || choice[2]>6);
    switch (choice[2]) {
        case 1:
            cout << "You selected Mercedes SUV.\n";
            cout << "Available models: GLE, GLC\n";
            cout << "Specifications:\n";
            cout << "1- GLE: All-wheel drive, 5 seats, V6 engine, Maximum Power: 362 hp, Mileage: 19 mpg\n";
            cout << "2- GLC: All-wheel drive, 5 seats, 4-cylinder engine, Maximum Power: 255 hp, Mileage: 24 mpg\n";
            cout<<endl;
            cout<<"To select one, Enter the corresponding number: \n";
			cout<<"Your choice: ";
            cin>>choice[4];
            if (choice[4]==1) {
            	model[cars] = "GLE";
			}
			else if (choice[4]==2) {
				model[cars] = "GLC";
			}
			else {
				cout<<"Invalid Input\n";
			}
            break;
        case 2:
            cout << "You selected Mercedes Crossover.\n";
            cout << "Available models: GLA, GLB\n";
            cout << "Specifications:\n";
            cout << "1- GLA: Front-wheel drive, 5 seats, 4-cylinder engine, Maximum Power: 362 hp, Mileage: 23 mpg\n";
            cout << "2- GLB: All-wheel drive, 7 seats, 4-cylinder engine, Maximum Power: 255 hp, Mileage: 26 mpg\n";
            cout<<endl;
            cout<<"To select one, Enter the corresponding number: \n";
			cout<<"Your choice: ";
            cin>>choice[4];
            if (choice[4]==1) {
            	model[cars] = "GLA";
			}
			else if (choice[4]==2) {
				model[cars] = "GLB";
			}
			else {
				cout<<"Invalid Input\n";
			}
            break;
        case 3:
            cout << "You selected Mercedes Sedan.\n";
            cout << "Available models: E-Class, C-Class\n";
            cout << "Specifications:\n";
            cout << "1- E-Class: Rear-wheel drive, 5 seats, V6 engine, Maximum Power: 208 hp, Mileage: 22 mpg\n";
            cout << "2- C-Class: Rear-wheel drive, 5 seats, 4-cylinder engine, Maximum Power: 190 hp, Mileage: 20 mpg\n";
            cout<<endl;
            cout<<"To select one, Enter the corresponding number: \n";
			cout<<"Your choice: ";
            cin>>choice[4];
            if (choice[4]==1) {
            	model[cars] = "E-Class";
			}
			else if (choice[4]==2) {
				model[cars] = "C-Class";
			}
			else {
				cout<<"Invalid Input\n";
			}
            break;
        case 4:
            cout << "You selected Mercedes Minivan.\n";
            cout << "Available models: Metris, Sprinter\n";
            cout << "Specifications:\n";
            cout << "1- Metris: Rear-wheel drive, 7 seats, 4-cylinder engine, Maximum Power: 362 hp, Mileage: 20 mpg\n";
            cout << "2- Sprinter: Rear-wheel drive, 12 seats, V6 engine, Maximum Power: 523 hp, Mileage: 18 mpg\n";
            cout<<endl;
            cout<<"To select one, Enter the corresponding number: \n";
			cout<<"Your choice: ";
            cin>>choice[4];
            if (choice[4]==1) {
            	model[cars] = "Metris";
			}
			else if (choice[4]==2) {
				model[cars] = "Sprinter";
			}
			else {
				cout<<"Invalid Input\n";
			}
			break;
        case 5:
            cout << "You selected Mercedes Roadster.\n";
            cout << "Available models: SL-Class, AMG GT\n";
            cout << "Specifications:\n";
            cout << "1- SL-Class: Rear-wheel drive, 2 seats, V8 engine, Maximum Power: 379 hp, Mileage: 18 mpg\n";
            cout << "2- AMG GT: Rear-wheel drive, 2 seats, V8 engine, Maximum Power: 362 hp, Mileage: 23 mpg\n";
            cout<<endl;
            cout<<"To select one, Enter the corresponding number: \n";
			cout<<"Your choice: ";
            cin>>choice[4];
            if (choice[4]==1) {
            	model[cars] = "SL-Class";
			}
			else if (choice[4]==2) {
				model[cars] = "AMT GT";
			}
			else {
				cout<<"Invalid Input\n";
			}
			break;
    }
    
    return model[cars];
}

string Tesla(int cars) {
    cout << "What type of car are you looking for?\n";
    cout << "1. SUV\n";
    cout << "2. Crossover\n";
    cout << "3. Sedan\n";
    cout << "4. Minivan\n";
    cout << "5. Roadster\n";
    cout<<"6. Exit\n";
    cout<<endl;
    do {
   		cout<<"To select one, Enter the corresponding number: \n";
   		cout<<"Your choice: ";
		cin >>choice[2];
		cout<<endl;
	} while (choice[2]<1 || choice[2]>6);

    switch (choice[2]) {
        case 1:
            cout << "You selected Tesla SUV.\n";
            cout << "Available models: Model X\n";
            cout << "Specifications:\n";
            cout << "1- Model X: All-electric, 5 seats, Long Range Battery, Maximum Power: 219 hp, Mileage: 25 mpg\n";
            cout<<endl;
            cout<<"To select one, Enter the corresponding number: \n";
			cout<<"Your choice: ";
            cin>>choice[4];
            if (choice[4]==1) {
            	model[cars] = "Model X";
			}
			else {
				cout<<"Invalid Input\n";
			}
			break;
        case 2:
            cout << "You selected Tesla Crossover.\n";
            cout << "Available models: Model Y\n";
            cout << "Specifications:\n";
            cout << "1- Model Y: All-electric, 5 seats, Long Range Battery, Maximum Power: 257 hp, Mileage: 19 mpg\n";
            cout<<endl;
            cout<<"To select one, Enter the corresponding number: \n";
			cout<<"Your choice: ";
            cin>>choice[4];
            if (choice[4]==1) {
            	model[cars] = "Model Y";
			}
			else {
				cout<<"Invalid Input\n";
			}
			break;
        case 3:
            cout << "You selected Tesla Sedan.\n";
            cout << "Available models: Model S, Model 3\n";
            cout << "Specifications:\n";
            cout << "1- Model S: All-electric, 5 seats, Long Range Battery, Maximum Power: 307 hp, Mileage: 21 mpg\n";
            cout << "2- Model 3: All-electric, 5 seats, Standard Range Battery, Maximum Power: 283 hp, Mileage: 24 mpg\n";
            cout<<endl;
            cout<<"To select one, Enter the corresponding number: \n";
			cout<<"Your choice: ";
            cin>>choice[4];
            if (choice[4]==1) {
            	model[cars] = "Model S";
			}
			else if (choice[4]==2) {
				model[cars] = "Model 3";
			}
			else {
				cout<<"Invalid Input\n";
			}
			break;
        case 4:
            cout << "You selected Tesla Minivan.\n";
            cout << "Available models: None\n";
            cout << "Specifications: Tesla does not currently offer a minivan. Try choosing other companies or types.\n";
            break;
        case 5:
            cout << "You selected Tesla Roadster.\n";
            cout << "Available models: Roadster\n";
            cout << "Specifications:\n";
            cout << "1- Roadster: All-electric, 2 seats, Plaid Powertrain\n";
            cout<<endl;
            cout<<"To select one, Enter the corresponding number: \n";
			cout<<"Your choice: ";
            cin>>choice[4];
            if (choice[4]==1) {
            	model[cars] = "Roadster";
			}
			else {
				cout<<"Invalid Input\n";
			}
            break;
        default:
            cout << "Invalid Input.\n";
    }
    return model[cars];
}

string BMW(int cars) {
	cout << " What type of car are you looking for?\n";
   	cout << " 1. SUV\n";
   	cout << " 2. Crossover \n";
   	cout << " 3. Sedan \n";
   	cout << " 4. Minivan \n";
   	cout << " 5. Roadster\n";
   	cout << " 6. Exit\n";
   	cout<<endl;
   	do {
   		cout<<"To select one, Enter the corresponding number: \n";
   		cout<<"Your choice: ";
		cin >>choice[2];
		cout<<endl;
	} while (choice[2]<1 || choice[2]>6);

    switch (choice[2]) {
        case 1:
            cout << "You selected BMW SUV.\n";
            cout << "Available models: X5, X3\n";
            cout << "Specifications:\n";
            cout << "1- X5: All-wheel drive, 5 seats, Inline-6 engine, Maximum Power: 197 hp, Mileage: 23 mpg\n";
            cout << "2- X3: All-wheel drive, 5 seats, 4-cylinder engine, Maximum Power: 315 hp, Mileage: 16 mpg\n";
            cout<<endl;
            cout<<"To select one, Enter the corresponding number: \n";
			cout<<"Your choice: ";
            cin>>choice[4];
            if (choice[4]==1) {
            	model[cars] = "X5";
			}
			else if (choice[4]==2) {
				model[cars] = "X3";
			}
			else {
				cout<<"Invalid Input\n";
			}
			break;
        case 2:
            cout << "You selected BMW Crossover.\n";
            cout << "Available models: X6, X4\n";
            cout << "Specifications:\n";
            cout << "1- X6: All-wheel drive, 5 seats, Inline-6 engine, Maximum Power: 360 hp, Mileage: 21 mpg\n";
            cout << "2- X4: All-wheel drive, 5 seats, 4-cylinder engine, Maximum Power: 245 hp, Mileage: 17 mpg\n";
            cout<<endl;
            cout<<"To select one, Enter the corresponding number: \n";
            cout<<"Your choice: ";
            cin>>choice[4];
            if (choice[4]==1) {
            	model[cars] = "X6";
			}
			else if (choice[4]==2) {
				model[cars] = "X4";
			}
			else {
				cout<<"Invalid Input\n";
			}
			break;
        case 3:
            cout << "You selected BMW Sedan.\n";
            cout << "Available models: 5 Series, 3 Series\n";
            cout << "Specifications:\n";
            cout << "1- 5 Series: Rear-wheel drive, 5 seats, Inline-6 engine, Maximum Power: 322 hp, Mileage: 24 mpg\n";
            cout << "2- 3 Series: Rear-wheel drive, 5 seats, 4-cylinder engine, Maximum Power: 257 hp, Mileage: 19 mpg\n";
            cout<<endl;
            cout<<"To select one, Enter the corresponding number: \n";
			cout<<"Your choice: ";
            cin>>choice[4];
            if (choice[4]==1) {
            	model[cars] = "5 Series";
			}
			else if (choice[4]==2) {
				model[cars] = "3 Series";
			}
			else {
				cout<<"Invalid Input\n";
			}
			break;
        case 4:
            cout << "You selected BMW Minivan.\n";
            cout << "Available models: None\n";
            cout << "Specifications: BMW does not currently offer a minivan.\n";
            break;
        case 5:
            cout << "You selected BMW Roadster.\n";
            cout << "Available models: Z4\n";
            cout << "Specifications:\n";
            cout << "1- Z4: Rear-wheel drive, 2 seats, Inline-4 engine, Maximum Power: 279 hp, Mileage: 20 mpg\n";
            cout<<endl;
            cout<<"To select one, Enter the corresponding number: \n";
			cout<<"Your choice: ";
            cin>>choice[4];
            if (choice[4]==1) {
            	model[cars] = "Z4";
			}
			else {
				cout<<"Invalid Input\n";
			}
			break;
        default:
            cout << "Invalid Input.\n";
    }
    return model[cars];
}
string Porsche(int cars) {
	cout << " What type of car are you looking for?\n";
   	cout << " 1. SUV\n";
   	cout << " 2. Crossover \n";
   	cout << " 3. Sedan \n";
   	cout << " 4. Minivan \n";
   	cout << " 5. Roadster\n";
   	cout << " 6. Exit\n";
   	cout<<endl;
   	do {
   		cout<<"To select one, Enter the corresponding number: \n";
   		cout<<"Your choice: ";
		cin >>choice[2];
		cout<<endl;
	} while (choice[2]<1 || choice[2]>6);
	switch (choice[2]) {
        case 1:
            cout << "You selected Porsche SUV.\n";
            cout << "Available models: Cayenne, Macan\n";
            cout << "Specifications:\n";
            cout << "1- Cayenne: All-wheel drive, 5 seats, Turbocharged V6 engine, Maximum Power: 387 hp, Mileage: 20 mpg\n";
            cout << "2- Macan: All-wheel drive, 5 seats, Turbocharged 4-cylinder engine, Maximum Power: 219 hp, Mileage: 17 mpg\n";
            cout<<endl;
            cout<<"To select one, Enter the corresponding number: \n";
			cout<<"Your choice: ";
            cin>>choice[4];
            if (choice[4]==1) {
            	model[cars] = "Cayenne";
			}
			else if (choice[4]==2) {
				model[cars] = "Macan";
			}
			else {
				cout<<"Invalid Input\n";
			}
			break;
        case 2:
            cout << "You selected Porsche Crossover.\n";
            cout << "Available models: None\n";
            cout << "Specifications: Porsche does not currently offer a crossover. Try choosing other companies or types.\n";
            break;
        case 3:
            cout << "You selected Porsche Sedan.\n";
            cout << "Available models: Panamera\n";
            cout << "Specifications:\n";
            cout << "1- Panamera: Rear-wheel drive, 4 seats, Twin-Turbo V8 engine, Maximum Power: 229 hp, Mileage: 22 mpg\n";
            cout<<endl;
            cout<<"To select one, Enter the corresponding number: \n";
			cout<<"Your choice: ";
            cin>>choice[4];
            if (choice[4]==1) {
            	model[cars] = "Panamera";
			}
			else {
				cout<<"Invalid Input\n";
			}
			break;
        case 4:
            cout << "You selected Porsche Minivan.\n";
            cout << "Available models: None\n";
            cout << "Specifications: Porsche does not currently offer a minivan. Try choosing other companies or types.\n";
            break;
        case 5:
            cout << "You selected Porsche Roadster.\n";
            cout << "Available models: None\n";
            cout << "Specifications: Porsche does not currently offer a roadster. Try choosing other companies or types.\n";
            break;
        default:
            cout << "Invalid Input.\n";
    }
    return model[cars];
}
string Audi(int cars) {
	cout << " What type of car are you looking for?\n";
   	cout << " 1. SUV\n";
   	cout << " 2. Crossover \n";
   	cout << " 3. Sedan \n";
   	cout << " 4. Minivan \n";
   	cout << " 5. Roadster\n";
   	cout << " 6. Exit\n";
   	cout<<endl;
   	do {
   		cout<<"To select one, Enter the corresponding number: \n";
   		cout<<"Your choice: ";
		cin >>choice[2];
		cout<<endl;
	} while (choice[2]<1 || choice[2]>6);
	 switch (choice[2]) {
        case 1:
            cout << "You selected Audi SUV.\n";
            cout << "Available models: Q5, Q7\n";
            cout << "Specifications:\n";
            cout << "1- Q5: All-wheel drive, 5 seats, 4-cylinder engine, Maximum Power: 264 hp, Mileage: 16 mpg\n";
            cout << "2- Q7: All-wheel drive, 7 seats, V6 engine, Maximum Power: 242 hp, Mileage: 15 mpg\n";
            cout<<endl;
            cout<<"To select one, Enter the corresponding number: \n";
            cout<<"Your choice: ";
            cin>>choice[4];
            if (choice[4]==1) {
            	model[cars] = "Q5";
			}
			else if (choice[4]==2) {
				model[cars] = "Q7";
			}
			else {
				cout<<"Invalid Input\n";
			}
			break;
        case 2:
            cout << "You selected Audi Crossover.\n";
            cout << "Available models: Q3, Q4\n";
            cout << "Specifications:\n";
            cout << "1- Q3: Front-wheel drive, 5 seats, 4-cylinder engine, Maximum Power: 254 hp, Mileage: 25 mpg\n";
            cout << "2- Q4: All-wheel drive, 5 seats, 4-cylinder engine, Maximum Power: 209 hp, Mileage: 17 mpg\n";
            cout<<endl;
            cout<<"To select one, Enter the corresponding number: \n";
			cout<<"Your choice: ";
            cin>>choice[4];
            if (choice[4]==1) {
            	model[cars] = "Q3";
			}
			else if (choice[4]==2) {
				model[cars] = "Q4";
			}
			else {
				cout<<"Invalid Input\n";
			}
			break;
        case 3:
            cout << "You selected Audi Sedan.\n";
            cout << "Available models: A4, A6\n";
            cout << "Specifications:\n";
            cout << "1- A4: Front-wheel drive, 5 seats, 4-cylinder engine, Maximum Power: 362 hp, Mileage: 24 mpg\n";
            cout << "2- A6: All-wheel drive, 5 seats, V6 engine, Maximum Power: 314 hp, Mileage: 18 mpg\n";
            cout<<endl;
            cout<<"To select one, Enter the corresponding number: \n";
			cout<<"Your choice: ";
            cin>>choice[4];
            if (choice[4]==1) {
            	model[cars] = "A4";
			}
			else if (choice[4]==2) {
				model[cars] = "A6";
			}
			else {
				cout<<"Invalid Input\n";
			}
			break;
        case 4:
            cout << "You selected Audi Minivan.\n";
            cout << "Available models: None\n";
            cout << "Specifications: Audi does not currently offer a minivan.\n";
            break;
        case 5:
            cout << "You selected Audi Roadster.\n";
            cout << "Available models: None\n";
            cout << "Specifications: Audi does not currently offer a roadster.Try choosing other companies or types.\n";
            break;
        case 6:
        	break;
    }
    return model[cars];
}

double package_details(int total_days, int cars) {
	double rental_charges;
	cout << "See all our Packages:\n";
	cout<<endl;
	cout << "1. Savings: \n";
	cout<<"-$3/hour\n"<<"-50 litres fuel\n"<<"-No driver\n";
	cout<<endl;
	cout << "2. Moderate: \n";
	cout<<"-$5/hour\n"<<"-80 litres fuel\n"<<"-No driver\n";
	cout<<endl;
	cout << "3. Premium: \n";
	cout<<"-$10/hour\n"<<"-Unlimited fuel\n"<<"-Free Driver Service\n"<<"-100% Repair Warranty\n";
	cout<<endl;
	cout<<"To select one, Enter the corresponding number: \n";
	cout<<"Your choice: ";
	cin >>choice[1];
	cout<<endl;
	switch (choice[1]) {
		case 1:
			cout << "Note:Payment charges are applicable on an HOURLY basis\n";
			rental_charges=total_days*24*3*cars;
			break;
		case 2:
			cout << "Note:Payment charges are applicable on a DAILY basis\n";
   			rental_charges=total_days*24*5*cars;
   			break;
   		case 3:
			cout << "Note:Payment charges are applicable on a DAILY basis\n";
   			rental_charges=total_days*24*10*cars;
   			break;
   		default:
   			cout<<"You haven't chosen any package";
   			return 0;
	}
	return rental_charges;
}

// void is seen as a procedure which doesn't return a value
void invoice(string customer_name, double charges, string nmodel[], int car, int no_of_days)
{
    int date;
    string pickup_location, return_location;
	// Rental Details
	cout<<"Enter Pickup Location (Without Spaces): ";
	cin>>pickup_location;
	cout<<"Enter Pickup Date (this month): ";
	cin>>date;
	cout<<"Enter Return Location (Without Spaces): ";
	cin>>return_location;
    long int invoice_num;
    customer_name[0]=toupper(customer_name[0]);
    cout<<endl;
	cout << " \t\t Car Rental  -  Customer Invoice \n";
    cout << "/////////////////////////////////////////////////////\n";
    cout << "| Invoice No.:"<<invoice_num<<endl;
    cout << "| Customer Name: "<<customer_name<<endl;
    cout << "| Car Model/s:\n";
    for (int i=0; i<car; i++) {
    	cout<<"| \t-"<<nmodel[i]<<endl;
	}
	cout<<"| Pickup Location: "<<pickup_location<<endl;
	cout<<"| Pickup Date: "<<date<<"-02-2024"<<endl;
	cout<<"| Pickup Time: 2:00 pm (UTC) "<<endl;
	cout<<"| Number of Cars: "<<car<<endl;
	cout<<"| Number of Days: "<<no_of_days<<endl;
	cout<<"| Return Location: "<<return_location<<endl;
	cout<<"| Return Date: "<<date+no_of_days<<"-02-2024"<<endl;
	cout<<"| Return Time: 2:00 pm (UTC) "<<endl;
	cout<<"| Caution Money: $0"<<endl;
	cout<<"| Advance: $0"<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"| Total Charges: $"<<charges<<" (inclusive of tax)\t\t\n";
    cout << "/////////////////////////////////////////////////////\n";
    
}

int main()
{
	double total_charges;
	int days;
	// WELCOME NOTE
    cout << "WELCOME TO HORTEN'S ENGINES\n";
    cout<<"Speed that you have never seen before!"; // Company's Slogan
    cout<<endl;
    cout<<endl;
    string name=login(); // Login Function called and name received
    do {
    	cout << "Following are the car companies we provide to choose from: \n";
   		cout << " 1. MERCEDES-BENZ\n";
   		cout << " 2. TESLA \n";
   		cout << " 3. BMW \n";
   		cout << " 4. AUDI \n";
   		cout << " 5. PORSCHE\n";
   		cout << " 6. Exit\n";
   		do {
   			cout<<"To select one, Enter the corresponding number: \n";
   			cout<<"Your choice: ";
			cin >>choice[0];
			cout<<endl;
		
			switch (choice[0])
   			{	
    			case 1: // Mercedes
					models[no_of_cars]=Mercedes(no_of_cars);
      				break;

 				case 2: // Tesla
      				models[no_of_cars]=Tesla(no_of_cars);
      				break;

      			case 3: // BMW
      				models[no_of_cars]=BMW(no_of_cars);
      				break;

      			case 4: // Audi
      				models[no_of_cars]=Audi(no_of_cars);
      				break;

      			case 5: // Porsche
      				models[no_of_cars]=Porsche(no_of_cars);
      				break;
      			case 6:
      				break;
   			}	
		} while (choice[0]<1 || choice[0]>6);  // Loop for validation
   		cout<<endl;
   		cout<<"Would you like to choose a car again? If yes, Press 'Y'.\n";
   		cout<<"Your choice: ";
		cin>>a_choice[1];
    	cout<<endl;
    	no_of_cars+=1;
	} while (a_choice[1]=='Y' || a_choice[1]=='y');   // Loop for purchasing multiple cars
	cout << "Enter the number of days you would like to rent the car/s for: ";
   	cin >> days;
   	cout<<endl;
	total_charges=package_details(days, no_of_cars);
    cout<<endl;
	invoice (name, total_charges, models, no_of_cars, days); // Function for invoice
    cout<<endl;
    cout<<"Your car/s will be delivered to the pickup location at the desired date and time."<<endl;
    cout<<"For further inquiries or cancellation of booking, Please contact at 0123-4567890."<<endl;
    cout<<endl;
	cout<<"THANK YOU FOR CHOOSING US!";
    return 0; // End of Program
    
}
