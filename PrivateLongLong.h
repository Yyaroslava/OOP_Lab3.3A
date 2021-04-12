// PrivateLongLong.h 
#pragma once
#include <iostream>
#include "LongLong.h"

using namespace std;
class PrivateLongLong : private LongLong {

public:
	using LongLong::GetX;
	using LongLong::GetY;

	using LongLong::SetX;
	using LongLong::SetY;

	using LongLong::LongLong;

	PrivateLongLong();
	PrivateLongLong(double, double);
	PrivateLongLong(PrivateLongLong&);

	PrivateLongLong& operator = (const PrivateLongLong&);
	friend ostream& operator << (ostream&, const PrivateLongLong&);
	friend istream& operator >> (istream&, PrivateLongLong&);
	operator string() const;

	friend PrivateLongLong operator + (PrivateLongLong&, PrivateLongLong&);
	friend PrivateLongLong operator * (PrivateLongLong&, PrivateLongLong&);

	friend bool operator > (PrivateLongLong&, PrivateLongLong&);
	friend bool operator < (PrivateLongLong&, PrivateLongLong&);
	friend bool operator == (PrivateLongLong&, PrivateLongLong&);
	friend bool operator <= (const PrivateLongLong&, const PrivateLongLong&);
	friend bool operator >= (const PrivateLongLong&, const PrivateLongLong&);
	friend bool operator != (const PrivateLongLong&, const PrivateLongLong&);

	PrivateLongLong& operator ++ ();
	PrivateLongLong& operator -- ();
	PrivateLongLong operator ++ (int);
	PrivateLongLong operator -- (int);
};
