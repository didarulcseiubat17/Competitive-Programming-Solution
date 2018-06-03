#include<bits/stdc++.h>
using namespace std;
int main(){
   // freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);
int n;
string str[110],song[16]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
cin>>n;
int l=n;
for(int i=0;i<n;i++){
    cin>>str[i];
}
if(n%16!=0){
    n=((n/16)*16)+16;
}

int j=0;
int i=0;
for(int k=0;k<n;k++){
        cout<<str[i++]<<": "<<song[j++]<<endl;
        if(j==16) j=0;
        if(i==l)  i=0;



}




return 0;
}
