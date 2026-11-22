#ifndef ALATLABORATORIUM_HPP
#define ALATLABORATORIUM_HPP
#include <iostream>
#include <string>
using namespace std ;

class AlatLaboratorium {
private:
	string nama, kategori;
	int jumlah;
	
public:
	AlatLaboratorium (string n, string k, int j);
	
	void tampilkanInfo();
	void tambahJumlah(int n);
	void kurangiJumlah(int n);
};

#endif
