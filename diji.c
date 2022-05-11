#include<stdio.h>
int d[10],p[10],cost[10],[10],n;
void diji[int src]
{
  int s[10];
  for(i=0;i<n;i++)
{
 d[i]=cost[src][i]
 p[i],src;
 s[i]=0;
}
for(i=0;i<n;i+=)
{
min=99
u=-1
for(i=0;i<n;i++)
{
if(s[i]==0
if(d[j]<min)
{
min=dij[j]
u=j;
}
}
if(u==-1)
return;
s[u]=1
for(v=0;u<n;v++)
{
if(s[v]==0)
if(d[u]+cost[u][v]<d[v])
{
d[v]=d[u]+cost[u][v]
p[u]=u
}
}
}
}
void main()
{
int src i,j;
printf("enter the nmber vertices");
scanf("%d",&n);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&cost[i][j]);
for(i=0;i<n;i++)
{
for9j=0;j<n;j++)
printf("%d\t",cost[i][j]);
printf("enter the source vertex");
scanf("%d",&src);
diji[src];
}




