#include <iostream>
#include <fstream>
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <bits/stdc++.h>
#include <vector>
#include "Packages.h"
using namespace std;

class vistara
{
private:
    string username;
    char passkey[50];
    string myname;

public:
    void reg_Username()
    {
        string inputstr;
        cout << "Please enter your full name: "
             << "\t";
        getline(cin, myname);
        ofstream outfile;
        ofstream outfile1;
        outfile.open("profile.txt", std::ios_base::app);
        outfile1.open("rec.txt", std::ios_base::app);
        outfile << "Full Name: " << myname << endl;
        outfile1 << "Full Name: " << myname << endl;
        outfile.close();
        outfile1.close();
        cout << "Please enter the Username: "
             << "\t";
        getline(cin, username);
        fstream outfile1;
        outfile1.open("rec.txt", std::ios_base::app);
        outfile1 << "Username: " << username << endl;
        outfile1.close();
        cout << "please enter the Password: "
             << "\t";
        cin.getline(passkey, 50);
        cout << "Type login to continue: "
             << "\t";
        cout << endl;
        getline(cin, inputstr);
        string type = "login";
        if (inputstr == type)
        {
            Auth(username, passkey);
        }
        else
        {
            cout << "Invalid!, try again" << endl;
            exit();
        }
    }

    void Auth(string user, string pass)
    {
        string user1;
        string pass1;
        {
            user1 = user;
            pass1 = pass;
            ofstream myfile;
            myfile.open("profile.txt");
            myfile << "Username: " << user1 << "\t";
            myfile << "Password: " << pass1 << "\t";
            myfile.close();
        }
        dashboard(user1, pass1);
    }

    void exit()
    {
        exit();
    }

    void dashboard(string u, string p)
    {
        char u1[50];
        string p1;
        {
            cout << "Please confirm your username" << endl;
            cin.getline(u1, 50);
            cout << endl;
            cout << "Please confirm your password" << endl;
            cout << endl;
            getline(cin, p1);
        }
        if (u1 == u && p1 == p)
        {
            cout << "------------------| WELCOME TO THE DASHBOARD |------------------" << endl;
            cout << "Hi! " << username << endl;
            cout << endl;
            cout << "Now we are gonna complete your profile registration: " << endl;
            profile();
        }
        else
        {
            cout << "Invalid, try again :D" << endl;
            dashboard(u, p);
        }
    }

    void profile()
    {
        string emailID;
        long int contactNo;
        cout << "Please enter your emailID: " << endl;
        getline(cin, emailID);
        cout << endl;
        cout << "Please enter your contact Number: " << endl;
        cin >> contactNo;
        cout << endl;
        ofstream outfile;
        outfile.open("profile.txt", std::ios_base::app);
        outfile.open("rec.txt", std::ios_base::app);
        outfile << "Email ID: " << emailID << endl;
        outfile << "Contact Number: " << contactNo << endl;
        intro();
        outfile.close();
    }

    void intro()
    {
        cout << "--------------------------------------------------------------------" << endl;
        cout << "“IF YOU THINK ADVENTURE IS DANGEROUS, TRY ROUTINE, IT'S LETHAL”" << endl;
        cout << endl;
        cout << "Hey, Our server detected that your location is India!"
             << "\n";
        cout << "Redirecting to Vistara-India..." << endl;
        cout << "....." << endl;
        cout << "...." << endl;
        cout << "..." << endl;
        cout << "calling Vistara India -- Server" << endl;
        cout << "Welcome to Vistara India -- Tours and Travels Agency!" << endl;
        cout << endl;
        cout << endl;
        choose_packages();
    }

    void choose_packages()
    {
        int choice;
        cout << "Choose your choice of packages" << endl;
        cout << " [1] International Tour Packages \n [2] Indian Tour Packages \n [3] Best Offers \n [4] Round Way Trip" << endl;
        cin >> choice;
        string ch1 = "ITP";
        string ch2 = "IndTP";
        string ch3 = "OffTrip";
        string ch4 = "Round Way";
        string input_str1;
        if (choice == 1)
        {
            input_str1 = ch1;
        }
        else if (choice == 2)
        {
            input_str1 = ch2;
        }
        else if (choice == 3)
        {
            input_str1 = ch3;
        }
        else if (choice == 4)
        {
            input_str1 = ch4;
        }
        else
        {
            cout << "Invalid, please try again!" << endl;
        }
        ofstream outfile;
        outfile.open("profile.txt", std::ios_base::app);
        outfile << "Package Chosen:- " << input_str1 << endl;
        switch (choice)
        {
        case 1:
            cout << "Great! Let's browse you some good international tour packages" << endl;
            cout << "Please fill in the details for the trip: " << endl;
            break;

        case 2:
            cout << "Kudos, Looks like you wanna see your motherland, lets get you some good Indian travelling packages" << endl;
            cout << "Please fill in the details for the trip: " << endl;
            break;

        case 3:
            cout << "Vistara India Believes in getting you the best offers out there to let you freely roam across destinations with minimum money, and best services" << endl;
            cout << "Please fill in the details for the trip: " << endl;
            break;

        case 4:
            cout << "Gettin you the best economical Round trip, wait!" << endl;
            cout << "Please fill in the details for the trip: " << endl;
            break;

        default:
            cout << "Invalid, Please try again :)" << endl;
            choose_packages();
            break;
        }
        outfile.close();
    }
};

