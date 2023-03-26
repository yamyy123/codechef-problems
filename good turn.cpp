#include <iostream>
using namespace std;

int main() {
    int c;
    cin>>c;
    for(int i=0;i<c;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a+b>6)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
	return 0;
}
