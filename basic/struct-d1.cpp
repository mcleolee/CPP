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
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    int sort()
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
} qwq;

int main()
{
    qwq.input();
    cout << "the length is " << qwq.len << endl;
    qwq.print();
    qwq.sort();
    return 0;
}
