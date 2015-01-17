#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#define BYTE char

class File
{

public:
	File(string path , BYTE size, string name, ifstream type);
	File();
	virtual ifstream get_file() = 0;
	virtual BYTE get_sizeOfFile() = 0;
	virtual string get_fileName() = 0;
	virtual string get_typeOfFile() = 0;
	virtual void set_sizeOfFile(BYTE bt) = 0;
	virtual void set_fileName(string newname) = 0;
	virtual void set_typeOfFile(string type) = 0;
};