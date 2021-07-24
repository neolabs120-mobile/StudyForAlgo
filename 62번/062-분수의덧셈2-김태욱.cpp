#include<stdio.h>
int a[1000], b[1000];
int i,j,k,m,n,s;
int x,y,lcm=1;
int sum, xbackup, ybackup, backup, xy, xybackup, gop=1;
int finalresultx, finalresulty, finalresultxbackup, finalresultybackup;
int finalgcm;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d", &n);
	for(i=1;i<=n;i++) fscanf(in,"%d %d", &a[i], &b[i]);
	for(i=1;i<=n-1;i++)
	{
	  if(i==1)
	  {
		if(b[i]<b[i+1]) 
		{
			x=b[i+1]; y=b[i];
		}
        else
		{
			x=b[i]; y=b[i+1];
		}
	  }
	  else
	  {
		if(x>b[i])
		{
			y=b[i];
		}
		else 
		{
			y=x; x=b[i];
		}
	  }
	  while(1)
	  {
	    if(y==0) break;
        backup=x;
		x=y;
		if(backup>y) y=backup%y;
		else y=y%backup;
	  }
	}
	for(i=1;i<=n;i++) gop*=b[i];
	lcm=gop/x;
	for(i=1;i<=n;i++) 
	{
		a[i]=a[i]*(lcm/b[i]); b[i]=b[i]*(lcm/b[i]);
	}
    finalresultybackup=lcm;
	for(i=1;i<=n;i++) finalresultxbackup+=a[i];
	if(finalresultxbackup<finalresultybackup) 
	{
		finalresultx=finalresultybackup; finalresulty=finalresultxbackup;
	}
	if(finalresultxbackup>finalresultybackup) 
	{
		finalresultx=finalresultxbackup; finalresulty=finalresultybackup;
	}
    while(1)
	{
		if(finalresulty==0) break;
        backup=finalresultx;
		finalresultx=finalresulty;
		if(backup>finalresulty) finalresulty=backup%finalresulty;
		else if(backup<finalresulty) finalresulty=finalresulty%backup;
	}
	fprintf(out,"%d %d", finalresultxbackup/finalresultx, finalresultybackup/finalresultx);
    fcloseall();
	return 0;
}




	