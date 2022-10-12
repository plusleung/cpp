#include<iostream>
unsigned int c_in_str(const char*, char);
int main()
{
	using namespace std;
	char mmm[15]="minimum";
	const char* wail="ululate";
	
	cout<<c_in_str(mmm,'m')<<" m characters in "<<mmm<<endl;
	cout<<c_in_str(wail,'u')<<" u characters in "<<wail<<endl;
	return 0;
}

unsigned int c_in_str(const char* str, char ch)
{
	unsigned int count=0;
	
	while(*str)
	{
		if(*str==ch)
			count++;
		str++;
	}
	return count;
}
