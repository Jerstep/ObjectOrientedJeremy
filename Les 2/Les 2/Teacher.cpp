#include "Teacher.h"

Teacher::Teacher(int _age, std::string _name, std::string _catName) {
	age = _age;
	name = _name;
	catName = _catName;
}

int Teacher::getAge() {
	return age;
}

std::string Teacher::getName() {
	return name;
}

std::string Teacher::getCatName() {
	return catName;
}
