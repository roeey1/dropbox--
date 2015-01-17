#include <iostream>
#include <fstream>
#include <string>
#include "ImageFile.h"
using namespace std;
#define BYTE char

ImageFile::ImageFile(string path, BYTE size, string name, string type)
{
	this->_pathFile = path;
	this->_sizeOfFiles = size;
	this->_fileName = name;
	this->_typeOfFile = type;
}
string ImageFile::get_pathFile()
{
	return _pathFile;
}
BYTE ImageFile::get_sizeOfFile()
{
	return this->_sizeOfFiles;
}
string ImageFile::get_fileName()
{
	return this->_fileName;
}
string ImageFile::get_typeOfFile()
{
	return this->_typeOfFile;
}
void ImageFile::set_sizeOfFile(BYTE bt)
{
	this->_sizeOfFiles = bt;
}
void ImageFile::set_fileName(string newname)
{
	this->_fileName = newname;
}
void ImageFile::set_typeOfFile(string type)
{
	this->_typeOfFile = type;
}