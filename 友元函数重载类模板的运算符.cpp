#include <iostream>

using namespace std;

template <class T, int N = 1024>
class Arr
{
public:
    Arr(const T *addr, const int len)
    {
        if (len > N)
            p = new T[len];
        else
            p = new T[N];
        for (int i = 0; i < len; i++)
        {
            p[i] = addr[i];
        }
        this->len = len;
    }

    T *get_addr()
    {
        return p;
    }
    int get_len()
    {
        return len;
    }
    template <class C, int n> // 林哥写的是 n = 1024, 报错.
    friend ostream &operator<<(ostream &os, Arr<C, n> &obj);

private:
    T *p;
    int len;
};

template <class C, int n = 1024>
ostream &operator<<(ostream &os, Arr<C, n> &obj)
{
    os << "len= " << obj.len;
    for (int i = 0; i < obj.len; i++)
    {
        os << "addr= " << obj.p[i];
    }
    os << endl;

    return os;
}
int main()
{
    char arr[] = "hello";
    int arr1[] = {1, 2, 3, 4};
    Arr<int, 2048> A(arr1, 4); //和函数模板不同，类模板必须显示声明

    cout << "len= " << A.get_len() << "addr= " << A.get_addr() << endl;
    cout << A << endl;
}
