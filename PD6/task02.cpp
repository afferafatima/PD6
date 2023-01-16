#include<iostream>
using namespace std;
string grading(float percentage);
main()
{
    int eng,maths,chem,social,bio;
    string name;
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"Enter marks in English : ";
    cin>>eng;
    cout<<"Enter marks in Maths : ";
    cin>>maths;
    cout<<"Enter marks in Chemistry : ";
    cin>>chem;
    cout<<"Enter marks in Social Sciences : ";
    cin>>social;
    cout<<"Enter marks in Biology : ";
    cin>>bio;
    int tmarks=eng+maths+chem+social+bio;
    float percentage=tmarks*(0.2);
    string grade=grading(percentage);
    cout<<name<<" got "<<tmarks<<" out of 500 with percentage "<<percentage<<"% and grade "<<grade<<"."<<endl;

}
string grading(float percentage)
{
    string output;
    if(percentage>=90.00)
    {
        output="A+";
    }
    if(percentage>=80.00 && percentage<=89.99)
    {
        output="A";
    }
    if(percentage>=70.00 && percentage<=79.99)
    {
        output="B+";
    }      
    if(percentage>=60.00 && percentage<=69.99)
    {
        output="B";
    }
    if(percentage>=50.00 && percentage<=59.99)
    {
        output="C";
    }    
    if(percentage>=40.00 && percentage<=49.99)
    {
        output="D";
    }  
    if(percentage<40)
    {
        output="F";
    }  
    return output;
}