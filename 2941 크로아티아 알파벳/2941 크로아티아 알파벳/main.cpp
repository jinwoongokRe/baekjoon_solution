//
//  main.cpp
//  2941 크로아티아 알파벳
//
//  Created by 장진웅 on 2020/03/08.
//  Copyright © 2020 cbycongbab. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    int cnt=0;
    string str;
    
    cin >> str;
    
   
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] =='c')
        {
            if(str[i+1] == '=' || str[i+1] == '-')
            {
                i++;
            }
        }
        else if(str[i]=='d')
        {
            if(str[i+1]=='-')
            {
                i++;
            }
            else if(str[i+1]=='z' && str[i+2] =='=')
            {
                i+=2;
            }
        }
        else if(str[i] == 'l')
        {
            if(str[i+1] =='j')
            {
                i++;
            }
        }
        else if(str[i] == 'n')
        {
            if(str[i+1] =='j')
            {
                i++;
            }
        }
        else if(str[i] == 's')
        {
            if(str[i+1] =='=')
            {
                i++;
            }
        }
        else if(str[i] == 'z')
        {
            if(str[i+1]=='=')
            {
                i++;
            }
        }
        cnt++;
    }
    
    
    cout << cnt;
    return 0;
}
