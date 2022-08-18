#include <iostream>
using namespace std;
#define N 128

struct qwq
{
    int arr[N];
    int len;

    int input()
    {
        int arr_num = 10;
        // 逐个输入数组
        for (int i = 0; i < arr_num; i++)
        {
            cin >> arr[i];
            len += 1;
        }
        return len;
    }

    

}qwq;

int main()
{
    cout << "the length is " << qwq.len << endl;
    cout << "the length is " << qwq.input() << endl;
    

    return 0;
}
