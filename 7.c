#include<stdio.h>
void square(int);
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);
    square(N);
    return 0;
}
void square(int n)
{
    if(n>0)
    {
        square(n-1);
        printf("%d ",n*n);
    }
}
