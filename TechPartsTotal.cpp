// Camera Parts Project
// Nile Weadick
// 10/1/18

#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "string"

using namespace std;

int main()
{
	// Define variables and constants

	int NwPc, SecDrives, Cams, SoftWare;
	double $NwPc, $SecDrives, $Cams, $SoftWare, total, tax, grandTotal;

	// Input from user and assign value to variables

	cout << "Enter total number of NW-PC being purchased: ";
	cin >> NwPc;
	cout << endl << "Enter total number of Second Drives being purchased: ";
	cin >> SecDrives;
	cout << endl << "Enter total number of Cameras being purchased: ";
	cin >> Cams;
	cout << endl << "Enter total number of Software Bundles being purchased: ";
	cin  >> SoftWare;
	cout << endl << "	*********";

	// Preform Calulations

	$NwPc = NwPc * 1498.23;
	$SecDrives = SecDrives * 84;
	$Cams = Cams * 119;
	$SoftWare = SoftWare * 49;
	total = $NwPc + $SecDrives + $Cams + $SoftWare;
	tax = total * 0.0765;
	grandTotal = total + tax;

	// Display 

		// Set Standard Manipulators

	cout << fixed << showpoint << setprecision(2) ;

	cout << endl << endl << "  NewWave Computers";
	cout << endl << endl << "    123 Main St";
	cout << endl << "  Somewhere MO 65555";
	
	//cout << endl << "----|----|----|----|----|----|----|----|----|----|";

	cout << endl << endl << "QTY Item" << setw(17) << "Cost";
	cout << endl << endl << NwPc << " NW-PC" <<	setw(16) << "$" << setw(10) << $NwPc; 
	cout << endl << endl << SecDrives << " Second Drive" << setw(9) << "$" << setw(10) << $SecDrives;
	cout << endl << endl << Cams << " Cameras" << setw(14) << "$" << setw(10) << $Cams;
	cout << endl << endl << SoftWare << " Software Bundles" << setw(5) << "$" << setw(10) << $SoftWare;
	cout << endl << endl << setw(33) << "-----------";
	cout << endl << endl << setw(21) << "Total" << setw(2) << "$" << setw(10) << total;
	cout << endl << endl << setw(21) << "Tax" << setw(2) << "$" << setw(10) << tax;
	cout << endl << endl << setw(33) << "-----------";
	cout << endl << endl << setw(21) << "Grand Total" << setw(2) << "$" << setw(10) << grandTotal;

// Freeze Screen 

	string junk;
	cout << endl << endl << "Hit any key to continue:";
	cin >> junk;

	return 0;
}

