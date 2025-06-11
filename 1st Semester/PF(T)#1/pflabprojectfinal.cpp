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

char a_choice[2];                    // Declaring choice array of character type to store customer choices
int choice[5];                       // Declaring integer array to store customer choices
int no_of_cars=0;                    // Initializing a variable, to store the value of the number of cars rented, with the value zero
string model[50];                    // Declaring a string array to store model names

// Login procedure here
string login() {
	string ID, password,password2, first_name,last_name;          // Declaring all the string variables to store user inputs
	long int phone_num;                                           // Declaring a long int variable to store user's phone number
	cout<<"To access your account, Press 'L'.\n";                 // Prompt to log into an existing account
	cout<<"Don't have one? 'Press 'C' to create an account.\n";   // Prompt to create a new account
	cout<<"Your choice: ";                                        
	cin>>a_choice[0];                                             // User choice
	cout<<endl;                                                   // Line Spacing
	if (a_choice[0]=='L' || a_choice[0]=='l') {                   /* A conditional statement used to create an account 
	                                                                 or login according to the customer's requirements*/
	// Login details entered by the user 
	cout << "Enter your First Name: ";
	cin >> first_name;
	cout << "Enter your Password: ";
	cin >> password;
	cout<<endl;
	}
	else {
		// Input of customer details for creating an account
		cout<<"To create an account, Enter your: \n";
		cout<<"First Name: ";
		cin>>first_name;                                          // First name stored for further use in invoice generation
		cout<<"CNIC Number (without dashes): ";
		cin>>ID;
		cout<<"Phone Number: ";
		cin>>phone_num;
		// Do While Loop used to keep taking input from the user as long as the passwords do not match
		do {
			cout<<"Enter a Password: ";                          
			cin>>password;                                       // Password Input
			cout<<"Confirm Password: ";
			cin>>password2;                                      // Password input again to confirm password
			cout<<endl;
		} while (password2!=password);
		cout<<endl;
	}
	return first_name;                                           // Returning first name to the main function for further use
}

