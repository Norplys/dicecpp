#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	string i;
	cout << "spin ? (y/n) " << endl;
	cin >> i;
	while (i == "y") {
		cout << "spinning" << endl << "result :" << endl;
		cout << (1 + (rand() % 6)) << endl;
		cout << "spin again ? (y/n)" << endl;
		cin >> i;
	}
	cout << "You are not spinning anymore" << endl;
	cin.get();
	return 0;
}

