/*
Nama	= Muhamd Ilham Habib
Kelas	= B
NPM		= 140810180018
Deskripsi = meng output data struck alamat segi empat
Tahun	= 2019
*/
#include <iostream>
#include <math.h>
using namespace std;
typedef struct {
	float panjang;
	float lebar;
} segiempat;

void input(segiempat *s) {
	cout << "Input Panjang ="; cin>> s->panjang;
	cout << "Input Lebar ="; cin >> s->lebar;
	cin.get();
}
float keliling(segiempat s) { 
	return ((2*s.panjang)+2*(s.lebar));
}
float luas(segiempat s) {
	return (s.panjang*s.lebar);
}

float diagonal(segiempat s) {
	float diag = (s.panjang*s.panjang) + (s.lebar*s.lebar);
		diag = sqrt(diag);
		return(diag);
}
void print(segiempat s) {
	cout <<"panjang ="<< s.panjang << endl;
	cout <<"lebar ="<< s.lebar << endl;
	cout << "keliling =" << keliling(s) << endl;
	cout << "luas =" << luas(s) << endl;
	cout << "diagonal =" << diagonal(s) << endl;
}

int main() {
	segiempat* sg;
	sg = new segiempat;
	input(sg);
	print(*sg);
	cin.get();
}



