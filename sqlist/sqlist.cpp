/*===============================================
 *   文件名称：sqlist.cpp
 *   创 建 者：     
 *   创建日期：2022年08月20日
 *   描    述：
 ================================================*/
#include "sqlist.h"
#include <iostream>

using namespace std;

int Sqlist::number = 0;

int Sqlist::get_number()
{
    return number;
}

int get_len(const Sqlist obj)
{
    return obj.len;
}
void Sqlist::show_msg()const
{
    cout<<"len="<<len<<"size="<<size<<"addr="<<addr<<endl;
}
 Sqlist::Sqlist(const int size , const int *arr, const int len)
{
    /*
    if(size < len)
      当size《len有问题，但是又没法返回，这里就应该用异常
    */
    number++;
    addr = new int[size];
    this->len = len;
    this->size = size;
    for(int i = 0; i < len; i++)
    {
        addr[i] = arr[i];
    }
}
Sqlist::Sqlist(const Sqlist &obj)
{
    number++;
    //深拷贝
    addr = new int[obj.size];
    size = obj.size;
    len = obj.len;
    for(int i = 0; i < len; i++)
    {
        addr[i] = obj.addr[i];
    }
}
Sqlist::Sqlist(Sqlist &&obj)
{
    number++;
    addr = obj.addr;
    obj.addr = nullptr;
    len = obj.len;
    size = obj.size;
}
Sqlist::~Sqlist()
{
    number--;
    if(addr != nullptr)
        delete []addr;
}

bool Sqlist::insert(const int pos,const int data)
{
    if(0 > pos || pos > len)
        return false;        //这里应该使用异常

    if(len == size)
        return false;
    for(int i = len-1; i >= pos; i--)
    {
        addr[i+1] = addr[i];
    }
    addr[pos] = data;
    len++;
    return true;
}
bool Sqlist:: insert(const int pos, const int *arr,const int len)
{
    if(0 > pos || pos > len)
        return false;        //这里应该使用异常

    if(this->len+len >= size)
        return false;

    for(int i = this->len-1; i >= pos; i--)
    {
        addr[i+len] = addr[i];
    }
    for(int i = pos; i < pos+len; i++)
    {
        addr[i] = arr[i-pos];
    }
    this->len += len;    
    return true;
}
bool Sqlist::show()const
{
    for(int i = 0; i < len; i++)
    {
        cout<<addr[i];
    }
    cout<<endl;
    return true;
}
bool Sqlist::del(const int pos)
{
}
bool Sqlist::change(const int pos,const int data)
{
}
int Sqlist::search(const int pos)const
{
}
