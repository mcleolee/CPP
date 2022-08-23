#include <iostream>
using namespace std;

template <typename t1,typename t2>
t1 add(t1 a,t2 b)
{
    return a+b;
}

template <typename t>
t sort(t a[])
{
    cout << "---start to sort---" << endl;
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < len - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp;
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        print();
        cout << "---end sorting---" << endl;
}



int main()
{
    



    cout << add(1,2) << endl;
    cout << add(3.3,3.6) << endl;
    cout << add('a',' ') << endl;
    cout << add('A',1) << endl;
    cout << add<int, int>('A',1) << endl;



    return 0;
}