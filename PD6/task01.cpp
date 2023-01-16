#include<iostream>
using namespace std;
string result(string temperature,string humidity);
int main()
{
   string temperature,humidity;
   cout<<"Enter Temperature : ";
   cin>>temperature;
   cout<<"Enter Humidity : ";
   cin>>humidity;
   string activity=result(temperature,humidity);
   cout<<activity;
return 0;
}
string result(string temperature,string humidity)
{
    string output;
    if(temperature=="warm" && humidity=="dry")
    {
        output="PLAY TENNIS";
    } 
     if(temperature=="warm" && humidity=="humid")
    {
        output="SWIM";
    } 
     if(temperature=="cold" && humidity=="dry")
    {
        output="PLAY BASKETBALL";
    } 
     if(temperature=="cold" && humidity=="humid")
    {
        output="WATCH TV";
    } 
    return output;
}