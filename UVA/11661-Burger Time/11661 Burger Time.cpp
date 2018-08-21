#include<iostream>
using namespace std;


int main(){
int mindis;
int lR;;
int lD;
string S;
int L;
while(cin>>L){
if(L==0)
    break;
mindis=L;
lR=-L;
lD=-L;

    cin>>S;
    for(int i=0;i<L;i++){

    if(S[i]=='Z'){
        mindis=0;
        break;

    }
    //Resturant
    else if(S[i]=='R'){
        mindis=min(mindis,i-lD);
        lR=i;

    }
    //Drugs
    else if(S[i]=='D'){
        mindis=min(mindis,i-lR);
        lD=i;

    }



}
cout<<mindis<<endl;
}

	return 0;
}
