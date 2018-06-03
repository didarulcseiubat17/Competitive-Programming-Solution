#include<bits/stdc++.h>
using namespace std;
int main(){
size_t N,T=1;

while(cin>>N){
   map<string, int>balance;
    vector<string>names;
    for(int i=0;i<N;i++){
            string name;
    cin>>name;
    balance[name]=0;
    names.push_back(name);

    }


for(size_t i=0;i<N;i++){
    string name;
    int spendMoney,npeople;

    cin>>name;
    cin>>spendMoney>>npeople;
    if(npeople==0)
        continue;
    int gift=spendMoney/npeople;
    balance[name]-=(gift*npeople);
    for(size_t i=0;i<npeople;i++){
            cin>>name;
        balance[name]+=gift;
    }

}
if(T++>1){
    cout<<endl;
}
for(size_t i=0;i<N;i++){
    cout<<names[i]<<" "<<balance[names[i]]<<endl;
}

}
return 0;
}
