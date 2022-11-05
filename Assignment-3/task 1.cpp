#include <iostream>
using namespace std;

//count how many close micro-organisms
int countNeighbours(char tempArray[3][3])
{
    int counter=0;
    for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {

 if(tempArray[i][j]=='M')
       counter=counter+1;

    }


}
return counter;
}

//know current state empty or not and depend of number of close micro-organisms  predict next state
char currentState(char c,int counter)
{
    if(c=='M')
{
    if(counter==0||counter==1||counter>=4)
        //cout<<"M Empty"<<endl;
        return '-';

    else if(counter==2 || counter==3)
    //cout<<"M Stay"<<endl;
    return 'M';

}
else if(c=='-')
{
 if(counter==3)
        //cout<<"New One"<<endl;
        return 'M';
 else
   // cout<<"- stay"<<endl;
   return '-';
}
}


//predict next state for block and return it
char nextState(int x,int y,char **numbers,int n)
{

char tempArray[3][3];
int counter=0;
char c;
tempArray[1][1]='O';//numbers[x][y];
if(x-1<0 ||y-1<0)
 tempArray[0][0]='-';
else
    tempArray[0][0]=numbers[x-1][y-1];

if(x-1<0)
 tempArray[0][1]='-';
else
    tempArray[0][1]=numbers[x-1][y];

if(x-1<0 ||y+1==n)
 tempArray[0][2]='-';
else
    tempArray[0][2]=numbers[x-1][y+1];

if(y-1<0)
 tempArray[1][0]='-';
else
    tempArray[1][0]=numbers[x][y-1];

if(y+1==n)
 tempArray[1][2]='-';
else
    tempArray[1][2]=numbers[x][y+1];

if(x+1==n ||y-1<0)
 tempArray[2][0]='-';
else
    tempArray[2][0]=numbers[x+1][y-1];

if(x+1==n)
 tempArray[2][1]='-';
else
    tempArray[2][1]=numbers[x+1][y];

if(x+1==n||y+1==n)
 tempArray[2][2]='-';
else
    tempArray[2][2]=numbers[x+1][y+1];


counter=countNeighbours(tempArray);

c=currentState(numbers[x][y],counter);
return c;

}

//print current surface state
void print(char **numbers,int n)
{
    for(int r=0;r<n;r++)
{
    for(int c=0;c<n;c++)
    {
        cout<<numbers[r][c]<<"  ";
    }
    cout<<endl;
}
}

int main()
{

int n;
char **numbers;/*{    {'-','-','M','M','M','-','-'},
                        {'-','-','M','-','M','-','-'},
                        {'-','-','-','-','M','-','-'},
                        {'-','-','-','-','-','-','-'},
                        {'-','-','-','-','-','-','-'},
                        {'-','-','-','-','-','-','-'},
                        {'-','-','-','-','-','-','-'}
                    };*/
cout<<"Enter size surface n*n:"<<endl;
cin>>n;
cout<<"Enter surface:"<<endl;
numbers=new char *[n];
for(int i=0;i<n;i++)
{
    numbers[i]=new char [n];

}
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        cin>>numbers[i][j];
    }


}

int iteration=0;
cout<<"Iteration 0 initial iteration"<<endl;
print(numbers,n);

cout<<"Enter number of iteration:"<<endl;
cin>>iteration;


for(int i=1;i<=iteration;i++)

{
    cout<<"Iteration "<<i<<endl;
    char tempArray[n][n];
   for(int x=0;x<n;x++)
{
    for(int y=0;y<n;y++)
    {

        tempArray[x][y]=nextState(x,y,numbers,n);
   }
}

for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        numbers[i][j]=tempArray[i][j];

    }
}

print(numbers,n);

}

    return 0;
}
