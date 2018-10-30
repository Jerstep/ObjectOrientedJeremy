#include "Student.h"
#include "Teacher.h"
#include <iostream>

int main() {
	Student fred = Student(15, "Fred", "Floof");
	Teacher harrie = Teacher(35, "Harrie", "Spot");

	std::cout << "Student age: " << fred.getAge() << std::endl;
	std::cout << "Student name: " << fred.getName() << std::endl;
	std::cout << "Student dog name: " << fred.getDogName() << std::endl;

	std::cout << "" << std::endl;

	std::cout << "Teacher age: " << harrie.getAge() << std::endl;
	std::cout << "Teacher name: " << harrie.getName() << std::endl;
	std::cout << "Teacher cat name: " << harrie.getCatName() << std::endl;

	std::cout << "" << std::endl;

	std::cout << "Press ENTER to continue...";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	return 0;
}