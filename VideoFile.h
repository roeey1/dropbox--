#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "File.h"
using namespace std;
#define BYTE char

class VideoFile : File
{
public:
	VideoFile(string path, BYTE size, string name, string type);
	virtual string get_pathFile();
	virtual BYTE get_sizeOfFile();
	virtual string get_fileName();
	virtual string get_typeOfFile();
	virtual void set_sizeOfFile(BYTE bt);
	virtual void set_fileName(string newname);
	virtual void set_typeOfFile(string type);
protected:
	string _pathFile;
	BYTE _sizeOfFiles;
	string _fileName;
	string _typeOfFile;
};