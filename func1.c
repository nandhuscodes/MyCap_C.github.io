#include <stdio.h>
int main()
{
    int n,sum=0,m;
    printf("Enter a number:");
    scanf("%d",&n);
    sumd(n, sum, m);
    return 0;
}
int sumd(int n, int sum, int m)
{
    while(n>0)
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    printf("Sum is=%d",sum);
}

