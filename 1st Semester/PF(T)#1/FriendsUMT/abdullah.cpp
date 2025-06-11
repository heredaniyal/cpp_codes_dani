#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void displayPolicies()
{
    cout << "One of the key objectives of The State Bank of Pakistan (SBP) is to ensure a robust and efficient financial sector, "
            "capable of efficiently catering to the needs of the general public, businesses and regulated institutions. The Banking "
            "Policy & Regulations Department (BPRD) is entrusted with a prime responsibility to achieve this overall objective of "
            "SBP by formulating and implementing an effective regulatory regime which is responsive to the local environment and "
            "international best practices."
            "\n"
            "Major functions performed by the BPRD include licensing of commercial banks, microfinance banks and Islamic banks, "
            "privatization of public sector banks, review and approval of mergers and acquisition schemes of banks and other "
            "regulated entities, formulation of corporate governance regime and fit and proper criteria for key executives and "
            "board of directors, formulation and continuous review of prudential regulations, capital adequacy policy and standards, "
            "banking and AML Laws, and dealing with various litigation cases."
            "\n"
            "Besides, the BPRD plays a key role in providing an enabling regulatory regime for the SBP different initiatives on "
            "financial inclusion, promotion of alternative delivery channels, innovation and product diversification. The department "
            "also coordinates with international agencies , foreign bank regulators and central banks , Federal and Provincial "
            "Governments, Law Enforcement Agencies, Securities & Exchange Commission, various trade bodies, and general public on "
            "key policy issues."
         << endl;
}

void displayMainMenu()
{
    cout << "Please select from the menu" << endl;
    cout << "a. Account management" << endl;
    cout << "b. ATM" << endl;
    cout << "c. Policies" << endl;
    cout << "x. Exit" << endl;
    cout << endl;
}

void displayAccountManagementMenu()
{
    cout << "Please select from the account management menu" << endl;
    cout << "a. Display all account" << endl;
    cout << "b. Add account" << endl;
    cout << "c. Delete account" << endl;
    cout << "x. main menu" << endl;
    cout << endl;
}

void displayAtmMenu()
{
    cout << "Please select from the ATM menu" << endl;
    cout << "a. Balance inquiry" << endl;
    cout << "b. Deposit" << endl;
    cout << "c. Withdraw" << endl;
    cout << "d. Transfer" << endl;
    cout << endl;
}

void displayAccountInformationMenu()
{
    cout << "1. Display all account of particular bank" << endl;
    cout << "2. Display all account in same branch of a particular bank" << endl;
    cout << "3. Display account with balance less than 1000" << endl;
    cout << "4. Display account with balance greater than 1 lac" << endl;
    cout << "0. Previous menu" << endl;
}

void displayAccounts()
{
    ifstream readName("names.txt");
    ifstream readAccountNum("accountnum.txt");
    ifstream readBalance("balance.txt");

    if (readName.is_open() && readAccountNum.is_open() && readBalance.is_open())
    {
        vector<string> names;
        vector<string> accountNumbers;
        vector<string> balances;

        string name;
        string accountNumber;
        string balance;

        while (getline(readName, name))
        {
            names.push_back(name);
        }
        while (getline(readAccountNum, accountNumber))
        {
            accountNumbers.push_back(accountNumber);
        }
        while (getline(readBalance, balance))
        {
            balances.push_back(balance);
        }

        cout << "All Accounts" << endl;
        for (int i = 0; i < accountNumbers.size(); i++)
        {
            cout << accountNumbers[i] << "\t" << names[i] << "\t" << balances[i] << endl;
        }

        cout << "All Accounts less than 1000 balance" << endl;
        for (int i = 0; i < accountNumbers.size(); i++)
        {
            if (stoi(balances[i]) < 1000)
            {
                cout << accountNumbers[i] << "\t" << names[i] << "\t" << balances[i] << endl;
            }
        }

        cout << "All Accounts more than 1 Lac balance" << endl;
        for (int i = 0; i < accountNumbers.size(); i++)
        {
            if (stoi(balances[i]) > 100000)
            {
                cout << accountNumbers[i] << "\t" << names[i] << "\t" << balances[i] << endl;
            }
        }

        cout << endl;
        cout << "*********************************************" << endl;
        cout << endl;
    }
}

