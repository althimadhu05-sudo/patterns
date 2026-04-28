#include<stdio.h>
void main ()
{
    int row,col;
    printf("enter number of rows and column");
    scanf("%d%d",&row,&col);
       for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(i==row||j==col||i+j==row+1)
            {
        printf("*");
        }
        else
        {
            printf(" ");
                    }
        }
printf("\n");
}
}


