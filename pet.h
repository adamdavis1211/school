#ifndef PET_H
#define PET_H
#include <iostream>
using namespace std;
class Pet{
    string name;
    string species;
    public:
        string getName();
        void setName(string);
        string getSpecies();
        void setSpecies(string);
        void printNameAndSpecies();
};
#endif
