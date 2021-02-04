#include<iostream>
using namespace std;
int main()
{
	int a[100],b[100],i,j,ca=0,cb=0;
	for(i=0;i<3;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<3;i++)
	{
		cin>>b[i];
	}
	for(i=0;i<3;i++)
	{
		if(a[i]<b[i])
		{
			cb++;
		}
		if(a[i]>b[i])
		{
			ca++;
		}
	}
	cout<<ca<<" "<<cb;
}
