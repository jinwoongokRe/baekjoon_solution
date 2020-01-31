//
//  main.cpp
//  1431 시리얼 번호 re
//
//  Created by 장진웅 on 2020/01/28.
//  Copyright © 2020 cbycongbab. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int sum(string s)
{
    int result =0;
    for(int i=0; i< s.length(); i++)
    {
        if((s[i]- '0') >=1 && (s[i] - '0') <=9)
            result += (s[i] - '0');
        
    }
    return result;
}

bool cmp(string a, string b)
{
    //1번 조건
    if(a.length() != b.length())
        return a.length() < b.length();
    else{
        int aSum = sum(a);
        int bSum = sum(b);
        
        //2번 조건
        if(aSum !=bSum)
            return aSum < bSum;
        
        //3번 조건
        else
            return a<b; //사전순
        
    }
}

int main(int argc, const char * argv[]) {
    
    int n;
    cin >> n;
    
    vector<string> v(n);
    for(int i=0; i< n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), cmp);
    for(int i=0; i< n; i++)
    {
        cout <<v[i] << '\n';
    }
    
    return 0;
}
