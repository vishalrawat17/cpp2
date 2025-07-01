#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
    int start=0, end=4;
    while(start<end){
        swap(array[start],array[end]);
        start++;
        end--;
    };
    for(int i=0;i<5;i++){
        cout<<array[i];
    }
    return 0;
}