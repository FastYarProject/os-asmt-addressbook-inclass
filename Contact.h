#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
class Contact
{
private:
	string Name;
	int Age;
	string Phone;
public:
	Contact();
	void Set(const string& name, int age, const string& phone);
	string GetName();
	int GetAge();
	string GetPhone();
};