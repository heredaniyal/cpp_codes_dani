#include<iostream>
#include<cmath>
using namespace std;

// FINAL

int main()
{

int Menu,num1,num2,num3,num4,num5,Key,Addition,Subtraction,Multiplication,Quotient,Power,Top;
char Repeat,Operator;
float Remainder;
string Name,Gender,Country;

Top:
cout<<"MENU:"<<endl;
cout<<"1. Profile"<<endl;
cout<<"2. Calculator"<<endl;
cout<<"3. Pattern"<<endl;
cout<<"4. Sequence"<<endl;
cout<<"5. Find Key"<<endl;
cout<<"6. Exit Menu:"<<endl;
cout<<"Enter your choice:";

cin>>Menu;

	switch(Menu)
	{

	case 1:
	{
        // START
  string name, gender, country; // String is required in the question not char
  
  cout << "Enter Name :\n";
  getline(cin,name); // user enters name (functioning properly)
  
  do // VALIDATION
  {
  cout << "Enter Gender: (Male / female)\n";
  cin >> gender;
  } while (gender != "male" && gender != "female" && gender != "Male" && gender != "Female");
  
  cout << "Enter your country:\n"; // Entering Country
  cin >> country;

   // OUTPUT
   cout << "-----------------------\n";
   cout << "\tYOUR PROFILE\n";
   cout << "-----------------------\n";
   cout << "Name: " << name << endl; // (functioning properly)
   cout << "gender: " << gender << endl;
   cout << "country: " << country << endl;

        // END

	cout<<"Do you want to repeat:";		
	cin>>Repeat;

	while (Repeat == 'y' || Repeat == 'Y') 
	goto Top;

	}

	case 2:
	{
	cout<<"OPERATORS MENU\n";
	cout<<"+ for addition\n";
	cout<<"- for subtraction \n";
	cout<<"* for multiplication \n";
	cout<<"/ for quotient \n";
	cout<<"% for remainder \n";
	cout<<"^ for power \n";

	cout<<"Please enter your First Number: ";
	cin>>num1;

	cout<<"Please enter your Second Number: ";
	cin>>num2;

	cout<<"Please enter your operator: "<<endl;
	cin>>Operator;

	if (Operator=='+')
	{	
	Addition=num1+num2;
	cout<<"Addition is: "<<Addition<<endl;
	}

	else if(Operator=='-')
	{	
	Subtraction=num1-num2;
	cout<<"Subtraction is: "<<Subtraction<<endl;	
	}

	else if(Operator=='*')
	{
	Multiplication=num1*num2;
	cout<<"Multiplication is: "<<Multiplication<<endl;	
	}

	else if(Operator=='/')
	{
	Quotient=num1/num2;
	cout<<"Quotient is: "<<Quotient<<endl;	
	}

	else if(Operator=='%')
	{
	Remainder=num1%num2;
	cout<<"Remainder is: "<<Remainder<<endl;	
	}

	else if(Operator=='^')
	{	
	Power=pow(num1,num2);
	cout<<"Power is: "<<Power<<endl;	
	}

	cout<<"Do you want to repeat:";		
	cin>>Repeat;
	
	while (Repeat == 'y' || Repeat == 'Y') 
	goto Top;

	}	

	case 3:
	{
	cout<<"     *\n";
	cout<<"    * *\n";
	cout<<"   * * *\n";
	cout<<"  * * * *\n";
	cout<<" * * * * *\n";
	cout<<" * * * * *\n";
	cout<<"  * * * *\n";
	cout<<"   * * *\n";
	cout<<"    * *\n";
	cout<<"     * \n";
	
	cout<<"Do you want to repeat:";		
	cin>>Repeat;

	while (Repeat == 'y' || Repeat == 'Y') 
	goto Top;
	}

	case 4:
	{
        // START
    int previous = 0; // Previous Value
    int next = 1; // Next Value
    int current = 1;
    int num; // Entered Value
    int i = 0; // Temporary value

    cout << " Enter a number : ";
    cin >> num; // Entered Variable
     
    cout << "\n"; // SPACING

    while (i < num) // WHILE LOOP
    {
        if (i <= 1)
        {
            next = i; // initial values stored after 2 loops
            cout << next << endl; // OUTPUT RESULT
        }
        else
        {
            next = previous + current; // 0 = 0 + 1
            cout << next << endl; // OUTPUT RESULT
            previous = current;
            current = next;
        }
        i++; // Manual changing of variables
        // The reason i put i++ down is simple because it's just simply turning over the other loop
        // Yeah i could like add i++ in both if and else but this is more efficient
    }

        // END PROGRAM

	cout<<"Do you want to repeat:";		
	cin>>Repeat;
	while (Repeat == 'y' || Repeat == 'Y') 
	{
	goto Top;
	}
	}	

	case 5:
	{	
	cout<<"Please specify your key:";
	cin>>Key;
	
	cout<<"Please make 5 further inputs having key in some input\n";
	
	cout<<"Please enter your first number: ";
	cin>>num1;//endl;
	
	cout<<"Please enter your Second number: ";
	cin>>num2;//endl;

	cout<<"Please enter your Third number: ";
	cin>>num3;//endl;

	cout<<"Please enter your Fourth number: ";
	cin>>num4;//endl;

	cout<<"Please enter your Fifth number: ";
	cin>>num5;//endl;

	if (num1==Key)
	cout<<"Key is entered at position 1 \n";
	
	else if (num2==Key)
	cout<<"Key is entered at position 2 \n";
	
	else if (num3==Key)
	cout<<"Key is entered at position 3 \n";
	
	else if (num4==Key)
	cout<<"Key is entered at position 4 \n";
	
	else if  (num5==Key)
	cout<<"Key is entered at position 5 \n";
	
	else  
	cout<<"You have not entered key in any position\n";

	cout<<"Do you want to repeat:";		
	cin>>Repeat;
	while (Repeat == 'y' || Repeat == 'Y') 
	goto Top;
	}

	case 6:
	{
	return 0;
	}

}
}