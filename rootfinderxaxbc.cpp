#include<iostream>
#include<math.h>
using namespace std;
int main()
{double l=1,h=10,m;
float a,b,c;
cin>>a>>b>>c;
while((pow(l,a)+pow(l,b)+c)*(pow(h,a)+pow(h,b)+c)>0)
{l*=10;h*=10;
cout<<l<<" "<<h<<endl;
}
m=(l+h)/2;
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
