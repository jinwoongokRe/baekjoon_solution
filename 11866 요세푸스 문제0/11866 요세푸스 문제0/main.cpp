//
//  main.cpp
//  11866 요세푸스 문제0
//
//  Created by 장진웅 on 2020/02/07.
//  Copyright © 2020 cbycongbab. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;
int main(int argc, const char * argv[]) {
    
    queue<int> q;
    queue<int> temp;
    int temp_front;
    int n, k;
    cin >> n >> k;
    for(int i=1; i<=n; i++)
    {
        q.push(i); //n까지 수 다 푸시
    }
    
    cout << '<';
    
    while (!q.empty()) {
        for(int i=1; i<=k; i++)
        {
            if(i==k)
            {
                temp_front = q.front();
                q.pop();
                cout<<temp_front;
            }
            else{
                q.push(q.front());
                q.pop();
            }
            
        }
        if(q.empty())
        {
            continue;
        }
        cout<<", "; //공백 주고
    }
    cout << '>'<<'\n';
    //<3, 6, 2, 7, 5, 1, 4>
    //<3, 6, 2, 7, 5, 1, 4>
    return 0;
}
