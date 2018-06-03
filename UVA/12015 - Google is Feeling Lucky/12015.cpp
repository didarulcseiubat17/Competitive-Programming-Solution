#include<bits/stdc++.h>
using namespace std;
int main(){
char website[10][110];
int re[11];
int n,kk=0,Max;
while(n--){
        kk++;
    for(int i=0;i<10;i++){
        cin>>website[i]>>re[i];
        Max=max(re[i],Max);
    }
    cout<<"Case #:\n"<<kk<<endl;
    for(int i=0;i<10;i++){
        if(re[i]==Max)
            cout<<website[i]<<endl;
    }
}
return 0;
}
