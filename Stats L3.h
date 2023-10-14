#ifndef STATS_H
#define STATS_H

class Stats
{
public:
	Stats();
	void Calculatemean();
	float getmean();
	void Calculatesdev();
	float getsdev();

private:
	float mean;
	float sdev;
	float x;
	float y;
	float w;
	float z;
	int n = 4.0;
};

#endif // !STATS_H