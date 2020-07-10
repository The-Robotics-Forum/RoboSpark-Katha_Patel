

#include<iostream>
using namespace std;

class PersonalData
{
    protected:
        string name;
        string surname;
        string number;
        string dob;
    public:
        PersonalData()
        {
            cout << "Enter personal details : Name, Surname, Mobile Number and DOB respectively" << endl;
            cin >> name;
            cin >> surname;
            cin >> number;
            cin >> dob;

        }

};

class ProfessionalData
{
    protected:
        string name_of_org;
        string job_profile;
        string project;
    public:
        ProfessionalData()
        {
            cout << "Enter Professional Details : Name of Organisation, Job Profile and Project respectively" << endl;
            cin >> name_of_org;
            cin >> job_profile;
            cin >> project;
        }

};

class AcademicData
{
    protected:
        int year_of_passing;
        double cgpa;
        string clg_name;
        string branch;
    public:
        AcademicData()
        {
            cout << "Enter Academic Details : YoP, CGPA, College Name and branch respectively" << endl;
            cin >> year_of_passing;
            cin >> cgpa;
            cin >> clg_name;
            cin >> branch;
        }

};

// multiple inheritence

class BioData : public PersonalData, public ProfessionalData, public AcademicData
{
    public:
        BioData(){}

        void printdata()
        {
            cout << "----Personal Data----" << endl;
            cout << "Name : " << name << endl;
            cout << "Surname : " << surname << endl;
            cout << "Mobile Number : " << number << endl;
            cout << "Date of Birth : " << dob << endl << endl;

            cout << "----Professional Data----" << endl;
            cout << "Name of Organisation : " << name_of_org << endl;
            cout << "Job Profile : " << job_profile << endl;
            cout << "Project : " << project << endl << endl;

            cout << "----Academic Data----" << endl;
            cout << "Year of Passing : " << year_of_passing << endl;
            cout << "CGPA : " << cgpa << endl;
            cout << "College Name : " << clg_name << endl;
            cout << "Branch : " << branch << endl;

        }
        
        
};

int main()
{
    BioData x;
    x.printdata();

    return 0;
}