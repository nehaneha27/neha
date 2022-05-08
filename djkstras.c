#include<stdio.h>
#include<stdlib.>
int d[10],n,cost[5][5],p[5];
void dij(int source)
{
  int j,i,u,v,min;
  int s[10];
  for(i=0;i<n;i++)
 {
  d[i]=cost[source][i];
  s[i]=0;
  p[i]=source;
 }
 for(i=0;i<n;i++)
 {
  s[source]=1;
  u=-1;
  min=99;
  {
   if(d[j]<min)
  {
    p[i]=source;
    s[i]=1;
  }
    if(d[j]<min)   
  {
    min=d[j];
    u=j;
    s[source]=1;
  }
    if(s[j]==0)
  {
    min==99;
    u=-1;
  }
    if(u==-1)
    s[u]=1;
    {
    for(j=0;j<n;j++)
    {
  {
    if(d[u]+cost[u][v]])
  {
   d[v]=d[u]+cost[u][v];
   p[v];
  }
 }
}
  void main()
  {
    int j,source,i;
    printf("number of vertices");
    scanf("%d",&n);
    printf("enter cost adjacency matrix\n");
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
        scanf("%d",&cost[i][j]);
        }
        printf("%d\t",cost[i][j]);
       }
         printf("\n");
         printf("enter the source vertex\n");
         scanf("%d",&source);
         dij(source);
     }
     for(j=0;j<n;j++)
     {
       if(d[j]==99)
       {
        i=j;
       }
       while(i!=source)
       {
         i=p[i];
        }
        printf("\n");
       }
      }
        
  
  
  
  
  
  
  
  
