#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    char a[1000],b[1000];
    int p,i = 0,c = 0,j = 0,row,col;
    gets(a);
    while(a[i]!='\0')
    {
        if(a[i]==' ')
        {
            i++;
        }
        else
        {
            c++;
            b[j] = a[i];
            i++;
            j++;
        }
    }
    int t = 0;
    row = floor(sqrt(c));
    col = ceil(sqrt(c));
    while(row*col <= c)
    {
        if((row+1)*col >= c && row <= col)
            row++;
        else
            col++;
    }
    for(p=0;p<col;p++)
    {
        for(i=0;i<row;i++)
        {
            if(p+(col*i) < c)
            printf("%c",b[p+(col*i)]);
        }
        printf(" ");
    }
}
