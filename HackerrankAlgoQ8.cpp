#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <long long> ar) {
    // Complete this function
    long long counter=0;
    long long temp=0;
    long long max=0;
    for(int i=0;i<n-1;i++){
       if(max<ar[i]){
           max=ar[i];
       }
        
    }
    
    
 
    for(int i = 0; i < n; i++){
        if(ar[i]==max){
            counter++;
           
        }
       
    }
    
    
    
    
    return counter;
}

int main() {
    int n;
    cin >> n;
    vector<long long> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
     
    return 0;
}
