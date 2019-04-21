//
//  main.cpp
//  Balanced_Team
//
//  Created by I'mOng on 14/4/2562 BE.
//  Copyright © 2562 ong. All rights reserved.
//

#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    int n,cnt;
    cin >> n;
    vector<int> data(n);
    for(int i = 0;i<n;i++){
        cin >> data[i];
    }
    int temp = 0;
    vector<int>::iterator c;
    int ans = -1;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<=5;j++){
             
             c = find(data.begin(),data.end(),data[i]+j);
            if (c!=data.end()){
                 cnt = count(data.begin(),data.end(),data[i]+j);
                temp += cnt;
            }
        }
         if (ans < temp){
              ans = temp;
         }
         temp = 0;
    }
     cout << ans;
    
    
    return 0;
}
