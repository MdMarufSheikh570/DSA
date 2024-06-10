#include<iostream>
using namespace std;
int main(){
    int p=1;
    int value=100;
    int A[]={10,20,30,40,50};
    int size=sizeof(A)/sizeof(int);
    cout<<size<<endl;
    cout<<"previous Array: ";
    for(int i=0;i<size;i++)
    {
        cout<<A[i]<<"\t";
    }
    cout<<endl;
    for(int i=size-1;i>=p-1;i--){
    A[i+1]=A[i];
    }
    A[0]=value;
    cout<<"After insertion: ";
     for(int i=0;i<= size;i++)
    {
        cout<<A[i]<<"\t";
    }
    return 0;
}