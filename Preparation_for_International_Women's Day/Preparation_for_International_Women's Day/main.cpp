//
//  main.cpp
//  Preparation_for_International_Women's Day
//
//  Created by I'mOng on 14/4/2562 BE.
//  Copyright © 2562 ong. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,k,t;
    cin >> n >> k;
    vector<int> data(k);
    for(int i = 0;i<n;i++){
        cin >> t;
        data[t%k] += 1;
    }
    int ans = data[0]/2;
    if (k%2==0){
        ans += data[k/2]/2;
    }
    for(int i = 1;i<((k+1)/2);i++){
        int cons = k-i;
        ans += min(data[i],data[cons]);
    }
    cout << 2*ans;
    
    return 0;
}
