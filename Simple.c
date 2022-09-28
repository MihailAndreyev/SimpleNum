#include <stdio.h>


int main(int argc, char *argv[])
{
    int a,i;
    printf("Vvedite chislo: \n");
    scanf("%d", &a);
    if (a=1)
    {
       printf("Vvedite chislo: \n");
    }
    if ((a%2==0 && a==2) || (a%3==0 && a==3))
    {
       printf("A prostoe chislo\n");
    }
    else
    {
        for (i=4;i<a;i++)
        {
           if (a%i==0)
           {
               printf("A sostavnoe chislo\n");
           }
        }
    }

    return 0;
}
