#include "pet.h"
string Pet::getName(){
    return name;
}
void Pet::setName(string newName){
    name = newName;
}
void Pet::setSpecies(string newSpecies) {
    species = newSpecies;
}
string Pet::getSpecies() {
    return species;
}
void Pet::printNameAndSpecies(){
    cout << name << " " << species << endl;
}
