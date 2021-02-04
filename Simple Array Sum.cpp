#include<iostream>
using namespace std;
int sum(int a[],int n)
{
	int count=0,i;
	for(i=0;i<n;i++)
	{
		count=count+a[i];
	}
	return count;
}

int main()
{
	int n,a[200],i,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	j=sum(a,n);
	cout<<j;
}
