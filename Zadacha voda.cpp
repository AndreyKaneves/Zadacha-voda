#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	double k, V, t, Hg, Hs, D, L, d, hl, Q;
	do {
		cout << "Введите значение k:";
			cin >> k;
	} while (k <= 0 || k >= 1);
	do {
		cout << "Введите значение V:";
		cin >> V;
	} while (V <= 0);
	do {
		cout << "Введите значение t:";
		cin >> t;
	} while (t >= 24);
		cout << "Введите значение Hg:";
		cin >> Hg;
		cout << "Введите значение Hs:";
		cin >> Hs;
		cout << "Введите значение D:";
		cin >> D;
		cout << "Введите значение L:";
		cin >> L;
		cout << "Введите значение d:";
		cin >> d;
		cout << "Введите значение hl:";
		cin >> hl;

}

