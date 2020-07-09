//Day7_Task1
//Multiple inheritance
#include <bits/stdc++.h>
using namespace std;

class personal{//Base class

    public:
    string name;
    string surname;
    long long mobile_no;
    string dob;
    string add;

    personal()
    {//default contructor;
    name="xyz";
    surname="yy";
    mobile_no=9099123994;
    dob="17/09/2001";
    add="ddscs";
    }
    void input1()//Function to take input
    {
        cout<<"Enter your first name"<<endl;
        cin>>name;
        cout<<"Enter your surname"<<endl;
        cin>>surname;
        cout<<"Enter your phone number :"<<endl;
        cin>>mobile_no;
        cout<<"Enter your date of birth(DD/MM/YYYY):"<<endl;
        cin>>dob;
        cout<<"Enter your address"<<endl;
        cin>>add;


    }


};
class professional{//Base class
    public:
    string name1;
    string job;
    string project;
    professional()//default contructor;
    {
        name1="czxs";
        job="dasa";
        project="sds";

    }

 void input2()//Function to take input
 {
     cout<<"Enter your name of orginization:"<<endl;
     cin>>name1;
     cout<<"Enter your job profile:"<<endl;
     cin>>job;
     cout<<"Enter your project name:"<<endl;
     cin>>project;
 }


};

class academic //Base class
{
 
 public:
 int year;
 string college_name;
 double cgpa;
 string branch;
 academic()//default contructor;
 {
     year=2020;
     college_name="VIT";
     cgpa=9;
     branch="IT";



 }

 void input3()//Function to take input
 {
     cout<<"Enter your passing year:"<<endl;
     cin>>year;
     cout<<"Enter your college name:"<<endl;
     cin>>college_name;
     cout<<"Enter your CGPA:"<<endl;
     cin>>cgpa;
     cout<<"Enter your branch:"<<endl;
     cin>>branch;
 }

};
class biodata:public personal,public professional,public academic//derived class from(personal,professional,academic)
{
    public:
    void display()//Function to display data
    {
       cout<<"First name:"<<name<<endl;
       cout<<"Surname:"<<surname<<endl;
       cout<<"Mobile number:"<<mobile_no<<endl;
       cout<<"Date of birth"<<dob<<endl;
       cout<<"Address"<<add<<endl;
       cout<<"Name of organization:"<<name1<<endl;
       cout<<"Job profile:"<<job<<endl;
       cout<<"Name of project:"<<project<<endl;
       cout<<"Passing year:"<<year<<endl;
       cout<<"Name of college:"<<college_name<<endl;
       cout<<"CGPA:"<<cgpa<<endl;
       cout<<"Branch:"<<branch<<endl;

    }
};
int main()
{
    biodata b;
    b.input1();
    b.input2();
    b.input3();
    b.display();
return 0;



}