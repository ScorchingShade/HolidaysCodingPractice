#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<float> solve(vector<int> arr, int n){
    float pos=0.000000,neg=0,zero=0;
     float temp=n;
    float fracPos=0,fracNeg=0,fracZero=0;
    
    for(int arr_i = 0;arr_i < n;arr_i++){
        
        if(arr[arr_i]>0){
            pos+=1;
            fracPos=pos/temp;
        }
        else if(arr[arr_i]<0){
            neg+=1;
            fracNeg=neg/n;
        }
        else if(arr[arr_i]==0){
            zero+=1;
             fracZero=zero/n;
        }
    }
   
    
    
   
    
    vector<float> result;
    result.push_back(fracPos);
    result.push_back(fracNeg);
    result.push_back(fracZero);
    
    return result;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    
    vector<float> result=solve(arr,n);
    
    for(int arr_i = 0;arr_i < 3;arr_i++){
       cout << result[arr_i]<<endl;
    }

    
    return 0;
}
