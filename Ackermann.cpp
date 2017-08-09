// Ackermann.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

int Ackermann(int m, int n){
	int ans = 0;
	if(m == 0) ans = n+1;
	else if(n == 0) ans = Ackermann(m-1, 1);
	else ans = Ackermann(m-1, Ackermann(m, n-1));
	return ans;
}

int _tmain(int argc, _TCHAR* argv[])
{
	for(int i = 0; i < 5; i++)
		for(int j = 0; j < 5; j++)
			std::cout << "Ackermann of " + std::to_string(i) + ", " + std::to_string(j) + " is " + std::to_string(Ackermann(i, j)) << std::endl;
	return 0;
}

