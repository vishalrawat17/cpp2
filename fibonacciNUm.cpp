#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the element  "; 
    cin>>n;
    int array[1000];
    array[0]= 0;
    array[1]= 1;
    for(int i=2;i<=n-1;i++)
        array[i]=array[i-1]+array[i-2];
        cout<<array[n-1]<<" ";
    return 0;
}