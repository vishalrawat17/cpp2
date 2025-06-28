#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int array[]={1,4,5,3,6};
    int size=sizeof(array)/sizeof(array[0]);
    sort(array,array+size);
    for(int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }
    return 0;
}