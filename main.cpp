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
        cout << "Please enter your full name: " << endl;
        cin.ignore();
        getline(cin, myname);
        ofstream outfile3;
        ofstream outfile1;
        outfile3.open("profile.txt", std::ios_base::app);
        outfile1.open("rec.txt", std::ios_base::app);
        outfile3 << "Full Name: " << myname << endl;
        outfile1 << "Full Name: " << myname << endl;  
        outfile3.close();
        outfile1.close();
        cout << "Please enter the Username: " << endl;
        getline(cin, username);
        ofstream outfile;
        ofstream outfile2;
        outfile.open("profile.txt", std::ios_base::app);
        outfile2.open("rec.txt", std::ios_base::app);
        outfile << "Full Name: " << myname << endl;
        outfile2 << "Full Name: " << myname << endl;  
        outfile.close();
        outfile2.close(); 
        cout << "please enter the Password: " << endl;
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
            ofstream myfile1;
            myfile.open("profile.txt");
            myfile1.open("rec.txt");
            myfile << "Username: " << user1 << endl;
            myfile1 << "Username: " << user1 << endl;
            myfile << "Password: " << pass1 << endl;
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
        char address[100];
        long int contactNo;
        cout << "Please enter your emailID: " << endl;
        cin.ignore();
        getline(cin, emailID);
        cout << endl;
        cout << "Please enter your contact Number: " << endl;
        cin >> contactNo;
        cout << endl;
        cout << "Please enter your Address: " << endl;
        cin.ignore();
        cin.getline(address, 100);
        cout << endl;
        ofstream outfile;
        ofstream outfile1;
        ofstream outfile4;
        outfile.open("profile.txt", std::ios_base::app);
        outfile4.open("rec.txt", std::ios_base::app);
        outfile << "Email ID: " << emailID << endl;
        outfile << "Contact Number: " << contactNo << endl;
        outfile1 << "Email ID: " << emailID << endl;
        outfile1 << "Contact Number: " << contactNo << endl;
        outfile4 << "Address: " << address << endl;
        intro();
        outfile.close();
        outfile1.close();
        outfile4.close();
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
        cout << " [1] International Tour Packages \n [2] Indian Tour Packages \n [3] Best Offers" << endl;
        cin >> choice;
        string ch1 = "ITP";
        string ch2 = "IndTP";
        string ch3 = "OffTrip";
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
            cout << "Offers for this season has expired!!, Please check back in next season" << endl;
        }
        else
        {
            cout << "Invalid, please try again!" << endl;
        }
        ofstream outfile;
        outfile.open("profile.txt", std::ios_base::app);
        outfile << "Package Chosen:- " << input_str1 << endl;
        Pckg object_p;
        switch (choice)
        {
        case 1:
            cout << "Great! Let's browse you some good international tour packages" << endl;
            cout << "Please fill in the details for the trip: " << endl;
            object_p.Pckgoptionitp();
            break;

        case 2:
            cout << "Kudos, Looks like you wanna see your motherland, lets get you some good Indian travelling packages" << endl;
            cout << "Please fill in the details for the trip: " << endl;
            object_p.PckgoptionindTP();
            break;

        case 3:
            cout << "Vistara India Believes in getting you the best offers out there to let you freely roam across destinations with minimum money, and best services" << endl;
            cout << "SORRY!, currently no offers for this season. Please check later!" << endl;
            exit();
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
        ofstream outfile;
        outfile.open("rec.txt", std::ios_base::app);
        outfile << "--------------------------------------" << endl;
        outfile << "Name of passenger : " << this->name << endl;
        outfile << "Age of passenger : " << this->age << endl;
        outfile << "Gender of the passenger (M/F) : " << this->gender << endl;
        outfile << "--------------------------------------" << endl;
        outfile << "Have a happy trip, Best Wishes from Vistara" << endl;
        outfile.close();
    }
    void WriteDetails()
    {
        
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
        ofstream outfile19;
        outfile19.open("rec.txt", std::ios_base::app);
        outfile19 << "Package Choosen:- " << "Emperor Package -- {A great Britain Trip}" << endl; 
        outfile19 << "Cost: 150000/-" << endl;
        
        outfile19.close();

    } else if(choose == 2){
        FILE *fptr;
        char c;
        fptr = fopen("visitUAE.txt", "r");
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
        outfile << "Package Choosen:- " << "VisitUAE" << endl; 
        ofstream outfile19;
        outfile19.open("rec.txt", std::ios_base::app);
        outfile19 << "Package Choosen:- " << "VisitUAE" << endl; 
        outfile19 << "Cost: 150000/-" << endl;
        
        outfile19.close();
    } else if(choose == 3){
        FILE *fptr;
        char c;
        fptr = fopen("Trek_aorund_USA.txt", "r");
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
        outfile << "Package Choosen:- " << "Trek around USA" << endl; 
        ofstream outfile20;
        outfile20.open("rec.txt", std::ios_base::app);
        outfile20 << "Package Choosen:- " << "Trek Around USA" << endl; 
        outfile20 << "Cost: 220000/-" << endl;
        
        outfile20.close();
    } else if(choose == 4){
        FILE *fptr;
        char c;
        fptr = fopen("Wandering_India.txt", "r");
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
        outfile << "Package Choosen:- " << "Wandering India" << endl; 
        ofstream outfile21;
        outfile21.open("rec.txt", std::ios_base::app);
        outfile21 << "Package Choosen:- " << "Wandering India" << endl; 
        outfile21.close();
        outfile.close();
        outfile21 << "Cost(inclusive of GST+Taxes): 250000/-" << endl;
        
        outfile21.close();
    } else if(choose == 10){
        FILE *fptr;
        char c;
        fptr = fopen("Wolvws_in_alaska.txt", "r");
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
        outfile << "Package Choosen:- " << "Wolves in Alaska" << endl; 
        ofstream outfile1;
        outfile1.open("rec.txt", std::ios_base::app);
        ofstream outfile23;
        outfile23.open("rec.txt", std::ios_base::app);
        outfile23 << "Package Choosen:- " << "Wolves in Alaska" << endl;
        outfile23 << "Cost(inclusive of GST+Taxes): 250000/-" << endl;
        
        outfile23.close(); 
    }
    else if (choose == 5)
    {
        FILE *fptr;
        char c;
        fptr = fopen("Country_back_Australia.txt", "r");
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
        outfile << "Package Choosen:- " << "Country Back Australia" << endl; 
        ofstream outfile22;
        outfile22.open("rec.txt", std::ios_base::app);
        outfile22 << "Package Choosen:- " << "Country Back Australia" << endl; 
        outfile22 << "Cost(inclusive of GST+Taxes): 250000/-" << endl;
        
        outfile22.close();
    }
    else if (choose == 6)
    {
        FILE *fptr;
        char c;
        fptr = fopen("Cape_of_good_hope.txt", "r");
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
        outfile << "Package Choosen:- " << "Cape of Good Hope" << endl; 
        ofstream outfile1;
        outfile1.open("rec.txt", std::ios_base::app);
        ofstream outfile25;
        outfile25.open("rec.txt", std::ios_base::app);
        outfile25 << "Package Choosen:- " << "Cape of Good Hope" << endl; 
        outfile25 << "Cost(inclusive of GST+Taxes): 250000/-" << endl;
        outfile25.close();
    }
    else if (choose == 7)
    {
        FILE *fptr;
        char c;
        fptr = fopen("Pretty_Prague.txt", "r");
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
        outfile << "Package Choosen:- " << "Pretty Prague" << endl; 
        ofstream outfile26;
        outfile26.open("rec.txt", std::ios_base::app);
        outfile26 << "Package Choosen:- " << "Pretty Prague" << endl; 
        outfile26 << "Cost(inclusive of GST+Taxes): 250000/-" << endl;
        outfile26 << "Have a safe journey, A big thanks from Vistara" << endl;
        outfile26.close();
    }
    else if (choose == 8)
    {
        FILE *fptr;
        char c;
        fptr = fopen("10_days_on_cloud.txt", "r");
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
        outfile << "Package Choosen:- " << "10 days on cloud" << endl; 
        ofstream outfile19;
        outfile19.open("rec.txt", std::ios_base::app);
        outfile19 << "Package Choosen:- " << "10 Days on cloud" << endl; 
        outfile19.close();
        outfile.close();
        outfile19<< "Cost(inclusive of GST+Taxes): 250000/-" << endl;
        outfile19 << "Have a safe journey, A big thanks from Vistara" << endl;
        outfile19.close();
    }
    else if (choose == 9)
    {
        FILE *fptr;
        char c;
        fptr = fopen("3_raiload_nights.txt", "r");
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
        outfile << "Package Choosen:- " << "3 Railroad Nights" << endl; 
        ofstream outfile1;
        outfile1.open("rec.txt", std::ios_base::app);
        ofstream outfile30;
        outfile30.open("rec.txt", std::ios_base::app);
        outfile30 << "Package Choosen:- " << "3 Railroad Nights" << endl; 
        outfile30 << "Cost(inclusive of GST+Taxes): 250000/-" << endl;
       
        outfile30.close();
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
        FILE *fptr;
        char c;
        fptr = fopen("Maharajas.txt", "r");
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
        outfile << "Package Choosen:- " << "Maharajas Package" << endl; 
        ofstream outfile1;
        outfile1.open("rec.txt", std::ios_base::app);
        ofstream outfile30;
        outfile30.open("rec.txt", std::ios_base::app);
        outfile30 << "Package Choosen:- " << "Maharajas Package" << endl; 
        outfile30 << "Cost(inclusive of GST+Taxes): 250000/-" << endl;
        outfile30.close();
    }
    else if (choose1 == 2)
    {
        FILE *fptr;
        char c;
        fptr = fopen("Udaipur_days.txt", "r");
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
        outfile << "Package Choosen:- " << "Udaipur Days" << endl; 
        ofstream outfile1;
        outfile1.open("rec.txt", std::ios_base::app);
        ofstream outfile30;
        outfile30.open("rec.txt", std::ios_base::app);
        outfile30 << "Package Choosen:- " << "Udaipur Days" << endl; 
        outfile30 << "Cost(inclusive of GST+Taxes): 250000/-" << endl;
       
        outfile30.close();
    }
    else if (choose1 == 3)
    {
        FILE *fptr;
        char c;
        fptr = fopen("Deltas_of_gujrat.txt", "r");
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
        outfile << "Package Choosen:- " << "Deltas of Gujarat" << endl; 
        ofstream outfile1;
        outfile1.open("rec.txt", std::ios_base::app);
        ofstream outfile30;
        outfile30.open("rec.txt", std::ios_base::app);
        outfile30 << "Package Choosen:- " << "Deltas of Gujarat" << endl; 
        outfile30 << "Cost(inclusive of GST+Taxes): 250000/-" << endl;
       
        outfile30.close();
    }
    else if (choose1 == 4)
    {
        FILE *fptr;
        char c;
        fptr = fopen("Wandering_MP.txt", "r");
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
        outfile << "Package Choosen:- " << "Wandering M.P" << endl; 
        ofstream outfile1;
        outfile1.open("rec.txt", std::ios_base::app);
        ofstream outfile30;
        outfile30.open("rec.txt", std::ios_base::app);
        outfile30 << "Package Choosen:- " << "Wandering M.P" << endl; 
        outfile30 << "Cost(inclusive of GST+Taxes): 250000/-" << endl;
       
        outfile30.close();
    }
    else if (choose1 == 5)
    {
        FILE *fptr;
        char c;
        fptr = fopen("Goa_Daman_and_Due.txt", "r");
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
        outfile << "Package Choosen:- " << "Goa, Daman, Diu :D" << endl; 
        ofstream outfile30;
        outfile30.open("rec.txt", std::ios_base::app);
        outfile30 << "Package Choosen:- " << "Goa, Daman, Diu :D" << endl; 
        outfile30 << "Cost(inclusive of GST+Taxes): 250000/-" << endl;
       
        outfile30.close();
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
    ofstream outfile;
    outfile.open("rec.txt", std::ios_base::app);
    outfile << "Your selected date is: " << date << "/" << month << "/" << year << endl; 
    outfile.close();
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
            cout << "Have a safe journey, A big thanks from Vistara :D" << endl;
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
    string s1 = "Register me";
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
        p.GetDate(pckgId);
        }
    else
    {
        cout << "Invalid, visit us again" << endl;
        return 0;
    }
}