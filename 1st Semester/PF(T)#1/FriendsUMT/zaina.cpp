#include<iostream>
#include <string>
#include<conio.h>
using namespace std;

int amount, Amount, aMount, AMount, AMOunt, AMOUnt;
float TAXX, tax, TAXx, TAX, TAx, Tax;

void fruits ()
{
	int Apples,Bananas,Oranges,lemon,Grapes,Berries,num,quantity;
	
	cout << "\t -----------------------------" <<endl;
	cout << "\t|    PRESS 1 FOR APPLES       |" << endl;
	cout << "\t|    PRESS 2 FOR BANANAS      |" << endl;
	cout << "\t|    PRESS 3 FOR ORANGES      |" << endl;
	cout << "\t|    PRESS 4 FOR LEMONS       |" << endl;
	cout << "\t|    PRESS 5 FOR GRAPES       |" << endl;
	cout << "\t|    PRESS 6 FOR BERRIES      |" << endl;
	cout << "\t -----------------------------"<<endl;
	cout<<"\tYour Choice: ";
	cin>>num;
	cout<<endl;
 
	switch(num)
	{
		case 1:
		{	
			cout << endl;
			cout << "\tAPPLES (PER KG): Rs.200"<<endl;
			cout << "\tENTER THE QUANTITY YOU REQUIRE: ";
			cin >> quantity;
			
			Apples=200;
			Amount=quantity*Apples;
			TAX= Amount*0.17;
			Amount=TAX+Amount;
	 		
	        break;
	    }
		
		case 2:
		{	
			cout << endl;
			cout<<"\tBANANAS (PER DOZEN): Rs.300"<<endl;
			cout<<"\tENTER THE QUANTITY YOU REQUIRE: ";
			cin>>quantity;
	 	
	        Bananas=300;
			Amount=quantity*Bananas;
			TAX= Amount*0.17;
			Amount=TAX+Amount;
	 	
	        break;
	    }
	    
		case 3:
		{	
			cout << endl;
			cout<<"\tORANGES (PER DOZEN): Rs.150"<<endl;
			cout<<"\tENTER THE QUANTITY YOU REQUIRE: ";
			cin>>quantity;
			 
	        Oranges=150;
			Amount=quantity*Oranges;
			TAX= Amount*0.17;
			Amount=TAX+Amount;
	
            break;
        }
        
		case 4:
		{	
			cout << endl;
			cout<<"\tLEMONS (PER KG): Rs.200"<<endl;
			cout<<"\tENTER THE QUANTITY YOU REQUIRE: ";
			cin>>quantity;
		 
            lemon=200;
			Amount=quantity*lemon;
			TAX=Amount*0.17;
			Amount=TAX+Amount;
	 	
            break;
        }
        
		case 5:
		{	
			cout << endl;
			cout<<"\tGRAPES (PER KG): Rs.180"<<endl;
			cout<<"\tENTER THE QUANTITY YOU REQUIRE: ";
			cin>>quantity;
		 	
			Grapes=180;
			Amount=quantity*Grapes;
			TAX=Amount*0.17;
			Amount=TAX+Amount;
		 	
            break;
        }
        
        case 6:
		{	
			cout << endl;
			cout<<"\tBERRIES (PER KG): Rs.500"<<endl;
			cout<<"\tENTER THE QUANTITY YOU REQUIRE: ";
			cin>>quantity;
	 
            Berries = 500;
			Amount=quantity*Berries;
			TAX=Amount*0.17;
			Amount=TAX+Amount;
	 	
            break;
        }
        
		default:
        	cout << "\tINVALID INPUT";		
 			
 	}
}

/*-----------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------*/

