/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// Print “Hello Coder Army” n times using Function.
#include <iostream>
using namespace std;
void message(int n){
    for(int i=1;i<=n;i++){
        cout<<"hello coder army"<<endl;
    }
    return ;
}
int main()
{
    int a;
    cin>>a;
    message(a);

    return 0;
}
