#pragma once

// Logger.cpp
// This file controlls the logger.

#include "stdafx.h"
#include <iostream>
#include <string>




namespace Logger {
	void Log(std::string info, char* file, int line);
	void Warning(std::string info, char* file, int line);
	void Critical(std::string info, char* file, int line);
}