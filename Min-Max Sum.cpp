#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main(){
	int a[10],b[10],i,j,max,n,count;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(i==j)
				continue;
			else{
				count=count+a[j];
			}
		}
		b[i]=count;
	}
	sort(b,b+n,greater<int>());
	cout<<b[0]<<" "<<b[n-1];
}
