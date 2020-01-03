//
//  main.cpp
//  1157 단어공부 re
//
//  Created by 장진웅 on 2019/12/31.
//  Copyright © 2019 cbycongbab. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    
    string str;
    int count[26]={0, };
    int sw=0;
    
    cin >> str;
    
    for(int i=0; i<str.length(); i++)
    {
        str[i] = toupper(str[i]);
        count[str[i]-65]++;
        
    }
    int max=0;
    char result;
    for(int j=0; j<26; j++)
    {
        if(count[j]>max)
        {
            max = count[j];
            result = j+65;
        }
    }
    for(int j=0; j<26; j++)
    {
        if(count[j]==max)
        {
            sw++;
            if(sw>1)
            {
                result ='?';
            }
        }
    }
    
    printf("%c", result);
    
    
    
    
    
    return 0;
}
