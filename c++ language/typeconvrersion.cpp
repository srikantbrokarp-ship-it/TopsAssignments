#include<iostream>
#include<iomanip> //required for set precision and fixed
using namespace std;
main(){
	int a=10,b=3;
	float c;
	c=(float)a/b;
	cout<<"\n div="<<c;
	std::cout << std::endl << std::fixed << std::setprecision(2) << c;
}

