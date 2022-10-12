#include<iostream>
#include<cmath>

struct polar
{
	double distance;
	double angle;
};
struct rect
{
	double x;
	double y;
};

void rect_to_polar(const rect*, polar*);
void show_polar(const polar*);

int main()
{
	using namespace std;
	rect rplace;
	polar pplace;
	
	cout<<"Enter the x and y values:";
	while(cin>>rplace.x>>rplace.y)
	{
		rect_to_polar(&rplace, &pplace);
		show_polar(&pplace);
		cout<<"Next two numbers (q to quit): ";
	}
	cout<<"Done.\n";
	return 0;
}

void rect_to_polar(const rect* xypos, polar* dapos)
{
	dapos->distance=sqrt(xypos->x * xypos->x + xypos->y * xypos->y);
	dapos->angle=atan2(xypos->y,xypos->x);
}

void show_polar(const polar* dapos)
{
	const double Rad_to_deg=57.29577951;
	std::cout<<"distance = "<<dapos->distance<<", angle = "<<dapos->angle * Rad_to_deg<<" degrees\n";
}
