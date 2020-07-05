//Day4_Task2
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    double cgpa;
    int year;
    int n=5;
    int sum=0;
    //int *arr= new int[];
    double*arr;
    
    Student()
    {
        arr =new double[5];
        name = "xyz";
        roll = 12;
        year = 2;
        cgpa = -1;
    }
    
    void getInput()
    {
        std::cout << "Enter the details :\n";
        cout << "Name: ";
        cin >> name;
        cout << "Roll No: ";
        cin >> roll;
        cout << "Year ";
        cin >> year;
        cout<< "Enter the Grade points of five subjects";
        for(int i=0;i<5;i++)
        {
            cin>>arr[i];
        }
    }
    void showDetails()
    {
        cout << "Name: " << name << "\n";
        cout << "Roll No:" << roll << endl;
        cout << "Year: " << year << endl;
        cout << "CGPA: " << cgpa << endl;
        cout<<"Marks of five subjects are:"<<endl;
        for(int j=0;j<5;j++)
        {
            cout<<arr[j]<<endl;
        }
        cout<<"Total Percentage :"<<totalmarks()<<"%"<<endl;
        cout<<"Total CGPA :"<<calculatecgpa()<<endl;
        
    }
void getAndShowData()
    {
        getInput();
        showDetails();
    }
int totalmarks()
{
    double  sum=0;
    double y;
    for( int i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    y=(sum/5)*9.5;
    return y;
}
double calculatecgpa()
{
    double x;
    x=totalmarks()/9.5;
    return x;
}

};

void showRank(int x)
  {
      cout<<"Rank:"<< x<<endl;
  }
  void showRank(Student s1)
  { 
     s1.getAndShowData();
      cout<<"No Rank"<<endl;

  }
  void showRank(Student s1,int x)
  {
     s1.getAndShowData();
      cout<<"Rank:"<< x<<endl;
           
  }


int main()
{

    Student s1;
    showRank(s1);
    showRank(s1,3);
    showRank(3);
    delete[] s1.arr; 
    return 0;

}









  