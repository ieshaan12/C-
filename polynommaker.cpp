#include<iostream>
#include<math.h>
using namespace std;
int polynommaker(int n)             // This n will be the number of terms entered by the user.
{//cout<<"Number of x,power terms you want to input"<<endl;
//cin>>n
int coeff[n],power[n];              //Find a solution for passing these array to a different function that will evaluate the polynmial.
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
    return 0;
}

double valuefinder(double val_x) 
{//cout<<c<<endl<<"Enter value for which you want to find the value of this polynomial"<<endl;
double value=0;
for(int i=0;i<n;i++)
    {value+=coeff[i]*pow(x,power[i]);}
    }
    return value;
}
