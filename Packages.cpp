#include <iostream>
#include "Packages.h"
using namespace std;

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
void Pckg::PckgGet()
{

    cout << "enter number of days : ";
    cin >> numberOfDays;
    cout << "enter Source : ";
    cin >> P_Source;
    cout << "enter Destination : ";
    cin >> P_Destination;
    cout << "enter Package Id : ";
    cin >> P_Id;
    cout << "enter Price : ";
    cin >> P_Price;
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
    cout << "Destination :-" << this->P_Destination << endl;
    cout << "Number of Days :- " << this->numberOfDays << endl;
    cout << "Price :- " << this->P_Price << endl;
}