#include "AlatLaboratorium.hpp"
#include <limits>

AlatLaboratorium::AlatLaboratorium(string n, string k, int j)
    : nama(n), kategori(k), jumlah(j < 0 ? 0 : j)
{
}

void AlatLaboratorium::tampilkanInfo()
{
    std::cout << "Nama     : " << nama << '\n';
    std::cout << "Kategori : " << kategori << '\n';
    std::cout << "Jumlah   : " << jumlah << '\n';
}

void AlatLaboratorium::tambahJumlah(int n)
{
    if (n <= 0 || n > std::numeric_limits<int>::max() - jumlah)
    {
        std::cout << "Jumlah penambahan tidak valid.\n";
        return;
    }

    jumlah += n;
}

void AlatLaboratorium::kurangiJumlah(int n)
{
    if (n <= 0 || n > jumlah)
    {
        std::cout << "Jumlah pengurangan tidak valid.\n";
        return;
    }

    jumlah -= n;
}
