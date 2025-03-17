#ifdef MATH_H
#define MATH_H

class Math
{
public:
	static int Add(int, int);
	static int Add(int, int, int);
	static int Add(double, double);
	static int Add(double, double, double);
	static int Mul(int, int);
	static int Mul(int, int,int);
	static int Mul(double, double);
	static int Mul(double, double, double);
	static int Add(int count, ...);//face adunarea la o lista de numere intregi
	static char* Add(const char*, const char*);//pt a concatena stringuri
};
#endif