#include "pet.h"
int main(){
    Pet gaston;
    gaston.setName("Gaston");
    gaston.setSpecies("Canine");
    Pet petArray[2];
    petArray[0] = gaston;
    Pet filbert;
    filbert.setName("Filbert");
    filbert.setSpecies("Feline");
    petArray[1] = filbert;
    petArray[0].printNameAndSpecies();
    petArray[1].printNameAndSpecies();
    return 0;
}
