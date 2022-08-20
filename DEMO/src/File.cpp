#include "headerFile.h"
#include <iostream>

using namespace std;

void sqlist::show_msg()
    {
        cout<< "len="<<len<<" size="<<size<<" addr="<<addr<<endl;
    }

sqlist::sqlist(int size, int *arr, int len)
{
    addr = new int[size];
    this->len = len;
    this->size = size;
    for(int i=0; i<len; i++)
    {
        addr[i] = arr[i];
    }
}

sqlist::sqlist(const sqlist &obj)
{
    // deep copy
    addr = new int[obj.size];
    
}



