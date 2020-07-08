//Day6_task1
#include <bits/stdc++.h>
using namespace std;

class string1
{
public:
string s1;
string s2;
string add;
string1()
{
    add="";
    cout<<"Enter the first string"<<endl;
    cin>>s1;
    cout<<"Enter the second string"<<endl;
    cin>>s2;

}


void display();
string operator +(string s);
string operator*(int n);
friend void operator+(int s, string1 &s);

};
void string1 ::display()
{
    cout<<add<<endl;
}

string string1:: operator +(string s)
{
    add=s1+s2;
    return add;
}
string string1:: operator*(int n)
{
    for(int i=0;i<n;i++)
    {
        add=add+s1;
    }
    return add;

}
int main()
{
 string1 s;
 int i;
 
 string x;
 
 x=s.s1+s.s2;
 cout<<"Resultant Srting is :"<<x<<endl;
 cout<<"Enter the integer"<<endl;
 cin>>i;
 s*i;
 cout<<"string after multiplication :"<<endl;
 s.display();
 



}
