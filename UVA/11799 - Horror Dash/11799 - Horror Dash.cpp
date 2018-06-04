#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    freopen("out.txt","w",stdout);
int N,t,a[99],n=0;
cin>>t;
while(t--){

n++;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>a[i];

    }
sort(a,a+N);
cout<<"Case "<<n<<": "<<a[N-1]<<endl;
}


return 0;
}
