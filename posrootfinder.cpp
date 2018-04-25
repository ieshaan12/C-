#include<iostream>
#include<math.h>
using namespace std;
float coeff[100],power[100];
int polynommaker(int n)             // This n will be the number of terms entered by the user.
{//cout<<"Number of x,power terms you want to input"<<endl;
//cin>>n
//float coeff[n],power[n];              //Find a solution for passing these array to a different function that will evaluate the polynmial.
for(int i=0;i<n;i++)
{cout<<"Coefficient for "<<(i+1)<<" term followed by its power"<<endl;
    cin>>coeff[i]>>power[i];            //Corresponding element in the array 
}
cout<<"Final equation is"<<endl;
for(int i=0;i<n;i++)
    {cout<<coeff[i]<<"*x^("<<power[i]<<") ";
        if(i!=n-1)
            cout<<" + ";
    }
    cout<<endl;
    return 0;
}

double valuefinder(double val_x,int n) 
{//cout<<c<<endl<<"Enter value for which you want to find the value of this polynomial"<<endl;
double value=0;
for(int i=0;i<n;i++)
    {value+=coeff[i]*pow(val_x,power[i]);}

    return value;
}

int main()
{double l=1,h=10,m,x;
x=pow(10,299);
int f=0,n;
cin>>n;
polynommaker(n);
while(valuefinder(l,n)*valuefinder(h,n)>0 && f==0)
{l*=10;h*=10;
//cout<<l<<" "<<h<<endl;
if(l>x)
    {f=1;}
}
if(f==1)
    {h=1;l=0;
    while(valuefinder(l,n)*valuefinder(h,n)>0)
        {l/=10;h/=10;
        //cout<<l<<" "<<h<<endl;
        }
    }    
m=(l+h)/2;
for (;valuefinder(m,n)*100000000>1 || valuefinder(m,n)*100000000<-1;m=(l+h)/2)
    {
            if(valuefinder(m,n)>0)
                {h=m;}
            else if(valuefinder(m,n)<0)
                {l=m;}
    }

cout<<"Root exists. It is equal to "<<m;
return 0;
    
}
