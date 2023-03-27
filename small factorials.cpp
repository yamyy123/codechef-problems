#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
using namespace std;
using namespace boost::multiprecision;

int main()
{
     int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        cpp_int fact=1;
        int a;
        cin>>a;
        for( int i=1;i<=a;i++)
        {
            fact=fact*i;
        }
        cout<<fact<<endl;
    }
return 0;
}




