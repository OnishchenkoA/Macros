#include "stdafx.h"
#include <iostream>
#include <Windows.h>

using namespace std;

#define SUB(a, b) ((a) - (b))


int main()
{
#ifdef SUB
	int a = 18;
	int b = 6;
	int c = 23;
	std::cout << SUB(a, b) << std::endl;
	std::cout << SUB(a, b) * c << std::endl;
	std::cout << SUB(a, b + c) * c << std::endl;
#endif
}

