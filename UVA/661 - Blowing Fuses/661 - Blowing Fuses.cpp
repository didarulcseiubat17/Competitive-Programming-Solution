#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,c,a[22],kase=0;
bool safe,on[22];
while(cin>>n>>m>>c){
    for(int i=1;i<=n;i++){
        cin>>a[i];
        on[i]=false;
    }
    safe=true;
    int max=0,sum=0,k;
    for(int i=1;i<=m;i++){
            cin>>k;
        if(on[k]) sum-=a[k];
    else{
        sum+=a[k];
        if(max<sum) max=sum;
        if(sum>c) safe=false;
    }
    on[k]=!on[k];

    }
    printf("Sequence %d\n",++kase);
        if (safe) printf("Fuse was not blown.\nMaximal power consumption was %ld amperes.",max);
        else printf("Fuse was blown.");
        cout << endl << endl;



}

return 0;
}
