#include <iostream>
using namespace std;
int isPrime(int x);
int main() 
{	
	int pos;int j=2;
	cin>>pos;
	for(int i=1;i<=pos;)
    {
        if(	isPrime(j))
          i++;
	j++;
    }
	cout<<--j;
}

int isPrime(int x)
{
    int count=0;
	for(int i=1;i<=x;i++)
	if(x%i==0)
	count++;
	
	if(count==2)
	return 1;
	else return 0;
}