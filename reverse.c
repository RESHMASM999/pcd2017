#include<stdio.h>
int rev(int x)
{
    int rev_x=0;
    while(x>0)
    {
        rev_x=rev_x*10+x%10;
        x=x/10;
    }
    return rev_x;
}

int main()
{
    int x=4562;
    printf("reverse of no.is%d",rev(x));
    getchar();
    return 0;
}
