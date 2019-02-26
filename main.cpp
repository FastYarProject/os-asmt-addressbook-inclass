
#include"AdressBook.h"
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

AdressBook* AdressBook::p_instance = 0;
int main()
{
	Contact C;
	C=Contact();
	string tmp;
	AdressBook* A;
	A = AdressBook::getInstance();
	

	while (true)
	{
		cout << "Do you want to input new contact?[y/n]" << endl;
		cin >> tmp;
		if (tmp == "y")
		{
			string n, p;
			int  a;
			cout << "Input Name : ";
			cin >> n;
			cout << endl;
			cout << "Input Age : ";
			cin >> a;
			cout << endl;
			cout << "Input Phone : ";
			cin >> p;
			cout << endl;
			C.Set(n, a, p);
			A->Add(C);
		}
		if (tmp == "n")
		{
			int field, way;
			cout << "Input field of sort : ";
			cin >> field;
			cout << endl;
			cout << "Input way of sort(ascent-1/descent-2) :";
			cin >> way;
			cout << endl;
			A->Sort(field, way);
			A->Print();
			return 0;
		}
	}
	
	
	
	
	return 0;




}