#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n,a[100],i,j,cp=0,cn=0,cz=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<0){
			cp++;
		}
		
		else{
			if(a[i]>0)
			{
				cn++;
			}
			else{
				if(a[i]==0)
				{
					cz++;
				}
			}
		}
	}
	cout<<double(cp)/double(n)<<" "<<double(cn)/double(n)<<" "<<double(cz)/double(n);
}
