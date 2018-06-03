#include<bits/stdc++.h>
using namespace std;
int main(){
  // freopen("input.txt","r",stdin);
   //freopen("output.txt","w",stdout);
string str[110],st;
int ct,n,m=0;
cin>>n;
while(n--){
    int tc;
    ct=0;
    cin>>tc;
    for(int i=0;i<tc;i++){
        cin>>st;
        if(st=="LEFT"){
            str[i]=st;
            ct--;
        }
        else if(st=="RIGHT"){
            str[i]=st;
            ct++;
        }
        else{
          cin>>st;
           cin>>m;
           if(str[m-1]=="LEFT"){
            str[i]=str[m-1];
            ct--;
           }
           else if(str[m-1]=="RIGHT"){
            str[i]=str[m-1];
            ct++;
           }
        }
    }
    cout<<ct<<endl;

}

return 0;
}
