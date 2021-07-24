#include<stdio.h>
int sootja;
int result[50];
int i,j,m,n,s;
int chk;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d", &sootja);
	for(i=8;i>=1;i--)
	{
		result[i]=sootja%10;
		sootja=sootja/10;
		if(sootja==0) break;
	}
	for(i=1;i<=8;i++)
	{
		if(chk==0)
		{
			if(result[i]==0) continue;
			else chk=1;
		}
		fprintf(out,"%d\n",result[i]);
	}
	fcloseall();
	return 0;
}


