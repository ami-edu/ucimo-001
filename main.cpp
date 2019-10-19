#include <iostream>
#include "nzd.hpp"
#include "nzs.hpp"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int a, b;
	cout << "Unesi 2 broja: ";
	cin >> a >> b;

	cout << "\n";
	cout << "NZD: " << nzd(a, b) << "\n";
	cout << "NZS: " << nzs(a, b) << "\n";
	
	return 0;
}
