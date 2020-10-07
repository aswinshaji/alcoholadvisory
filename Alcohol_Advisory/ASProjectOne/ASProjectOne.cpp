// ASProjectOne.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Aswin Shaji COSC 1436-73426

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double N; // Number of standard drinks
	double W; // Weight of a person
	int gender = 0;
	double g; // Gender
	double t; // Number of hours since the first drink
	double BAC; // Blood Alcohol Content

	cout << "Enter number of standard drinks that the person had:" << endl;
	cin >> N;
	cout << "Enter the weight of a person (in pounds):" << endl;
	cin >> W;
	cout << "Enter the gender of a person (1 for men and 2 for women):" << endl;
	cin >> gender;
	cout << "Enter the number of hours that the person drink:" << endl;
	cin >> t;

	if (gender == 1)
	{
		g = 0.68; // For male
	}
	else if (gender == 2)
	{
		g = 0.55; // For female
	}

	BAC = (-0.015*t) + ((2.84*N) / (W*g)); // Calculation of BAC

	cout << "BAC value:" << BAC << endl;

	cout << "Possible effect: " << endl;

	if (BAC < 0.03)
	{
		cout << "Normal behavior, no impairment" << endl;
	}
	else if (BAC < 0.06)
	{
		cout << "Mild euphoria and impairment" << endl;
	}
	else if (BAC < 0.10)
	{
		cout << "Euphoric, increased impairment" << endl;
	}
	else if (BAC < 0.20)
	{
		cout << "Drunk, loss of motor control" << endl;
	}
	else if (BAC < 0.30)
	{
		cout << "Confused, possible blackout" << endl;
	}
	else if (BAC < 0.40)
	{
		cout << "Possibly unconscious" << endl;
	}
	else
	{
		cout << "Unconscious, risk of death" << endl;
	}
	if (BAC < 0.08)
	{
		cout << "Over the legal limit for driving." << endl;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