class PersonalDetails
{
private:
    string name;
    unsigned int age;
    char gender;

public:
    PersonalDetails()
    {
        cout << "Enter name of passenger : ";
        cin >> this->name;
        cout << "Enter age of passenger : ";
        cin >> this->age;
        cout << "Enter gender of the passenger (M/F) : ";
        cin >> this->gender;
    }
    void WriteDetails()
    {
        ofstream fs;
        fs.open("profile.txt", ios_base::app);
        fs << "Name : " << this->name << endl;
        fs << "Age : " << this->age << endl;
        fs << "Gender : " << this->gender << endl;
        fs.close();
    }
};

Pckg::Pckg(int id, int nod, string sou, string dest, double price)
{
    this->numberOfDays = nod;
    this->P_Destination = dest;
    this->P_Source = sou;
    this->P_Price = price;
    this->P_Id = id;
}
Pckg::Pckg(int id, int nod, string sou, string dest, double price, bool oneWay)
{
    this->numberOfDays = nod;
    this->P_Destination = dest;
    this->P_Source = sou;
    this->P_Price = price;
    this->P_Id = id;
    this->isOneWay = oneWay;
}
Pckg::Pckg()
{
}
void Pckg::Pckgoptionitp()
{
    cout << "Vistara offers a large number of trips and packages" << endl;
    cout << "Let's browse you through some of them" << endl;
    cout << "[1] Emperor Package -- {A great Britain Trip}" << endl;
    cout << "[2] VisitUAE" << endl;
    cout << "[3] Trek around USA" << endl;
    cout << "[4] Wandering India" << endl;
    cout << "[5] Country back Australia" << endl;
    cout << "[6] get a Cape of Good Hope" << endl;
    cout << "[7] Pretty Prague -- {Highly recommended for the new couples}" << endl;
    cout << "[8] 10 days on clouds -- {Three full days on Your chosen flight across the mid-western country}" << endl;
    cout << "[9] 3 railroad nights! -- {Three day nights across the Indian Country abord Maharajas Express" << endl;
    cout << "[10] Let's go Wolves in Alaska" << endl;
    int choose;
    cin >> choose;
    if (choose == 1)
    {
        FILE *fptr;
        char c;
        fptr = fopen("Emperor.txt", "r");
        if (fptr == NULL)
        {
            cout << "Cannot open file" << endl;
            exit(0);
        }

        // Read contents from file
        c = fgetc(fptr);
        while (c != EOF)
        {
            cout << c;
            c = fgetc(fptr);
        }

        fclose(fptr);
        ofstream outfile;
        outfile.open("profile.txt", std::ios_base::app);
        outfile << "Package Choosen:- "
                << "Emperor Package -- {A great Britain Trip}" << endl;
        ofstream outfile1;
        outfile1.open("rec.txt", std::ios_base::app);
        outfile1 << "Package Choosen:- "
                 << "Emperor Package -- {A great Britain Trip}" << endl;
    }
    else if (choose == 2)
    {
        ofstream outfile;
        outfile.open("profile.txt", std::ios_base::app);
        outfile << "Package Choosen:- "
                << "VisitUAE" << endl;
        ofstream outfile1;
        outfile1.open("rec.txt", std::ios_base::app);
        outfile1 << "Package Choosen:- "
                 << "VisitUAE" << endl;
    }
    else if (choose == 3)
    {
        ofstream outfile;
        outfile.open("profile.txt", std::ios_base::app);
        outfile << "Package Choosen:- "
                << "Trek around USA" << endl;
        ofstream outfile1;
        outfile1.open("rec.txt", std::ios_base::app);
        outfile1 << "Package Choosen:- "
                 << "Trek around USA" << endl;
    }
    else if (choose == 4)
    {
        ofstream outfile;
        outfile.open("profile.txt", std::ios_base::app);
        outfile << "Package Choosen:- "
                << "Wandering India" << endl;
        ofstream outfile1;
        outfile1.open("rec.txt", std::ios_base::app);
        outfile1 << "Package Choosen:- "
                 << "Wandering India" << endl;
    }
    else if (choose == 5)
    {
        ofstream outfile;
        outfile.open("profile.txt", std::ios_base::app);
        outfile << "Package Choosen:- "
                << "Country back Australia" << endl;
        ofstream outfile1;
        outfile1.open("rec.txt", std::ios_base::app);
        outfile1 << "Package Choosen:- "
                 << "Country back Australia" << endl;
    }
    else if (choose == 6)
    {
        ofstream outfile;
        outfile.open("profile.txt", std::ios_base::app);
        outfile << "Package Choosen:- "
                << "get a Cape of good Hope" << endl;
        ofstream outfile1;
        outfile1.open("rec.txt", std::ios_base::app);
        outfile1 << "Package Choosen:- "
                 << "get a Cape of good Hope" << endl;
    }
    else if (choose == 7)
    {
        ofstream outfile;
        outfile.open("profile.txt", std::ios_base::app);
        outfile << "Package Choosen:- "
                << "Pretty Prague -- {Highly recommended for the new couples" << endl;
        ofstream outfile1;
        outfile1.open("rec.txt", std::ios_base::app);
        outfile1 << "Package Choosen:- "
                 << "Pretty Prague -- {Highly recommended for the new couples" << endl;
    }
    else if (choose == 8)
    {
        ofstream outfile;
        outfile.open("profile.txt", std::ios_base::app);
        outfile << "Package Choosen:- "
                << "10 days on clouds -- {Three full days on Your chosen flight across the mid-western country" << endl;
        ofstream outfile1;
        outfile1.open("rec.txt", std::ios_base::app);
        outfile1 << "Package Choosen:- "
                 << "10 days on clouds -- {Three full days on Your chosen flight across the mid-western country" << endl;
    }
    else if (choose == 9)
    {
        ofstream outfile;
        outfile.open("profile.txt", std::ios_base::app);
        outfile << "Package Choosen:- "
                << "3 railroad nights! -- {Three day nights across the Indian Country abord Maharajas Express" << endl;
        ofstream outfile1;
        outfile1.open("rec.txt", std::ios_base::app);
        outfile1 << "Package Choosen:- "
                 << "3 railroad nights! -- {Three day nights across the Indian Country abord Maharajas Express" << endl;
    }
    else if (choose == 10)
    {
        ofstream outfile;
        outfile.open("profile.txt", std::ios_base::app);
        outfile << "Package Choosen:- "
                << "Let's go Wolves in Alaska" << endl;
        ofstream outfile1;
        outfile1.open("rec.txt", std::ios_base::app);
        outfile1 << "Package Choosen:- "
                 << "Let's go Wolves in Alaska" << endl;
    }
    else
    {
        cout << "Please try again" << endl;
        Pckgoptionitp();
    }
}

