#include <iostream>

#include "Version.h"
#include "ReadData.h"

int main () {

	std::cout << "Version " << StockPortofolio_VERSION_MAJOR << ".";
	std::cout << StockPortofolio_VERSION_MINOR << "\n";
	std::cout << "Hello world!\n";

	return 0;
}
