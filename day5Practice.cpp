#include<iostream>
#define N 512
using namespace std;

template<class T1>
class Demo{
    public:
        Demo(T1* p,const int len = N)
        {
            
            this->p = new T1[len];
            this->len = len;
            for(int i =0;i<len;i++)
            {
                this->p[i] =p[i]; 
            }
            num++;
            cout<<"_______normal________"<<endl;
        }
        Demo(const Demo<T1> &obj)
        {
            p = new T1[obj.len];
            len = obj.len;
            for(int i = 0; i < len; i++)
            {
                p[i] = obj.p[i];
            }
            num++;
            cout<<"_______copy_________"<<endl;
        }
        ~Demo()
        {
            if(p != nullptr)
            {
                delete []p;
                cout<<"_____destruct_______"<<endl;
            }
        }


        template<class C>
            friend ostream& operator <<(ostream &os ,const Demo<C> &obj);
        Demo<T1> operator+(Demo<T1> &obj)
        {
            T1 sum = len+obj.len;
            T1 a[sum] = {0};
            Demo<T1> temp(a,sum);
            for(int i = 0; i<len;i++)
            {
                temp.p[i] = p[i]; 
            }
            for(int i =len;i<sum;i++)
            {
                temp.p[i] = obj.p[i-len];
            }
            return temp;

        }
        template<class C>
            friend istream& operator >>(istream &is , Demo<C> &obj);
    private:
        T1 *p;
        int len;
        static int num;
};
    template<class C>
ostream& operator <<(ostream &os ,const Demo<C> &obj)
{
    for(int i = 0 ; i < obj.len; i++)
    {
        cout<<" "<<obj.p[i];
    }
    cout<<endl;
    return os;
}

    template<class C>
istream& operator >>(istream& is, Demo<C> &obj)
{
    for(int i = 0; i<obj.len;i++)
    {
        cin>>obj.p[i];
    }
    return is;
}
template<class C>
int Demo<C>::num = 0;

int main()
{
    char a[] = {'1','2','3'};
    char b[] = {'4','5','6'};
    int len;
    char* p;
    char d[N];
    Demo<char> A(a,3);
    Demo<char> B(b,3);
    Demo<char> C = A+B;
    cout<<"enter the arry numbers:"<<endl;
    cin>>len;
    cout<<"enter the arry:"<<endl;
    cin>>d;
    Demo<char> D(d,len);
    cout<<C<<endl;
    cout<<D;
    //cout<<num;
}


