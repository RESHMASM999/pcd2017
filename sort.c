#include<stdio.h>
int sort(int n,int a[])
{
    int i,j,temp;
    for(j=0;j<n-1;j++){
        for(i=0;i<n-1-j;i++){
            if(a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[1+i];
                a[1+i]=temp;
            }
        }
    }
return a[i];
}
int main()
{
    int n,i;
    printf("enter the number of integers you want to sort\n");
    scanf("%d",&n);
          int a[n];
          printf("enter the integers\n");
          for(i=0;i<n;i++)
          {
              scanf("%d",&a[1]);
          }
          sort(n,a);
          printf("the sorted integers are");
          for(i=0;i<n;a[1])
              {
                  printf("%d\t",a[1]);
              }
              return 0;
              }
        

