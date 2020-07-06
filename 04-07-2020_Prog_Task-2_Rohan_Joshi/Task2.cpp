
#include<iostream>
#include<string>

using namespace std;

class Student
{
    string name;
    int roll;
    int id;

public:

void showRank(int a)
{
    cout << "Rank is " << a << endl;

}

void showRank(class Student x)

{   
    x.name = "something";
    x.id = 33515;
    x.roll = 12;

    cout << x.name << x.id << x.roll;
}

void showRank(class Student stdu , int a)

{
    stdu.name = "Name";
    stdu.roll = 10;
    stdu.id = 1231531;
    cout << stdu.name << stdu.roll <<  stdu.id;
    cout << "Rank is " << a;
}

};



int main()
{
    Student s1 , s2;
    s1.showRank(s2);
    s1.showRank(s2 , 3);
    s1.showRank(4);

    return 0;
}