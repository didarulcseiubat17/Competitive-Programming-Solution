#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
int n,N,arr[50];
int high,low,count1=0;
cin>>n;
while(n--){

    cin>>N;
    count1++;
    //arr[99]={0};
    for(int i=0;i<N;i++){
            high=0,low=0;
        cin>>arr[i];

    }
    for(int j=0;j<N-1;j++){

        if(arr[j]==arr[j+1]) continue;

        if(arr[j]>arr[j+1]){
            low++;

        }
        else
            high++;
}

cout<<"Case "<<count1<<": "<<high<<" "<<low<<endl;

}

return 0;
}
