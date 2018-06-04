#include<bits/stdc++.h>
using namespace std;
int main(){
   // freopen("input.txt","r",stdin);
   // freopen("out.txt","w",stdout);
int B,N,r[21];
int D,V,C;
while(cin>>B>>N){
if(B==0&&N==0){
    break;
}
bool flag=true;
for(int i=1;i<=B;i++){
    cin>>r[i];
}

for(int i=1;i<=N;i++){
    cin>>D>>C>>V;
    r[D]-=V;
    r[C]+=V;

}

for(int i=1;i<=B;i++)
    if(r[i]<0){
      flag=false;
      break;
}

            if(flag)
            cout<<"S"<<endl;
        else
            cout<<"N"<<endl;


}

}
