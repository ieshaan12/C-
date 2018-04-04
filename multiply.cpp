#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int main()
{
	int a[100],pos;
	char b[100],c[100];
	cin>>b;
	for(int i=0;i<100;i++)
		{a[i]=0;}
	for(int i=0;i<strlen(b)/2;i++)
		{char t=b[i];
		 b[i]=b[strlen(b)-i-1];
		b[strlen(b)-i-1]=t;
		}
	for(int i=0;i<strlen(b);i++)
		{a[i]=(int(b[i])-48)*11;}
	for(int i=0;i<strlen(b);i++)	
		{a[i+1]=(a[i]/10)+a[i+1];
		    a[i]=a[i]%10;
		 }
	for(int i=99;i>=0;i--)
		{if(a[i]!=0)
			{pos=i;break;}
		}
	for(int i=0,j=pos;j>-1;j--,i++)
		{c[i]=char(a[j]+48);}
		cout<<c;
	return 0;
}
