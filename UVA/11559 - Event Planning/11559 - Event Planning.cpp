#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
   //freopen("output.txt","w",stdout);
    int N,B,H,W,t;
    while(cin>>N>>B>>H>>W){

        while(H--){
                int p,a;

           cin>>p;
        while(W--){
            cin>>a;
            if(N<=a){
                if((p*N)<=B){
                    t=p*N;

                }
            }

        }

        }
if(t>B)
            printf("stay homen");
            else
            printf("%d",t);
    }



return 0;
}
