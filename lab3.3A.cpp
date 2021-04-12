// lab3.3A.cpp 
#include <iostream>
#include "PublicLongLong.h"
#include "PrivateLongLong.h"

using namespace std;

int main() {
	cout << "PrivateLongLong " << endl;

	PrivateLongLong A1, B1;
	cout << "Enter A1: " << endl;
	cin >> A1;
	cout << "Enter B1: " << endl;
	cin >> B1;

	cout << "A1 + B1: " << endl;
	cout << A1 + B1 << endl;

	cout << "A1 * B1: " << endl;
	cout << A1 * B1 << endl;

	cout << "A1 > B1: ";
	if (A1 > B1) {
		cout << "Yes " << endl;
	}
	else cout << "No " << endl;

	cout << "A1 < B1: ";
	if (A1 < B1) {
		cout << "Yes " << endl;
	}
	else cout << "No " << endl;

	cout << "A1 >= B1: ";
	if (A1 >= B1) {
		cout << "Yes " << endl;
	}
	else cout << "No " << endl;

	cout << "A1 <= B1: ";
	if (A1 <= B1) {
		cout << "Yes " << endl;
	}
	else cout << "No " << endl;

	cout << "A1 == B1: ";
	if (A1 == B1) {
		cout << "Yes " << endl;
	}
	else cout << "No " << endl;

	cout << "A1 != B1: ";
	if (A1 != B1) {
		cout << "Yes " << endl;
	}
	else cout << "No " << endl;

	cout << "A1++ " << endl; cout << A1++ << endl;
	cout << "A1-- " << endl; cout << A1-- << endl;
	cout << "++A1 " << endl; cout << ++A1 << endl;
	cout << "--A1 " << endl; cout << --A1 << endl;

	cout << "PublicLongLong " << endl;

	PublicLongLong A2, B2;

	cout << "Enter A2: " << endl;
	cin >> A2;
	cout << "Enter B2: " << endl;
	cin >> B2;

	cout << "A2 + B2: " << endl;
	cout << A2 + B2 << endl;

	cout << "A2 * B2: " << endl;
	cout << A2 * B2 << endl;

	cout << "A2 > B2: ";
	if (A2 > B2) {
		cout << "Yes " << endl;
	}
	else cout << "No " << endl;

	cout << "A2 < B2: ";
	if (A2 < B2) {
		cout << "Yes " << endl;
	}
	else cout << "No " << endl;

	cout << "A2 >= B2: ";
	if (A2 >= B2) {
		cout << "Yes " << endl;
	}
	else cout << "No " << endl;

	cout << "A2 <= B2: ";
	if (A2 <= B2) {
		cout << "Yes " << endl;
	}
	else cout << "No " << endl;

	cout << "A2 == B2: ";
	if (A2 == B2) {
		cout << "Yes " << endl;
	}
	else cout << "No " << endl;
	
	cout << "A2 != B2: ";
	if (A2 != B2) {
		cout << "Yes " << endl;
	}
	else cout << "No " << endl;

	cout << "A2++ " << endl;
	cout << A2++ << endl;
	cout << "A2-- " << endl;
	cout << A2-- << endl;
	cout << "++A2 " << endl;
	cout << ++A2 << endl;
	cout << "--A2 " << endl;
	cout << --A2 << endl;

	return 0;
}
