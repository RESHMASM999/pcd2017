#include<stdio.h>
#include<math.h>

float compute(float x)
{
float term,sum,prev,diff;
int i;
term=sum=diff=x;
for(int i=3;diff>0.000001;i=i+2)
{
prev=term;
term=(-term*x*x)/(i*(i-1));
diff=fabs(prev-term);
sum=sum+term;
}
return sum;
}


float convert(float d)
{
float rad;
rad=(3.1412/180)*d;
return rad;
}

int main()
{
float degree,x,sum;
printf("enter the degree:");
scanf("%f",&degree);
x=convert(degree);
sum=compute(x);
printf("sin(%f)=%f",degree,sum);
return 0;
}
