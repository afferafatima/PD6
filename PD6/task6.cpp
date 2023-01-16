#include<iostream>
using namespace std;
float studio(string month,int stays);
float apartment(string month,int stays);
main()
{
    string month;
    int stays;
    cout<<"Enter Month : ";
    cin>>month;
    cout<<"Enter number of stays : ";
    cin>>stays;
    float studioamt=studio(month,stays);
    float apartmentamt=apartment(month,stays);
    cout<<"Studio : "<<studioamt<<"$"<<endl;
    cout<<"Apartment : "<<apartmentamt<<"$"<<endl;
    

}
float studio(string month,int stays)
{   float amount;
    float calculation;
    if((month=="May"||month=="October")&& (stays<7))
    {
        calculation=50*(stays);
        amount=calculation;
    }   
    else if((month=="May"||month=="October")&& (stays>=7 && stays <=14))
    {
        calculation=50*(stays);
        amount=calculation-calculation*(0.05);
    }
    else if((month=="May"||month=="October") && stays>=15 )
    {
        calculation=50*(stays);
        amount=calculation-calculation*(0.30);
    }
    else if((month=="June"||month=="september") &&  (stays<15) )
    {
        calculation=75.20*(stays);
        amount=calculation;
    }
    else if((month=="June"||month=="September")&&stays>=15 )
    {
        calculation=75.20*(stays);
        amount=calculation-calculation*(0.20);
    }
    else if(month=="July"||month=="August")
    {
        calculation=76*(stays);
        amount=calculation;
    }
    return amount;
}
float apartment(string month,int stays)
{
    float amount;
    float calculation;
    if((month=="May"||month=="October")&& (stays<=14))
    {
        calculation=65.00*(stays);
        amount=calculation;
    }
    else if((month=="May"||month=="October")&& (stays>14))
    {
        calculation=65.00*(stays);
        amount=calculation-calculation*(0.10);
    }    
    else if((month=="June"||month=="september") &&  (stays<15) )
    {
        calculation=68.70*(stays);
        amount=calculation;
    }
    else if((month=="June"||month=="september") &&  (stays>14) )
    {
        calculation=68.70*(stays);
        amount=calculation-calculation*(0.10);
    }
    else if((month=="July"||month=="August") &&  (stays<15))
    {
        calculation=77.00*(stays);
        amount=calculation;
    }
     else if((month=="July"||month=="August") &&  (stays>14))
    {
        calculation=77.00*(stays);
        amount=calculation-calculation*(0.10);
    }
    return amount;
}