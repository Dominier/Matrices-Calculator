#pragma once

class Operations {
public:
	void FindDeterminant(double a, double b, double c, double d);
	void PrintDeterminant();

private:
	double a, b, c, d;
	double determinant;
};