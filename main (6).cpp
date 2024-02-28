/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// revers of a number
#include <iostream>
using namespace std;
int rev(int n){
    int ans=0;
    int rem;
    while(n>0){
    
    rem=n%10;
    n=n/10;
    ans=ans*10+rem;
    }
    return ans;
}
int main()
{
    int a;
    cin>>a;
    cout<<rev(a);

    return 0;
}
