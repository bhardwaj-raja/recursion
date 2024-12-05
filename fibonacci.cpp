#include <iostream>
using namespace std;
int fib(int n)
{
    if(n==1 || n==2)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
int main()
{
    int n,y;
    cout<<"enter a position:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       y=fib(i);
       cout<<y<<"\t";
    }
    return 0;
}
