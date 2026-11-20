#include<stdio.h>
void main()
{
int A[3][3],i,j,z=0,nz=0,k=0,sp[10][3];
printf("enter 9 values of matrix A");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)

{
scanf("%d",&A[i][j]);
if(A[i][j]==0)
z++;
else
nz++;
}
}
if (z>nz)
printf("sparse matrix");
else
printf("not a sparse matrix");

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if (A[i][j]!=0)
{
sp[k][0]=i;
sp[k][1]=j;
sp[k][2]=A[i][j];
k++;
}
}
}
printf("\n A is=\n");

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
printf("%d", A[i][j]);
printf("\n");
}

printf("\n SPARSE MATRIX IS=\n");
for(i=0;i<nz;i++)
{
for(j=0;j<3;j++)
printf("%d ",sp[i][j]);
printf("\n");
}
}
