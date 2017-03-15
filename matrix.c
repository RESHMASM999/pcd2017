#include<stdio.h>
void getmatrix1(int m,int n,float a[m][n])
{
for (int i=0;i<m;i++){
for (int j=0;j<n;j++){
   {
   printf("enter a[%d][%d] element\n",i,j);
   scanf("%f",&a[i][j]);
   }
   }
}
}   
void getmatrix2(int p,int q,float b[p][q])
{
for (int i=0;i<p;i++){
for (int j=0;j<q;j++){
   {
   printf("enter a[%d][%d] element\n",i,j);
   scanf("%f",&b[i][j]);
   }
   }
}
}   
void mul(int m,int n,int p,int q,float a[m][n],float b[p][q],float c[m][q])
{
for (int i=0;i<m;i++){
for (int j=0;j<n;j++){
for (int k=0;k<m;k++) {
    {
    c[i][j]=c[i][j]+a[i][k]*b[k][j];
    }
    }
 }
 }
 }   
void show(int m,int q,float c[m][q])
{
for (int i=0;i<m;i++){
for (int j=0;i<q;j++){
    {
    printf("enter the multiplication %f",c[i][j]);
    }
 }
 }   
}
        
   int main()
   {
   int m,n,p,q;
   printf("enter m,n,p,q");
   scanf("%d,%d,%d,%d",&m,&n,&p,&q);
   float a[m][n],b[p][q],c[m][q];
   getmatrix1(m,n,a);
   getmatrix2(p,q,b);
   multiply(m,n,a,p,q,b,c);
   showmatrix(c);
   }
   
   
   
