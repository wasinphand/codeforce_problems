//
//  main.cpp
//  test
//
//  Created by I'mOng on 15/4/2562 BE.
//  Copyright © 2562 ong. All rights reserved.
//
#include <stdio.h>
#include <iostream>
#define LIMIT 100
struct listType{
    int size;
    int listElement[LIMIT];
};

int main(int argc, const char * argv[]) {
    // insert code here...
    struct listType list;
    int emptyList;
    list.size = 0;

    emptyList = (list.size==0);
    int i;
    printf("%d",list.size);
    for(i=0;i<=list.size-1;i++){
        printf("%d\n",list.listElement[i]);
    }
    std::cout << "Hello, World!\n";
    return 0;
}
