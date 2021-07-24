#include<stdio.h>
#include<string.h>
char yangmal[150];
int leftchk[150],rightchk[150];
int i,j,k,len,chk=1;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fgets(yangmal,101,in);
	len=strlen(yangmal);
	for(i=0;i<len;i++)
	{
		if(yangmal[i]>=65 && yangmal[i]<=90) leftchk[yangmal[i]-'A']++;
		if(yangmal[i]>=97 && yangmal[i]<=122) rightchk[yangmal[i]-'a']++;
	}
		
	
	for(i=0;i<26;i++)
	{
		if(leftchk[i]!=rightchk[i])
		{
			chk=0;
		
		}
	}
	if(chk==0) fprintf(out,"NO");
	else fprintf(out,"YES");
	return 0;
}

