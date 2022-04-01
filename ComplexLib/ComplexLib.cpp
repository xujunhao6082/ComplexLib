// ComplexLib.cpp : 定义静态库的函数。
//

#include "pch.h"
#include "framework.h"
#include<math.h>
#include <iostream>
#include "ComplexLib.h"
#define i Complex(0,1)
Complex::Complex(double _r,double _i) {
	real = _r;
	imagine = _i;
}
//Basic operations of Complex Number
Complex Complex::operator+(Complex a) {
	Complex complex;
	complex.real = this->real + a.real;
	complex.imagine = this->imagine + a.imagine;
	return complex;
}
Complex Complex::operator-(Complex a) {
	Complex complex;
	complex.real = this->real - a.real;
	complex.imagine = this->imagine - a.imagine;
	return complex;
}
Complex Complex::operator*(Complex a) {
	Complex complex;
	complex.real = this->real * a.real - this->imagine * a.imagine;
	complex.imagine = this->real * a.imagine + this->imagine * a.real;
	return complex;
}
Complex Complex::operator*(double a) {
	Complex complex;
	complex.real = this->real * a;
	complex.imagine = this->imagine * a;
	return complex;
}
Complex Complex::conj(Complex a) {
	Complex complex;
	complex.real = a.real;
	complex.imagine = -a.imagine;
	return complex;
}
double Complex::ComAbs(Complex a) {
	return sqrt((conj(a) * a).real);
}
Complex Complex::operator/(double a) {
	Complex complex;
	complex.real = this->real / a;
	complex.imagine = this->imagine / a;
	return complex;
}
Complex Complex::operator/(Complex a) {
	return *this * conj(a) / pow(ComAbs(a), 2);
}
//Exponential,Logarithm and Power
Complex Complex::ln(Complex a) {
	Complex complex;
	complex.real = log(ComAbs(a));
	complex.imagine = acos((a / ComAbs(a)).real);
	return complex;
}
Complex Complex::loga(Complex N, Complex a) {
	return ln(N) / ln(a);
}
Complex Complex::Exp(Complex x) {
	Complex complex;
	complex.real = exp(x.real) * cos(x.imagine);
	complex.imagine = exp(x.real) * sin(x.imagine);
	return complex;
}
Complex Complex::Pow(Complex a, Complex b) {
	return Exp(ln(a) * b);
}
//Functions of Hyperbolic and Trigonometric
Complex Complex::Cosh(Complex a) {
	return (Exp(a) + Exp(Complex(0,0) - a)) / 2;
}
Complex Complex::Sinh(Complex a) {
	return (Exp(a) - Exp(Complex(0, 0) - a)) / 2;
}
Complex Complex::Tanh(Complex a) {
	return Sinh(a) / Cosh(a);
}
Complex Complex::Sin(Complex a) {
	return Complex(0, 0) - Sinh(a * i) * i;
}
Complex Complex::Cos(Complex a) {
	return Cosh(a * i);
}
Complex Complex::Tan(Complex a) {
	return Sin(a) / Cos(a);
}
void Complex::print(Complex a) {
	std::cout << a.real << "+" << a.imagine << "i" << std::endl;
}