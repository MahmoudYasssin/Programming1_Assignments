// Mahmoud yassin mahmoud yassin . 20200506
// Hager ali younes . 20200614


#include <iostream>
#include <cmath>
using namespace std;
float cost;

  void dauration(int a )
  {
    cout<<"You spent " << a << " days " <<endl;
  }
  void time1(int hour1 ,int minute1 ,int second1)
  {

  }
  void time2(int hour2 ,int minute2 ,int second2)
  {

  }
  void transport(double cost)
  {
    cout<<"it costs you to travel :"<<cost<<" LE"<<endl;
  }
  int num1,num2,break_fast=40,lunch=60,dinner=80;
  float d,fees1,fees2,rejected1,rejected2,rejected3,Paid,Refound,Rejected;

  void fees (float total_fees1=0,float total_fees2=0)
  {

  }
  void conference(float conference_fees)
  {

  }
  string answer;
  void accommodation (float accommodation_cost,int a)
  {
    cout<<"Your accommodation all over the days costs you ="<<(accommodation_cost)*a<<"LE"<<endl;
  }
  void meals (int meals_cost)
  {

  }

int main()
{
    //number of days was spent on the trip
    int a;
    cout<<"How many days did you spend on the trip ?" <<endl;
    cin>>a;
    while(a<1)
    {
        cout<<"incorrect answer"<<endl;
        cout<<"How many days did you spend on the trip ?" <<endl;
        cin>>a;
    }
    dauration(a);

    //the time that he traveled and come back
    int hour1 ,minute1 ,second1 ;
    cout<<"Please enter at what time did you depart on the first day of the trip in 24 format with minutes and seconds 00:00:00 ." <<endl;
    cin>>hour1>>minute1>>second1 ;

    while(hour1 >23 || minute1 > 60 || second1 >60 || hour1<0 || minute1 < 0 || second1 <0)
    {
        cout<<"incorrect answer"<<endl;
        cout<<"Please enter at what time did you depart on the first day of the trip in 24 format with minutes and seconds 00:00:00 ." <<endl;
        cin>>hour1>>minute1>>second1;

    }

    if(hour1<12 || hour1==24)

    {
        cout<<"You left your home at "<<hour1<<":"<<minute1<<":"<<second1<<" AM"<<endl;
    }
    else
    {
        cout<<"You left your home at "<<hour1<<":"<<minute1<<":"<<second1<<" PM"<<endl;
    }

    time1(hour1,minute1,second1);

    int hour2,minute2,second2 ;
    cout<<"Please enter at what time did you arrive back home on the last day of the trip in 24 format with minutes and seconds 00:00:00 ." <<endl;
    cin>>hour2>>minute2>>second2;
    while(hour2 >23 || minute2 > 60 || second2 >60 || hour2 <0 || minute2 < 0 || second2 <0)
    {
        cout<<"incorrect answer"<<endl;
        cout<<"Please enter at what time did you arrive back home on the last day of the trip in 24 format with minutes and seconds 00:00:00 ." <<endl;
        cin>>hour2>>minute2>>second2;

    }
    time2(hour2,minute2,second2);

    if(hour2<12 || hour2==24)
    {
        cout<<"You arrived back your home at "<<hour2<<":"<<minute2<<":"<<second2<<" AM"<<endl;
    }
    else
    {
        cout<<"You arrived back your home at "<<hour2<<":"<<minute2<<":"<<second2<<" PM"<<endl;
    }

    double cost;

    //Travel cost
    cout<<"Please enter by any transport did you travel ?"<<endl;
    cout<<"Plane=1 , taxi=2 , your own car=3 ( enter your number ) "<<endl;
    cin>>num1;

   if(num1==1)
    {
        cout<<"How much did the plane tickets cost ?"<<endl;
        cin>>cost;
        while(cost <0 )
        {
            cout<<"incorrect answer"<<endl;
            cout<<"How much did the plane tickets cost ?"<<endl;
            cin>>cost;

        }


    }
    else if(num1==2)
    {
        cout<<"How much did you pay ?"<<endl;
        cin>>cost;
        while(cost < 0)
        {
            cout<<"incorrect answer"<<endl;
            cout<<"How much did you pay ?"<<endl;
            cin>>cost;
        }

    }
    else if(num1==3)
    {
        cout<<"How many kilometers did you drive ?"<<endl;
        cin>>d;
        while(d <= 0)
        {
            cout<<"incorrect answer"<<endl;
            cout<<"How many kilometers did you drive ?"<<endl;
            cin>>d;
        }
        cost=d* (0.775);

    }

    transport(cost);

    //The cost of transportation
    float total_fees1=0,total_fees2=0;


    cout<<"What did you use on the trip a car or a taxi? "<<endl;
    cout<<" car=1 , taxi=2 (enter number )"<<endl;
    cin>>num2;

    if(num2==1)
    {
        cout<<"Please enter parking fees per day"<<endl;
        cin>>fees1;
        while(fees1 < 0)
        {
            cout<<"incorrect answer"<<endl;
            cout<<"Please enter parking fees per day"<<endl;
            cin>>fees1;
        }

        if(fees1>25)
        {
            total_fees1= a*fees1;
            cout<<"Parking fees all over the days cost you ="<<total_fees1<<" LE"<<endl;
            rejected1= fees1-(25);
            cout<<"rejected expenses ="<<rejected1*a<<"LE"<<endl;
        }
        else
        {
           total_fees1= a*fees1;
           cout<<"Parking fees all over the days cost you ="<<total_fees1<<" LE"<<endl;
        }

    }
    else if(num2==2)
    {
        cout<<"Please enter taxi fees per day "<<endl;
        cin>>fees2;
        while(fees2 < 0)
        {
            cout<<"incorrect answer"<<endl;
            cout<<"Please enter parking fees per day"<<endl;
            cin>>fees2;
        }

        if(fees2>100)
        {
            total_fees2= a*fees2;
            cout<<"taxi fees all over the days cost you ="<<total_fees2<<" LE"<<endl;
            rejected2= fees2-(100);
            cout<<"rejected expenses ="<<rejected2*a<<"LE"<<endl;
        }
        else
        {
            total_fees2= a*fees2;
            cout<<"taxi fees all over the days cost you ="<<total_fees2<<" LE"<<endl;
        }
     }
        fees(total_fees1,total_fees2);


 //Cost of conferences or seminars
 float conference_fees;
  cout<<"Did you attend any conferences or seminars ? (enter yes or no)"<<endl;
  cin>>answer;


   if(answer== "yes" || answer=="Yes")
   {
       cout<<"Please enter conference or seminar fees "<<endl;
       cin>>conference_fees;
       while(conference_fees < 0)
       {
           cout<<"incorrect answer"<<endl;
           cout<<"Please enter conference or seminar fees "<<endl;
           cin>>conference_fees;
       }
   }

   else if(answer=="no" || answer== "No")
   {
       cout<<"conference or seminar fees costs you = 0 LE"<<endl;
   }
   conference(conference_fees);


   //Cost of accommodation_cost
   float accommodation_cost;

   cout<<"Please enter the cost of your accommodation per day "<<endl;
   cin>>accommodation_cost;
   while(accommodation_cost < 0)
   {
       cout<<"incorrect answer"<<endl;
       cout<<"Please enter the cost of your accommodation per day "<<endl;
       cin>>accommodation_cost;
   }

   if(accommodation_cost>500)
   {
       rejected3 = accommodation_cost-(500) ;
       cout<<"rejected expenses ="<<rejected3*a<<" LE"<<endl;
   }
   accommodation(accommodation_cost,a);


   int meals_cost,total_meals_cost;

//the prices of the meals:

   break_fast==40 ;
   lunch ==60 ;
   dinner==80 ;

   meals_cost= a*(break_fast+lunch+dinner);





   cout<<" MEALS COST "<<endl;

   if(hour1<8 && hour2>9 && hour2<13)
   {
      total_meals_cost=meals_cost-(lunch+dinner);
      cout<<"Your meals all over the days cost you ="<<total_meals_cost<<" LE"<<endl;
   }
   else if(hour1<8 && hour2>13 && hour2<19)
   {
       total_meals_cost=meals_cost-(dinner);
       cout<<"Your meals all over the days cost you ="<<total_meals_cost<<" LE"<<endl;
   }
   else if(hour1<8 && hour2>19)
   {
      total_meals_cost=meals_cost;
      cout<<"Your meals all over the days cost you ="<<total_meals_cost<<" LE"<<endl;
   }
   else if(hour1>8 && hour2>9 && hour2<13)
   {
      total_meals_cost=meals_cost-(break_fast+lunch+dinner);
      cout<<"Your meals all over the days cost you ="<<total_meals_cost<<" LE"<<endl;
   }
   else if(hour1>8 && hour2<9)
   {
       total_meals_cost=meals_cost-(break_fast+break_fast);
       cout<<"Your meals all over the days cost you ="<<total_meals_cost<<" LE"<<endl;
   }
   else if(hour1>12 && hour2<13)
   {
       total_meals_cost=meals_cost-(lunch+lunch);
       cout<<"Your meals all over the days cost you ="<<total_meals_cost<<" LE"<<endl;
   }
   else if(hour1>18 && hour2<19)
   {
       total_meals_cost=meals_cost-(dinner+dinner);
       cout<<"Your meals all over the days cost you ="<<total_meals_cost<<" LE"<<endl;
   }
   else if(hour1>12 && hour2>19)
   {
       total_meals_cost=meals_cost-(break_fast+lunch);
       cout<<"Your meals all over the days cost you ="<<total_meals_cost<<" LE"<<endl;
   }
   else if(hour1<18 && hour1>8 && hour2<19)
   {
       total_meals_cost=meals_cost-(break_fast+dinner);
       cout<<"Your meals all over the days cost you ="<<total_meals_cost<<" LE"<<endl;
   }
   else if(hour1>18 && hour2<19)
   {
       total_meals_cost=meals_cost-(lunch+dinner);
       cout<<"Your meals all over the days cost you ="<<total_meals_cost<<" LE"<<endl;
   }
   else if(hour1>8 && hour2<13)
   {
       total_meals_cost=meals_cost-(break_fast+lunch);
       cout<<"Your meals all over the days cost you ="<<total_meals_cost<<" LE"<<endl;
   }
   else if(hour1>12 && hour2<19)
   {
       total_meals_cost=meals_cost-(break_fast+lunch+dinner);
       cout<<"Your meals all over the days cost you ="<<total_meals_cost<<" LE"<<endl;
   }
    else if(hour1<8 && hour2>8 && hour2<13)
   {
       total_meals_cost=meals_cost-(lunch+dinner);
       cout<<"Your meals all over the days cost you ="<<total_meals_cost<<" LE"<<endl;

   }


   meals(meals_cost);


   Rejected = rejected1 + rejected2 + rejected3 ;
   Paid = (accommodation_cost*a)+(conference_fees*a)+(cost*a)+total_meals_cost+total_fees1+total_fees2;
   Refound = Paid - Rejected ;



   cout<<"TRIP INFO "<<endl;
   cout<<"Paid ="<<Paid<<" LE"<<endl;
   cout<<"Refound ="<<Refound<<" LE"<<endl;
   cout<<"Rejected ="<<Rejected<<" LE"<<endl;


return 0;

}
