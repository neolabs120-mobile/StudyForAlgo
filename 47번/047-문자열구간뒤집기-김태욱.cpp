#include<stdio.h>
char munja[500];
int i,j,m,n,s;
int munjalen, munjacount;
int front[500], behind[500];
int sunso,sunsobackup;
char arraybackup[500];
int backup;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d", &munjalen);
	fscanf(in,"%s", &munja);
	fscanf(in,"%d", &munjacount);
	for(i=1;i<=munjacount;i++)
	{
		fscanf(in,"%d", &front[i]);
		fscanf(in,"%d", &behind[i]);
	}
	for(i=1;i<=munjacount;i++)
	{
		if(front[i]>behind[i])
		{
            backup=front[i];
			front[i]=behind[i];
			behind[i]=backup;
		}
		sunso=behind[i]-front[i];
		for(j=front[i]-1;j<=behind[i]-1;j++)
		{
            arraybackup[sunso]=munja[j];
			sunso--;
		}
		sunso=behind[i]-front[i];
		sunso=0;
		for(j=front[i]-1;j<=behind[i]-1;j++)
		{
			munja[j]=arraybackup[sunso];
			sunso++;
		}
		for(j=0;j<=500;j++) arraybackup[j]=0;
	//	for(j=0;j<=munjalen-1;j++){ fprintf(out,"%c", munja[j]); }
	//	printf("\n");
	//	sunso=0;
	}
	for(i=0;i<=munjalen-1;i++)
	{
		fprintf(out,"%c", munja[i]);
	}
	fcloseall();
	return 0;
}


