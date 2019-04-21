//
//  main.cpp
//  Be_Positive
//
//  Created by I'mOng on 16/4/2562 BE.
//  Copyright © 2562 ong. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,k,pos,neg,t;
    neg = 0;
    pos = 0;
    cin >> n;
    if (n%2==1)
        k = n/2 + 1;
    else
        k = n/2;
    
    for(int i=0;i<n;i++){
        cin >> t;
        
        if (t>0)
            pos += 1;
        else if (t<0)
            neg+=1;
        
    }
    if (pos >= k)
        cout << 3;
    else if (neg>=k)
        cout << -3;
    else
        cout << 0;
        
    return 0;
}
