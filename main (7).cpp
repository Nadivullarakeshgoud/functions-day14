/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Swap 2 numbers a, b without using extra variables
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b); //swap is the inbuilt function in c++
    cout<<a<<" "<<b;

    return 0;
}