void Pckg::PckgoptionindTP()
{
    cout << "Vistara offers a large number of trips and packages" << endl;
    cout << "Let's browse you through some of them" << endl;
    cout << "[1] Maharajas Package" << endl;
    cout << "[2] Udaipur Days" << endl;
    cout << "[3] Deltas of Gujarat" << endl;
    cout << "[4] Wandering M.P" << endl;
    cout << "[5] Goa, Daman and Diu :D" << endl;
    int choose1;
    cin >> choose1;
    if (choose1 == 1)
    {
        ofstream outfile;
        outfile.open("profile.txt", std::ios_base::app);
        outfile << "Package Choosen:- "
                << "Maharajas Package" << endl;
        ofstream outfile1;
        outfile1.open("rec.txt", std::ios_base::app);
        outfile1 << "Package Choosen:- "
                 << "Maharajas Package" << endl;
    }
    else if (choose1 == 2)
    {
        ofstream outfile;
        outfile.open("profile.txt", std::ios_base::app);
        outfile << "Package Choosen:- "
                << "Udaipur Days" << endl;
        ofstream outfile1;
        outfile1.open("rec.txt", std::ios_base::app);
        outfile1 << "Package Choosen:- "
                 << "Udaipur Days" << endl;
    }
    else if (choose1 == 3)
    {
        ofstream outfile;
        outfile.open("profile.txt", std::ios_base::app);
        outfile << "Package Choosen:- "
                << "Deltas of Gujarat" << endl;
        ofstream outfile1;
        outfile1.open("rec.txt", std::ios_base::app);
        outfile1 << "Package Choosen:- "
                 << "Deltas of Gujarat" << endl;
    }
    else if (choose1 == 4)
    {
        ofstream outfile;
        outfile.open("profile.txt", std::ios_base::app);
        outfile << "Package Choosen:- "
                << "Wandering M.P" << endl;
        ofstream outfile1;
        outfile1.open("rec.txt", std::ios_base::app);
        outfile1 << "Package Choosen:- "
                 << "Wandering M.P" << endl;
    }
    else if (choose1 == 5)
    {
        ofstream outfile;
        outfile.open("profile.txt", std::ios_base::app);
        outfile << "Package Choosen:- "
                << "Goa, Daman and Diu :D" << endl;
        ofstream outfile1;
        outfile1.open("rec.txt", std::ios_base::app);
        outfile1 << "Package Choosen:- "
                 << "Goa, Daman and Diu :D" << endl;
    }
    else
    {
        cout << "Please try again" << endl;
        PckgoptionindTP();
    }
}
void Pckg::GetDate(int pckgId)
{
    cout << "\n";
    cout << "Please enter the starting date of your trip" << endl;
    cout << "Please follow the format of dd/mm/yyyy" << endl;
    int month, date, year;
    cout << "Date: "
         << "\t";
    cin >> date;
    cout << "Month: "
         << "\t";
    cin >> month;
    cout << "Year: "
         << "\t";
    cin >> year;
    cout << "Your selected date is: " << date << "/" << month << "/" << year << endl;
    cout << "Your ending date would depend upon the trip days mentioned in the package of your choice" << endl;
    PckgGet(pckgId);
}

