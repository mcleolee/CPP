#include <iostream>
using namespace std;

class hero
{
private:
    string heroName;

public:
    virtual void mana()
    {
        cout << "this hero have blue\n";
    }
    void print_hero()
    {
        cout << "this is a hero\n";
    }
    // hero(/* args */);
    // ~hero();
};

class Thresh : public hero
{
private:
    int Thresh_age;

public:
    void mana() override
    {
        cout << "Thresh have mana\n";
    }
    void mana(int i)
    {
        i = 500;
        cout << "Thresh have " << i << " mana" << endl;
    }
};

int main()
{
    cout << "---h1---" << endl;
    Thresh cs;
    hero h1;
    h1.mana();
    h1.print_hero();

    cout << "---h2---" << endl;
    hero *h2 = new hero;
    h2->mana();
    h2->print_hero();

    cout << "---h3---" << endl;
    hero *h3 = new Thresh;
    h3->mana();
    h3->print_hero();

    delete h2;
    delete h3;
    return 0;
}

// hero::hero(/* args */)
// {
// }

// hero::~hero()
// {
// }
