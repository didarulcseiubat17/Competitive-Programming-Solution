#include<bits/stdc++.h>
using namespace std;
int main(){
   // freopen("input.txt","r",stdin);
   // freopen("out.txt","w",stdout);
int n,w,y1,y2,x[99];
//string s;
cin>>n;
//cin>>s;
while(n--){
    //cin>>s;
    cin>>w;
    for(int i=0;i<w;i++){
        cin>>y1>>y2;
        x[i]=abs(y1-y2);
    }
sort(x,x+w);
      if(x[0]==x[w-1]){
       // cout<<s<<endl;
        cout<<"yes"<<endl;
    }
    else
        //cout<<s<<endl;
        cout<<"no"<<endl;

if(n)
    cout<<"\n";
}

return 0;
}