// Mercedes Function of return type string to return car model's name
string Mercedes(int cars) {
	// Displaying the different types of cars available
    cout << "What type of car are you looking for?\n";
    cout << "1. SUV\n";
    cout << "2. Crossover\n";
    cout << "3. Sedan\n";
    cout << "4. Minivan\n";
    cout << "5. Roadster\n";
    cout<<"6. Exit\n";
    cout<<endl;
    // Do While Loop for validation of Input
    do {
   		cout<<"To select one, Enter the corresponding number: \n";  // Prompt to Input user choice of car type
   		cout<<"Your choice: ";
		cin >>choice[2];                                            // Input of user choice
		cout<<endl;
	} while (choice[2]<1 || choice[2]>6);
	
	// Switch cases used to display relevant car models (if available) and take input of model choice from the user
    switch (choice[2]) {
    	// Mercedes SUV
        case 1:                                                     
            cout << "You selected Mercedes SUV.\n";                 
            cout << "Available models: GLE, GLC\n";                 // Display available models followed by model specifications
            cout << "Specifications:\n";
            cout << "1- GLE: All-wheel drive, 5 seats, V6 engine, Maximum Power: 362 hp, Mileage: 19 mpg\n";
            cout << "2- GLC: All-wheel drive, 5 seats, 4-cylinder engine, Maximum Power: 255 hp, Mileage: 24 mpg\n";
            cout<<endl;
            // Prompt for input of model choice
            cout<<"To select one, Enter the corresponding number: \n";
			cout<<"Your choice: ";                             
            cin>>choice[4];                                        // Input of model choice and storing it in choice array
			// If else condition to check user choice and save corresponding model in model array
            if (choice[4]==1) {                                    // Choice 1: GLE                       
            	model[cars] = "GLE";      
			}
			else if (choice[4]==2) {                               // Choice 2: GLC
				model[cars] = "GLC";
			}
			else {                                                 // Invalid Input
				cout<<"Invalid Input\n";
			}
            break;                                                 // Break statement to terminate switch conditions
        // Mercedes Crossover
        case 2:
            cout << "You selected Mercedes Crossover.\n";
            cout << "Available models: GLA, GLB\n";                // Display available models followed by model specifications
            cout << "Specifications:\n";
            cout << "1- GLA: Front-wheel drive, 5 seats, 4-cylinder engine, Maximum Power: 362 hp, Mileage: 23 mpg\n";
            cout << "2- GLB: All-wheel drive, 7 seats, 4-cylinder engine, Maximum Power: 255 hp, Mileage: 26 mpg\n";
            cout<<endl;
            // Prompt for input of model choice
            cout<<"To select one, Enter the corresponding number: \n";
			cout<<"Your choice: "; 
            cin>>choice[4];                                        // Input of model choice and storing it in choice array
            // If else condition to check user choice and save corresponding model in model array
            if (choice[4]==1) {                                    // Choice 1: GLA 
            	model[cars] = "GLA";
			}
			else if (choice[4]==2) {                               // Choice 2: GLB
				model[cars] = "GLB";
			}
			else {                                                  // Invalid Input
				cout<<"Invalid Input\n";
			}
            break;                                                  // Break statement to terminate switch conditions
        // Mercedes Sedan
        case 3:
            cout << "You selected Mercedes Sedan.\n";
            cout << "Available models: E-Class, C-Class\n";         // Display available models followed by model specifications
            cout << "Specifications:\n";
            cout << "1- E-Class: Rear-wheel drive, 5 seats, V6 engine, Maximum Power: 208 hp, Mileage: 22 mpg\n";
            cout << "2- C-Class: Rear-wheel drive, 5 seats, 4-cylinder engine, Maximum Power: 190 hp, Mileage: 20 mpg\n";
            cout<<endl;
            // Prompt for input of model choice
            cout<<"To select one, Enter the corresponding number: \n";
			cout<<"Your choice: ";                             
            cin>>choice[4];                                         // Input of model choice and storing it in choice array
            // If else condition to check user choice and save corresponding model in model array
			if (choice[4]==1) {                                     // Choice 1: E-Class
            	model[cars] = "E-Class";
			}
			else if (choice[4]==2) {                                // Choice 2: C-Class
				model[cars] = "C-Class";
			}
			else {                                                  // Invalid Input
				cout<<"Invalid Input\n";
			}
            break;                                                  // Break statement to terminate switch conditions
        // Mercedes Minivan
        case 4:
            cout << "You selected Mercedes Minivan.\n";
            cout << "Available models: Metris, Sprinter\n";         // Display available car models followed by specifications
            cout << "Specifications:\n";
            cout << "1- Metris: Rear-wheel drive, 7 seats, 4-cylinder engine, Maximum Power: 362 hp, Mileage: 20 mpg\n";
            cout << "2- Sprinter: Rear-wheel drive, 12 seats, V6 engine, Maximum Power: 523 hp, Mileage: 18 mpg\n";
            cout<<endl;
            // Prompt for input of model choice
            cout<<"To select one, Enter the corresponding number: \n";
			cout<<"Your choice: ";                                
            cin>>choice[4];                                         // Input of model choice and storing it in choice array
            // If else condition to check user choice and save corresponding model in model array
            if (choice[4]==1) {                                     // Choice 1: Metris
            	model[cars] = "Metris";
			}
			else if (choice[4]==2) {                                // Choice 2: Sprinter
				model[cars] = "Sprinter";
			}
			else {                                                  // Invalid Input
				cout<<"Invalid Input\n";
			}
			break;                                                  // Break statement to terminate switch conditions
		// Mercedes Roadster
        case 5:
            cout << "You selected Mercedes Roadster.\n";
            cout << "Available models: SL-Class, AMG GT\n";
            cout << "Specifications:\n";
            cout << "1- SL-Class: Rear-wheel drive, 2 seats, V8 engine, Maximum Power: 379 hp, Mileage: 18 mpg\n";
            cout << "2- AMG GT: Rear-wheel drive, 2 seats, V8 engine, Maximum Power: 362 hp, Mileage: 23 mpg\n";
            cout<<endl;
            // Prompt for input of model choice
            cout<<"To select one, Enter the corresponding number: \n";
			cout<<"Your choice: ";
            cin>>choice[4];                                          // Input of model choice and storing it in choice array
            // If else condition to check user choice and save corresponding model in model array
			if (choice[4]==1) {                                      // Choice 1: SL-Class
            	model[cars] = "SL-Class";
			}
			else if (choice[4]==2) {                                 // Choice 2: AMT GT
				model[cars] = "AMT GT";
			}
			else {                                                   // Invalid Input
				cout<<"Invalid Input\n";
			}
			break;                                                   // Break statement to terminate switch conditions
		case 6:
			return 0;
    }
    
    return model[cars];                                              // Return statement to return selected model's name to the main function
}

