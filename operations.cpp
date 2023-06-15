#include "operations.h"
#include <iostream>
#include <cmath>

using namespace std;

void Operations::FindDeterminant(double a, double b, double c, double d) {
	determinant = (a * d) - (b * c);
}

void Operations::PrintDeterminant() {
	cout << determinant << endl;
}

void Operations::FindRRE(double a, double b, double c, double d) {
	/*
	[ a  b ]
	[ c  d ]
	*/
	a /= a;
	b /= a;

}