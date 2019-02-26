#include"Contact.h"
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
Contact::Contact(){};
void Contact::Set(string name, int age, string phone)
{
	this->Name = name;
	this->Age = age;
	this->Phone = phone;
}
string Contact::GetName()
{
	return Name;
}
int Contact::GetAge()
{
	return Age;
}
string Contact::GetPhone()
{
	return Phone;
}