// Tesla Function of return type string to return car model's name
string Tesla(int cars) {
	// Displaying the different types of cars available
    cout << "What type of car are you looking for?\n";
    cout << "1. SUV\n";
    cout << "2. Crossover\n";
    cout << "3. Sedan\n";
    cout << "4. Minivan\n";
    cout << "5. Roadster\n";
    cout<<"6. Exit\n";
    cout<<endl;
    // Do While Loop for validation of choice
    do {                                                         
   		cout<<"To select one, Enter the corresponding number: \n";  // Prompt for input of user choice of car type
   		cout<<"Your choice: ";
		cin >>choice[2];                                            // Input of user choice
		cout<<endl;
	} while (choice[2]<1 || choice[2]>6);
	
	// Switch cases used to display relevant car models (if available) and take input of model choice from the user
    switch (choice[2]) {
    	// Tesla SUV
        case 1:
            cout << "You selected Tesla SUV.\n";
            cout << "Available models: Model X\n";                  // Display available car models followed by specifications
            cout << "Specifications:\n";
            cout << "1- Model X: All-electric, 5 seats, Long Range Battery, Maximum Power: 219 hp, Mileage: 25 mpg\n";
            cout<<endl;
            // Prompt for input of model choice
            cout<<"To select one, Enter the corresponding number: \n";
			cout<<"Your choice: ";
            cin>>choice[4];                                        // Input of model choice and storing it in choice array
            // If else condition to check user choice and save corresponding model in model array
			if (choice[4]==1) {                                    // Choice 1: Model X
            	model[cars] = "Model X";
			}
			else {
				cout<<"Invalid Input\n";                           // Checking for Invalid Input
			}
			break;                                                 // Break statement to terminate switch conditions
		// Tesla Crossover
        case 2:
            cout << "You selected Tesla Crossover.\n";
            cout << "Available models: Model Y\n";                 // Display available car models followed by specifications
            cout << "Specifications:\n";
            cout << "1- Model Y: All-electric, 5 seats, Long Range Battery, Maximum Power: 257 hp, Mileage: 19 mpg\n";
            cout<<endl;
            // Prompt for input of model choice
            cout<<"To select one, Enter the corresponding number: \n";
			cout<<"Your choice: ";
            cin>>choice[4];                                        // Input of model choice and storing it in choice array
            // If else condition to check user choice and save corresponding model in model array
			if (choice[4]==1) {                                    // Choice 1: Model Y
            	model[cars] = "Model Y";
			}
			else {                                                 // Checking for Invalid Input
				cout<<"Invalid Input\n";
			}
			break;                                                 // Break statement to terminate switch conditions
		// Tesla Sedan
        case 3:
            cout << "You selected Tesla Sedan.\n";
            cout << "Available models: Model S, Model 3\n";        // Display available car models followed by specifications
            cout << "Specifications:\n";
            cout << "1- Model S: All-electric, 5 seats, Long Range Battery, Maximum Power: 307 hp, Mileage: 21 mpg\n";
            cout << "2- Model 3: All-electric, 5 seats, Standard Range Battery, Maximum Power: 283 hp, Mileage: 24 mpg\n";
            cout<<endl;
            // Prompt for input of model choice
            cout<<"To select one, Enter the corresponding number: \n";
			cout<<"Your choice: ";
            cin>>choice[4];                                        // Input of model choice and storing it in choice array
            // If else condition to check user choice and save corresponding model in model array
			if (choice[4]==1) {                                    // Choice 1: Model S
            	model[cars] = "Model S";
			}
			else if (choice[4]==2) {                               // Choice 1: Model 3
				model[cars] = "Model 3";
			}
			else {                                                 // Checking of Invalid Input
				cout<<"Invalid Input\n";
			}
			break;                                                 // Break statement to terminate switch conditions
		// Tesla Minivan
        case 4:
            cout << "You selected Tesla Minivan.\n";
            cout << "Available models: None\n";                    // No car models available
            cout << "Specifications: Tesla does not currently offer a minivan. Try choosing other companies or types.\n";
            break;                                                 // Break statement to terminate switch conditions
        // Tesla Roadster
        case 5:
            cout << "You selected Tesla Roadster.\n";
            cout << "Available models: Roadster\n";                // Display available car models followed by specifications
            cout << "Specifications:\n";
            cout << "1- Roadster: All-electric, 2 seats, Plaid Powertrain\n";
            cout<<endl;
            // Prompt for input of model choice
            cout<<"To select one, Enter the corresponding number: \n";
			cout<<"Your choice: ";
            cin>>choice[4];                                        // Input of model choice and storing it in choice array
            // If else condition to check user choice and save corresponding model in model array
			if (choice[4]==1) {                                    // Choice 1: Roadster
            	model[cars] = "Roadster";
			}
			else {                                                 // Checking of Invalid Input
				cout<<"Invalid Input\n";
			}
            break;                                                 // Break statement to terminate switch conditions
        case 6:
        	return 0;
    }
    return model[cars];                                            // Return statement to return selected model's name to the main function
}

