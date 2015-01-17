#include <iostream>
#include <string>
#include "User.h"
using namespace std;


User::User(string user, string pass, string email, string firstname, string lastname, int numOfFiles, int spaceLeft)
{
	_username = user;
	_password = pass;
	_email = email;
	_firsName = firstname;
	_lastName = lastname;
	_numOfFiles = numOfFiles;
	_spaceLeft = spaceLeft;
}
string User::get_username()
{
	return _username;
}
string User::get_firstName()
{
	return _firsName;
}
string User::get_lastName()
{
	return _lastName;
}
string User::get_email()
{
	return _email;
}
string User::get_password()
{
	return _password;
}
int User::get_numOfFiles()
{
	return _numOfFiles;
}
int User::get_spaceLeft()
{
	return _spaceLeft;
}
void User::set_numOfFiles(int num)
{
	_numOfFiles = num;
}
void User::set_password(string pass)
{
	_password = pass;
}
void User::set_spaceLeft(int num)
{
	_spaceLeft = num;
}