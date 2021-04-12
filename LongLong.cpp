//LongLong.cpp
#include "LongLong.h"

using namespace std;

void LongLong::SetX(double value) { x = value; }
double LongLong::GetX() const { return x; }

void LongLong::SetY(double value) { y = value; }
double LongLong::GetY() const { return y; }

LongLong::LongLong() { x = 0, y = 0; }

LongLong::LongLong(double x = 0, double y = 0) {
	this->x = x;
	this->y = y;
}

LongLong::LongLong(const LongLong& A) {
	x = A.GetX();
	y = A.GetY();
}

string LongLong::toString() const {
	stringstream sout;
	sout << "High digit: " << GetX() << endl;
	sout << "Low digit: " << GetY() << endl;
	return sout.str();
}

void LongLong::Read() {
	cout << "Enter high digit: "; cin >> x;
	cout << "Enter low digit: "; cin >> y;
}

void LongLong::Display() {
	cout << "high digit = " << x << endl;
	cout << "low digit = " << y << endl;
}
