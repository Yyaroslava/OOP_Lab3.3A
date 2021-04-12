// PrivateLongLong.cpp 
#include "PrivateLongLong.h"

using namespace std;

PrivateLongLong::PrivateLongLong() : LongLong(0, 0) {}
PrivateLongLong::PrivateLongLong(double x = 0, double y = 0) : LongLong(x, y) {}
PrivateLongLong::PrivateLongLong(PrivateLongLong& A) : LongLong(A.GetX(), A.GetY()) {}

PrivateLongLong& PrivateLongLong::operator = (const PrivateLongLong& A) {
	LongLong(A.GetX(), A.GetY());
	return *this;
}

ostream& operator << (ostream& out, const PrivateLongLong& A) {
	out << string(A);
	return out;
}

istream& operator >> (istream& in, PrivateLongLong& A) {
	double x, y;
	cout << "Enter high digit:  "; in >> x;
	cout << "Enter low digit: "; in >> y;
	A.SetX(x); A.SetY(y);
	return in;
}

PrivateLongLong::operator string() const {
	stringstream ss;
	ss << "High digit = " << this->GetX() << endl;
	ss << "Low digit = " << this->GetY() << endl;
	return ss.str();
}

PrivateLongLong operator +(PrivateLongLong& A, PrivateLongLong& B) {
	PrivateLongLong t(A.GetX() + B.GetX(), A.GetY() + B.GetY());
	return t;
}

PrivateLongLong operator * (PrivateLongLong& A, PrivateLongLong& B) {
	PrivateLongLong t(A.GetX() * B.GetX(), A.GetY() * B.GetY());
	return t;
}

bool operator > (PrivateLongLong& A, PrivateLongLong& B) {
	return ((A.GetX() > B.GetX()) || (A.GetX() == B.GetX() && A.GetY() > B.GetY()));
}

bool operator < (PrivateLongLong& A, PrivateLongLong& B) {
	return ((A.GetX() < B.GetX()) || (A.GetX() == B.GetX() && A.GetY() < B.GetY()));
}

bool operator == (PrivateLongLong& A, PrivateLongLong& B) {
	return (A.GetX() == B.GetX() && A.GetY() == B.GetY());
}

bool operator <= (const PrivateLongLong& A, const PrivateLongLong& B) {
	return ((A.GetX() < B.GetX()) || (A.GetY() == B.GetY()));
}

bool operator >= (const PrivateLongLong& A, const PrivateLongLong& B) {
	return ((A.GetX() > B.GetX()) || (A.GetY() == B.GetY()));
}

bool operator != (const PrivateLongLong& A, const PrivateLongLong& B) {
	return !(A.GetX() == B.GetX() && A.GetY() == B.GetY());
}

PrivateLongLong& PrivateLongLong::operator ++ () {
	this->SetX(this->GetX() + 1);
	return *this;
}

PrivateLongLong& PrivateLongLong::operator -- () {
	this->SetX(this->GetX() - 1);
	return *this;
}

PrivateLongLong PrivateLongLong::operator ++ (int) {
	PrivateLongLong t(*this);
	this->SetY(this->GetY() + 1);
	return t;
}

PrivateLongLong PrivateLongLong::operator -- (int) {
	PrivateLongLong t(*this);
	this->SetY(this->GetY() - 1);
	return t;
}
