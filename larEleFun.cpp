#include<iostream>
using namespace std;
int large_ele(int array[0],int n){
    int max_value=INT16_MIN;
    int max_index=-1;
    for(int i=0;i<n;i++){
        if(array[i]>max_value){
           max_value=array[i];
           max_index=i;
        }
    }
    return max_index;
}
int main(){
    int array[]={12,41,60,10,15};
    int n=sizeof(array)/sizeof(array[0]);
    int largest_element=large_ele(array,n);
    cout<<array[largest_element];
    return 0;
}
