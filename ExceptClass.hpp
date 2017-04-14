#pragma once
#include <iostream>
#include <string>
#include <memory>
#include <sstream>
#include <iomanip>
#include <algorithm>

class MyException : public std::exception {

public:
	MyException();
	explicit MyException(std::string message);
	MyException(std::string source, std::string message);
	MyException(int code, std::string source, std::string message);
	const char *what() const throw();


private:
	int exceptionCode;
	std::string exceptionSource;
	std::string exceptionMessage;
};