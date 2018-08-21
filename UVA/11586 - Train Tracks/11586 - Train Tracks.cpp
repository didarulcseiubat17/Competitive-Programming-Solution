#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,count;
    string str;
    cin>>T;
    cin.ignore();
    while(T--){
            count=0;
        getline(cin,str);
        for(int i=0;i<str.length();i++){
            if(str[i]=='M')count++;
            else if(str[i]=='F')count--;
        }
        if(count==0&&str.size()>3){ cout<<"LOOP"<<endl;}
        else cout<<"NO LOOP"<<endl;
    }

return 0;
}
