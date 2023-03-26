#include <iostream>
using namespace std;

int main() {
	int c;
	cin>>c;
	for(int i=0;i<c;i++)
	{
	    int a,b,d;
	    cin>>a>>b>>d;
	    if(d>=a && d<b)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
