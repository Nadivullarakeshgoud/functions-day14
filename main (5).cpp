/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//cube of a number
#include <iostream>
using namespace std;
int cube(int n){
    int ans;
    ans=n*n*n;
    return ans;
}
int main()
{
    int a;
    cin>>a;
    
    cout<<cube(a);

    return 0;
}
