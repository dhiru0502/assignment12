#include<stdio.h>
void printodd(int);
int main()
{
    int N;
    printf("How many print odd number: ");
    scanf("%d",&N);
    printodd(N);
    return 0;
}
void printodd(int n)
{
    if(n>0)
    {
        printodd(n-1);
        printf("%d ",2*n-1);

    }
}
