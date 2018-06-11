#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    freopen("out.txt","w",stdout);
int k,m,c,r,k1=0;
int ch[101];
int redeg[101];

while(cin>>k>>m){
        if(k==0) break;
    for(int i=1;i<=k;i++){
        cin>>ch[i];
    }
    bool flag=false;
    while(m--){
        cin>>c>>r;
        int must=0;
        for(int i=1;i<=c;i++){
            cin>>redeg[i];
            for(int j=1;i<=k;j++){
                if(redeg[i]==ch[j]) must++;k1++;

            }
        }
        if(must==r) flag=true;
    }
    if(flag==true&&k1==k) cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
}


return
0;
}
