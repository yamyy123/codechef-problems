#include <iostream>
using namespace std;

int main() {
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        int count=0;
        int size;
        cin>>size;
        int todo[size];
        for(int j=0;j<size;j++)
        {
            cin>>todo[j];
            if(todo[j]>=1000)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
	return 0;
}
