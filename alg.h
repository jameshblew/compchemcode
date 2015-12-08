#ifndef HFMath
#define HFMath

#include <Eigen/Dense>
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
using namespace Eigen;

struct Basis
{
	double[3] xyz;
	int i;
	int j;
	int k;
	vector<int[2]> prims;
};

/**
*  Evaluates the double factorial n!!, equivalent to
*  n * (n-2) * (n-4) * ... * 2|1
*  Returns an integer.  Throws if n is negative.
**/
int dfact(int n)
{
	if(n < 0)
		throw exception();
	if(n == 0 or n == 1)
		return 1;
	return n * dfact(n - 2);
}

/**
*  Evaluates the one-dimensional Gaussian integral over all space:
*  Int[ x^n * exp(-ax^2) ] bounds {-Inf, Inf}
*  Returns a double.
**/
double IntG(int n, double a)
{
	return sqrt(M_PI / a) * dfact(2 * n + 1) / pow(a, n) / pow(2, n)
}

/**
*  Combines two one-dimensional Gaussians into a single composite Gaussian.
*  Formula used 
*  
**/
int[2] CombG(double a1, double a2, double x1, double x2)
{
	return 0;
}

/**
*  Calculates the two-center integral (rs|tu), equivalent to
*  <x_r x_s | 1/r_12 | x_t x_u>
*  Returns a double.
**/
double FourBasisRepulsion(Basis xr, Basis xs, Basis xt, Basis xu)
{
	
	return 0;
}

/**
*  Calculates the overlap integral (r|s), equivalent to 
*  <x_r | x_s>
*  Returns a double.
**/
double Overlap(Basis xr, Basis xs)
{
	return 0;
}

/**
*  Calculates the one-electron integral (r||s), equivalent to
*  <x_r | 1/r | x_s>
*  Returns a double.
**/
double TwoBasisRepulsion(Basis xr, Basis xs)
{
	return 0;
}
#endif