string updateIdCount(string operation)
{
    string lastIdCount;
    int newIdCount;

    ifstream read("idcount.txt");

    if (read.is_open())
    {
        if (!(read >> lastIdCount))
        {
            lastIdCount = "0";
        }
        read.close();
    }
    else
    {
        lastIdCount = "0";
    }

    cout << "Last ID Count: " << lastIdCount << endl;

    if (operation == "add")
    {
        newIdCount = stoi(lastIdCount) + 1;
    }
    else
    {
        newIdCount = stoi(lastIdCount) - 1;
    }

    string number = to_string(newIdCount);

    ofstream write("idcount.txt");
    write << newIdCount << "\n";
    write.close();

    return number;
}

void addAccoutNumber()
{
    string accountNumber;
    string bank = "HBL";
    string branchCode = "10";

    string number = updateIdCount("add");

    accountNumber = bank + branchCode + number;

    ofstream write("accountnum.txt", ios::app);
    write << accountNumber << "\n";
    write.close();

    cout << "**********************************" << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Branch Code: " << branchCode << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "**********************************" << endl;
}

void addName(string name)
{
    ofstream write("names.txt", ios::app);
    write << name << "\n";
    write.close();

    cout << "**********************************" << endl;
    cout << "Name: " << name << endl;
    cout << "**********************************" << endl;
}

void addBalance(int balance)
{
    ofstream write("balance.txt", ios::app);
    write << balance << "\n";
    write.close();

    cout << "**********************************" << endl;
    cout << "Balance: " << balance << endl;
    cout << "**********************************" << endl;
}

void addAccount()
{
    string name, accountNumber;
    int balance;

    cout << "Enter your name: ";
    cin >> name;

    while (true)
    {
        cout << "Enter your balance: ";
        cin >> balance;

        if (balance >= 0)
        {
            break;
        }

        cout << "Entered balance cannot be negative" << endl;
    }

    addAccoutNumber();
    addName(name);
    addBalance(balance);
}

void deleteAccount()
{
    int id;
    cout << "Enter Account ID: ";
    cin >> id;

    ifstream readName("names.txt");
    ifstream readAccountNum("accountnum.txt");
    ifstream readBalance("balance.txt");

    cout << 1 << endl;

    if (readName.is_open() && readAccountNum.is_open() && readBalance.is_open())
    {
        vector<string> names;
        vector<string> accountNumbers;
        vector<string> balances;

        string name;
        string accountNumber;
        string balance;

        while (getline(readName, name))
        {
            names.push_back(name);
        }
        while (getline(readAccountNum, accountNumber))
        {
            accountNumbers.push_back(accountNumber);
        }
        while (getline(readBalance, balance))
        {
            balances.push_back(balance);
        }

        int record_index = id - 1;
        names.erase(names.begin() + record_index);
        accountNumbers.erase(accountNumbers.begin() + record_index);
        balances.erase(balances.begin() + record_index);

        ofstream writeName("names.txt", ios::trunc);
        ofstream writeAccountNum("accountnum.txt", ios::trunc);
        ofstream writeBalance("balance.txt", ios::trunc);

        if (writeName.is_open() && writeAccountNum.is_open() && writeBalance.is_open())
        {
            for (const string &updatedName : names)
            {
                writeName << updatedName << "\n";
            }
            writeName.close();

            for (const string &updatedAccountNumber : accountNumbers)
            {
                writeAccountNum << updatedAccountNumber << "\n";
            }
            writeAccountNum.close();

            for (const string &updatedBalance : balances)
            {
                writeBalance << updatedBalance << "\n";
            }
            writeBalance.close();

            updateIdCount("remove");
        }
        else
        {
            cout << "Unable to open file for writing." << endl;
        }
    }
    else
    {
        cout << "Account does not exist" << endl;
    }
}

int accountManagement()
{
    char choice;

    while (true)
    {
        displayAccountManagementMenu();

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 'a':
            displayAccounts();
            break;
        case 'b':
            addAccount();
            break;
        case 'c':
            deleteAccount();
            break;
        case 'x':
            return 0;
        default:
            cout << "wrong choice, please select one from above list" << endl;
            break;
        }
    }

    return 0;
}

