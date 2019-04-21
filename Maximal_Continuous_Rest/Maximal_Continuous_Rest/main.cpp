//
//  main.cpp
//  Maximal_Continuous_Rest
//
//  Created by I'mOng on 20/4/2562 BE.
//  Copyright © 2562 ong. All rights reserved.
//
#include <vector>
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,u,temp;
    cin >> n;
    vector<int> data(n);
    u = 0;
    int v = 0;
    for(int i=0;i<n;i++){
        cin >> temp;
        if (temp == 1)
            u+=1;
        else
            data[v] = u;
            v+=1;
            u = 0;
    }
    for(int i = 0;i<n;i++){
        cout << data[i];
    }
    
    
    
    return 0;
}
