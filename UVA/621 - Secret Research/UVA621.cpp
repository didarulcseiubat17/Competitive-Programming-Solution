#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    char s[1000];
    cin>>s;
    int l=strlen(s);

     if(s[l-2]=='7'&&s[l-1]=='8'){
        cout<<"?"<<endl;
    }
    else if (strcmp(s,"1")||strcmp(s,"4")||strcmp(s,"78")){
        cout<<"+"<<endl;
    }

}



return 0;
}
