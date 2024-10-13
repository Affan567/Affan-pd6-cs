#include <iostream>
using namespace std;
float std_hotel_price (string month,int stays);
float ap_hotel_price (string _month,int days_stay);

main()
{
    string m;
    int n;
    cout<<"Enter the month: ";
    cin>>m;
    cout<<"Enter the number of stays: ";
    cin>>n;
    float result1 = std_hotel_price(m,n);
    cout<<result1<<"Studio"<<endl;
    float result2 = ap_hotel_price(m,n);
    cout<<result2<<"Apartment";

}

float std_hotel_price (string month,int stays)
{
     
    float rent1;


        if (month == "may" || month == "october" )
        {
            rent1 = 50.0;
            rent1 = stays * rent1;
            if (stays > 7 && stays < 14)
            {
                rent1 = rent1 * 0.95;
                
            }
             if (stays > 14 )
            {
                rent1 = rent1 * 0.70;
                
            }
        }
         if (month == "june" || month == "september" )
        {
            rent1 = 75.2;
            rent1 = stays * rent1;
            if ( stays > 14)
            {
                rent1 = rent1 * 0.80;
                
            }

        }
         if (month == "july" || month == "august" )
        {
            rent1 = 76.0;
            rent1 = stays * rent1;
            
        }
        return rent1;
    }
    
    


float ap_hotel_price (string _month,int days_stay)
{

    float rent2;

            if (_month == "may" || _month == "october")
            {
                rent2 = 65;
                rent2 = days_stay * rent2;
            }
             if (_month == "june" || _month == "september")
            {
                rent2 = 68.7;
                rent2 = days_stay * rent2;
            }
            if (_month == "july" || _month == "august")
            {
                rent2 = 77;
                rent2 = days_stay * rent2;
            }
            if(days_stay > 14)
            if( _month == "may" || _month == "october" || _month == "june" || _month == "september"  || _month == "july" || _month == "august")
            {
                rent2 = rent2* 0.90;
            }
        return rent2;
}
    