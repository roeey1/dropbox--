#pragma once
#include <iostream>
#include <string>
using namespace std;
class User
{
public:

	User(string user, string pass, string email,	string firstname, string lastname,	int numOfFiles, int spaceLeft);
	string get_username();
	string get_password();
	string get_email();
	string get_firstName();
	string get_lastName();
	int get_numOfFiles();
	int get_spaceLeft();
	void set_password(string pass);
	void set_numOfFiles(int num);
	void set_spaceLeft(int num);
	~User();

private:
	string _username;
	string _password;
	string _email;
	string _firsName;
	string _lastName;
	int _numOfFiles;
	int _spaceLeft;

};

