/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.
#include <iostream>
using namespace std;
void swap(int &a,int &b){//we have to use & in swap to get answer because it stroes in address(pass by reference)
    int c;               //without using addres & answer wont get (pass by value)
    c=a;
    a=b;
    b=c;
}
int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b); //swap is the inbuilt function in c++
    cout<<a<<" "<<b;

    return 0;
}
