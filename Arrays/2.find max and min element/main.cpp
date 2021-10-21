//
// Created by asifu on 21-10-2021.
//
#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,12> arr={1,3,4,5,12,56,78,98,98,45,11,134};

    int min1=arr[0];
    int max1=arr[0];
    for(int i=0;i<arr.size();i+=2){
      if ( arr[i]<arr[i+1])

          min1=min(arr[i],min1);
      else min1=min(arr[i+1],min1);
      if(arr[i]>arr[i+1])
          max1=max(arr[i],max1);
      else max1=max(arr[i+1],max1);



    }
    cout<<max1<<" "<<min1<<endl;

}
