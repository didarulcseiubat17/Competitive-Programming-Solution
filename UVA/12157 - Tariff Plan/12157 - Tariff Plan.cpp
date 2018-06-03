#include<bits/stdc++.h>
using namespace std;
int main(){
  // freopen("input.txt","r",stdin);
   //freopen("output.txt","w",stdout);

int Mile=0,Juice=0,t,N,T=0;
cin>>t;
for(int i=1;i<=t;i++){
        T++;
    cin>>N;
    while(N--){
            int cd,M=0,J=0;
        cin>>cd;
    M=cd;
    J=cd;
        if(M>29){
            Mile+=10+((M/30)*10);
        }
        else if(M<30){
            Mile+=10;
        }
        if(J>59){
            Juice+=15+((J/60)*15);
        }
        else if(J<60){
            Juice+=15;
        }
//cout<<"Mile "<<Mile<<endl;
//cout<<"Juice "<<Juice<<endl;
    }

    int Min=min(Mile,Juice);
    if(Mile==Juice){
        cout<<"Case "<<T<<": Mile Juice "<<Mile<<endl;
    }

    else if(Juice==Min){
         cout<<"Case "<<T<<": Juice "<<Juice<<endl;
    }
    else if(Mile==Min){
        cout<<"Case "<<T<<": Mile "<<Mile<<endl;
    }
    Mile=0,Juice=0;
}
return 0;
}
