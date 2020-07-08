//Day6_task1
#include <bits/stdc++.h>
using namespace std;
class string1
{
public:
char str[20];
string s1="TRF";
string s3;
string add;
//string s1;

void input()
{
    cout<<"Enter the string"<<endl;
    cin>>str;
}
string operator*(int n);
void display()
{
    cout<<" Concatenated String is:" <<str<<endl;
}
string1 operator +(string1 s)
{
string1 temp;
strcat(str,s.str);
strcpy(temp.str,str);
return temp;

}


};
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
    string1 s1,s2,s3;
    string x;
    int i;
    s1.input();
    s2.input();
    s3=s1+s2;
    s3.display();
    cout<<"Enter the integer"<<endl;
       cin>>i;
    x=s*i;
   cout<<"string after multiplication :"<<endl;
    cout<<x<<endl;
    

  return 0;  

}


































