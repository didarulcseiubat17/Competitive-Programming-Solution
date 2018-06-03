#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,first,second;

while(cin>>a>>b){
    if(a&&b==-1)break;
if(a<b){
    first=abs(a-b);
    second=(100+a)-b;
}
else
    {
    first=abs(a-b);
    second=(100+b)-a;
}
cout<<max(first,second)<<endl;
cout<<min(first,second)<<endl;
}
return 0;
}
