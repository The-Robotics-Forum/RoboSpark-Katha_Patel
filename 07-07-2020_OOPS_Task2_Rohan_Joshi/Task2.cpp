

#include<iostream>
#include<string.h>
using namespace std;

class op
{
    public:
    string name = "Rohan";

    op(){}

    void operator*(int size)
    {
        for(int i = 0; i < size ; i++)
            cout << name;
    }
    
    friend void operator*(int size, op s)
    {
        for(int i = 0; i < size; i++)
            cout << s.name;
    }

};

int main()
{
    op x;
    x*5;
    cout << endl;
    5*x;

    return 0;
}