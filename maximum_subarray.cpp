// max of sub array of size k
#include <iostream>
#include <vector>
using namespace std;
vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector <int> v;
        
        for(int i = 1; i < n - k; i++){
           if(i >= k){
               
           }else{
              if(arr[i] > arr[i-1])
                v.push_back(arr[i]);
           } 
        }
        return v;
    }