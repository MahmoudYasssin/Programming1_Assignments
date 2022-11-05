// Mahmoud yassin mahmoud yassin . 20200506
// Hager ali younes . 20200614


#include <iostream>

using namespace std;
int strToInt(char a)
{
    //processing
    if(a=='0')
        return 0;
    else if(a=='1')
        return 1;
    else if(a=='2')
        return 2;
    else if(a=='3')
        return 3;
    else if(a=='4')
        return 4;
    else if(a=='5')
        return 5;
    else if(a=='6')
        return 6;
    else if(a=='7')
        return 7;
    else if(a=='8')
        return 8;
    else if(a=='9')
        return 9;
}
char addTwoDigits(int a)
{
    if(a==0)
    return '0';
    else if(a==1)
    return '1';
    else if(a==2)
    return '2';
    else if(a==3)
        return '3';
    else if(a==4)
        return '4';

    else if(a==5)
        return '5';

    else if(a==6)
            return '6';
    else if(a==7)
                return '7';
    else if(a==8)
        return '8';
    else if(a==9)
    return '9';
    else if(a==10)
        return '1';
    else if(a==11)
    return '2';
    else if(a==12)
    return '3';
        else if(a==13)
        return '4';
    else if(a==14)
    return '5';
    else if(a==15)
    return '6';
    else if(a==16)
    return '7';
    else if(a==17)
    return '8';
    else if(a==18)
    return '9';


}

int sumNonMultyplyDigits(string cardNumber)
{
    int sum=0;
    for(int i=cardNumber.size()-1;i>-1;i-=2)
    {
    sum+=strToInt(cardNumber[i]);
    }
    return sum;
}
bool checkCardLength(string cardNumber)
{
    if(cardNumber.size()>=14&&cardNumber.size()<=16)
        return true;
    else
        return false;

}
int sumMuliplySecondDigits(string cardNumber)
{
    int sum=0;
    for(int i=cardNumber.size()-2;i>-1;i-=2)
    {
    sum+=addTwoDigits(strToInt(cardNumber[i])*2);
    }
    return sum;

}
int sumMultyplyAndNonMultyplyDigits(int a,int b)
{
return a+b;
}
bool checkValidtyCard(int a)
{
    if(a%10==0)
        return true;
    else
        return false;
}
int main()
{



string cardNumber;
cout<<"Enter Card Number"<<endl;
//input
cin>>cardNumber;
//output
if(checkCardLength(cardNumber))
{
    int a=sumMultyplyAndNonMultyplyDigits(sumMuliplySecondDigits(cardNumber),sumNonMultyplyDigits(cardNumber));
    if(checkValidtyCard(a))
        cout<<"Card is Valid"<<endl;
    else
        cout<<"Card Not Valid"<<endl;


}


    return 0;
}
