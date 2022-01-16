#include"bits/stdc++.h"
using namespace std;
bool getBit(int val,int pos){
    return ((val&(1<<pos))!=0);
}
int setBit(int val,int pos){
    return (val|(1<<pos));
}
int uniquelement(int arr[],int n){
    int result=0;
    for(int i=0;i<64;i++){
        
        int count=0;
        for(int j=0;j<n;j++){
            if(getBit(arr[j],i)){
                count++;
            }}
            if(count%3!=0){
               result=setBit(result,i);
            
        }
    }
    return result;
}
int main(){
   int arr[]={2,2,1,5,1,1,2};
   int n=sizeof(arr)/sizeof(arr[0]);
   cout<<uniquelement(arr,n);



    return 0;
}