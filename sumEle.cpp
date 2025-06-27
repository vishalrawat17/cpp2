#include<iostream>
using namespace std;
int main(){
    int array[]={12,14,15,21};
    int sum=0;
    int size=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<size;i++){
        sum+=array[i];
    }
    cout<<sum;
    return 0;
}