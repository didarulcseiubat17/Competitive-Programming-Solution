#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
int n;
cin>>n;
while(n--){
    char s[10000];
    cin>>s;
    int len=strlen(s);

    if(s[len-2]=='3'&&s[len-1]=='5'){
        printf("-\n");

    }
    else if(s[0]=='1'&&s[1]=='9'&&s[2]=='0'){
        printf("?\n");

    }
    else if(s[0]=='9'&&s[len-1]=='4'){
        printf("*\n");

    }
    else if(strcmp(s,"1")||strcmp(s,"4")||strcmp(s,"78")){
      printf("+\n");
    }
}


return 0;
}
