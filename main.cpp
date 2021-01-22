#include <iostream>
#include <iomanip>

#include "Siuvykla.h"

using namespace std;

int main()
{
    Siuvykla S1("Medvile", 8.5, 11.3);
    Siuvykla S2("Elastanas", 1.5, 9.4);
    Siuvykla S3("Linas", 4.6, 15.3);
    Siuvykla S4("Silkas", 5.2, 17.4);
    Siuvykla S5("Nailonas", 4.3, 12);

    cout << std::left << std::setw(25) << "Medziaga" << std::setw(25) << "Medziagos kiekis" << std::setw(25) << "Kaina" << endl;
    cout << "" << endl;
    cout << std::left << std::setw(25) << S1.getMedziaga() << std::setw(25) << S1.getMedziagos_kiekis() << std::setw(25) << S1.getKaina() << endl;
    cout << std::left << std::setw(25) << S2.getMedziaga() << std::setw(25) << S2.getMedziagos_kiekis() << std::setw(25) << S2.getKaina() << endl;
    cout << std::left << std::setw(25) << S3.getMedziaga() << std::setw(25) << S3.getMedziagos_kiekis() << std::setw(25) << S3.getKaina() << endl;
    cout << std::left << std::setw(25) << S4.getMedziaga() << std::setw(25) << S4.getMedziagos_kiekis() << std::setw(25) << S4.getKaina() << endl;
    cout << std::left << std::setw(25) << S5.getMedziaga() << std::setw(25) << S5.getMedziagos_kiekis() << std::setw(25) << S5.getKaina() << endl;

}
