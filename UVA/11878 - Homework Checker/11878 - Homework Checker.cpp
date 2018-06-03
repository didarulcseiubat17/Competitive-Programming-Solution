#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,i=0;
char c,c2,d;
while(cin>>a>>c>>b>>c2>>d){

if(d=='?') continue;
int d2=int(d);
if(c=='+'){
    if(a+b==d2) i++;
}
else if(c=='-'){
    if(a-b==d2) i++;
}

}

cout<<i<<endl;

return 0;
}
