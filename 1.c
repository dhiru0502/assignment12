#include<stdio.h>
void printN(int);
int main()
{
    int N;
    printf("How many print nutural number: ");
    scanf("%d",&N);
    printN(N);
    return 0;
}
void printN(int n)
{
    if(n>0)
    {
        printN(n-1);
        printf("%d ",n);
    }
}
