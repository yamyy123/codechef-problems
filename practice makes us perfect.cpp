#include <iostream>
#include<vector>
using namespace std;

int main() {
	int a[4];
	int count=0;
	int size =sizeof(a)/sizeof(a[0]);
	for(int i=0;i<size;i++)
	{
	    cin>>a[i];
	}
	for(int i=0;i<size;i++)
	{
	    if(a[i]>=10)
	    {
	        count++;
	    }
	}
	cout<<count;
	return 0;
}
