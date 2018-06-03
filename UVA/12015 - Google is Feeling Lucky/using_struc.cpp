#include<bits/stdc++.h>
using namespace std;
struct web{
string url;
int rel;
};
int main(){
    //freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);

    int n,t=0;

cin>>n;
while(n--){
        t++;
        int mxRel = -1;
        web pages[100];
   for(int i=0;i<10;i++){


     cin>>pages[i].url>>pages[i].rel;

     if(pages[i].rel > mxRel)mxRel = pages[i].rel;
   }
cout << "Case #"<< t << ":" << endl;
for(int j=0;j<10;j++){
if(pages[j].rel == mxRel)
    cout << pages[j].url << endl;
}

}



return 0;
}
