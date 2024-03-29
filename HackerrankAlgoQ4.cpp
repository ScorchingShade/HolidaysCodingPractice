#include <cmath>
#include <cstdio>
#include <vector>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
using namespace std;

int res(int n,vector< vector<int> > a){
    int result=0,mainD=0,secD=0;
    int temp=n;
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
           
           if(a_i==a_j)
                  mainD+=a[a_i][a_j];
            
           if(a_j==temp-1)
             {secD+=a[a_i][a_j];
                 temp--;
             }
       }
    }
    result=abs(mainD-secD);
    return result;
}

int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    int result=res(n,a);
    cout<<result;
    return 0;
}