// BMw Function of return type string to return car model's name
string BMW(int cars) {
	// Displaying the different types of cars available
	cout << " What type of car are you looking for?\n";
   	cout << " 1. SUV\n";
   	cout << " 2. Crossover \n";
   	cout << " 3. Sedan \n";
   	cout << " 4. Minivan \n";
   	cout << " 5. Roadster\n";
   	cout << " 6. Exit\n";
   	cout<<endl;
   	// Do While Loop for Validation of user choice
   	do {
   		cout<<"To select one, Enter the corresponding number:\n";// Prompt for input of user choice of car type
   		cout<<"Your choice: ";
		cin >>choice[2];                                         // Input of user choice
		cout<<endl;
	} while (choice[2]<1 || choice[2]>6);
	
	// Switch cases used to display relevant car models (if available) and take input of model choice from the user
    switch (choice[2]) {
        // BMW SUV
		case 1:
            cout << "You selected BMW SUV.\n";
            cout << "Available models: X5, X3\n";               // Display available car models followed by specifications
            cout << "Specifications:\n";
            cout << "1- X5: All-wheel drive, 5 seats, Inline-6 engine, Maximum Power: 197 hp, Mileage: 23 mpg\n";
            cout << "2- X3: All-wheel drive, 5 seats, 4-cylinder engine, Maximum Power: 315 hp, Mileage: 16 mpg\n";
            cout<<endl;
            // Prompt for input of car model choice
            cout<<"To select one, Enter the corresponding number: \n";
			cout<<"Your choice: ";
            cin>>choice[4];                                    // Input of model choice and storing it in choice array
            // If else condition to check user choice and save corresponding model in model array
			if (choice[4]==1) {                                // Choice 1: X5
            	model[cars] = "X5";
			}
			else if (choice[4]==2) {                           // Choice 2: X3
				model[cars] = "X3";
			}
			else {                                             // Checking for Invalid Input
				cout<<"Invalid Input\n";
			}
			break;                                             // Break statement to terminate switch conditions
        // BMW Crossover
		case 2:
            cout << "You selected BMW Crossover.\n";
            cout << "Available models: X6, X4\n";              // Display available car models followed by specifications
            cout << "Specifications:\n";
            cout << "1- X6: All-wheel drive, 5 seats, Inline-6 engine, Maximum Power: 360 hp, Mileage: 21 mpg\n";
            cout << "2- X4: All-wheel drive, 5 seats, 4-cylinder engine, Maximum Power: 245 hp, Mileage: 17 mpg\n";
            cout<<endl;
            // Prompt for input of car model choice
            cout<<"To select one, Enter the corresponding number: \n";
            cout<<"Your choice: ";
            cin>>choice[4];                                    // Input of model choice and storing it in choice array
            // If else condition to check user choice and save corresponding model in model array
			if (choice[4]==1) {                                // Choice 1: X6
            	model[cars] = "X6";
			}
			else if (choice[4]==2) {                           // Choice 1: X4
				model[cars] = "X4";
			}
			else {                                             // Checking for Invalid Input
				cout<<"Invalid Input\n";
			}
			break;                                             // Break statement to terminate switch conditions
        // BMW Sedan
		case 3:
            cout << "You selected BMW Sedan.\n";
            cout << "Available models: 5 Series, 3 Series\n";  // Display available car models followed by specifications
            cout << "Specifications:\n";
            cout << "1- 5 Series: Rear-wheel drive, 5 seats, Inline-6 engine, Maximum Power: 322 hp, Mileage: 24 mpg\n";
            cout << "2- 3 Series: Rear-wheel drive, 5 seats, 4-cylinder engine, Maximum Power: 257 hp, Mileage: 19 mpg\n";
            cout<<endl;
            // Prompt for input of car model choice
            cout<<"To select one, Enter the corresponding number: \n";
			cout<<"Your choice: ";
            cin>>choice[4];                                    // Input of model choice and storing it in choice array
            // If else condition to check user choice and save corresponding model in model array
			if (choice[4]==1) {                                // Choice 1: 5 Series
            	model[cars] = "5 Series";
			}
			else if (choice[4]==2) {                           // Choice 1: 3 Series
				model[cars] = "3 Series";
			}
			else {                                             // Checking for Invalid Input
				cout<<"Invalid Input\n";
			}
			break;                                             // Break statement to terminate switch conditions
        // BMW Minivan
		case 4:
            cout << "You selected BMW Minivan.\n";
            cout << "Available models: None\n";                // No car models available 
            cout << "Specifications: BMW does not currently offer a minivan.\n";
            break;                                             // Break statement to terminate switch conditions
        // BMW Roadster
		case 5:
            cout << "You selected BMW Roadster.\n";
            cout << "Available models: Z4\n";                  // Display available models followed by model spicifications
            cout << "Specifications:\n";
            cout << "1- Z4: Rear-wheel drive, 2 seats, Inline-4 engine, Maximum Power: 279 hp, Mileage: 20 mpg\n";
            cout<<endl;
            // Prompt for input of car model choice
            cout<<"To select one, Enter the corresponding number: \n";
			cout<<"Your choice: ";
            cin>>choice[4];                                    // Input of model choice and storing it in choice array
            // If else condition to check user choice and save corresponding model in model array
			if (choice[4]==1) {                                // Choice 1: Z4
            	model[cars] = "Z4";
			}
			else {                                             // Checking for Invalid Input
				cout<<"Invalid Input\n";
			}
			break;                                            // Break statement to terminate switch conditions
		case 6:
			return 0;
    }
    return model[cars];                                       // Return statement to return selected model's name to the main function
}

