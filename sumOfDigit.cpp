#include <iostream>
using namespace std;
int sumOfDigit(int n)
{
    int r;
    if(n==0)
    {
        return 0;
    }
    else
    {
        r=n%10;
        n=n/10;
        return r+sumOfDigit(n);
    }
}
int main()
{
    int n;
    cout<<"enter a number:"<<endl;
    cin>>n;
    int y=sumOfDigit(n);
    cout<<"the sum of digit of the number is:"<<y<<endl;
    return 0;
}
