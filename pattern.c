#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the size: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(j=1;j<=(2*i-1);j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
