#include<iostream> 
#include<vector>
using namespace std ;
int  main (){
    vector<int> arr={8,7,6,5,4,3,2};
    for(int i=0;i<arr.size();i++){
        int index = i; 
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[index]){
                index = j;

            }

        }
        swap(arr[i],arr[index]);
    }
    for(int i=0;i<arr.size();i++){cout<<arr[i]<<" ";}
    return 0 ;
}