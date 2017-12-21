#include <bits/stdc++.h>


using namespace std;

int main() {
  long long arr[5];
    long long sum=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
     sum+=arr[arr_i]; 
        
    }
    sort(arr,arr+5);
    cout<<sum-arr[4]<<" "<<sum-arr[0]<<endl;
    
   // permute(arr);
    
    return 0;
}
