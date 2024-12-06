#include <iostream>
#include<algorithm>
using namespace std;
void reverseString(string str,int i)
{
    int n=str.length();
    if(i==n )return;
    reverseString(str,i+1);
    cout<<str[i];

}
int main() 
{
   string s="toilet";
   
   int i=0;
   reverseString(s,i);
    return 0;
}  
