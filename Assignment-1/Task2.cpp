#include <iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
    int x_point,y_point,x_circle,y_circle;
    double r,distance;
    cout<<"Enter coordinates of the center of the circle: ";
    cin>>x_circle>>y_circle;
    cout<<"Enter the radius of the circle: ";
    cin>>r;
    cout<<"Enter coordinates of the point: ";
    cin>>x_point>>y_point;
    distance=sqrt(pow((x_point-x_circle),2)+pow((y_point-y_circle),2));
    if(distance==r || (abs(distance-r) < .01))
       {
        cout<<"On the circle"<<endl;
       }
    else if(distance>r)
    {
        cout<<"Outside the circle"<<endl;
    }
    else
    {
        cout<<"Inside the circle"<<endl;
    }
}
