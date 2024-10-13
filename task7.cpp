#include <iostream>
#include <string>
using namespace std;
int student_time(int exam_hour,int exam_mins,int student_hour,int student_mins);

main()
{
    int e_h,e_m,s_h,s_m;
    int result_h ,result_m;
    cout<<"Enter Exam Starting time(hour): ";
    cin>>e_h;
    cout<<"Enter Exam Starting time(minutes): ";
    cin>>e_m;
    cout<<"Enter student hour of arrival: ";
    cin>>s_h;
    cout<<"Enter student minutes of arrival: ";
    cin>>s_m;
    int status = student_time(e_h,e_m,s_h,s_m);
    result_h = status / 60;
    result_m = status % 60;
    cout<<result_h<<":"<<result_m;
    
}


int student_time(int exam_hour,int exam_mins,int student_hour,int student_mins)
{
    int texam_min = exam_hour * 60 + exam_mins;
    int tstudent_min = student_hour * 60 + student_mins;
    int diff_time;
    int result_h;
    int result_m;
    
    if (texam_min == tstudent_min )
    {
        cout<<"On time";
    }
    if (texam_min > tstudent_min)
    {
        if (texam_min - tstudent_min < 30)
        {
            cout<<"early";
             
        }
        if(texam_min - tstudent_min > 30)
        {
            cout<<"Too Early";
        }
    diff_time = texam_min - tstudent_min;
    }
    if (texam_min < tstudent_min)
    {
        if(tstudent_min - texam_min)
        {
            cout<<"Late";
        }
        diff_time = tstudent_min-texam_min ;
    }
    return diff_time;

    
    

}