#include"Contact.h"
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
class AdressBook
{
private:
	vector<Contact> Contacts;
	static AdressBook* p_instance;
	AdressBook() {};
public:


	void Add(Contact C)
	{
		p_instance->Contacts.push_back(C);
	}
	void Print()
	{
		cout << "Number of contacts: " << Contacts.size() << endl<<endl<<"LIST OF CONTACTS:"<<endl<<endl<<endl;
		for (int i = 0; i < p_instance->Contacts.size(); i++)
		{
			cout <<"NAME : "<< p_instance->Contacts[i].GetName() << endl <<"AGE : "<< p_instance->Contacts[i].GetAge() << endl <<"PHONE : "<< p_instance->Contacts[i].GetPhone() << endl <<endl<< "#########################" << endl<<endl;
		}
	}
	static AdressBook * getInstance() {
		if (!p_instance)
			p_instance = new AdressBook();
		return p_instance;
	}
	static bool CompareName1(Contact &tmp1, Contact& tmp2)
	{
		return tmp1.GetName() > tmp2.GetName();
	}
	static bool CompareName2(Contact &tmp1, Contact& tmp2)
	{
		return tmp1.GetName() < tmp2.GetName();
	}
	static bool CompareAge1(Contact &tmp1, Contact& tmp2)
	{
		return tmp1.GetAge()> tmp2.GetAge();
	}
	static bool CompareAge2(Contact &tmp1, Contact& tmp2)
	{
		return tmp1.GetAge() < tmp2.GetAge();
	}
	static bool ComparePhone1(Contact &tmp1, Contact& tmp2)
	{
		return tmp1.GetPhone() > tmp2.GetPhone();
	}
	static bool ComparePhone2(Contact &tmp1, Contact& tmp2)
	{
		return tmp1.GetPhone() <tmp2.GetPhone();
	}

	void  Sort(int field, int way)
	{
		if (field == 1)
		{
			if (way == 1)
				sort(Contacts.begin(), Contacts.end(), CompareName1);
			if (way == 2)
			{
				sort(Contacts.begin(), Contacts.end(), CompareName2);
			}

		}
		if (field == 2)
		{
			if (way == 1)
				sort(Contacts.begin(), Contacts.end(), CompareAge1);
			if (way == 2)
			{
				sort(Contacts.begin(), Contacts.end(), CompareAge2);
			}

		}
		if (field == 3)
		{
			if (way == 1)
				sort(Contacts.begin(), Contacts.end(), ComparePhone1);
			if (way == 2)
			{
				sort(Contacts.begin(), Contacts.end(), ComparePhone2);
			}

		}

	}
	
};
