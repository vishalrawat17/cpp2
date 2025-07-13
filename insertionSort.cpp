#include<iostream>
using namespace std;
int main(){
    int array[]={12,14,17,19,16,};
    int n=sizeof(array)/sizeof(array[0]);
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(array[j]<array[j-1]){
                swap(array[j],array[j-1]);
            }
            else{
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}
  