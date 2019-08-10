
#include<iostream>
#include<stdlib.h>

using namespace std;
int main(int argc, char **argv)
{
cout<<"Enter the vlaue of N"<<"\n";
int n;
cin>>n;
int a[n];
int large=-9999;
for(int i=0;i<n;i++)
{
	cout<< "enter value "<<i+1<<"\n";
	cin>>a[i];
	if(large<a[i])
		large=a[i];
}
     cout<<"largest number is"<<large;
	
	return 0;
}
