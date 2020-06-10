#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
class Solution
{
public:
int reverseInteger(int x)
{
int d;
d=0;
while(x)
{
if(x>INT_MAX/10 || x<INT_MIN/10) return 0;
d=d*10+x%10;
x=x/10;
}
return d;
}
};
int main()
{
int x,ans;
cin>>x;
Solution s;
ans=s.reverseInteger(x);
cout<<ans;
return 0;
}
