#include "parser.h"

int main(){

	auto root = Parser("+4*(2-((2+2)/4))");
	root = Parser("+2 + 2");
	Parser("2 + 2");
	Parser("+2 - ((2 + 2) / 4)");





	return 0;
}