#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4};
    int size=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<size/2;i++){
        int temp=array[i];
        array[i]=array[size-i-1];
        array[size-i-1]=temp;
    }
    cout<<size<<endl;
    cout<<"reverse array :";
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}