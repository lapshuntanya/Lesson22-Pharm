#include "Medicine.h"

int main()
{
    Medicine a;
    Medicine b("Aspirin", TYPES::pills, "India", 20);
    Medicine c("Dr. MOM", TYPES::syrope, "France", 150.65);
    const Medicine d("Analgin", TYPES::capsules, "India", 18.99);

    a.showInfo();
    b.showInfo();
    c.showInfo();
    d.showInfo();
}

