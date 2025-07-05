#include<iostream>
using namespace std;
int main(){
    int array[1000];
    int n;
    cout<<"Enter the array size :"; 
    cin>>n;
    cout<<"Enter the array element: ";

    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=n-2;i>=0;i--){
        bool swapped=0;
        for(int j=0;j<=i;j++){
            if(array[j]<array[j+1]){
            swapped=1;
            swap(array[j],array[j+1]);
            }
        }
        if(swapped ==0)
        break;
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}