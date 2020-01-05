//
//  main.cpp
//  18238 ZOAC2
//
//  Created by 장진웅 on 2019/12/31.
//  Copyright © 2019 cbycongbab. All rights reserved.
//

#include <iostream>
#include <string>
#include <utility>
#include <cstdlib>

using namespace std;
int main(int argc, const char * argv[]) {
    int time=0;
    string str;
    char current='A';
    cin >> str;
    
    for(int i=0; i<str.length(); i++)
    {
        if(abs(str[i]-current)<13)
        {
            time+=abs(str[i]-current);
            current = str[i];
        }
        else{
            time += (26 -abs(str[i]-current));
            current = str[i];
        }
    }
    printf("%d", time);
    
    
    return 0;
}
