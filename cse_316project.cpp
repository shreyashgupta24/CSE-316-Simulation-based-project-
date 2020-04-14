#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
 int n;   
 int r;      
 int i,j,k;
 int need[10][10],alloc[10][10],max[10][10];
 int avail[10],p[10];
  printf("\nEnter Total process count :");
 scanf("%d",&n);
 printf("\n Enter Total resources count : ");
 scanf("%d",&r);
 printf("\nEnter instances for resources :\n");
 for(i=0;i<r;i++)  
 {  printf("R%d ",i+1);
  scanf("%d",&avail[i]);
  }
 printf("\n Enter allocation matrix (process in rows and resource in columns): \n");
 for(i=0;i<n;i++)
 {
 printf("p%d",i+1);          p[i]=0;
 for(j=0;j<r;j++)
 {
  scanf("%d",&alloc[i][j]);
 }
}
  printf("\n Enter MAX matrix (process in rows and resource limits in columns) \n");

 for(i=0;i<n;i++)
 {
 printf("p%d",i+1);
 for(j=0;j<r;j++)
 {
  scanf("%d",&max[i][j]);
 }
 }
 for(i=0;i<n;i++)
 {
 printf("\np%d\t",i+1) ;
 for(j=0;j<r;j++)
 {
  need[i][j]=max[i][j]-alloc[i][j];
  printf("\t%d",need[i][j]);
  }
 }
 printf("\n\n");
 int flag=0;
 for(i=0;i<n;i++) 
{ 
for(j=0;j<r;j++) 
{ 
if(avail[j]>=need[i][j]) 
flag=1; 
else 
flag=0; 
} 
} 
if(flag==0) 
printf("The System is in Unsafe State"); 
else 
printf("The System is in Safe State");
}

