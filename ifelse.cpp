#include <iostream>
#include <stdlib.h>
#include <ctime>

int main (){

srand(time(NULL));

int d20 = rand() %21;

std::cout << "Landed on: " << d20 << "\n";
if(d20 == 20){
std::cout << "Nat 20!\n";
}
else if(d20 == 1){
std::cout << "Critical failure\n";
}
else{
std::cout<<"nothing to say about it\n";
}
}
