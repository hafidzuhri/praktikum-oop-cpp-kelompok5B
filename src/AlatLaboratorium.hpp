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
//Ini Constructor
	AlatLaboratorium (string n, string k, int j);
	
	//ini method
	void tampilkanInfo();
	
	void tambahJumlah(int n);
	
	void kurangiJumlah(int n);
};

#endif
