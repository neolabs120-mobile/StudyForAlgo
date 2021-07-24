#include<stdio.h>
int i,j;
int front,behind,backup,count;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d %d", &front,&behind);
	if(front<behind)
    {
		backup=front;
		front=behind;
		behind=backup;
	}
	for(i=1;i<=front;i++)
		if(front%i==0 || behind%i==0) { fprintf(out,"%d ", i); count++;}
	fcloseall();
	return 0;
}
	