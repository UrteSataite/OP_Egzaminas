#ifndef SIUVYKLA_H
#define SIUVYKLA_H

#include "Rubai.h"

class Siuvykla : public Rubai
{
    private:
        double kaina;

    public:
        Siuvykla(){};
        Siuvykla(std::string m, double mk, double k);
        // 1. Destructor
        ~Siuvykla();
        // 2. Copy constructor
        Siuvykla(const Siuvykla& s);
        // 3. Move constructor
        Siuvykla(Siuvykla&& s): Rubai(s), kaina{ s.kaina } {};
        // 4. Copy assignment constructor.
        Siuvykla& operator=(const Siuvykla& s);
        // 5. Move assignment constructor
        Siuvykla& operator=(Siuvykla&& s);

        const std::string &getMedziaga()
        {
            return medziaga;
        }
        const double &getMedziagos_kiekis()
        {
            return medziagos_kiekis;
        }
        const double &getKaina()
        {
            return kaina;
        }

        void setKaina(double k)
        {
            kaina = k;
        }

};

#endif // SIUVYKLA_H