void vegetable() {
int carrot,potato,tomato,peas,lady_finger,cucumber,number,Quantity;
	
	cout << "\t -----------------------------"<<endl;	
	cout << "\t|    PRESS 1 FOR CARROTS      |" << endl;
	cout << "\t|    PRESS 2 FOR POTATO       |" << endl;
	cout << "\t|    PRESS 3 FOR TOMATO       |" << endl;
	cout << "\t|    PRESS 4 FOR PEAS         |" << endl;
	cout << "\t|    PRESS 5 FOR LADY FINGER  |" << endl;
	cout << "\t|    PRESS 6 FOR CUCUMBER     |" << endl;
	cout << "\t -----------------------------"<<endl;
	cout<<"\tYour Choice: ";
	cin >> number;
	cout<<endl;
 
	switch(number)
	{
		case 1:
		{	
			cout << endl;
			cout << "\tCARROTS (PER KG): Rs.150" << endl;
			cout << "\tENTER THE QUANTITY YOU REQUIRE: ";
			cin >> Quantity;
		
        	carrot=150;
			amount=Quantity*carrot;
			Tax=amount*0.17;
			amount=Tax+amount;
			
			break;
    	}
		
		case 2:
		{	
			cout << endl;
			cout<<"\tPOTATOES (PER KG): Rs.100" << endl;
			cout<<"\tENTER THE QUANTITY YOU REQUIRE: ";
			cin>>Quantity;
		 	
            potato=100;
			amount=Quantity*potato;
			Tax=amount*0.17;
			amount=Tax+amount;
            
			break;
        }
		
		case 3:
		{	
			cout << endl;
			cout<<"\tTOMATOES (PER KG): Rs.150" << endl;
			cout<<"\tENTER THE QUANTITY YOU REQUIRE: ";
			cin>>Quantity;
		 	
			tomato=150;
			amount=Quantity*tomato;
			Tax=amount*0.17;
			amount=Tax+amount;
            
			break;
        }
		
		case 4:
		{	
			cout << endl;
			cout << "\tPEAS (PER KG): Rs.180" << endl;
			cout << "\tENTER THE QUANTITY YOU REQUIRE: ";
			cin >> Quantity;
		 	
			peas=180;
			amount=Quantity*peas;
			Tax=amount*0.17;
			amount=Tax+amount;
	 		
            break;
        }
        
		case 5:
		{	
			cout << endl;
			cout << "\tLADY FINGER (PER KG): Rs.250" << endl;
			cout << "\tENTER THE QUANTITY YOU REQUIRE: ";
			cin >> Quantity;
		 	
            lady_finger=250;
			amount=Quantity*lady_finger;
			Tax=amount*0.17;
			amount=Tax+amount;
	 		
            break;
        }
        
		case 6:
		{	
			cout << endl;
			cout<<"\tCUCUMBERS (PER KG): Rs. 150 "<<endl;
			cout<<"\tENTER THE QUANTITY YOU REQUIRE: ";
			cin>>Quantity;
		 
            cucumber=150;
			amount=Quantity*cucumber;
			Tax=amount*0.17;
			amount=Tax+amount;
		 	
            break;
        }
		
		default:
            cout<<"\tINVALID INPUT";
						
	}
}

/*-----------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------*/
                      
