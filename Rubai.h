#ifndef RUBAI_H
#define RUBAI_H

#include <string>;
#include <iostream>

class Rubai
{
    public:
        Rubai(){};
        Rubai(std::string m, double mk);
        virtual ~Rubai() = 0;

        void setMedziaga(std::string m)
        {
            medziaga = m;
        }

        void setMedziagos_kiekis(double mk)
        {
            medziagos_kiekis = mk;
        }

    protected:
        std::string medziaga;
        double medziagos_kiekis;

        virtual const std::string &getMedziaga() = 0;
        virtual const double &getMedziagos_kiekis() = 0;

};

#endif // RUBAI_H
