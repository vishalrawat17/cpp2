#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int array[]={1,2,4,5,6};
    int sum=0;
    int size=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<size;i++){
        sum+=array[i];
    }
    cout<<sum<<endl;
    double avg=(double)sum/size;
    cout<<fixed<<setprecision(3)<<avg;
    return 0;
}