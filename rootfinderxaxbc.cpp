#include<iostream>
#include<math.h>
using namespace std;
int main()
{double l=1,h=10,m,x;
x=pow(10,299);
float a,b,c;
int f=0;
cin>>a>>b>>c;
while((pow(l,a)+pow(l,b)+c)*(pow(h,a)+pow(h,b)+c)>0 && f==0)
{l*=10;h*=10;
//cout<<l<<" "<<h<<endl;
if(l>x)
    {f=1;}
}
if(f==1)
    {h=1;l=0;
    while((pow(l,a)+pow(l,b)+c)*(pow(h,a)+pow(h,b)+c)>0)
        {l/=10;h/=10;
        //cout<<l<<" "<<h<<endl;
        }
    }    
m=(l+h)/2;
for (;(((pow(m,a)+pow(m,b)+c))*100000000)>1 || (((pow(m,a)+pow(m,b)+c))*100000000)<-1;m=(l+h)/2)
    {
            if((pow(m,a)+pow(m,b)+c)>0)
                {h=m;}
            else if((pow(m,a)+pow(m,b)+c)<0)
                {l=m;}
    }

cout<<"Root exists. It is equal to "<<m;
return 0;
    
}
