#include <iostream>
using namespace std;
int main() {
    int input[]={1,2,3,4,5,6,7};
    int start=0;
    int end=6;
    while(start<end){
        int temp=input[start];
        input[start]=input[end];
        input[end]=temp;
        start++;
        end--;
    }
    for(int j=0;j<7;j++)
    cout<<input[j]<<",";



}
