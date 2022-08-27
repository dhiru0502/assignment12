#include<stdio.h>
void revEven(int);
int main()
{
    int N;
    printf("How many print reverse even number: ");
    scanf("%d",&N);
    revEven(N);
    return 0;
}
void revEven(int n)
{
    if(n>0)
    {
        printf("%d ",2*n);
        revEven(n-1);
    }
}
