//============================================================================
// Name        : LAB10_PE10-6_Mike_Mordec.cpp
// Author      : Mike Mordec
// Version     :CSC155 - CS Dept Oakton Comunity College
// Date        : 11/23/22
// Description : Write a program that converts a number entered in Roman numerals to a positive integer.
//Your program should consist of a class, say, RomanType.
//============================================================================
#include<iostream>
#include<iomanip>
using namespace std;

class romanType
{
public:
	void displayChoices(char numeral[15])
	{
		cout << "Enter a roman number:\n";



			cin >> numeral;

			for (int x = 0; x < 15; x++)
					numeral[x] = toupper(numeral[x]);
				if (numeral[0] == 'Q') // Just need to check first input to see if they want to quit
				{
					cout << "Thank you for using my Roman Numeral Conversion Program.\n";
				}
				else
					romansArray(numeral);
			}
	void romansArray(char numeral[15])
	{
		int RomanValues[7] = { 1000, 500, 100, 50, 10, 5, 1 };
		char Roman[7] = { 'M', 'D', 'C', 'L', 'X', 'V', 'I' };
		int number = 0, check[15] = { 0 }, numLen = 0, x = 0;
		bool ok = false;
		for (x = 0; x < 15; x++)// x incriments to fill the array 'numeral' up to 15 blocks
			{
				if (numeral[x] != '\0')
					numLen++; // Without this incriment, the value of the roman numeral will be set to 0.
				else
					x = 15;
			}

			for ( x = 0; x < numLen; x++) //Incriments to see how long the user input was.
			{
				ok = false;


			for (int y = 0; y < 7; y++) //Incriments to store the roman numeral as an integer.
			{
				if (numeral[x] == Roman[y])
				{
					ok = true;
				}
			}
	if (ok == false)
				{
					cout << "Not a valid input. Please try again.\n\n";
	return;
				}
	}
			for (int x = 0; x < numLen; x++)
			{

				for (int y = 0; y < 7; y++)
				{
					if (numeral[x] == Roman[y])
					{
						check[x] = RomanValues[y];
					}
				}
			}

			for (int x = 0; x < numLen; x++)
			{
				if ((check[x + 1] > check[x]))
				{
					number += (check[x + 1] - check[x]);
					x++;
				}
				else
					number += check[x];
			}
			cout << number << endl << endl;
		}
		void setRoman(char roman)
		{
			roman = numeral;
		}
		char getRoman()
		{
			return numeral;
		}

	private:
		char numeral;
	};

	int main()
	{
		char choice[15] = "";
		romanType romanObject;
		romanObject.displayChoices(choice);
		//romanObject.romansArray(romans);
		//romanObject.setRoman(number);
		//cout << romanObject.getRoman();
		return 0;
	}