// Porsche Function of return type string to return car model's name
string Porsche(int cars) {
	// Displaying the different types of cars available
	cout << " What type of car are you looking for?\n";		
   	cout << " 1. SUV\n";
   	cout << " 2. Crossover \n";
   	cout << " 3. Sedan \n";
   	cout << " 4. Minivan \n";
   	cout << " 5. Roadster\n";
   	cout << " 6. Exit\n";
   	cout<<endl;
   	// Do While Loop for Validation of user choice
   	do {
   		cout<<"To select one, Enter the corresponding number: \n";		// Prompt for input of user choice of car type
   		cout<<"Your choice: ";
		cin >>choice[2];												// Input of user choice
		cout<<endl;
	} while (choice[2]<1 || choice[2]>6);
	// Switch cases used to display relevant car models (if available) and take input of model choice from the user
	switch (choice[2]) {
        case 1:
            cout << "You selected Porsche SUV.\n";
            cout << "Available models: Cayenne, Macan\n";				// Display available car models followed by specifications
            cout << "Specifications:\n";
            cout << "1- Cayenne: All-wheel drive, 5 seats, Turbocharged V6 engine, Maximum Power: 387 hp, Mileage: 20 mpg\n";
            cout << "2- Macan: All-wheel drive, 5 seats, Turbocharged 4-cylinder engine, Maximum Power: 219 hp, Mileage: 17 mpg\n";
            cout<<endl;
            cout<<"To select one, Enter the corresponding number: \n";
			cout<<"Your choice: ";
            cin>>choice[4];
            // If else condition to check user choice and save corresponding model in model array
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
            // If else condition to check user choice and save corresponding model in model array
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
        case 6:
        	return 0;
    }
    return model[cars];
}

