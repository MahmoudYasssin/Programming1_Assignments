#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{

char plan,colon_spare;
int started_hour,started_minute,started_second;
int end_hour,end_minute,end_second;
string day_name;
int date_of_day,date_of_month;
double duration,sum1,sum2,rate;
cout<<"Please enter your plan A or B :"<<endl;
cout<<"Your plan : ";
cin>>plan;
cout<<"Please enter the day name of your call with the date :"<<endl<<"(Sun/Mon/Tues/Wen/Thurs/Fri/Sat)"<<endl<<"(date_of_day/date_of_month)"<<endl;
cout<<"day name : ";
cin>>day_name;
cout<<"date : ";
cin>>date_of_day>>colon_spare>>date_of_month;
cout<<"Please enter the start time of the call in a 24 hour format : "<<endl<<"(hour:minutes:seconds)"<<endl;
cin>>started_hour>>colon_spare>>started_minute>>colon_spare>>started_second;
//if(started_hour>0 && started_hour<=23 && started_minute>0 && started_minute<=59 && started_second>0 && started_second<=59 && end_hour>0 && end_hour<=23 && end_minute>0 && end_minute<=59 && end_second>0 && end_second<=59)
//{
cout<<"Please enter the end time of the call in a 24 hour format : "<<endl<<"(hour:minutes:seconds)"<<endl;
cin>>end_hour>>colon_spare>>end_minute>>colon_spare>>end_second;
if(started_hour>=0 && started_hour<=23 && started_minute>=0 && started_minute<=59 && started_second>=0 && started_second<=59 && end_hour>=0 && end_hour<=23 && end_minute>=0 && end_minute<=59 && end_second>=0 && end_second<=59)
{
sum1 = (started_hour*60*60) +(started_minute*60) +(started_second);
sum2 = (end_hour*60*60) +(end_minute*60) +(end_second);
duration= sum2 - sum1;
    if (plan=='a' || plan=='A')
    {
        if ( started_hour>=7 && started_hour<=17 )
         {
            if (day_name=="Sun" || day_name=="Mon" || day_name=="Tues" || day_name=="Wed" || day_name=="Thurs")
              {
                if (ceil(duration/60)< 15 )
                  {
                     rate=ceil(duration/60)*0.60;
                  }
                else
                  {
                    rate=ceil(duration/60)*0.80;
                  }
              }
            else if(day_name=="Fri" || day_name=="Sat")
            {
                rate=ceil(duration/60)*0.25;
            }

         }
        else if(started_hour<=7 || started_hour>=17)
        {
            if( day_name=="Sun" || day_name=="Mon" || day_name=="Tues" || day_name=="Wed" || day_name=="Thurs")
            {
                     rate=ceil(duration/60)*0.45;
            }

            else if(day_name=="Fri" || day_name=="Sat")
              {
                  rate=ceil(duration/60)*0.25;
              }
        }
    }
    else if(plan=='b' || plan=='B')
        {
        if ( started_hour>=7 && started_hour<=17 )
        {
            if ( day_name=="Sun" || day_name=="Mon" || day_name=="Tues" || day_name=="Wed")
            {
                if (ceil(duration/60)< 30 )
                {
                     rate=ceil(duration/60)*0.60;
                }
                else
                {
                    rate=ceil(duration/60)*0.80;
                }
            }
            else if(day_name=="Thurs" || day_name=="Fri")
            {
                rate=ceil(duration/60)*0.25;
            }
        }
        else if(started_hour<=7 || started_hour>=17)
        {
            if ( day_name=="Sun" || day_name=="Mon" || day_name=="Tues" || day_name=="Wed")
            {
                     rate=ceil(duration/60)*0.45;
            }
        }
        else if(day_name=="Thurs" || day_name=="Sat" || day_name=="Fri")
        {
                     rate=ceil(duration/60)*0.25;
        }
        }
cout<<"Plan: "<<plan<<endl;
cout<<"Call Start Time:   "<<setw(15)<<started_hour<<" : "<<started_minute<<" : "<<started_second<<endl;
cout<<"Call End Time:     "<<setw(15)<<end_hour<<" : "<<end_minute <<" : "<<end_second<<endl;
cout<<"Date Of Call :     "<<setw(18)<<day_name<<setw(3)<<date_of_day <<"/"<<date_of_month<<endl<<endl;
cout<<"Call Info  :       "<<endl;
cout<<"Start Time:        "<<setw(15)<<started_hour<<" : "<<started_minute<<" : "<<started_second<<endl;
cout<<"End Time:          "<<setw(15)<<end_hour<<" : "<<end_minute <<" : "<<end_second<<endl;
cout<<"Date:              "<<setw(18)<<day_name<<setw(3)<<date_of_day <<"/"<<date_of_month<<endl;
cout<<"Duration:          "<<setw(15)<<ceil(duration/60)<<" minutes"<<endl;
cout<<"Plan "<<plan<<":"<<endl;
cout<<"Call Time          "<<setw(15)<<"Call Day "<<setw(15)<<"Duration"<<setw(15)<<"Rate"<<endl<<endl;
if(plan=='a'||plan=='A')
   {
cout<<"7:00 am to 5:00 pm "<<setw(15)<<"Sun-Thurs"<<setw(15)<<"<15     "<<setw(15)<<"0.60"<<endl;
cout<<"7:00 am to 5:00 pm "<<setw(15)<<"Sun-Thurs"<<setw(15)<<">=15    "<<setw(15)<<"0.80"<<endl;
cout<<"5:01 pm to 6:59 am "<<setw(15)<<"Sun-Thurs"<<setw(15)<<"any     "<<setw(15)<<"0.45"<<endl;
cout<<"any                "<<setw(15)<<"Fri-Sat  "<<setw(15)<<"any     "<<setw(15)<<"0.25"<<endl;
cout<<"Call Rate:"<<rate<<" L.E"<<endl;
    }
else
    {
cout<<"7:00 am to 5:00 pm "<<setw(15)<<"Sun-Wed      "<<setw(15)<<"<30     "<<setw(15)<<"0.60"<<endl;
cout<<"7:00 am to 5:00 pm "<<setw(15)<<"Sun-Wed      "<<setw(15)<<">=30    "<<setw(15)<<"0.80"<<endl;
cout<<"5:01 pm to 6:59 am "<<setw(15)<<"Sun-Wed      "<<setw(15)<<"any     "<<setw(15)<<"0.45"<<endl;
cout<<"any                "<<setw(15)<<"Thurs-Fri-Sat"<<setw(15)<<"any     "<<setw(15)<<"0.25"<<endl;
cout<<"Call Rate:"<<rate<<" L.E"<<endl;
     }
return 0;
}
else
{
     cout<<"should not allow entering negative times, or times that are greater than 23:59:59"<<endl;
}
return 0;
}







