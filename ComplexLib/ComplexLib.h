#pragma once
class Complex {
public:double real; double imagine;
	  Complex(double _r = 0, double _i = 0);
	  //Basic operations of Complex Number
	  Complex operator+(Complex a);
	  Complex operator-(Complex a);
	  Complex operator*(Complex a);
	  Complex operator*(double a);
	  Complex conj(Complex a);
	  double ComAbs(Complex a);
	  Complex operator/(double a);
	  Complex operator/(Complex a);
	  //Exponential,Logarithm and Power
	  Complex ln(Complex a);
	  Complex loga(Complex N, Complex a);
	  Complex Exp(Complex x);
	  Complex Pow(Complex a, Complex b);
	  //Functions of Hyperbolic and Trigonometric
	  Complex Cosh(Complex a);
	  Complex Sinh(Complex a);
	  Complex Tanh(Complex a);
	  Complex Sin(Complex a);
	  Complex Cos(Complex a);
	  Complex Tan(Complex a);
	  void print(Complex a);
};