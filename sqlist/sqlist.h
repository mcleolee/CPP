/*===============================================
*   文件名称：sqlist.h
*   创 建 者：     
*   创建日期：2022年08月20日
*   描    述：
================================================*/
#ifndef _SQLIST_H
#define _SQLIST_H

const int N = 100;

class Sqlist{


    public:
        Sqlist(const int size = N, const int *arr = nullptr, const int len = 0);
        Sqlist(const Sqlist &obj);
        Sqlist(Sqlist &&obj);
        ~Sqlist();
        
        bool insert(const int pos, const int data);
        bool insert(const int pos, const int *arr, const int len);
        bool show()const;
        bool del(const int pos);
        bool change(const int pos, const int data);
        int search(const int pos)const;
        
        void show_msg()const;
        friend int get_len(const Sqlist obj);
        static int get_number();

    private:
        int *addr;
        int len;
        int size;
        static int number;
};

#endif