void Meat() {
	int chicken,fish,beef,Meaten,Number,QUantity;
	
	cout<<"\t ---------------------------"<<endl;
	cout<<"\t|    PRESS 1 FOR CHICKEN    |"<<endl;
	cout<<"\t|    PRESS 2 FOR FISH       |"<<endl;
	cout<<"\t|    PRESS 3 FOR BEEF       |"<<endl;		
	cout<<"\t|    PRESS 4 FOR LAMB       |"<<endl;
	cout<<"\t ---------------------------"<<endl;
	cout<<"\tYour Choice: ";
	cin>>Number;
	cout<<endl;
 
	switch(Number)
	{
		case 1:
		{	
			cout << endl;
			cout<<"\tCHICKEN (PER KG): Rs.599"<<endl;
			cout<<"\tENTER THE QUANTITY YOU REQUIRE: ";
			cin>>QUantity;
		 	
            chicken=599;
			aMount=QUantity*chicken;
			TAx=aMount*0.17;
			aMount=TAx+aMount;
            
			break;
        }
        
		case 2:
		{	
			cout << endl;
			cout<<"\tFISH (PER KG): Rs.450"<<endl;
			cout<<"\tENTER THE QUANTITY YOU REQUIRE: ";
			cin>>QUantity;
		 	
            fish=450;
			aMount=QUantity*fish;
			TAx=aMount*0.17;
			aMount=TAx+aMount;
            
			break;
        }
		
		case 3:
		{	
			cout << endl;
			cout<<"\tBEEF (PER KG): Rs.850"<<endl;
			cout<<"\tENTER THE QUANTITY YOU REQUIRE: ";
			cin>>QUantity;
		 
            beef=850;
			aMount=QUantity*beef;
			TAx=aMount*0.17;
			aMount=TAx+aMount;
            
			break;
        }
		
		case 4:
		{	
			cout << endl;
			cout<<"\tLAMB (PER KG): Rs.600"<<endl;
			cout<<"\tENTER THE QUANTITY YOU REQUIRE: ";
			cin>>QUantity;
		 
            Meaten=600;
			aMount=QUantity*Meaten;
			TAx=aMount*0.17;
			aMount=TAx+aMount;
            
			break;
        }
		
		default:
            cout<<"INVALID INPUT";
        
	}
}
//*******************************************************************************************************
//*******************************************************************************************************
void cereals() {
	int wheat,rice,oats,corn,bread,NUmber,QUAntity;
	
	cout<<"\t -----------------------------"<<endl;	
	cout<<"\t|    PRESS 1 FOR WHEAT FLOUR   |"<<endl;
	cout<<"\t|    PRESS 2 FOR RICE          |"<<endl;
	cout<<"\t|    PRESS 3 FOR OATS          |"<<endl;
	cout<<"\t|    PRESS 4 FOR CORN          |"<<endl;
	cout<<"\t|    PRESS 5 FOR BREAD         |"<<endl;
	cout<<"\t -----------------------------"<<endl;
	cout<<"\tYour Choice: ";
	cin>>NUmber;
	cout<<endl;
 
	switch(NUmber)
	{
		case 1:
		{	
			cout << endl;
			cout<<"\tWHEAT FLOUR (PER KG): Rs.180"<<endl;
			cout<<"\tENTER THE QUANTITY YOU REQUIRE: ";
			cin>>QUAntity;
		 	
        	wheat=180;
			AMount=QUAntity*wheat;
			TAXX=AMount*0.17;
			AMount=TAXX+AMount;
	 		
            break;
        }
		
		case 2:
		{	
			cout << endl;
			cout<<"\tRICE (PER KG): Rs.170"<<endl;
			cout<<"\tENTER THE QUANTITY YOU REQUIRE: ";
			cin>>QUAntity;
		 	
            rice=170;
			AMount=QUAntity*rice;
			TAXX=AMount*0.17;
			AMount=TAXX+AMount;
            
			break;
        }
		
		case 3:
		{	
			cout << endl;
			cout<<"\tOATS (PER 500G): Rs.1,000"<<endl;
			cout<<"\tENTER THE QUANTITY YOU REQUIRE: ";
			cin>>QUAntity;
		 
            oats=1000;
			AMount=QUAntity*oats;
			TAXX=AMount*0.17;
			AMount=TAXX+AMount;
	 		
            break;
        }
		
		case 4:
		{		
			cout << endl;
			cout<<"\tCORN (PER 500G): Rs.100"<<endl;
			cout<<"\tENTER THE QUANTITY YOU REQUIRE: ";
			cin>>QUAntity;
		 
            corn=100;
			AMount=QUAntity*corn;
			TAXX=AMount*0.17;
			AMount=TAXX+AMount;
			
			break;
        }
        
		case 5:
        {	
			cout << endl;
			cout<<"\tBREAD (LARGE): Rs.170"<<endl;
			cout<<"\tENTER THE QUANTITY YOU REQUIRE: ";
			cin>>QUAntity;
		 	
            bread=170;
			AMount=QUAntity*bread;
			TAXX=AMount*0.17;
			AMount=TAXX+AMount;
	 		
        	break;
        }
		
		default:
            cout<<"\tINVALID INPUT";		
 			
 	}
}

