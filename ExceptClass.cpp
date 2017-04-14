// CustomException.cpp

#include "stdafx.h"
#include <iostream>
#include <string>
#include <memory>
#include <sstream>
#include <iomanip>
#include <algorithm>    




MyException::MyException() :
	exceptionCode(0),
	exceptionSource("No source."),
	exceptionMessage("No message.") {}

MyException::MyException(std::string message) :
	exceptionCode(0),
	exceptionSource("No source."),
	exceptionMessage(std::move(message)) {}

MyException::MyException(std::string source, std::string message) :
	exceptionCode(0),
	exceptionSource(std::move(source)),
	exceptionMessage(std::move(message)) {}

MyException::MyException(int code, std::string source, std::string message) :
	exceptionCode(code),
	exceptionSource(source),
	exceptionMessage(message) {}

const char *MyException::what() const throw()
{
	std::cout << "What:" << exceptionMessage << std::endl;

	std::stringstream s;
	s << "MyException Data:" << std::endl;
	s << "Code    : " << exceptionCode << std::endl;
	s << "Source  : " << exceptionSource << std::endl;
	s << "Message : " << exceptionMessage << std::endl;

	std::string whatString = s.str();
	return whatString.c_str();
}




