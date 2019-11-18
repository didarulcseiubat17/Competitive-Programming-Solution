#include<bits/stdc++.h>
int main(){
int T,n;
std::cin>>T;
for(int i=0;i<T;i++){
        std::cin>>n;
        int arr[n];
    for(int j= 0;j<n;j++){
        std::cin>>arr[j];
    }
    
    for(int i=0;i<n;i++){
    if(arr[i]>arr[i+1]){
        if(i==n-1){
            std::cout<<-1<<" ";
        }
        else{std::cout<<arr[i+1]<<" ";}  
    }
    else{
        std::cout<<-1<<" ";
    }
}
std::cout<<"\n";
}
return 0;

}
