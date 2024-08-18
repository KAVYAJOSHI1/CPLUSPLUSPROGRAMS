#include<iostream>
using namespace std;

    union data
    {
        int integer;
        float floating;
        char character;

    };
    int main()
    {
        data d;
        data* p=&d;
        p->integer=42;
        cout<<"INTEGER"<<p->integer<<endl;
        p->floating=9.86;
        cout<<"FLOATING"<<p->floating<<endl;
        p->character='a';
        cout<<"CHARACTER"<<p->character<<endl;
        return 0;
    }
