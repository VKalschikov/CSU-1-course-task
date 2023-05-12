#ifndef _DOG_HPP_
#define _DOG_HPP_

class Dog{
public:
	Dog();
	Dog(std::string name);
	Dog(std::string, uint16_t, double);

	std::string get_name();
	uint16_t get_age();
	double get_weight();
	void bark();
	
private:
	std::string name;
	uint16_t age;
	double weight;
};

#endif
