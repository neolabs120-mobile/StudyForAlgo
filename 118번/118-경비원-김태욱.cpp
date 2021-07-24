#include<stdio.h>
int n,m;
int locate[101];
int how[101];
int t;
int locate1,locate2;
int i,j,k;
int way[9]={0,1,3,2,4,1,3,2,4};
int count;
int distance;
int distanceother;
int tot;
int backup;
int locatex,locatey;
int locate2backup;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d %d", &n, &m);
	fscanf(in,"%d", &t);
	for(i=1;i<=t;i++)
	{
		fscanf(in,"%d %d", &locate[i], &how[i]);
	}
	fscanf(in,"%d %d", &locate1, &locate2);
	locate2backup=locate2;
    for(i=1;i<=t;i++)
	{
		    if(locate[i]==locate1)
			{
				if(how[i]<locate2)
				{
					backup=how[i];
					how[i]=locate2;
					locate2=backup;
				}
				distance=how[i]-locate2;;
				distanceother=(n*2+m*2)-distance;
				if(distance>distanceother) 
				{
					tot=tot+distanceother;
				}
				else
				{
					tot=tot+distance;
				}
			}
			else 
			{
					for(j=1;j<=8;j++)
					{
						if(way[j]==locate1)
						{
							locatex=j;
							break;
						}
					}
                    for(j;j<=8;j++)
					{
						if(way[j]==locate[i])
						{
							locatey=j;
							break;
						}
					}
					locate2=locate2backup;
					if(locate1==1) count=count+locate2;
					else if(locate1==2) count=count+(n-locate2);
					else if(locate1==3) count=count+(m-locate2);
					else if(locate1==4) count=count+locate2;
					for(j=locatex+1;j<=locatey-1;j++)
					{
						if(way[j]==1) count=count+n;
						else if(way[j]==2) count=count+n;
						else if(way[j]==3) count=count+m;
						else if(way[j]==4) count=count+m;
					}
				    if(locate[i]==1) count=count+(n-how[i]);
					else if(locate[i]==2) count=count+how[i];
					else if(locate[i]==3) count=count+how[i];
					else if(locate[i]==4) count=count+(m-how[i]);
					distance=count;
					distanceother=(n*2)+(m*2)-distance;
					if(distance>distanceother) tot=tot+distanceother;
					else tot=tot+distance;
					count=0;
					distance=0;
					distanceother=0;
				}
			}
	fprintf(out,"%d", tot);
    fcloseall();
	return 0;
}

		






