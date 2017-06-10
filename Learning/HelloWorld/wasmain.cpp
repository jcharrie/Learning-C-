#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

int main() {
	std::cout << "Please enter your first and second names\n";
	std::string first_name = "???"; // string variable
	double age = -1; // integer variable (-1 means "don't know the age")
	std::cin >> first_name >> age; //read a string followed by an integer
	std::cout << "Hello, " << first_name << " (age " << age * 12 << "months)\n";
	return 0;
}