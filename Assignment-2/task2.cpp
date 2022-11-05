// Mahmoud yassin mahmoud yassin . 20200506
// Hager ali younes . 20200614


#include <iostream>

using namespace std;
void old_system()
{
     //declaration
     int i,x=0,y=0,z=0;
    string name1,name2,name3;

    //input
    cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"you should take on consideration ,þthat for each first preference a candidate receives they will be given 3 points"<<endl;
    cout<<"second preference 2 points"<<endl;
    cout<<"and third preference 1 point ."<<endl;
    cout<<"The winner of the election will be the candidate with the most votes ."<<endl<<endl;
    cout<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"Enter the number of voters:"<<endl;
    cin>>i;
    //processing
    for(; i>0 ; i--)
    {
        cout<<"Enter names of candidates:"<<endl;
        cin>>name1>>name2>>name3;
        if(name1==name2 || name1==name3  || name2==name3)
        {
            cout<<"incorrect answer"<<endl;
        }
        else
        {


        if(name1=="Adham" || name1=="adham")
        {
            x=x+3;
        }
        if(name1=="Bilal" || name1=="bilal")
        {
            y=y+3;
        }
        if(name1=="Catherine" || name1=="catherine")
        {
            z=z+3;
        }
        if(name2=="Adham" || name2=="adham")
        {
            x=x+2;
        }
        if(name2=="Bilal" || name2=="bilal")
        {
             y=y+2;
        }
        if(name2=="Catherine" || name2=="catherine")
        {
             z=z+2;
        }
        if(name3=="Adham" || name3=="adham")
        {
            x=x+1;
        }
        if(name3=="Bilal" || name3=="bilal")
        {
             y=y+1;
        }
        if(name3=="Catherine" || name3=="catherine")
        {
             z=z+1;
        }
        }

    }
    //output
    if((x>y && x>z ))
    {
        cout<<"Adham is winner"<<endl;
    }
    else if((y>x && y>z))
    {
        cout<<"Bilal is winner"<<endl;
    }
    else if((z>x && z>y))
    {
        cout<<"Catherina is winner"<<endl;
    }

}
void system()
{
    //declaration
    cout<<"----------------------------------------------------------------------------------"<<endl;
    cout<<"You should talk on consideration that ,only one candidate is given a vote per voter"<<endl;
    cout<<"----------------------------------------------------------------------------------"<<endl;
    int i,x=0,y=0,z=0;
    string name1,name,name2,name3;
    //input
    cout<<"You are in the old system"<<endl<<endl;
    cout<<"Enter the number of voters:"<<endl;
    cin>>i;
    //processing
    for(; i>0 ; i--)
    {
    cout<<"Enter name of candidates :"<<endl;
    cin>>name;
    if(name=="Adham" || name=="adham")
        {
            x=x+1;

        }

    if(name=="Bilal" || name=="bilal")
        {
            y=y+1;

        }

    if(name=="Catherine" || name=="catherine")
        {
            z=z+1;

        }
    }

    //output
    if(x>y && x>z )
    {
        cout<<"Adham is winner"<<endl;
    }
    else if(y>x && y>z )
    {
        cout<<"Bilal is winner"<<endl;
    }
    else if(z>x && z>y )
    {
        cout<<"Catherina is winner"<<endl;
    }
}

int main()
{
old_system();


}
