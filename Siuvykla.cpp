#include "Siuvykla.h"

Siuvykla::Siuvykla(std::string m, double mk, double k) : Rubai(m, mk)
{
    kaina = k;
}

Siuvykla::~Siuvykla()
{
}

Siuvykla::Siuvykla(const Siuvykla& s) : Rubai(s), kaina(s.kaina)
{
}

Siuvykla& Siuvykla::operator=(const Siuvykla& s)
{
    Rubai::operator=(s);
    kaina = s.kaina;
    return *this;
}

Siuvykla& Siuvykla::operator=(Siuvykla&& s)
{
}
