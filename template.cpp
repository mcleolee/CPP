#include <iostream>
using namespace std;

template <typename t,typename t_ptr>
t sort(t a[])
{

    int len = 5;
    // t a[];
    cout << "---start to sort---" << endl;
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp;
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for(int i=0;i<len;i++)
    {
        cout << a[i] << endl;
    }
    cout << "---end sorting---" << endl;

    return 0;
}

int main()
{
    // int len=5;
    int a[5] = {2, 5, 6, 8, 4};
    char b[5] = {'a', 'f', 'd', 'c', 'e'};
    sort(a);
    sort(b);

    return 0;
}