#include<iostream>
using namespace std;
int largestElementIndex(int array[],int size){
        int max=INT16_MIN;
        int maxIndx=-1;
        for(int i=0;i<size;i++){
            if(array[i]>max){
                max=array[i];
                maxIndx=i;
            }
        }
        return maxIndx;
    }

int main(){
    int array[]={1,2,4,9,6,8};
    int large=largestElementIndex(array,6);
    array[large]=-1;
    int secLar=largestElementIndex(array,6);
    cout<<array[secLar]<<endl;
    return 0;


}