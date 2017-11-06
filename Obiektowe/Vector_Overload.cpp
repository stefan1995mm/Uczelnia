#include <stdio.h>
#include <iostream>
using namespace std;
class wektor
{
public:
	wektor(float a,float b,float c, float d);
	void operator- (wektor const& wektor_a);
	void wypisz();
private:
	float a_x, a_y, b_x, b_y;
};

wektor::wektor(float a,float b,float c, float d)
{
	a_x = a;
	a_y = b;
	b_x = c;
	b_y = d;
}
void wektor::operator- (wektor const& wektor_a) {
	a_x = (a_x - wektor_a.a_x);
	a_y = (a_y - wektor_a.a_y);
	b_x = (b_x - wektor_a.b_x);
	b_y = (b_y - wektor_a.b_y);
	wypisz();
}
void wektor::wypisz() {
	cout << endl <<a_x << endl << a_y << endl <<b_x <<endl <<b_y << endl;
}

int main() {
	float a, b, c, d;
	cout << "Wektor pierwszy:" << endl;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;
	cout << "d: ";
	cin >> d;
	cout << endl;
	wektor pierwszy(a, b, c, d);	
	cout << "Wektor drugi:" << endl;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;
	cout << "d: ";
	cin >> d;
	cout << endl;
	wektor drugi(a, b, c, d);
	pierwszy - drugi;
	system("pause");
	return 0;
}