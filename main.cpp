#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;


class vistara{
    private:
    string username;
    char passkey[50];

    public:
    void reg_Username(){
        string inputstr;
        cout << "Please enter the Username:" << endl;
        getline(cin, username);
        cout << "please enter the Password" << endl;
        cin.getline(passkey, 50);
        cout << "Type login to continue" << endl;
        cout << endl;
        getline(cin, inputstr);
        string type = "login";
        if(inputstr == type){
            Auth(username, passkey);
        }else{
        cout<<"Invalid, try again" << endl; 
        exit();
        }
    }

    void Auth(string user, string pass){
        string user1;
        string pass1;
        {
            user1 = user;
            pass1 = pass;
            ofstream myfile;
            myfile.open ("example.txt");
            myfile << "Username: " << user1 << endl;
            myfile << "Password: " << pass1 << endl;
            myfile.close();
        }
        dashboard(user1, pass1);
    }

    void exit(){
    exit();
    }


    void dashboard(string u, string p){
        char u1[50]; string p1;
        {
        cout << "Please confirm your username" << endl;
        cin.getline(u1, 50);
        cout << endl;
        cout << "Please confirm your password" << endl;
        cout << endl;
        getline(cin, p1);
        }
        if(u1 == u && p1 == p){
        cout << "------------------| WELCOME TO THE DASHBOARD |------------------" << endl;
        cout << "Hi! " << username << endl; 
        cout << endl;
        cout << "Now we are gonna complete your profile registration: " << endl;
        profile();
        }else{
            cout <<"Invalid, try again :D" << endl;
            dashboard(u,p);
        }
    }

    void profile(){
        string emailID;
        long int contactNo;
        cout << "Please enter your emailID: " << endl;
        getline(cin, emailID);
        cout << endl;
        cout << "Please enter your contact Number: " << endl;
        cin >> contactNo;
        cout << endl;
        ofstream outfile;
        outfile.open("example.txt", std::ios_base::app);
        outfile << "Email ID: " << emailID << endl;
        outfile << "Contact Number: " << contactNo << endl;
        intro();
    }


    void intro(){
        cout << "--------------------------------------------------------------------" << endl;
        cout << "“IF YOU THINK ADVENTURE IS DANGEROUS, TRY ROUTINE, IT'S LETHAL”" << endl;
        cout << endl;
        cout << "Hey, Our server detected that your location is India!" << "\n";
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


    void choose_packages(){
        int choice;
        cout << "Choose your choice of packages" << endl;
        cout << " [1] International Tour Packages \n [2] Indian Tour Packages \n [3] Best Offers \n [4] Round Way Trip" << endl;
        cin >> choice;
        string ch1 = "ITP";
        string ch2 = "IndTP";
        string ch3 = "OffTrip";
        string ch4 = "Round Way";
        string input_str1;
        if(choice == 1){
            input_str1 = ch1;
        }else if(choice == 2){
            input_str1 = ch2;
        }else if(choice == 3){
            input_str1 = ch3;
        }else if(choice == 4){
            input_str1 = ch4;
        }else{
            cout << "Invalid, please try again!" << endl;
        }
        ofstream outfile;
        outfile.open("example.txt", std::ios_base::app);
        outfile << "Package Chosen:- " << input_str1 << endl;
        switch(choice){
            case 1:
            cout << "Great! Let's browse you some good international tour packages" << endl;
            itp();
            break;

            case 2:
            cout << "Kudos, Looks like you wanna see your motherland, lets get you some good Indian travelling packages" << endl;
            indtp();
            break;

            case 3:
            cout << "Vistara India Believes in getting you the best offers out there to let you freely roam across destinations with minimum money, and best services" << endl;
            best_offers();
            break;

            case 4:
            cout << "Gettin you the best economical Round trip, wait!" << endl;
            round_trip();
            break;

            default:
            cout << "Invalid, Please try again :)" << endl;
            choose_packages();
            break;
        }
    }

    void itp(){
        registration();
    }
    void indtp(){
        cout << "f001" << endl;
    }
    void best_offers(){
        cout << "f001121" << endl;
    }
    void round_trip(){
        cout << "Yes!!!" << endl;
    }



    // -----------------------------------------------------
    void registration(){
        int travelcode;
        int  age[20];
        char name[20][20];
        char add[50];
        char phnum[15];
        char sex[20];
        int number_of_people;
        string travel;
    }
};

// Driver code:

int main(){

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
    if(input == s1){
        string name;
        cout << "First let's get your Name right?!" << endl;
        cout << "Please enter your name" << endl;
        getline(cin, name);
        ofstream outfile;
        outfile.open("example.txt", std::ios_base::app);
        outfile << "Full Name: " << name << endl;       
        v.reg_Username();
    }else{
        cout << "Invalid, visit us again" << endl;
        return 0;
    }
}