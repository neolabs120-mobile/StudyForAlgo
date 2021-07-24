#include<stdio.h>
int x,y;
int i,j;
int xbackup, ybackup, backup,lcm;
int a[3], b[3],sum,chk=1;
int resultbackup,resultbackup1;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	for(i=1;i<=2;i++) fscanf(in,"%d %d", &a[i], &b[i]);
	x=b[1];
	y=b[2];
    xbackup=x;
	ybackup=y;
    if(x<y)
	{
		backup=x; 
		x=y; 
		y=backup;
	}
    while(1)
	{
	   if(y==0) break;
	   backup=x;
       x=y;
	   if(y>backup) y=y%backup;
	   else y=backup%y;
	}
    lcm=x*(ybackup/x)*(xbackup/x);
	a[1]=a[1]*(lcm/b[1]);
	a[2]=a[2]*(lcm/b[2]);	
    b[1]=b[1]*(lcm/b[1]);
   	b[2]=b[2]*(lcm/b[2]);
    sum=a[1]+a[2];
    xbackup=sum;
	ybackup=lcm;
	if(xbackup<ybackup) 
	{
		backup=xbackup; xbackup=ybackup; ybackup=backup;
	}
	while(1)
	{
		if(ybackup==0) break;
		backup=xbackup;
		xbackup=ybackup;
		ybackup=backup%xbackup;
	}
	fprintf(out,"%d %d", sum/xbackup, lcm/xbackup);
    fcloseall();
	return 0;
}
