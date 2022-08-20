#ifndef _DEMO_H
#define _DEMO_H

const int N = 100;

class sqlist
{
private:
    int *addr;
    int len;
    int size;

public:
    sqlist(int size = N, int *arr = nullptr, int len = 0);
    sqlist(const sqlist &obj);
    sqlist(sqlist &&obj);
    ~sqlist();

    bool insert(int pos, int data);
    bool insert(int pos, int *arr, int len);
    bool show();
    bool del(int pos);
    bool change(int pos, int data);
    int search(int pos);

    void show_msg();
};

#endif