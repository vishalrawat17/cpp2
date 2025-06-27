#include<iostream>
using namespace std;
int main(){
    int array[]={12,41,23,1};
    int size=sizeof(array)/sizeof(array[0]);
    int min_value=array[0];
    for(int i=1;i<size;i++){
        if(array[i]<min_value){
            min_value=array[i];
        }
    }
    cout<<min_value;
    return 0;
}