#include <iostream>

#include <cmath>

#include <iomanip>

using namespace std;

int main()
{
    double TWind_chil,T,V;
    cout<<"Please enter the temperature in degrees Celsius: ";
    cin>>T;
    cout<<"Please enter the wind speed in kilometers per hour: ";
    cin>>V;
    if(V>=4 && T>=-50 && T<=5)
    {
        TWind_chil=13.12+0.6215*T-11.37*pow(V,0.16)+0.3965*T*pow(V,0.16);
        cout<<"The wind chill temperature is: "<<fixed<<setprecision(2)<<TWind_chil<<endl;
    }
    else
        cout<<"You must enter a temperature between -50C and 5C and a wind speed grater than or equal 4"<<endl;
}
