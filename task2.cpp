#include <iostream>
using namespace std;
float average(float eng,float math,float chem,float social,float bio);
string grade(float av);
main()
{
    string name;
    float marks_eng,marks_math,marks_chem,marks_sc,marks_bio;
    cout<<"Enter marks for english: ";
    cin>>marks_eng;
    cout<<"Enter marks for Maths";
    cin>>marks_math;
    cout<<"Enter marks for Chemistry";
    cin>>marks_chem;
    cout<<"Enter marks for Biology";
    cin>>marks_bio;
    cout<<"Enter marks for Social science";
    cin>>marks_sc;
    float per = average (marks_eng,marks_math,marks_chem,marks_sc,marks_bio);
    cout<<per<<"%";
    string G = grade (per);
    cout<<G;



}

float average(float eng,float math,float chem,float social,float bio)
{
    float avg;
    avg = (eng + math + chem + social + bio )/5;

    
}
string grade(float av)
{
    string grade;
    if (av >=90 )
    {
        grade = "A+ ";
        return grade;
    }
    if (av >=80 && av < 90 )
    {
        grade = "A ";
        return grade;
    }
    if (av >=70 && av < 80)
    {
        grade = "B +" ;
        return grade;
    }
    if (av >=60 && av < 70 )
    {
        grade = "B";
        return grade;
    }
    if (av >=50  && av < 60)
    {
        grade = "C";
        return grade;
    }
    if (av >=40  && av < 50)
    {
        grade = "D";
        return grade;
    }
    if (av < 50  )
    {
        grade = "F";
        return grade;
    }


}
