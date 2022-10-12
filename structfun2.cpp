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

polar rect_to_polar(rect);
void show_polar(polar);

int main()
{
	using namespace std;
	rect rplace;
	
	cout<<"Enter the x and y values:";
	while(cin>>rplace.x>>rplace.y)
	{
		show_polar(rect_to_polar(rplace));
		cout<<"Next two numbers (q to quit): ";
	}
	cout<<"Done.\n";
	return 0;
}

polar rect_to_polar(rect xypos)
{
	polar answer;
	answer.distance=sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
	answer.angle=atan2(xypos.y,xypos.x);
	return answer;
}

void show_polar(polar dapos)
{
	const double Rad_to_deg=57.29577951;
	std::cout<<"distance = "<<dapos.distance<<", angle = "<<dapos.angle * Rad_to_deg<<" degrees\n";
}
