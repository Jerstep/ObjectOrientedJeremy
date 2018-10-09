#include <iostream>

int main() {
	std::ifstream in_stream;
	std::string data;
	in_stream.open("D:\Projects\OOPB_Jeremy\Les 4\Les 4\Jibber.txt");

	if (!in_stream) {
		std::cout << "cant acces file" << std::endl;
		exit(1);
	}
	
	char ch;
	
	while (!in_stream.eof()) {
		in_stream.get(ch);
		std::cout << ch;
	}
	in_stream.close();
	return 0;
}

void reverseLine(){

}

void lineByLine(){
		while (!in_stream.eof()) {
		in_stream.get(ch);
		std::cout << ch;
}