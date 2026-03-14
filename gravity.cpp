#include <stdlib.h>
#include <iostream>

int main(){
std::cout<<"whats your earth weight?\n";
double weight = 0;
std::cin>>weight;
std::cout<<"what planet are you going to?\n1 - Mercury\n2 - Venus\n3 - Mars\n4 - Jupiter\n5 - Saturn\n6 - Uranus\n7 - Neptune\n8 - Quit\n";
int res = 0;
std::cin >>res;

while(res != 8){
switch(res){
case 1:
std::cout<<"Your weight is " << (weight * 0.38) << " on mercury\n";
break;
case 2:
std::cout<<"Your weight is " << (weight * 0.91) << " on venus\n";
break;
case 3:
std::cout<<"Your weight is " << (weight * 0.38) << " on mars\n";
break;
case 4:
std::cout<<"Your weight is " << (weight * 2.34) << " on jupiter\n";
break;
case 5:
std::cout<<"Your weight is " << (weight * 1.06) << " on saturn\n";
break;
case 6:
std::cout<<"Your weight is " << (weight * 0.92) << " on uranus\n";
break;
case 7:
std::cout<<"Your weight is " << (weight * 1.19) << " on neptune\n";
break;
case 8:
std::cout<<"Quitting\n";
break;
}
std::cout<<"What planet now?\n";
std::cin>>res;

}
}
