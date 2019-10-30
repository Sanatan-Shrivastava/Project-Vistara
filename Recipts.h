#ifndef RECIPTS_H
#define RECIPTS_H
#include "Packages.h"

class Recipt
{
private:
    std::ofstream fout;
public:
    void createFile();
    void enterInformation(std::string id, Pckg choice);
    void completeRecipt();
};

#endif