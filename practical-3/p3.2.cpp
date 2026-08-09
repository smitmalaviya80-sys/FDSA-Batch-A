#include<iostream>
using namespace std;
int main(){
    int arr[6]={2,0,1,2,0,1};
    int zero=0;
    int one=0;
    int two=0;
//count of number of zero ,one , two 
    for(int i=0;i<6;i++){
        if(arr[i]==0)
            zero++;
        else if(arr[i]==1)
            one++;
        else
            two++;
    }
//then count decrise when it not to reach 0 and arr fist via loop
    int idx=0;
    while(zero--){
        arr[idx]=0;
        idx++;
    }
    //then add add ones when first loop stop
    while(one--){
        arr[idx]=1;
        idx++;
    }

    while(two--){
        arr[idx]=2;
        idx++;
    }

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}