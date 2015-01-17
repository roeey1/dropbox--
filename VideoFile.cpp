#include <iostream>
#include <fstream>
#include <string>
#include "VideoFile.h"
using namespace std;
#define BYTE char

VideoFile::VideoFile(string path, BYTE size, string name, string type)
{
	this->_pathFile = path;
	this->_sizeOfFiles = size;
	this->_fileName = name;
	this->_typeOfFile = type;
}
string VideoFile::get_pathFile()
{
	return _pathFile;
}
BYTE VideoFile::get_sizeOfFile()
{
	return this->_sizeOfFiles;
}
string VideoFile::get_fileName()
{
	return this->_fileName;
}
string VideoFile::get_typeOfFile()
{
	return this->_typeOfFile;
}
void VideoFile::set_file(ifstream fil)
{
	//this->_file = fil;
}
void VideoFile::set_sizeOfFile(BYTE bt)
{
	this->_sizeOfFiles = bt;
}
void VideoFile::set_fileName(string newname)
{
	this->_fileName = newname;
}
void VideoFile::set_typeOfFile(string type)
{
	this->_typeOfFile = type;
}