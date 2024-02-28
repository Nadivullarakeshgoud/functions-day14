/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int add(int m,int n){
    int ans=m+n;
    return ans;
}

int main()
{
    int a,b;
    cin>>a>>b;
     cout<<add(a,b);
    return 0;
}