/*------------------------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------------------*/

void beauty_products(){
	int brushes,makeup_products,facial_products,nail_paints,beauty_creams,NUMber,QUANtity;
	
	cout<<"\t ----------------------------------"<<endl;	
	cout<<"\t|    PRESS 1 FOR BRUSHES           |"<<endl;
	cout<<"\t|    PRESS 2 FOR MAKEUP PRODUCTS   |"<<endl;
	cout<<"\t|    PRESS 3 FOR FACIAL PRODUCTS   |"<<endl;
	cout<<"\t|    PRESS 4 FOR NAIL PAINTS       |"<<endl;
	cout<<"\t|    PRESS 5 FOR BEAUTY CREAMS     |"<<endl;
	cout<<"\t ----------------------------------"<<endl;
	cout<<"\tYour Choice: ";
	cin>>NUMber;
	cout<<endl;
 
	switch(NUMber)
	{
		case 1:
		{	
			cout << endl;
			cout<<"\tBRUSHES (PER 12-PIECE SET): Rs.2500"<<endl;
			cout<<"\tENTER THE QUANTITY YOU REQUIRE: ";
			cin>>QUANtity;
		 	
        	brushes=2500;
			AMOunt=QUANtity*brushes;
			TAXx=AMOunt*0.17;
			AMOunt=TAXx+AMOunt;
            
			break;
        }
		
		case 2:
		{	
			cout << endl;
			cout<<"\tMAKEUP PRODUCTS: Rs.5000"<<endl;
			cout<<"\tENTER THE QUANTITY YOU REQUIRE: ";
			cin>>QUANtity;
		 	
        	makeup_products=5000;
			AMOunt=QUANtity*makeup_products;
			TAXx=AMOunt*0.17;
			AMOunt=TAXx+AMOunt;
	 		
            break;
        }
		
		case 3:
		{	
			cout << endl;
			cout<<"\tFACIAL PRODUCTS: Rs.6000"<<endl;
			cout<<"\tENTER THE QUANTITY YOU REQUIRE: ";
			cin>>QUANtity;
		 
            facial_products=6000;
			AMOunt=QUANtity*facial_products;
			TAXx=AMOunt*0.17;
			AMOunt=TAXx+AMOunt;
	 		
            break;
        }
		
		case 4:
		{	
			cout << endl;
			cout<<"\tNAIL PAINTS (PER 12-PIECE SET): Rs.3000"<<endl;
			cout<<"\tENTER THE QUANTITY YOU REQUIRE: ";
			cin>>QUANtity;
		 
            nail_paints=3000;
			AMOunt=QUANtity*nail_paints;
			TAXx=AMOunt*0.17;
			AMOunt=TAXx+AMOunt;
	 		
            break;
        }
        
		case 5:
        {	
			cout << endl;
			cout<<"\tBEAUTY CREAMS: Rs.5500"<<endl;
			cout<<"\tENTER THE QUANTITY YOU REQUIRE: ";
			cin>>QUANtity;
		 
            beauty_creams=5500;
			AMOunt=QUANtity*beauty_creams;
			TAXx=AMOunt*0.17;
			AMOunt=TAXx+AMOunt;
	 		
            break;
        }

		default:
            cout<<"\tINVALID INPUT";		
 			
 	}
}

/*-------------------------------------------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------------------------*/

