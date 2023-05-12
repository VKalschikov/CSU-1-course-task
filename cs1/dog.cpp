#include <iostream>

#include "dog.hpp"

Dog::Dog(){
	this->name = "Bobik";
	this->age = 1;
	this->weight = 10.5;
}


Dog::Dog(std::string name){
	this->name = std::string(name);
	this->age = 1;
	this->weight = 10.5;
}

Dog::Dog(std::string name, uint16_t age, double weight){
	this->name = std::string(name);
	this->age = age;
	this->weight = weight;
}


std::string Dog::get_name(){
	return this->name;
}

uint16_t Dog::get_age(){
	return this->age;
}

double Dog::get_weight(){
	return this->weight;
}

void Dog::bark(){
	std::cout<<"Bark! Bark!"<<std::endl;
}

