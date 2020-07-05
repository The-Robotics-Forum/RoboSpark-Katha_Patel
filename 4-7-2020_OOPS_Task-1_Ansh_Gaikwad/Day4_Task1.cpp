#include<bits\stdc++.h>
using namespace std;

#define No_Of_Subs 5

class Student
{

    public:

    // global variables
    string name;
    int roll;
    float cgpa;
    int year;
    int *marks = new int[No_Of_Subs];
    int sum = 0;

    // Constructor
    Student()
    {
        name = "Not Set";
        roll = -1;
        year = -1;
        cgpa = -1;
    }

    private:

    // Input Details
    void enterDetails()
    {
        cout << "Please enter the following details => " << endl;
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your roll number: ";
        cin >> roll;
        cout << "Enter your current year: ";
        cin >> year;
        cout << endl;
    }

    // Input Marks
    void enterMarks()
    {
        for(int i=0;i<No_Of_Subs;i++)
        {
            cout << "Enter marks of subject " << i+1 << ": ";
            cin >> marks[i];
        }
    }

    // Display Details
    void showDetails()
    {
        cout << "\nThe Entered Details are => " << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No:" << roll << endl;
        cout << "Total Marks: " << sum << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "Year: " << year << endl;
    }

    // Calculate Total Marks
    void calMarks()
    {
        for(int i=0;i<No_Of_Subs;i++)
        {
            sum += marks[i];
        }
        
        // Deleting allocated memory
        delete [] marks;
    }

    // Calculate Cgpa
    void calCgpa()
    {
        cgpa = float(sum)/float(No_Of_Subs);
        cgpa /= 9.5;
    }

    public: 

    // public function
    void run()
    {
        enterDetails();
        enterMarks();
        calMarks();
        calCgpa();
        showDetails();
    }
};

int main()
{
    Student s;
    s.run();

    return 0;
}