#include <iostream>

template <typename t1,typename t2>
void add(t1 a,t2 b)
{
    return a+b;
}

int main()
{
    cout << add(1,2) << endl;



    return 0;
}