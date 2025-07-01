#include<iostream>
using namespace std;
int main(){
    int array[]={12,32,53,6};
    int x=6;
    int size=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<size;i++){
        if(array[i]==x){
            cout<<array[x];
        }
    }
    return 0;
}