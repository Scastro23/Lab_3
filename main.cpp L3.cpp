// Samuel Castro
// Lab 3 
// FA2023
/* Description: Write an interactive C++ program that computes and outputs the mean and
population standard deviation of a set of four integers that are inputted by a file called
“inMeanStd.dat” and the user (should handle both). Although the individual values are
integers, the results are floating-point values. Be sure to use proper formatting and
appropriate comments in your code. Provide appropriate prompts to the user. The
output should be to the screen for the user inputted values and to a file called
“outMeanStd.dat”. The programs output should be labeled clearly and formatted
neatly. You must calculate the mean and standard deviation in separate methods within
a class.*/

#include <iostream>
#include <fstream>
#include "Stats.h"

using namespace std;

float func(int a, int b, int c, int d);

int main()
{
	int x, y, z, w;

	//Input from a file "data.dat"
	ifstream inFile("data.dat");
	inFile >> x >> y >> z >> w;

	//Input from a file "inMeanStd.dat"
	std:: ifstream ("inMeanStd.dat");
	inFile >> x >> y >> z >> w;

	ofstream house;
	house.open("out.dat");

	//Input from the average data
	house << "The average of file data: " << x << ", " << y << ", " << z << ", and ";
	house << w << " is " << func(x, y, z, w) << endl;

	//Prompt the user for the input
	cout << "Input four integers: ";
	cin >> x >> y >> z >> w;

	//Output of the average 
	cout << "The average of keyboard data: " << x << ", " << y << ", " << z << ", and ";
	cout << w << " is " << func(x, y, z, w) << endl;

	//Formulas to calculate Mean and Sdev
	int mean = (x + y + z + w) / 4.0;
	int sdev = pow((x - mean), 2) + pow((y - mean), 2) + pow((z - mean), 2) + pow((w - mean), 2);
	int n = 4.0;
	sdev = sdev / (n - 1);
	sdev = sqrt(sdev);

	//Output of the Mean and Sdev
	cout << "The Mean is: " << mean << endl;
	cout << "The Sdev is: " << sdev << endl;
}

float func(int a, int b, int c, int d)
{
	return (a+b+c+d)/4.0;
}
