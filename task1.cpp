#include <iostream>
using namespace std;
string activity(string temperature,string humoidity);
main()
{
    string temp,humid;
    cout<<"Enter temperature (warm or cold): ";
    cin>>temp;
    cout<<"Enter humidity: (dry or humid): ";
    cin>>humid;
    string recomend = activity (temp,humid);
    cout<< recomend;


}


string activity(string temperature,string humidity)
{
    if (temperature =="warm" && humidity == "dry")
    {
        return "play tennis";
    }
    if (temperature =="warm" && humidity == "humid")
    {
        return "swim";
    }
    if (temperature =="cold" && humidity == "dry")
    {
        return "play basket ball";
    }
    if (temperature =="cold" && humidity == "humid")
    {
        return "watch tv";
    }
}