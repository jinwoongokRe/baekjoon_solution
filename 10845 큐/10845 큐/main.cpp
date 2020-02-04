//
//  main.cpp
//  10845 큐
//
//  Created by 장진웅 on 2020/02/02.
//  Copyright © 2020 cbycongbab. All rights reserved.
//

#include <iostream>
#include <queue>

using namespace std;
int main(int argc, const char * argv[]) {
    
    string s;
    queue<int>  q;
    
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        int temp;
        cin >> s ; // 명령 입력
        
        if(s == "push")
        {
            cin >> temp;
            q.push(temp);
        }
        else if(s == "front")
        {
            if(q.empty()) cout<< "-1\n";
            else cout << q.front()<<"\n";
        }
        else if(s == "back")
        {
            if(q.empty()) cout<< "-1\n";
            else cout << q.back()<<'\n';
        }
        else if(s == "size")
        {
            
            cout << q.size()<<'\n';
            
        }
        else if(s == "empty")
        {
            if(q.empty()) cout<< "1\n";
            else cout << "0\n";
            
        }
        else if(s == "pop")
        {
            if(q.empty()) cout << "-1\n";
            else{
                cout << q.front() <<'\n';
                q.pop();
            }
            
        }
        
    }
    
    return 0;
}
