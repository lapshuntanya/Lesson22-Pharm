#include "Pharm.h"

int main()
{
    Medicine a;
    Medicine b("Aspirin", TYPES::pills, "India", 20);
    Medicine c("Dr. MOM", TYPES::syrope, "France", 150.65);
    const Medicine d("Analgin", TYPES::capsules, "India", 18.99);

   /* a.showInfo();
    b.showInfo();
    c.showInfo();
    d.showInfo();
    cout << "----------------------------------\n\n";

    int n1 = 50;
    int n2 = n1; // n2 = 50

    Medicine k = a; //Copy constructor
    k.setTitle("Nurofen");
    k.setPrice(50.34);

    a.showInfo();
    k.showInfo();
    cout << "----------------------------------\n\n";

    a = d; //Operator =
    a.setTitle("Analgin Forte");

    a.showInfo();
    d.showInfo();*/

    Pharm pharm("Pharm 911");
    pharm.addMedicine(b);
    pharm.addMedicine(d);
    pharm.addMedicine(c);
    pharm.addMedicine(Medicine("Nurofen", TYPES::pills, "Italy", 50.77));

    pharm.showInfo();
    cout << "++++++++++++++++++++++++++++++++++++++++\n";
    pharm.findMedicine("Analgin");
    pharm.findMedicine("Analgin Forte");

    cout << "++++++++++++++++++++++++++++++++++++++++\n";
    pharm.sortByTitle();
    pharm.showInfo();

    cout << "++++++++++++++++++++++++++++++++++++++++\n";
    pharm.sortByPrice();
    pharm.showInfo();

}

