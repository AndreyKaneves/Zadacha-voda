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
		double Q = Q / 3600.0;
		double V = 1.27 * Q / pow(d, 2);
		double hl = D * L / d * pow(V, 2) / 19, 6;
		double hm = 0.1 * hl;
		double H = hg + hl + hm + Hs;
		double N = 9.8 * Q * H / k;
		cout << "k = " << k << endl;
		cout << "V = " << V << endl;
		cout << "t = " << t << endl;
		cout << "Hg = " << Hg << endl;
		cout << "Hs = " << Hs << endl;
		cout << "D = " << D << endl;
		cout << "L = " << L << endl;
		cout << "d = " << d << endl;
		cout << "hl = " << hl << endl;
		cout << "hm = " << hm << endl;
		cout << "Q = " << Q << endl;
		cout << "N = " << N << endl;

}

