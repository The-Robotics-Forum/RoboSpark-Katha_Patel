
#include<iostream>
#include<string>

using namespace std;

class Student
{
private:

    int *arr = new int[5];
    string name;
    int roll;
    
public:

    Student()
    {
        name = "Rohan";
        roll = 1;
    }

    int  getMarks()
    {
        int sum = 0;
        cout << "Enter marks of student out of hundred " << endl;
        for(int i = 0; i < 5; i++)
        {
            cin >> arr[i];
            sum = sum+arr[i];
        }
        return sum;
    }

    double CGPA(int addition)
    {
        double gpa;
        gpa = addition*10/500;

        return gpa;
    }

    void showData(double cgpa , int total)
    {
        cout << "Name of student is : " << name << endl;
        cout << "Roll number is : " << roll << endl;
        cout << "CGPA is : " << cgpa << endl;
        cout << "Total marks are : " << total << endl;

    }
    
};

int main()
{
    int sum;
    double score;
    Student s1;
    sum = s1.getMarks();
    score = s1.CGPA(sum);
    s1.showData(score , sum);

    return 0;
}

