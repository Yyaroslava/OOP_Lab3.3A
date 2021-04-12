// PublicLongLong.h
#pragma once
#include "LongLong.h"

class PublicLongLong : public LongLong {
public:
	PublicLongLong();
	PublicLongLong(double, double);
	PublicLongLong(PublicLongLong&);

	PublicLongLong& operator = (const PublicLongLong&);
	friend ostream& operator << (ostream&, const PublicLongLong&);
	friend istream& operator >> (istream&, PublicLongLong&);
	operator string() const;

	friend PublicLongLong operator + (PublicLongLong&, PublicLongLong&);
	friend PublicLongLong operator * (PublicLongLong&, PublicLongLong&);

	friend bool operator > (PublicLongLong&, PublicLongLong&);
	friend bool operator < (PublicLongLong&, PublicLongLong&);
	friend bool operator == (PublicLongLong&, PublicLongLong&);
	friend bool operator <= (const PublicLongLong&, const PublicLongLong&);
	friend bool operator >= (const PublicLongLong&, const PublicLongLong&);
	friend bool operator != (const PublicLongLong&, const PublicLongLong&);

	PublicLongLong& operator ++ ();
	PublicLongLong& operator -- ();
	PublicLongLong operator ++ (int);
	PublicLongLong operator -- (int);
};
