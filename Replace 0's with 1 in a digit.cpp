#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,last;
	int count=1,sum=0;
	cout<<"Enter the digit";
	cin>>n;
	while(n!=0)
	{
		last=n%10;
		n=n/10;
		if(last==0)
		{
			sum+=1*count;
		}
		else
		{
			sum+=last*count;
		}
		count=count*10;
	}
	cout<<"the new no. is="<<sum;
}
/*#include<iostream>
using namespace std; 
int main()
{
int x,y;
cin>>x;
int rem,i,bin;
int sum;
sum=0;i=1;
while(x!=0)
{
rem=x%10;
if(rem==0)
{
rem=1;
}
sum=sum+rem*i;
i=i*10;;
x=x/10;
} cout<<sum; return 0;
}*/