void snacks(){
	int chips,chocolates,candies,biscuits,drinks,NUMBer,QUANTity;
	
	cout<<"\t -----------------------------"<<endl;
	cout<<"\t|    PRESS 1 FOR CHIPS        |"<<endl;
	cout<<"\t|    PRESS 2 FOR CHOCOLATES   |"<<endl;
	cout<<"\t|    PRESS 3 FOR CAMDIES      |"<<endl;		
	cout<<"\t|    PRESS 4 FOR BISCUITS     |"<<endl;
	cout<<"\t|    PRESS 5 FOR DRINKS       |"<<endl;
	cout<<"\t -----------------------------"<<endl;
	cout<<"\tYour Choice: ";
	cin>>NUMBer;
	cout<<endl;
 
	switch(NUMBer)
	{
		case 1:
		{	
			cout << endl;
			cout<<"\tCHIPS: Rs.300"<<endl;
			cout<<"\tENTER THE QUANTITY YOU REQUIRE: ";
			cin>>QUANTity;
		 	
			chips=300;
			AMOUnt=QUANTity*chips;
			tax=AMOUnt*0.17;
			AMOUnt=tax+AMOUnt;
	 		
        	break;
        }
		
		case 2:
		{	
			cout << endl;
			cout<<"\tCHOCOLATES: Rs.500"<<endl;
			cout<<"\tENTER THE QUANTITY YOU REQUIRE: ";
			cin>>QUANTity;
		 	
            chocolates=500;
			AMOUnt=QUANTity*chocolates;
			tax=AMOUnt*0.17;
			AMOUnt=tax+AMOUnt;
	 		
        	break;
        }
		
		case 3:
		{	
			cout << endl;
			cout<<"\tCANDIES: Rs.400"<<endl;
			cout<<"\tENTER THE QUANTITY YOU REQUIRE: ";
			cin>>QUANTity;
		 
            candies=400;
			AMOUnt=QUANTity*candies;
			tax=AMOUnt*0.17;
			AMOUnt=tax+AMOUnt;
			
			break;
        }
		
		case 4:
		{	
			cout << endl;
			cout<<"\tBISCUITS: Rs.250"<<endl;
			cout<<"\tENTER THE QUANTITY YOU REQUIRE: ";
			cin>>QUANTity;
		 
            biscuits=250;
			AMOUnt=QUANTity*biscuits;
			tax=AMOUnt*0.17;
	 		AMOUnt=tax+AMOUnt;
			
			break;
        }
        
		case 5:
        {	
			cout << endl;
			cout<<"\tDRINKS (PER LITRE): Rs.400"<<endl;
        	cout<<"\tENTER THE QUANTITY YOU REQUIRE: ";
			cin>>QUANTity;
		 
            drinks=450;
			AMOUnt=QUANTity*drinks;
			tax=AMOUnt*0.17;
			AMOUnt=tax+AMOUnt;
			
			break;
        }

		default:
        	cout<<"\tINVALID INPUT";		
 			
 	}
}	

/*---------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------*/

