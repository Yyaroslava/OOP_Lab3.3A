// PublicLongLong.cpp
#include "PublicLongLong.h"

PublicLongLong::PublicLongLong() : LongLong(0, 0) {}
PublicLongLong::PublicLongLong(double x = 0, double y = 0) : LongLong(x, y) {}
PublicLongLong::PublicLongLong(PublicLongLong& A) : LongLong(A.GetX(), A.GetY()) {}

PublicLongLong& PublicLongLong::operator = (const PublicLongLong& A) {
	LongLong(A.GetX(), A.GetY());
	return *this;
}

ostream& operator << (ostream& out, const PublicLongLong& A) {
	out << string(A);
	return out;
}

istream& operator >> (istream& in, PublicLongLong& A) {
	double x, y;
	cout << "Enter high digit:  "; in >> x;
	cout << "Enter low digit: "; in >> y;
	A.SetX(x); A.SetY(y);
	return in;
}

PublicLongLong::operator string() const {
	stringstream ss;
	ss << "High digit = " << this->GetX() << endl;
	ss << "Low digit = " << this->GetY() << endl;
	return ss.str();
}

PublicLongLong operator +(PublicLongLong& A, PublicLongLong& B) {
	PublicLongLong t(A.GetX() + B.GetX(), A.GetY() + B.GetY());
	return t;
}

PublicLongLong operator * (PublicLongLong& A, PublicLongLong& B) {
	PublicLongLong t(A.GetX() * B.GetX(), A.GetY() * B.GetY());
	return t;
}

bool operator > (PublicLongLong& A, PublicLongLong& B) {
	return ((A.GetX() > B.GetX()) || (A.GetX() == B.GetX() && A.GetY() > B.GetY()));
}

bool operator < (PublicLongLong& A, PublicLongLong& B) {
	return ((A.GetX() < B.GetX()) || (A.GetX() == B.GetX() && A.GetY() < B.GetY()));
}

bool operator == (PublicLongLong& A, PublicLongLong& B) {
	return (A.GetX() == B.GetX() && A.GetY() == B.GetY());
}

bool operator <= (const PublicLongLong& A, const PublicLongLong& B) {
	return ((A.GetX() < B.GetX()) || (A.GetY() == B.GetY()));
}

bool operator >= (const PublicLongLong& A, const PublicLongLong& B) {
	return ((A.GetX() > B.GetX()) || (A.GetY() == B.GetY()));
}

bool operator != (const PublicLongLong& A, const PublicLongLong& B) {
	return !(A.GetX() == B.GetX() && A.GetY() == B.GetY());
}

PublicLongLong& PublicLongLong::operator ++ () {
	this->SetX(this->GetX() + 1);
	return *this;
}

PublicLongLong& PublicLongLong::operator -- () {
	this->SetX(this->GetX() - 1);
	return *this;
}

PublicLongLong PublicLongLong::operator ++ (int) {
	PublicLongLong t(*this);
	this->SetY(this->GetY() + 1);
	return t;
}

PublicLongLong PublicLongLong::operator -- (int) {
	PublicLongLong t(*this);
	this->SetY(this->GetY() - 1);
	return t;
}
