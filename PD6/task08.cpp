#include<iostream>
using namespace std;
main()
{
    float h;
    float x;
    float y;
    cout<<" Enter value of h : ";
    cin>>h;
    cout<<"Enter value of coordinate X : ";
    cin>>x;
    cout<<"Enter value of coordinate Y : ";
    cin>>y;
    float boundryx1=h*3;
    float boundryy1=h*2;
    
    if(((x==h*0||x==h*3||x==h*2||x==h*1) && (y==h*0||y==1*h))||((x==1*h||x==2*h)&&(y==3*h)))
    {      
        cout<<"Border"<<endl;
    }
    
    else if((x>0 && x<3*h) && ( y>0 && y<1*h))
    {
        cout<<"inside"<<endl;
    }
    else if((x>1*h&&x<2*h)&&(y>0&&y<3*h))
    {
        cout<<"inside"<<endl;
    }
    else
    {
        cout<<"outside"<<endl;
    }
   
}