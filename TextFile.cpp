#include <iostream>
#include <fstream>
#include <string>
#include "TextFile.h"
using namespace std;
#define BYTE char

TextFile::TextFile(string path, BYTE size, string name, string type)
{
	this->_pathFile = path;
	this->_sizeOfFiles = size;
	this->_fileName = name;
	this->_typeOfFile = type;
}
string TextFile::get_pathFile()
{
	return _pathFile;
}
BYTE TextFile::get_sizeOfFile()
{
	return this->_sizeOfFiles;
}
string TextFile::get_fileName()
{
	return this->_fileName;
}
string TextFile::get_typeOfFile()
{
	return this->_typeOfFile;
}

void TextFile::set_sizeOfFile(BYTE bt)
{
	this->_sizeOfFiles = bt;
}
void TextFile::set_fileName(string newname)
{
	this->_fileName = newname;
}
void TextFile::set_typeOfFile(string type)
{
	this->_typeOfFile = type;
}