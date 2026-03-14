#include <iostream>

int main(){
double tempf, tempc;
tempf = 65;
tempc = (tempf - 32)/1.8;
std::cout << "The temp is " << tempc << " degrees Celsius.\n";

std::cout << "whats the temp in fahrenheit?\n";
std::cin >> tempf;

tempc = (tempf - 32)/1.8;
std::cout << "The temp is " << tempc << " degrees Celsius.\n";
}
