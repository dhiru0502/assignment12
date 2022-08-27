#include<stdio.h>
void printeven(int);
int main()
{
    int N;
    printf("How many print even number: ");
    scanf("%d",&N);
    printeven(N);
    return 0;
}
void printeven(int n)
{
    if(n>0)
    {
        printeven(n-1);
        printf("%d ",2*n);
    }
}
