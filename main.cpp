#include <stdio.h>
#include <memory>
#include "Calc.h"

int main() {
	// intŒ^
	std::unique_ptr<Calc<int,int>> b1 = std::make_unique<Calc<int, int>>(10, 20);
	// floatŒ^
	std::unique_ptr<Calc<float,float>> b2 = std::make_unique<Calc<float, float>>(1.2f, 3.4f);
	// doubleŒ^
	std::unique_ptr<Calc<double,double>> b3 = std::make_unique<Calc<double, double>>(5.6, 6.7);
	// intEfloatŒ^
	std::unique_ptr<Calc<int,float>> b4 = std::make_unique<Calc<int, float>>(20, 10.0f);
	// floatEdoubleŒ^
	std::unique_ptr<Calc<float, double>> b5 = std::make_unique<Calc<float, double>>(20.0f, 10.0);
	// doubleEintŒ^
	std::unique_ptr<Calc<double, int>> b6 = std::make_unique<Calc<double, int>>(20.0, 10);

	// o—Í
	printf("int: %d\n", b1->Min());
	printf("float: %f\n", b2->Min());
	printf("double: %lf\n", b3->Min());
	printf("int_float: %d\n", b4->Min());
	printf("float_double: %f\n", b5->Min());
	printf("double_int: %lf\n", b6->Min());

	return 0;
}