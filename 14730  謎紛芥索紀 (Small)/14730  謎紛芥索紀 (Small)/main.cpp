//
//  main.cpp
//  14730  謎紛芥索紀 (Small)
//
//  Created by 장진웅 on 2020/02/03.
//  Copyright © 2020 cbycongbab. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    
    int n;
    
    int c, k;
    int result=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >>c >> k;
        
        result += c*k;
    }
    
    cout << result;
    return 0;
}
