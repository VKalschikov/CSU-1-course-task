#include <iostream>
#include "dog.hpp"

int main(){
	Dog bobik;
	Dog charley(std::string("Charley"));

	std::cout<<bobik.get_name()<<" with age "<<bobik.get_age()<<" says ";
	bobik.bark();
	std::cout<<charley.get_name()<<" says ";
	charley.bark();
	return 0;

}
