#include "Stats.h"
#include <string>

Stats::Stats()
{
}

void Stats::Calculatemean() //Formula to calculate Mean
{
	double mean = (x + y + z + w) / 4.0;
}

float Stats::getmean()
{
	return mean;
}

void Stats::Calculatesdev() //Formula to calculate Sdev
{
	double sdev = pow((x - mean), 2) + pow((y - mean), 2) + pow((z - mean), 2) + pow((w - mean), 2);

	sdev = sdev / (n - 1);
	sdev = sqrt(sdev);
}

float Stats::getsdev()
{
	return sdev;
}