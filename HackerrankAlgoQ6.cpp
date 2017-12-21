#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void pattern(int n){
    for(int i=1;i<=n;i++){
        
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"#";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern(n);
    return 0;
}
