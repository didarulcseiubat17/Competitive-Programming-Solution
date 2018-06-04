#include<bits/stdc++.h>
using namespace std;
int main(){
long long int s;
int sum;
while(cin>>s){
    if(s==0)
        break;
        sum=0;
    while(1){
        while(s!=0){
            sum=sum+(s%10);
            s=s/10;
        }
        if(sum/10==0){
            break;

        }
        else
        {

            s=sum;
            sum=0;
        }



    }
    cout<<sum<<endl;
}

return 0;
}
