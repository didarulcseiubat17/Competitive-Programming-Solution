#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
   //freopen("output.txt","w",stdout);
int month,n;
double downp,loan,dep[101];
while(true){
    //cin>>month;
    cin>>month>>downp>>loan>>n;
    if(month<0){
        break;
    }
    int dm;
    double per;
    while(n--){
            cin>>dm>>per;
    for(int i=dm;i<101;i++){
        dep[i]=per;
    }
    }
    int i=0;
    double monthlypaymen=loan/month;
    double curv=(loan+downp)*(1-dep[0]);
    double curl=loan;
    while(curv<curl){
        i++;
        curl-=monthlypaymen;
        curv=curv*(1-dep[i]);
    }
    cout<<i<<" month";
    if(i!=1){
        cout<<"s";
    }
    cout<<endl;
}


return 0;
}
