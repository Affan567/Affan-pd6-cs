#include <iostream>
using namespace std;
string sign (int day,string month);
main()
{
    int d;
    string m;
    cout<<"Enter the date of birth: ";
    cin>>d;
    cout<<"Enter the month of birth: ";
    cin>>m;
    string zodiac = sign (d,m);
    cout<< zodiac;
    
}

string sign (int day,string month)
{
    string s;
    if ( month == "march" && day >= 21 && day <=31 || month =="april" && day <= 19 )
    {
        s = "Aries";
        return s;
    }
    if ( month == "april" && day >= 20 && day <= 30 || month =="may" && day <= 20 )
    {
        s = "taurus";
        return s;
    }
    if ( month == "may" && day >= 21 && day <= 30 || month =="june" && day <= 20 )
    {
        s = "gemini";
        return s;
    }
    if ( month == "june" && day >= 21 && day <= 31 || month =="july" && day <= 22 )
    {
        s = "cancer";
        return s;
    }
    if ( month == "july" && day >= 23 && day <= 31 || month =="august" && day <= 22 )
    {
        s = "leo";
        return s;
    }
    if ( month == "august" && day >= 23 && day <= 31 || month =="september" && day <= 22 )
    {
        s = "virgo";
        return s;
    }
    if ( month == "september" && day >= 23 && day <= 30 || month =="october" && day <= 22 )
    {
        s = "libra";
        return s;
    }
    if ( month == "october" && day >= 23 && day <= 31 || month =="november" && day <= 21 )
    {
        s = "scorpia";
        return s;
    }
    if ( month == "november" && day >= 22 && day <= 30 || month =="december" && day <= 21 )
    {
        s = "sagittarius";
        return s;
    }
    if ( month == "december" && day >= 22 && day <= 31 || month =="january" && day <= 19 )
    {
        s = "capricorn";
        return s;
    }
    if ( month == "january" && day >= 20 && day <= 31 || month =="february" && day <= 18 )
    {
        s = "aquarius";
        return s;
    }
    if ( month == "februray" && day >= 19 && day <= 28 || month =="march" && day <= 20 )
    {
        s = "pisces";
        return s;
    }
    


}