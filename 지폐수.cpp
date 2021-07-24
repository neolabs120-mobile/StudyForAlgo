#include<iostream>
using namespace std;
int n=385745;
int i,j;
int t=5, h=50000;
int main(void)
{
    for(i=1;i<=10;i++)
	{
		cout<<h<<" "<<n/h<<"\n";
		n=n%h;
		h=h/t;
		t=7-t;
	}
	return 0;
}

