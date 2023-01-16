#include<iostream>
using namespace std;
float price(string day,string fruit,float quantity);
main()
{
    string day,fruit;
    float quantity;
    cout<<"Enter day : ";
    cin>>day;
    cout<<"Enter Fruit : ";
    cin>>fruit;
    cout<<"Enter quantity : ";
    cin>>quantity;
    float netprice=price(day,fruit,quantity);
    if(netprice!=0)
    {
        cout<<"NET AMOUNT IS : "<<netprice<<endl;
    }
    else if(netprice==0)
    {
        cout<<"      ERROR    "<<endl;
    }
}
float price(string day,string fruit,float quantity)
{  float price1;
    if(day=="Sunday" || day=="Saturday")
    {
        if(fruit=="banana")
        {
            price1=(2.70)*(quantity);
        }
        else if(fruit=="apple")
        {
            price1=(1.25)*(quantity);
        }
        else if(fruit=="orange")
        {
            price1=(0.90)*(quantity);
        }
        else if(fruit=="grapefruit")
        {
            price1=(1.60)*(quantity);
        }
        else if(fruit=="kiwi")
        {
            price1=(3.00)*(quantity);
        }
        else if(fruit=="pineapple")
        {
            price1=(5.60)*(quantity);
        }
        else if(fruit=="grapes")
        {
            price1=(4.20)*(quantity);
        }
        return price1;
    }
    else if(day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" || day=="Friday")
    {
        if(fruit=="banana")
        {
            price1=(2.50)*(quantity);
        }
        else if(fruit=="apple")
        {
            price1=(1.20)*(quantity);
        }
        else if(fruit=="orange")
        {
            price1=(0.85)*(quantity);
        }
        else if(fruit=="grapefruit")
        {
            price1=(1.45)*(quantity);
        }
        else if(fruit=="kiwi")
        {
            price1=(2.70)*(quantity);
        }
        else if(fruit=="pineapple")
        {
            price1=(5.50)*(quantity);
        }
        else if(fruit=="grapes")
        {
            price1=(3.85)*(quantity);
        }
        return price1;
    }  
    else 
    { 
        return 0;
    } 
}