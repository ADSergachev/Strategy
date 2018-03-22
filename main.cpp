#include <iostream>
#include "People/People.h"
#include "Production/ChemicalReactor.h"

using namespace std;

int main() {
    People people(149000000, "китайцы");
    people.printPeople();

    ChemicalReactor reactor(1);
    reactor.startProduction();
    reactor.stopProduction();
    return 0;
}