// Audi Function of return type string to return car model's name
string Audi(int cars) {
	// Displaying the different types of cars available
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
            // If else condition to check user choice and save corresponding model in model array
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
            // If else condition to check user choice and save corresponding model in model array
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
            // If else condition to check user choice and save corresponding model in model array
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
        	return 0;
    }
    return model[cars];
}

/* Function to provide details of available packages and calculate the total charges on the rented car/s
NOTE: The return type of this function (i.e package_details) is double to return the value of rental charges to the main function
Parameters include the values of the number of days and cars received from main function*/
double package_details(int days, int no_of_cars) {
	double rental_charges;                                           // Declaration of a variable to store rental charges                
	cout << "See all our Packages:\n";
	cout<<endl;
	cout << "1. Savings: \n";                                        // Savings package
	cout<<"-$3/hour\n"<<"-50 litres fuel\n"<<"-No driver\n";         // Displaying package details
	cout<<endl;
	cout << "2. Moderate: \n";                                       // Moderate package
	cout<<"-$5/hour\n"<<"-80 litres fuel\n"<<"-No driver\n";         // Displaying package details
	cout<<endl;
	cout << "3. Premium: \n";                                        // Premium package
	cout<<"-$10/hour\n"<<"-Unlimited fuel\n"<<"-Free Driver Service\n"<<"-100% Repair Warranty\n";
	cout<<endl;
	// Prompt for input of package choice
	cout<<"To select one, Enter the corresponding number: \n";
	cout<<"Your choice: ";                                          // Input of package choice to calculate charges accordingly
	cin >>choice[1];
	cout<<endl;
	/* Switch cases to calculate the rental charges according to the package selected by the user
	NOTE: Switch cases used here instead of if-else because they are more effiecient and make the program easier to comprehend*/
	switch (choice[1]) {
		// Savings package
		case 1:
			cout << "Note:Payment charges are applicable on an HOURLY basis\n";
			rental_charges=days*24*3*no_of_cars;
			break;
		// Moderate package
		case 2:
			cout << "Note:Payment charges are applicable on a DAILY basis\n";
   			rental_charges=days*24*5*no_of_cars;
   			break;
   		// Premium package
		   case 3:
			cout << "Note:Payment charges are applicable on a DAILY basis\n";
   			rental_charges=days*24*10*no_of_cars;
   			break;
   		// Default statement to check for invalid input, display relevant message and exit the program
   		default:
   			cout<<"You haven't chosen any package";
   			return 0;                                          // Exit program if no package selected
	}
	return rental_charges;                                     // Return the value of rental charges to the main function
}

/* Void is seen as a procedure which doesn't return a value
The invoice function is used to take input of rental details form the user and then display the customer invoice
The function receives customer's name, rental charges, names of selected models, number of cars, and number of days as parameters from the main function*/
void invoice(string customer_name, double charges, string model[], int no_of_cars, int days)
{
    int date;                                                 // Declaration of variable to store pickup date
    long int invoice_num;                                     // Declaration of variable to store invoice number
	string pickup_location, return_location;                  // Declaration of variables to store pickup and return locations
	// Rental Details
	cout<<"Enter Pickup Location (Without Spaces): ";     
	cin>>pickup_location;                                     // Input of pickup location from the user
	cout<<"Enter Pickup Date (this month): ";
	cin>>date;                                                // Input of pickup location from the user
	cout<<"Enter Return Location (Without Spaces): ";
	cin>>return_location;									  // Input of return location from the user
    customer_name[0]=toupper(customer_name[0]);               // Toupper function used to capitralize first letter of name
    cout<<endl;												  // Line Spacing
    // Displaying Customer Invoice
	cout << " \t\t Car Rental  -  Customer Invoice \n";
    cout << "/////////////////////////////////////////////////////\n";
    cout << "| Invoice No.:"<<invoice_num<<endl;              // Displaying random invoice number 
    cout << "| Customer Name: "<<customer_name<<endl;         // Displaying customer name
    cout << "| Car Model/s:\n";                               // Displaying the names of selected car models
    for (int i=0; i<no_of_cars; i++) {                        // For loop used to display the model name stored at corresponding index number of the array
    	cout<<"| \t-"<<model[i]<<endl;                        // Formatting Output: \t used to move the cursor to the next tab stop
	}
	cout<<"| Pickup Location: "<<pickup_location<<endl;       // Displaying pickup location
	cout<<"| Pickup Date: "<<date<<"-02-2024"<<endl;          // Displaying pickup date
	cout<<"| Pickup Time: 2:00 pm (UTC) "<<endl;              // Displaying pickup time
	cout<<"| Number of Cars: "<<no_of_cars<<endl;             // Displaying the total number of cars rented
	cout<<"| Number of Days: "<<days<<endl;                   // Displaying  the number of days the cars are rented for
	cout<<"| Return Location: "<<return_location<<endl;       // Displaying return location
	cout<<"| Return Date: "<<date+days<<"-02-2024"<<endl;     // Calculating return date from the entered pickup date and the number of days and displaying the date
	cout<<"| Return Time: 2:00 pm (UTC) "<<endl;              // Displaying return time
	cout<<"| Caution Money: $0"<<endl;                        // Displaying the value Caution Money
	cout<<"| Advance: $0"<<endl;                              // Displaying the value of the advance deposited
    cout<<fixed<<showpoint<<setprecision(2);                  // Formatting Output: Setting the number of decimal places to 2
    cout<<"| Total Charges: $"<<charges<<" (inclusive of tax)\t\t\n";  // Displaying the total rental charges
    cout << "/////////////////////////////////////////////////////\n";
    
}

