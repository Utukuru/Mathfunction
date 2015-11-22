//============================================================================
// Name        : Mathfunction.cpp
// Author      : maheswar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "mathomatics.h"

int main() {
	mathomatics* obj= new mathomatics();
	long int a =20.1;
	long int b =20.2;
	std::cout<<" result = "<<obj->add(a,b)<<std::endl;
	cout << "!!!Hello edited Worxx!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
