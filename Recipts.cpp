#include <iostream>
#include <fstream>
#include "Packages.h"
#include "Recipts.h"
using namespace std;

void Recipt::createFile()
{
    fout.open("example.txt");
}
void Recipt::enterInformation(string id, Pckg choice)
{
    fout << "VISTARA TRAVELS\n";
    fout << "Customer Name : " << id << endl;
    fout << "Package \t\t Price" << endl;
    fout << choice.getSource() << "-" << choice.getDestination() << "\t" << choice.getPrice() << endl;
}
void Recipt::completeRecipt()
{
    fout.close();
}
