#include<bits/stdc++.h>
using namespace std;
int main(){
   freopen("input.txt","r",stdin);
 freopen("out.txt","w",stdout);
int n,p,tmet,bestmet,t=1;
string req,pak,junk,best;
double tprice,price;
while(cin>>n>>p){
      if(n==0)break;
        bestmet=price=-1;
   for(int i=1;i<=n;i++){
    getline(cin,req);

   }
for(int i=1;i<=p;i++){
    getline(cin,pak);

    cin>>tprice;
    cin>>tmet;
    while(tmet--){
        getline(cin,junk);

    }
    if(tmet>bestmet||(tmet==bestmet&&(tprice<price||price==-1))){
        best=pak;
        bestmet=tmet;
        price=tprice;
    }
}
printf("RFP #%d\n%s\n", t, best.c_str());
t++;
}

return 0;
}
