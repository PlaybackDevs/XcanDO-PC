// Logger.cpp
// This file controlls the logger.

#include "stdafx.h"
#include <iostream>
#include <string>




namespace Logger {
	void Log(std::string info, char* file, int line) {
		std::cout << termcolor::white << "[XLog] " << info << " (" << file << ", line " << line << "\n";
		std::cout << termcolor::reset;
	}
	void Warning(std::string info, char* file, int line) {
		std::cout << termcolor::yellow << "[XWarning] " << info << " (" << file << ", line " << line << "\n";
		std::cout << termcolor::reset;
	}
	void Critical(std::string info, char* file, int line) {
		std::cout << termcolor::yellow << "[XError] " << info << " (" << file << ", line " << line << "\n";
		std::cout << termcolor::reset;
	}

}