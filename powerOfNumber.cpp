#include <iostream>
using namespace std;
int power(int b,int e)
{
    if(e==1)
       return b;
    return b*power(b,e-1);
}
int main() 
{
    int b,e;
    cout<<"enter the base :"<<endl;
    cin>>b;
    cout<<"enter the exponent:"<<endl;
    cin>>e;
    
    long result=power(b,e);
    cout<<"the result is:"<<result;
    return 0;
}
