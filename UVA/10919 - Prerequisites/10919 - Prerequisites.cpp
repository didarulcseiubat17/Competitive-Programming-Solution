#include<bits/stdc++.h>
using namespace std;
int a[105];
int main(){
    //freopen("input.txt","r",stdin);
   // freopen("out.txt","w",stdout);
int n,m,tot,req,aux,cn;
while(1){
    cin>>n;
    if(n==0) return 0;
    cin>>m;
    cn=0;
    int op=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(m--){
        cn=0;
        cin>>tot>>req;
        for(int j=0;j<tot;j++){
            cin>>aux;
            for(int h=0;h<n;h++){
                if(aux==a[h])
                    cn++;
            }
        }
        if(cn<req) op=1;
    }
    if(op==0)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
}
return 0;
}
