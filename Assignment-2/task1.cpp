#include <iostream>

using namespace std;
double pow(double a,int b)
{
    double sum;
    if(b!=0)
    {
       sum=1;
for(int i=0;i<b;i++)
{
sum=sum*a;
}

    }
    else
        sum=1;

return sum;
}
int fact(int a)
{
    if(a==0||a==1)
        return 1;
        else
    {
        int sum=1;
        for(int i=1;i<=a;i++)
        {
            sum*=i;
        }
        return sum;
    }
}
double cos(int y)
{

double x=(y*3.14)/180,a,b,c;
double sum=0;
for(int i=0;i<15;i++)
{
  a=pow(-1,i);
  b=fact(2*i);
  c=pow(x,2*i);
  sum=sum+((a/b)*c);
}

return sum;
}

double sin(int y)
{

double x=(y*3.14)/180,a,b,c;
double sum=0;
for(int i=0;i<15;i++)
{
  a=pow(-1,i);
  b=fact(2*i+1);
  c=pow(x,2*i+1);
  sum=sum+((a/b)*c);
}

return sum;
}
double B(int a)
{
    if(a==0)
         return 1;

    else if(a==2)
         return  double(1)/ double(6);
    else if(a==4)
         return  double(-1)/double(30);
    else if(a==6)
        return  double(1)/double(42);
    else if(a==8)
         return  double(-1)/ double(30);
    else if(a==10)
        return  double(5)/ double(66);
  else if(a==12)
        return double(-691)/double(2730);
    else if(a==14)
        return double(7)/double(6);
    else if(a==16)
         return double(-3617)/double(510);
    else if(a==18)
       return double(43867)/double(798);
    else if(a==20)
       return double(-174611)/double(330);

  else if(a==22)
       return double(854513)/double(138);
  else if(a==24)
       return double(-236364091)/double(2730);
else if(a==26)
       return double(8553103)/double(6);
else if(a==28)
       return double(-23749461029)/double(870);
else if(a==30)
       return double(601580873.9006423683843);
}
double tan(int y)
{

double x=(y*3.14)/180,a,b,c,d,e,f;
double sum=0;
for(int i=0;i<15;i++)
{
  a=pow(-1,i);
  b=pow(2,2*i+2);
  c=pow(2,2*i+2)-1;
  d=B(2*i+2);
  e=pow(x,2*i+1);
  f=fact(2*i+2);
  sum=sum+((a*b*c*d/f)*e);
}

return sum;
}

int main()
{
int x;
cout<<"Enter the degree in radian:"<<endl;
cin>>x;
cout<<"sin = "<<sin(x)<<endl;
cout<<"cos = "<<cos(x)<<endl;
cout<<"tan = "<<tan(x)<<endl;



    return 0;
}
