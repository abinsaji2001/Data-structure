#include<stdio.h>
void main()
{
int a[10],b[10],c[10],n,i,j,m,p,temp=0;
printf("enter the size of first array :\n\t");
scanf("%d",&n);
printf("enter the elements of first array :\n\t");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the size of second array :\n\t");
scanf("%d",&m);
printf("enter the elements of second array :\n\t");
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n;i++)

c[i]=a[i];
j=i;

for(i=0;i<m;i++,j++)
c[j]=b[i];
 printf("\n The merged array :\n\t");
  for (int i =0; i<m+n; i++)
  printf("%d",c[i]);
    for (int i =0; i<m+n; i++)
     {
    for (int j = i + 1; j < m+n; j++)
     {
      if (c[i] > c[j]) 
      {
        temp = c[i];
        c[i] = c[j];
        c[j] = temp;
      }
    }
  }
printf("\n The sorted array :\n\t");
  for (int i =0; i<m+n; i++)
  printf("%d",c[i]);
  }
  


