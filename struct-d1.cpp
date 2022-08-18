#include <iostream>
using namespace std;
#define N 128

struct qwq
{
    int arr[N];
    int len;

    int input()
    {
        int arr_num = 5;
        // 逐个输入数组
        for (int i = 0; i < arr_num; i++)
        {
            cin >> arr[i];
            len += 1;
        }
        return len;
    }
    int print()
    {
        cout << "the arr is ";
        for (int i = 0; i < len; i++)
        {
            cout << arr[i] << " " ;
        }
        cout << endl;
    }

    int sort()
    {
        cout << "---start to sort---" << endl;
        for (int i = 0; i < len; i++)
        {
            for(int j=0; j<len - 1;j++)
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        cout << "---end sorting---" << endl;
        print();
    }

}qwq;

int main()
{
    qwq.input();
    cout << "the length is " << qwq.len << endl;
    
    qwq.print();

    qwq.sort();

    return 0;
}
