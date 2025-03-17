#include "Math.h"
#include <cstdarg> //pt functii variadic
#include <cstring>//pt functii pe siruri de caractere
#include <cstdlib>//pt malloc
#include <iostream>

using namespace std;

int Math::Add(int a,int b)
{
	return a + b;
}
int Math::Add(int a, int b,int c)
{
	return a + b + c;
}
int Math::Add(double a, double b)
{
	return static_cast<int>(a + b);
}
int Math::Add(double a, double b, double c)
{
	return static_cast<int>(a + b + c);
}
int Math::Mul(int a, int b)
{
	return a * b;
}
int Math::Mul(int a,int b,int c)
{
	return a * b * c;
}
int Math::Mul(double a,double b)
{
	return static_cast<int>(a * b);
}
int Math::Mul(double a, double b, double c)
{
	return static_cast<int>(a * b * c);
}
int Math::Add(int count, ...)
{
	va_list args;
	va_start(args, count);
	int sum = 0;
	for (int i = 0;i < count;i++)
		sum += va_arg(args, int);
	va_end(args);
	return sum;
}
char* Math::Add(const char* str1, const char* str2)
{
	if (str1 == NULL or str2 == NULL)
		return nullprt;
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	char* result = (char*)malloc(len1 + len2 + 1);
	if (result == 0)
		return nullptr;
	strcpy(result, str1);
	strcpy(result, str2);
	return result;
}