void Pckg::PckgGet(int pckgId)
{
    cout << "Enter number of passengers : ";
    int noOfPass;
    cin >> noOfPass;
    vector<PersonalDetails> pd;
    for (int i = 0; i < noOfPass; i++)
    {
        PersonalDetails p;
        p.WriteDetails();
        pd.push_back(p);
    }
    while (true)
    {
        cout << "Enter Package Id: ";
        cin >> P_Id;
        if (P_Id == pckgId)
        {
            cout << "You are succesfully booked, please check in rec.txt" << endl;
            break;
        }
        else
        {
            cout << "OOPS! Wrong Package ID, try again" << endl;
        }
    }
}
string Pckg::getSource()
{
    return this->P_Source;
}
string Pckg::getDestination()
{
    return this->P_Destination;
}
int Pckg::getId()
{
    return this->P_Id;
}
int Pckg::getNumberOfDays()
{
    return this->P_Id;
}
bool Pckg::IsOneWay()
{
    return this->isOneWay;
}
double Pckg::getPrice()
{
    return this->P_Price;
}
void Pckg::Display()
{
    cout << "Id :- " << this->P_Id << endl;
    cout << "Source :- " << this->P_Source << endl;
    cout << "Destintion :-" << this->P_Destination << endl;
    cout << "Number of Days :- " << this->numberOfDays << endl;
    cout << "Price :- " << this->P_Price << endl;
}

int main()
{
    vistara v;
    string input;
    string s1 = "rm";
    cout << "------------------------------------" << endl;
    cout << "WELCOME TO VISTARA TRAVELLING PORTAL" << endl;
    cout << "------------------------------------" << endl;
    cout << "Wonderful day, isnt it?" << endl;
    cout << "So Glad to have you here, Let's start with registering you!" << endl;
    cout << "Type Register me (Case sensitive) to go to start your registration" << endl;
    getline(cin, input);
    if (input == s1)
    {
        string name;
        cout << "First let's get your Name, right?!" << endl;
        cout << "---------------------------------" << endl;
        cout << "Please enter your name" << endl;
        cout << "----------------------" << endl;
        getline(cin, name);
        int pckgId;
        pckgId = rand() % 9000 + 1000;
        srand(time(NULL));
        cout << "Your Package ID is: " << pckgId << endl;
        cout << "Please remember it for later confirmation while booking" << endl;
        v.reg_Username();

        Pckg p;
        p.Pckgoptionitp();
<<<<<<< HEAD
        p.GetDate(pckgId);
    }
    == == == =
                 p.GetDate();
}
>>>>>>> a47e9eb51d588a5763d4b5762dc1d410c0559269
else
{
    cout << "Invalid, visit us again" << endl;
    return 0;
}
}