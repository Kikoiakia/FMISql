#pragma once
#include <vector> //For storage 
#include <string> //For string types
#include <ctime> //For using the built-in date and time structures (time_t)


struct Node {
	std::vector<size_t> numberTypes;
	std::vector<std::string> stringTypes;
	std::vector<time_t> timeTypes;
};

class BTree {

};