int main()
{
	cout<<endl;
	cout<<endl;
	cout<<"\t ---------------------------------------------------------------------------------"<<endl;
	cout<<"\t|                              WELCOME TO                                         |"<<endl;
	cout<<"\t|                         V-MART INTERNATIONAL                                    |"<<endl;
	cout<<"\t|                      \"FOR THE LOVE OF SHOPPING\"                                 |"<<endl;
	cout<<"\t --------------------------------------------------------------------------------"<<endl<<endl;
	cout<<endl;
	cout<<"\tWE HAVE ALL YOU NEED IN ONE PLACE!"<<endl;
	cout<<"\tPLEASE CHOOSE FROM THE SIX CATEGORIES LISTED BELOW:"<<endl<<endl;
	cout<<endl;
	int val, bill=0, discount=0, total_tax;
	cout << endl;
	cout<<"\t ------------------------------------"<<endl;
	cout<<"\t|       PRESS 1 FOR FRUITS            |"<<endl;
	cout<<"\t|       PRESS 2 FOR VEGETABLES        |"<<endl;
	cout<<"\t|       PRESS 3 FOR MEAT              |"<<endl;
	cout<<"\t|       PRESS 4 FOR CEREALS           |"<<endl;
	cout<<"\t|       PRESS 5 FOR BEAUTY PRODUCTS   |"<<endl;
	cout<<"\t|       PRESS 6 FOR SNACKS            |"<<endl;
	cout<<"\t|       PRESS 0 TO EXIT               |"<<endl;
	cout<<"\t -------------------------------------"<<endl;
	cout<<"\tYour Choice: ";
	cin>>val;
	cout<<endl;
	
    switch(val) 
	{
		case 1:
			fruits();
			break;
		    
		case 2:
			vegetable();
			break;
			
		case 3:
			Meat();
			break;
			
		case 4:
			cereals();
			break;
			
		case 5:
			beauty_products();
			break;
			
		case 6:
			snacks();
			break;
			
		case 0:
			cout<<"EXIT"<<endl;
			break;
	        
		default:
			cout<<"INVALID INPUT";
    }
    cout<<endl<<endl;
    bill = amount + Amount + aMount + AMount + AMOunt + AMOUnt;
    total_tax = tax+TAX+TAx+Tax+TAXx+TAXX;
    if (bill==0) {
    	return 0;
	}
	else{
		cout<<"\t -------------------------------------------------------"<<endl;
		cout << "\t|                BILL RECEIPT "<<endl;
		cout<<"\t| "<<endl;
		cout << "\t|    BILL: Rs. "<< bill <<endl;
		cout << "\t|    TAX: Rs. "<< total_tax <<endl;
		if (bill > 20000 && bill<50000) {
			discount = 0.1 * bill;
			bill = bill - discount;
			cout << "\t|    DISCOUNT: "<<discount<<endl;
			cout << endl;
		} else if (bill > 50000 ) {
			discount = 0.2 * bill;
			bill = bill - discount;
			cout << "\t|    DISCOUNT: "<<discount<<endl;
			cout<<endl;
		}
		else {
			cout << "\t|    SORRY, NO DISCOUNT AVAILABLE." << endl;
		}
    	if (bill > 10000) {
			cout << "\t|    FREE DELIVERY ON YOUR ORDER!"<<endl;
		}
		else {
			cout << "\t|    *Rs.200 DELIVERY CHARGES APPLICABLE."<<endl;
		}
		cout<<"\t -------------------------------------------------------"<<endl;
		long phone;
		string address, name;
		cout<<"\t -----------------------------------------------------------------------"<<endl;
		cout<<"\t|                PERSONAL INFORMATION"<<endl;;
		cout<<"\t| "<<endl;
		cout<<"\t|    ENTER YOUR FIRST NAME: ";
		cin >> name;
		cout<<"\t|    ENTER YOUR CONTACT NUMBER (WITHOUT DASHES): ";
		cin>>phone;
		cout << "\t|    ENTER YOUR DELIVERY LOCATION: ";
		getline(cin, address);
		cin.ignore();
		cout<<endl;
		cout<<"\t -----------------------------------------------------------------------"<<endl;
		cout << "\tYOUR PRODUCTS WILL BE DELIVERED WITHIN THE NEXT 1 HOUR." << endl << "\tWE WILL CONTACT YOU AT  "<< phone << " FOR CONFIRMATION OF ORDER"<< endl;
		cout<<endl;
		cout << "\tNOTE: CASH-ON DELIVERY AVAILABLE ONLY (NO BANK TRANSFER)."<<endl;
		cout << "\tIN CASE OF ANY DELAY OR FOR ANY OTHER INQUIRY, PLEASE CONTACT AT 0123-4567890.";
    	cout << endl<< endl;
    	cout<<"\t -------------------------------------"<<endl;
    	cout<<"\t|    THANK YOU FOR SHOPPING HERE :)   |"<<endl;
    	cout<<"\t|           COME AGAIN SOON!          |"<<endl;
		cout<<"\t -------------------------------------"<<endl;	
	}
   return 0;
}