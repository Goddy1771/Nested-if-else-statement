#include<stdio.h>
main()
{ 
    int a, b, c;
    printf(" Enter three numbers of a,b,c: ");
    scanf("%d %d %d", &a, &b, $c);
    if(a>b)
    { 
        if(a>c)
        { 
            printf(" a is largest: ");
        }
        else
        {
            printf(" c is largest: ");
        }
    }
    else 
    { 
        if(b>c)
        {
            printf(" b is largest: ");
        }
        else
        {
            printf(" c is largest: ");
        }
    }
    getch();
}