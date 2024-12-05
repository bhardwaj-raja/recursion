#include <iostream>
using namespace std;
int fact(long long int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
    long long int n,y;
    cout<<"enter a number:"<<endl;
    cin>>n;
    y=fact(n);
    cout<<"factorial of the given number is:"<<y<<endl;
    return 0;
}
