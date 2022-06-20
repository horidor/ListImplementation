#include "listclass.h"
#include <iostream>

int main(){
	List Demo('g');
	std::cout << Demo.length() << std::endl;
	Demo.append('t');
	std::cout << Demo.get(1) << std::endl;
	system("pause");
	return 0; 
}