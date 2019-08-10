#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int *a=NULL,n,item,ts,flag,i,j,k;
	cout<<"Enter the number of testcases";
	cin>>ts;
	for(i=0;i<ts;i++)
	{
	cin>>n>>item;
    a=new int(n);
	for(j=0;j<n;j++)
	{
		cin>>a[j];
	}flag=0;
	for(k=0;k<n;k++)
	{
		if(a[k]==item)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		cout<<1<<"\n";
		else
			cout<<-1<<"\n";
	}
}