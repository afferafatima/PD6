#include<iostream>
using namespace std;
float charges(char type,char time,int mins);
main()
{
    char type,time;
    int mins;

    cout<<"Enter which type of customer you are(Residential or Premium)select(r/p) : ";
    cin>>type;
    cout<<"(Press D for day time or Press N for night time) call : ";
    cin>>time;
    cout<<"Enter number of minutes you used the service : ";
    cin>>mins;
    float netprice=charges(type,time,mins);
    cout<<"The charges are : "<<netprice<<"$"<<endl;

}
float charges(char type,char time,int mins)
{
    float amount;
    if(type=='r')
    {
        if(mins<=50)
        {
            amount=10.00;
        }
        else if(mins>50)
        {
            amount=10.00+mins*(0.20);
        }
    }
    else if(type=='p')
    {
        if(time=='D')
        {
            if(mins<=75)
            {
                amount=25;  
            }
            else if(mins>75)
            {
                amount=75+mins*(0.10);
            }
        }
        else if(time=='N')
         {
            if(mins<=100)
            {
                amount=25;  
            }
            else if(mins>100)
            {
                amount=75+mins*(0.05);
            }
         }
    }
    return amount;
}