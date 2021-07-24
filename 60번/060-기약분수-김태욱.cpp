#include<stdio.h>
int x,y;
int backup, xbackup, ybackup;
int i,j;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");

	fscanf(in,"%d %d", &x, &y);
    
	xbackup=x;
    ybackup=y;

	while(1)
	{
		if(y==0) break;
	    backup=x;
		x=y;
		y=backup%x;
		
	}

	xbackup=xbackup/x;
	ybackup=ybackup/x;

	fprintf(out,"%d/%d", xbackup, ybackup);

	fcloseall();
	return 0;
}

	