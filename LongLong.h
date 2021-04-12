// LongLong.h
#pragma once

#include <iostream>
#include <sstream>
#include <string>

#pragma pack(1)

using namespace std;

class LongLong {
	double x, y;
public:

	double GetX() const;
	double GetY() const;


	void SetX(double value);
	void SetY(double value);

	LongLong();
	LongLong(double, double);
	LongLong(const LongLong&);

	string toString() const;
	void Read();
	void Display();
};
