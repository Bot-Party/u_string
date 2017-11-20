// u_string.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;








int main()
{
	vector<string> name;
	vector<string> vorname;
	vector<int> personalnummer;
	vector<double> gehaelter;
	vector<string> geburtstag;
	string eingabe;
	int eingabeInt;
	double eingabedouble;
	istringstream eingabeStrom;



	do
	{
		cout << "Datensatz eingeben (J/N): ";
		getline(cin, eingabe);

	} while (eingabe != "J" && eingabe !="N");

	while (eingabe == "J")
	{
		cout << "Name: ";
		getline(cin, eingabe);
		name.push_back(eingabe);

		cout << "Vorname: ";
		getline(cin, eingabe);
		vorname.push_back(eingabe);

		cout << "Personalnummer: ";
		getline(cin, eingabe);
		if (eingabe == "")
		{
			eingabeInt = 0;
		}
		else
		{
			eingabeStrom.str(eingabe);
			eingabeStrom >> eingabeInt;
			eingabeStrom.clear();
		}
		personalnummer.push_back(eingabeInt);

		cout << "Gehalt: ";
		getline(cin, eingabe);
		if (eingabe == "")
		{
			eingabedouble = 0.0;
		}
		else
		{
			eingabeStrom.str(eingabe);
			eingabeStrom >> eingabedouble;
			eingabeStrom.clear();
		}
		gehaelter.push_back(eingabedouble);

		do
		{
			cout << "Geburtstag: ";
			getline(cin, eingabe);

		} while (eingabe.length() != 10 
			  || eingabe.at(2) != '.' 
			  || eingabe.at(5) != '.');
		geburtstag.push_back(eingabe);

		do
		{
			cout << "Datensatz eingeben (J/N): ";
			getline(cin, eingabe);
		} while (eingabe != "J" && eingabe != "N");
	}

	if (name.empty())
		return 0;


}

