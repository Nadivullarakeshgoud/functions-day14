# functions-day14

function declaration
retur_type function name (parameter 1,parameter 2,......................)
int        add           (int m,int n)
int add(int m,int n)

function call
function name();
cout<<add(a,b);

function define
int add(int m, int n)
{
    int ans=m+n;
    return ans;
}


function code for addding two numbers

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
