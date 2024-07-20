#include "ForeignPassport.h"
#include <iostream>
using namespace std;

int main() {
    ForeignPassport fp("Ivanov", "Ivan", "Ivanovich", "KH123456", "FP123456789");
    fp.addVisa("Schengen");
    fp.addVisa("UK");

    fp.showInfo();

    return 0;
}