int main()
{
	double total_charges;			                      	  //Declaring total charges variable to store the calculated total charges
	int days;
	// WELCOME NOTE
    cout << "WELCOME TO HORTEN'S ENGINES\n"; 
    cout<<"Speed that you have never seen before!";          // Company's Slogan
    cout<<endl;
    cout<<endl;
    string name=login();                                     // Login Function called and name received
    do {
    	// Displaying the different companies of cars available
    	cout << "Following are the car companies we provide to choose from: \n";
   		cout << " 1. MERCEDES-BENZ\n";
   		cout << " 2. TESLA \n";
   		cout << " 3. BMW \n";
   		cout << " 4. AUDI \n";
   		cout << " 5. PORSCHE\n";
   		cout << " 6. Exit\n";
   		do {
   			cout<<"To select one, Enter the corresponding number: \n";//Prompt for input of the company choice
   			cout<<"Your choice: ";
			cin >>choice[0];                                 // Input of company choice
			cout<<endl;
		   // Switch cases used to to call the corresponding car company function
			switch (choice[0])
   			{	
    			case 1: // Mercedes
					model[no_of_cars]=Mercedes(no_of_cars);
      				break;

 				case 2: // Tesla
      				model[no_of_cars]=Tesla(no_of_cars);
      				break;

      			case 3: // BMW
      				model[no_of_cars]=BMW(no_of_cars);
      				break;

      			case 4: // Audi
      				model[no_of_cars]=Audi(no_of_cars);
      				break;

      			case 5: // Porsche
      				model[no_of_cars]=Porsche(no_of_cars);
      				break;
      			case 6:
      				return 0;
   			}	
		} while (choice[0]<1 || choice[0]>6);                   // Loop for validation
   		cout<<endl;
   		cout<<"Would you like to choose a car again? If yes, Press 'Y' else enter any other key.\n";  //Asking the user if he/she wants to choose a car again
   		cout<<"Your choice: ";
		cin>>a_choice[1];
    	cout<<endl;
    	no_of_cars+=1;
	} while (a_choice[1]=='Y' || a_choice[1]=='y');             // Loop for purchasing multiple cars
	cout << "Enter the number of days you would like to rent the car/s for: ";
   	cin >> days;                                                // Input of the number of days
   	cout<<endl;
	total_charges=package_details(days, no_of_cars);            // Calling the package details function and storing the returned value in total charges variable 
    cout<<endl;
	invoice (name, total_charges, model, no_of_cars, days);     // Calling the invoice function: Multiple arguments included
    cout<<endl;
    // Inquiry details
    cout<<"Your car/s will be delivered to the pickup location at the desired date and time."<<endl;
    cout<<"For further inquiries or cancellation of booking, Please contact at 0123-4567890."<<endl;
    cout<<endl;
	cout<<"THANK YOU FOR CHOOSING US!";                         // Thank you message
    return 0;                                                   // End of Program
}

