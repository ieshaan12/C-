#include<iostream>
#include<math.h>
using namespace std;
int main()
{int n;
cout<<"Number of x,power terms you want to input"<<endl;
cin>>n;
int coeff[n],power[n];
int c;
for(int i=0;i<n;i++)
{cout<<"Coefficient for "<<(i+1)<<" term followed by its power"<<endl;
    cin>>coeff[i]>>power[i];
}
cout<<"Enter constant Term"<<endl;
cin>>c;
cout<<"Final equation is"<<endl;
for(int i=0;i<n;i++)
    {cout<<coeff[i]<<"*x^("<<power[i]<<") + ";
    }
    cout<<c<<endl<<"Enter value for which you want to find the value of this polynomial"<<endl;
double x;
cin>>x;
double value=0;
for(int i=0;i<n;i++)
    {value+=coeff[i]*pow(x,power[i]);}
    value=value+c;
cout<<"Value of polynomial is "<<value<<endl;
    return 0;
}
