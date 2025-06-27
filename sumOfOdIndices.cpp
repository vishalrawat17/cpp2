#include<iostream>
using namespace std;
int main(){
    int array[]={1,4,5,6,7,8,9};
    int sum=0;
    int size=sizeof(array)/sizeof(array[0]);
    for(int i=1;i<size;i+=2){
        sum+=array[i];
    }
    cout<<sum<<endl;
    return 0;
}