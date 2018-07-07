#include<bits/stdc++.h>
using namespace std;
int main(){
long long a,b,n,m;
cin>>a>>b>>n>>m;
cout<<min(a%b*m,(b-a%b)*n)<<endl;

}
