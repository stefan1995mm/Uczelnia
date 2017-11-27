#include <iostream>
using namespace std;
class silnik
{
	float moc;
public:
	silnik(float);
	void wypisz();
	~silnik();
};
silnik::silnik(float s)
{
	moc = s;
}
void silnik::wypisz()
{
	cout << moc;
}
silnik::~silnik()
{

}

class silnik_elektryczny : public silnik
{
	int napiecie;
public:
	void wypisz_2();
	silnik_elektryczny(float, int);
	~silnik_elektryczny();
};
silnik_elektryczny::silnik_elektryczny(float m1, int m2) :silnik(m1)
{
	napiecie = m2;
}
silnik_elektryczny::~silnik_elektryczny()
{

}
void silnik_elektryczny::wypisz_2()
{
	wypisz();
	cout << " " << napiecie;
}



int main(int argc, char** argv) {
	float zmienna_f;
	int zmienna_i;
	cout << "Podaj wartosc klasy silnik zmiennoprzecinkowe" << endl;
	cin >> zmienna_f;
	silnik zwykly(zmienna_f);
	cout << "Podaj wartosci klasy silnik_elektryczny zmiennoprzecinkowa i calkowita" << endl;
	cin >> zmienna_f >> zmienna_i;
	silnik_elektryczny elektryczny(zmienna_f, zmienna_i);
	cout << "Wartosci silnik: ";
	zwykly.wypisz();
	cout << "\nDane Silnik elektryczny: ";
	elektryczny.wypisz_2();
	cout << endl;
	system("pause");
	return 0;
}
