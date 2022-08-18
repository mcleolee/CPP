#if 0
#include <stdio.h>

int swap(int &a,int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    return a+b;
}

int main()
{
    int a = 6, c = 7;
    swap(a,c);
    printf("a=%d,c=%d\n",a,c);

    printf("&swap=%d",swap(a,c));
    int &b = a; 


    return 0;
}

#else

#include <iostream>

using namespace std;

int main()
{
    // 声明简单的变量
    int i;
    double d;

    // 声明引用变量
    int &r = i;
    double &s = d;

    i = 5;
    cout << "Value of i : " << i << endl;
    cout << "Value of i reference : " << r << endl;

    d = 11.7;
    cout << "Value of d : " << d << endl;
    cout << "Value of d reference : " << s << endl;

    return 0;
}

#endif