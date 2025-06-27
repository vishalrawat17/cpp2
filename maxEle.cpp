#include<iostream>
using namespace std;
int main(){
    int array[]={12,41,23,1};
    int size=sizeof(array)/sizeof(array[0]);
    int max_value=array[0];
    for(int i=1;i<size;i++){
        if(array[i]>max_value){
            max_value=array[i];
        }
    }
    cout<<max_value;
    return 0;
}