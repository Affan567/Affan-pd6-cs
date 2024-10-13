#include <iostream>
using namespace std;
int playgames(string year,int holidays,int weeks);

main()
{
    string y;
    int h,w;
    cout<<"Enter year type: ";
    cin>>y;
    cout<<"Enter number of holidays: ";
    cin>>h;
    cout<<"Enter number of weeks: ";
    cin>>w;
    int out = playgames(y,h,w);
    cout<<out;

}

int playgames(string year,int holidays,int weekends)
{
    float p_h , p_w;
    int w_s , t_p;
    if (year == "normal")
    {
        p_h = holidays * 0.67;
        w_s = 48 - weekends;
        p_w = 0.75 * w_s;
        t_p = p_w + weekends + p_h;
        
    }
    if(year == "leap")
    {
        p_h = holidays * 0.67;
        w_s = 48 - weekends;
        p_w = 0.75 * w_s;
        t_p = p_w + weekends + p_h;
        t_p = t_p + (t_p *0.15);
        
   }
   return t_p;
}