#include <iostream>
using namespace std;
float amount(char code,char time,float mins,string type);
main()
{
    char c,t;
    float m;
    string service;
    cout<<"Enter service code: ";
    cin>>c;
    cout<<"Enter time of the call: ";
    cin>>t;
    cout<<"Enter number of minuets: ";
    cin>>m;
    cout<<"Enter service type: ";
    cin>>service;
    cout<<"Total minutes used: "<<m<<endl;
    
    float result = amount(c,t,m,service);
    cout<<"Amount due" <<result<<"$";


}

float amount(char code,char time ,float mins,string type)
{
    float amu;
    if (code == 'p' && time == 'n' && mins <= 75)
    {
        amu = 25;
   }
   if (code == 'p' && time == 'n')
   {
    if (mins > 75)
    {
        amu = 25 + (mins * 0.10); 
    }
   }
   if (code == 'p' && time == 'd')
    {
        if (mins <= 100)
        amu = 25;
   }
   if (code == 'p' && time == 'd')
   {
    if (mins > 100)
    {
        amu = 25 + (mins * 0.05); 
    }
   }
   if (code == 'r' && (time == 'd' || time == 'n'))
   {
    if (mins <= 50 )
    {
        amu = 10;
    }
    if (mins > 50)
    {
        amu = mins * 0.2;
    }
   }

    return amu;
   
   
}