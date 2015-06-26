#include <iostream>
#include "BigInt.h"
using namespace std;

int main()
{
	BigInt a, b;
	while (cin >> a >> b) {
		cout << a + b << endl;
	}
	return  0;
}