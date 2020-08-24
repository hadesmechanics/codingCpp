// cpppractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
	stringstream starsline;
	string stars;
	int d,dend=6;
	int d2;
	// Run program Hadesmechanics says Hello world
	cout << "Hadesmechanics says hello to the World!\n";
	// A message from hadesmechanics to its followers
	cout << "Xmas is coming" << "\n";
	for ( d = 1;d <= dend; d = d + 1) {
		// Accumulate stars in arithmetic progression
		starsline << "**";
		stars = starsline.str();
		for (d2 = 1; d2 <= dend - d; d2 = d2 + 1) {
			// Accumulate spaces before stars
			cout << " ";
		}
		cout << stars <<"\n";
	}
	for (d2 = 1; d2 <= dend - 1; d2 = d2 + 1) {
		// Accumulate spaces before stars, as for first line
		cout << " ";
	}
	cout << "**" << "\n";
	return 0;
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
