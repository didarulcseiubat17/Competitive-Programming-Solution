#include<bits/stdc++.h>
using namespace std;
int main(){
   //freopen("input.txt","r",stdin);
  // freopen("out.txt","w",stdout);
string str;
int t,i,j,n=0;
bool m;
while(cin>>str>>t){

        n++;

    printf("Case %d:\n",n);
    while(t--){
             m=true;
        cin>>i>>j;
        int Min=min(i,j);
        int Max=max(i,j);
for(int i=Min;i<Max;i++){
    if(str[i]!=str[i+1]) m=false;
}
if(m)cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
    }





return 0;
}
