#include<iostream>
using namespace std;
string zodiacsign(int date,string month);
main()
{	while(true)
	{
        
	int date;
	string month,horoscope;
	cout<<"Enter Date : ";
	cin>>date;
	cout<<"Enter Month : ";
	cin>>month;
	horoscope=zodiacsign(date,month);
        
	cout<<horoscope<<" is your zodiac sign."<<endl;
	
}
}

string zodiacsign(int date,string month)
{
 string sign;
 if(month=="March"&&(date>=21&&date<=31)||(month=="April"&&(date>=1&&date<=19)))
 {
  sign="Aries";
  return sign;
 }
 else if(month=="April"&&(date>=20&&date<=30)||(month=="May"&&(date>=1&&date<=20)))
 {
  sign="Taurus";
  return sign;
 }
 else if(month=="May"&&(date>=21&&date<=31)||(month=="June"&&(date>=1&&date<=20)))
 {
  sign="Gemini";
  return sign;
 } 
 else if(month=="June"&&(date>=21&&date<=30)||(month=="July"&&(date>=1&&date<=22)))
 {
  sign="Cancer";
  return sign;
 } 
 else if(month=="July"&&(date>=23&&date<=31)||(month=="August"&&(date>=1&&date<=22)))
 {
  sign="Leo";
  return sign;
 } 
 else if(month=="August"&&(date>=23&&date<=31)||(month=="September"&&(date>=1&&date<=22)))
 {
  sign="Virgo";
  return sign;
 } 
 else if(month=="September"&&(date>=23&&date<=30)||(month=="October"&&(date>=1&&date<=22)))
 {
  sign="Libra";
  return sign;
 } 
 else if(month=="October"&&(date>=23&&date<=31)||(month=="November"&&(date>=1&&date<=21)))
 {
  sign="Scorpio";
  return sign;
 } 
 else if(month=="November"&&(date>=22&&date<=30)||(month=="December"&&(date>=1&&date<=21)))
 {
  sign="Saggitarius";
  return sign;
 } 
 else if(month=="December"&&(date>=23&&date<=31)||(month=="January"&&(date>=1&&date<=21)))
 {
  sign="Capricon";
  return sign;
 } 
 else if(month=="January"&&(date>=22&&date<=31)||(month=="February"&&(date>=1&&date<=19)))
 {
  sign="Aquarius";
  return sign;
 } 
 else if(month=="February"&&(date>=20&&date<=29)||(month=="March"&&(date>=1&&date<=20)))
 {
  sign="Pisces";
  return sign;
 } 
 return 0;
}
