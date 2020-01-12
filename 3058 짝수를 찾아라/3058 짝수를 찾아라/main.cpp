//
//  main.cpp
//  3058 짝수를 찾아라
//
//  Created by 장진웅 on 2020/01/12.
//  Copyright © 2020 cbycongbab. All rights reserved.
//

#include <iostream>
#include <vector>
#include <utility>
using namespace std;
int main(int argc, const char * argv[]) {
    vector<pair<int, int>> answer;
    int n;
    int temp;
    
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        
        int min=9999; //초기화
        int sum=0;
        for(int j=0; j<7; j++)
        {
            cin >> temp;
            
            if(temp%2==0)
            {
                sum+=temp;
                if(min > temp)
                {
                    min = temp;
                }
            }
        }
        
        answer.push_back({sum, min});
    }
    
//    모든 루프 마치면
    for(int i=0; i<n; i++)
    {
        cout << answer[i].first << ' ' <<answer[i].second << endl;
    }
    
    
    
    
    return 0;
}
