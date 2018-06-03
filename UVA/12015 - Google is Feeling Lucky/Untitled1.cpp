#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
    char url[10][110];
    int rel[11];
    int Max=0,n,t=0;
    cin>>n;
    while(n--){
            t++;
    for(int i=0;i<10;i++){
        cin>>url[i]>>rel[i];
        Max=max(rel[i],Max);
    }
    cout<<"Case #"<<t<<":"<<endl;
for(int i=0;i<10;i++){
    if(rel[i]==Max){
        cout<<url[i]<<endl;
    }
}

    }

return 0;
}
