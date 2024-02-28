# functions-day14


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
    cout<<add(a-b,b-a);
    return 0;
}
