#include<iostream>
const int ArSize=8;
int sum_arr(int arr[],int n);
int main()
{
	int cookies[ArSize]={1,2,4,8,16,32,64,128};
	std::cout<<cookies<<" = array address, ";
	std::cout<<sizeof cookies<<" = sizeof cookies\n"; //返回整个cookies数组占用的字节数，若int占用4字节，拥有8个int元素的cookies则占用32个字节
	int sum=sum_arr(cookies,ArSize);
	std::cout<<"Total cookies eaten: "<<sum<<std::endl;
	sum=sum_arr(cookies,3);
	std::cout<<"First three eaters ate "<<sum<<" cookies.\n";
	sum=sum_arr(cookies+4,4);
	std::cout<<"Last four eaters ate "<<sum<<" cookies.\n";
	return 0;
}
int sum_arr(int arr[],int n)
{
	int total=0;
	std::cout<<arr<<" = arr, ";
	std::cout<<sizeof arr<<" = sizeof arr\n"; //返回arr指针变量的占用的字节数，若系统使用8字节地址，sizeof arr则占用8个字节
	for(int i=0;i<n;i++)
		total+=arr[i];
	return total;
}
