#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

//3.4 try this
int main() {
	std::cout << "Please enter a floating-point value: ";
	//double n;
	int n;
	std::cin >> n;
	std::cout << "n == " << n
		<< "\nn+1 == " << n + 1
		<< "\nthree times n == " << 3 * n
		<< "\ntwice n == " << n + n
		<< "\nn squared == " << n * n
		<< "\nhalf of n == " << n / 2
		<< "\nsquare root of n == " << sqrt(n)
		<< '\n'; // another name for newline ("end of line" in output
	return 0;
}

//3.3 try this
/*
int main() {
	std::cout << "Please enter your first and second names\n";
	std::string first_name = "???"; // string variable
	double age = -1; // integer variable (-1 means "don't know the age")
	std::cin >> first_name >> age; //read a string followed by an integer
	std::cout << "Hello, " << first_name << " (age " << age * 12 << " months)\n";
	return 0;
}*/