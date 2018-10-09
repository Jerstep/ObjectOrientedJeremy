#include <iostream>
#include <fstream>
#include <string>



void lineByLine() {
	std::ifstream in_stream1;
	std::ifstream in_stream2;
	std::string data;

	in_stream1.open("D:\\Projecten\\ObjectOrientedJeremy\\Les 4\\Les 4\\Jibber.txt");
	in_stream2.open("D:\\Projecten\\ObjectOrientedJeremy\\Les 4\\Les 4\\Slibber.txt");

	if (!in_stream1) {
		std::cout << "cant acces file" << std::endl;
		exit(1);
	}

	while (!in_stream1.eof()) {
		std::getline(in_stream1, data);
		std::cout << data << std::endl;
		std::getline(in_stream2, data);
		std::cout << data << std::endl;
	}
	in_stream1.close();
	in_stream2.close();
}

void reverseLine() {
	char ch;
	std::ifstream in_stream3;
	std::string reverse;
	
	in_stream3.open("D:\\Projecten\\ObjectOrientedJeremy\\Les 4\\Les 4\\Jibber.txt", std::ios::ate);
	std::streampos size = in_stream3.tellg();
	for (int i = 1; i <= size; i++) {
		in_stream3.seekg(-i, std::ios::end);
		in_stream3.get(ch);
		std::cout << ch;
	}
}

int main() {

	lineByLine();
	reverseLine();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return 0;
}





