//
//  main.cpp
//  2440 별찍기3
//
//  Created by 장진웅 on 2019/10/15.
//  Copyright © 2019 장진웅. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int line;
    
    cin >> line;
    
    while(line)
    {
        for(int i=0; i<line; i++)
        {
            putchar('*');
        }
        putchar('\n');
        line--;
    }
    return 0;
}
