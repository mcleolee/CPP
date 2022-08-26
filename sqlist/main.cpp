/*===============================================
*   文件名称：main.cpp
*   创 建 者：     
*   创建日期：2022年08月20日
*   描    述：
================================================*/
#include "sqlist.h"
#include <iostream>

using namespace std;

int main()
{
    Sqlist S;
    Sqlist S1(74);
    int arr[4] = {1,2,3,4};
    Sqlist S2(10,arr,4);
   // S2.insert(2,100);
   S2.insert(2,arr,4);
   Sqlist S3 = S2;

    S.show_msg();
    S1.show_msg();
    S2.show_msg();
    S2.show();
    S3.show();

    cout<<"number="<<Sqlist::get_number()<<endl;
    cout<<"len="<<get_len(S2)<<endl;
}
