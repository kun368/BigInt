#pragma once

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <deque>
#include <iterator>
#include <algorithm>
using namespace std;
typedef long long LLT;

class BigInt
{
public:
	BigInt() :negative(false) {}
	BigInt(const LLT);
	BigInt(const char*);
	BigInt(const string);
	BigInt(const BigInt & x);
	BigInt & operator = (const BigInt &);
	friend istream & operator >> (istream &, BigInt &);
	friend ostream & operator << (ostream &, BigInt &);
	BigInt operator + (const BigInt &) const;
	BigInt operator - (const BigInt &) const;
	BigInt operator * (const BigInt &) const;
	BigInt operator / (const LLT &) const;
	LLT operator % (const LLT &) const;
	bool operator > (const BigInt &) const;
	bool operator == (const BigInt &) const;
	bool operator >= (const BigInt &) const;
	friend BigInt abs(const BigInt &);
	BigInt operator - () const;
private:
	deque<int> num;
	bool negative;
};

