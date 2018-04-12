#include<iostream>
#include<math.h>
using namespace std;
int main()
{double l=0,h=100,m;
float a,b,c;
m=(l+h)/2;
cin>>a>>b>>c;
for (;(((pow(m,a)+pow(m,b)+c))*1000000)>1 || (((pow(m,a)+pow(m,b)+c))*1000000)<-1;m=(l+h)/2)
    {
            if((pow(m,a)+pow(m,b)+c)>0)
                {h=m;}
            else if((pow(m,a)+pow(m,b)+c)<0)
                {l=m;}
    }

cout<<"Root exists. It is equal to "<<m;
return 0;
    
}
