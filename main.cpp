#include <iostream>
#include "Math.h"

int main()
{
	std::cout << "Hello World! ";
	std::cout << Math::Calculate<int>(15, Add, 23);
	std::cin.get();
}