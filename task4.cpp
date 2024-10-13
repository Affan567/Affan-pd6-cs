#include <iostream>
using namespace std;
float price(string n,string d,float quantity);
main()
{
    string name;
    string day;
    float quantity;
    cout<<"Enter the fruit name: ";
    cin>>name;
    cout<<"Enter the day of the week: ";
    cin>>day;
    cout<<"Enter the quantity: ";
    cin>>quantity;
    float p = price(name,day,quantity);
    cout<<p;

}

float price(string n,string d,float quantity)
{
    float p;
    if (n == "banana" && d == "Sunday")
    {
    p = quantity * 2.70;
    }
    else 
    {
        p = quantity * 2.50;
    }
    if (n == "apple" && d=="Sunday")
    {
        p = quantity * 1.25;
    }
    else
    {
        p = quantity * 1.20;
    }
    if (n == "orange" && d == "Sunday")
    {
        p = quantity * 0.90;
    }
    else
    {
        p = quantity * 0.85;
    }
    if (n == "grapefruit" && d == "Sunday")
    {
        p = quantity * 1.60;
    }
    else
    {
        p = quantity * 1.45;
    }
    if (n == "kiwi" && d == "Sunday")
    {
        p = quantity * 3.00;
    }
    else
    {
        p = quantity * 2.70;
    }
    if (n == "pineapple" && d == "Sunday")
    {
        p = quantity * 5.60;
    }
    else
    {
        p = quantity * 5.50;
    }
    if (n == "grapes" && d == "Sunday")
    {
        p = quantity * 4.20;
    }
    else
    {
        p = quantity * 3.85;
    }
    return p;
}