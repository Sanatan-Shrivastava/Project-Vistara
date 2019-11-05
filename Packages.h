#ifndef PACKAGES_H
#define PACKAGES_H

class Pckg
{
private:
    int P_Id, numberOfDays;
    std::string P_Source, P_Destination;
    bool isOneWay = false;
    double P_Price;
public:
    Pckg(int id, int nod, std::string sou, std::string dest, double price);
    Pckg(int id, int nod, std::string sou, std::string dest, double price, bool oneWay);
    Pckg();
    void PckgGet(int);
    void Pckgoptionitp();
    void PckgoptionindTP();
<<<<<<< HEAD
    void GetDate(int);
=======
    void GetDate();
>>>>>>> a47e9eb51d588a5763d4b5762dc1d410c0559269
    int getId(); 
    std::string getDestination();
    std::string getSource();
    int getNumberOfDays();
    bool IsOneWay();
    double getPrice();
    void Display();
};



#endif