#include<stdio.h>
int a[1000], b[1000];
int hapresult[2000], charesult[2000];
int i,j,k,m,n,s;
int alen,blen,bigger,count,chk=1,neocount=1,chkcount,backup,emptychk=1;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
    while(1)
	{
	fscanf(in,"%d", &a[count]);	if(a[count]==-1) {alen=count; a[count]=0; count=1; break;  }	count++;
	}
	//alen--;
	while(1)
	{
	fscanf(in,"%d", &b[count]); if(b[count]==-1) {blen=count; b[count]=0; count=1;  break;}	count++;
	}
    for(i=0;i<=alen-1;i++)
	{
        hapresult[a[i]]=a[i];
		if(a[i]>bigger) bigger=a[i];
	}
	for(i=0;i<=blen-1;i++)
	{
		hapresult[b[i]]=b[i];
		if(b[i]>bigger) bigger=b[i];
	}
    for(i=0;i<=alen-1;i++)
	{
      for(j=0;j<=blen-1;j++)
	  {
		  if(a[i]==b[j]) {chk=0; chkcount++;}
	  }
	  if(chk==1) {charesult[neocount]=a[i]; chk=1; neocount++;}
	  chk=1;
	}
	for(i=1;i<=alen-chkcount;i++)
	{
		for(j=i+1;j<=alen-chkcount;j++)
		{
			if(charesult[i]>charesult[j])
			{
				backup=charesult[i];
				charesult[i]=charesult[j];
				charesult[j]=backup;
			}
		}
	}
	for(i=0;i<=alen;i++) { if(charesult[i]!=0) {chk=0;} }
	for(i=1;i<=bigger;i++)
	{
		if(hapresult[i]==0) continue;
		fprintf(out,"%d ", hapresult[i]);
	}
	fprintf(out,"\n");
	if(chk==0)
	{
	for(i=1;i<=alen-chkcount;i++)
	{
		fprintf(out,"%d ", charesult[i]);
	}
	}
	else fprintf(out,"Empty");
	fcloseall();
	return 0;
}

	

	
    
