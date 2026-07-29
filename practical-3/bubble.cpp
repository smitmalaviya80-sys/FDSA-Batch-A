#include<iostream>
using namespace std;
int main(){
    int s[]={5,4,3,2,1};
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(s[j]>s[j+1]){
                int temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }

    for(int i=0;i<5;i++){
        cout<<s[i]<<" ";
    }
}