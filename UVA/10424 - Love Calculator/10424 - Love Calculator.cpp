#include<bits/stdc++.h>
using namespace std;
int main(){
string s1,s2;
int sum1,sum2;
while(cin>>s1>>s2){
    sum1=sum2=0;
    for(int i=1;i<s1.size();i++){
        if(islower(s1[i])) sum1+=s1[i]-'a'+1;
        if(isupper(s1[i])) sum1+=s1[i]-'A'+1;
    }
    if(sum1%9==0) sum1=9;
    else sum1%=9;

     for(int i=1;i<s1.size();i++){
        if(islower(s2[i])) sum2+=s2[i]-'a'+1;
        if(isupper(s2[i])) sum2+=s2[i]-'A'+1;
    }
    if(sum2%9==0) sum2=9;
    else sum2%=9;
    if(sum1>sum2){
        printf("%.2f %c",(sum2*100.0)/sum1,'%');
    }
    else
        printf("%.2f %c",(sum1*100.0)/sum2,'%');


}


return 0;
}
