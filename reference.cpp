#include <stdio.h>

int swap(int &a,int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    return 0;
}

int main()
{
    int a = 6, c = 7;
    swap(a,c);
    printf("a=%d,c=%d\n",a,c);

    int &b = a; 


    return 0;
}

