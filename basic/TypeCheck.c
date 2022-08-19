#include <stdio.h>
//C++有更严格的类型检查

int main()
{
    // eg.1-----------------------------
    {
        // NULL 本身是没有类型的，c++中编译改为test_1
        test(NULL);

        // nullptr 是有类型的，是一个指针
        test(nullptr);
    }

    // eg.2-----------------------------
    {
        const int a = 7;
        // a = 10; // c++ 报错
        // c++ 也报错，但是c只是警告
        int *p = &a;
        *p = 10;
    }

    return 0;
}

void test(unsigned long a)
{
    printf("111\n");
}

void test_1(int *p)
{
    printf("222\n");
}