void balanceInquiry()
{
    int accNum;
    cout << "Enter your account number without branch code to view balance: " << endl;
    cin >> accNum;

    ifstream readBalance("balance.txt");

    if (readBalance.is_open())
    {
        vector<string> balances;
        string balance;

        while (getline(readBalance, balance))
        {
            balances.push_back(balance);
        }

        cout << "Your balance is = " << balances[accNum - 1] << endl;

        cout << endl;
        cout << "*********************************************" << endl;
        cout << endl;
    }
}

int deposit()
{
    int accNum, amount;
    cout << "Enter your account number without branch code to deposit: " << endl;
    cin >> accNum;

    cout << "Enter amount: ";
    cin >> amount;

    ifstream readBalance("balance.txt");

    if (readBalance.is_open())
    {
        vector<string> balances;
        string balance;

        while (getline(readBalance, balance))
        {
            balances.push_back(balance);
        }

        int newBalance = stoi(balances[accNum - 1]) + amount;

        balances[accNum - 1] = to_string(newBalance);

        ofstream writeBalance("balance.txt", ios::trunc);

        for (const string &updatedBalance : balances)
        {
            writeBalance << updatedBalance << "\n";
        }
        writeBalance.close();

        cout << amount << " added, new balance is: " << newBalance << endl;

        cout << endl;
        cout << "*********************************************" << endl;
        cout << endl;
    }
}

int withdraw()
{
    int accNum, amount;
    cout << "Enter your account number without branch code to withdraw: " << endl;
    cin >> accNum;

    cout << "Enter amount: ";
    cin >> amount;

    ifstream readBalance("balance.txt");

    if (readBalance.is_open())
    {
        vector<string> balances;
        string balance;

        while (getline(readBalance, balance))
        {
            balances.push_back(balance);
        }

        int newBalance = stoi(balances[accNum - 1]) - amount;

        balances[accNum - 1] = to_string(newBalance);

        ofstream writeBalance("balance.txt", ios::trunc);

        for (const string &updatedBalance : balances)
        {
            writeBalance << updatedBalance << "\n";
        }
        writeBalance.close();

        cout << amount << " withdrawn, new balance is: " << newBalance << endl;

        cout << endl;
        cout << "*********************************************" << endl;
        cout << endl;
    }
}

int transfer()
{
    int senderAccNum, recieverAccNum, amount;
    
    cout << "Enter your sender's account number without branch code: " << endl;
    cin >> senderAccNum;

    cout << "Enter your reciever's account number without branch code: " << endl;
    cin >> recieverAccNum;

    cout << "Enter amount: ";
    cin >> amount;

    ifstream readBalance("balance.txt");

    if (readBalance.is_open())
    {
        vector<string> balances;
        string balance;

        while (getline(readBalance, balance))
        {
            balances.push_back(balance);
        }

        int senderNewBalance = stoi(balances[senderAccNum - 1]) - amount;
        int recieverNewBalance = stoi(balances[recieverAccNum - 1]) + amount;

        balances[senderAccNum - 1] = to_string(senderNewBalance);
        balances[recieverAccNum - 1] = to_string(recieverNewBalance);

        ofstream writeBalance("balance.txt", ios::trunc);

        for (const string &updatedBalance : balances)
        {
            writeBalance << updatedBalance << "\n";
        }
        writeBalance.close();

        cout << amount << " Transfered, new balance is: " << senderNewBalance << endl;

        cout << endl;
        cout << "*********************************************" << endl;
        cout << endl;
    }
}

int atm()
{
    char choice;
    displayAtmMenu();

    cout << "Enter your choice (a, b or c): " << endl;
    cin >> choice;

    switch (choice)
    {
    case 'a':
        balanceInquiry();
        break;
    case 'b':
        deposit();
        break;
    case 'c':
        withdraw();
        break;
    case 'd':
        transfer();
        break;
    default:
        cout << "wrong choice, please select one from above list" << endl;
        break;
    }

    return 0;
}

int main()
{
    char choice;

    while (true)
    {
        displayMainMenu();

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 'a':
            accountManagement();
            break;
        case 'b':
            atm();
            break;
        case 'c':
            displayPolicies();
            break;
        case 'x':
            return 0;
        default:
            break;
        }
    }
    return 0;
}
