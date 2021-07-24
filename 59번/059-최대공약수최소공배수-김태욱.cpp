#include<stdio.h>
int front,behind,backup;
int frontresult,behindresult;
int frontbackup,behindbackup;
int i,j,lcm;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");

	fscanf(in,"%d %d", &front, &behind);

	frontbackup=front;

	behindbackup=behind;

	while(1)
	{
		backup=behind;
		behind=front%behind;
		front=backup;

		if(behind==0) break;
	}

	frontresult=frontbackup/front;

	behindresult=behindbackup/front;

    lcm=front*frontresult*behindresult;

	fprintf(out,"%d\n%d", front, lcm);

	fcloseall();

	return 0;
}
