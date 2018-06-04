#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
  // freopen("out.txt","w",stdout);
int N,B,H,W,cost;
while(cin>>N>>B>>H>>W){
        cost=0;
for(int i=0;i<H;i++){
    int p=0;
    cin>>p;
    for(int j=0;j<W;j++){
            int a=0;
        cin>>a;
        if(N<=a){
            if(N*p<=B){
                    if(cost==0||N*p<cost){
                   cost=N*p;}

            }

        }
    }

}
if(cost==0){
    cout<<"stay home"<<endl;
}
else{
    cout<<cost<<endl;}

}
return 0;
}
