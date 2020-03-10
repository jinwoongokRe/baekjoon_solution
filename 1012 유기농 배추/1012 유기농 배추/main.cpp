//
//  main.cpp
//  1012 유기농 배추
//
//  Created by 장진웅 on 2020/02/11.
//  Copyright © 2020 cbycongbab. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>
#include <cstdio>

using namespace std;


queue<pair<int, int>> q;
int dy[]={1,-1,0,0};
int dx[]={0,0,-1,1}; // 상하좌우

int main(int argc, const char * argv[]) {
    
    int totalcase;
    cin >> totalcase;
    
    for(int i=0; i<totalcase; i++)
    {
        int visit[51][51]={0,}; //0으로 초기화함.
        int m,n;
        int k; // 배추심어진 위치 입력 계수
        cin >> m >> n >> k ;
        
        for(int j=0; j<k; j++)
            
        {
            int x,y;
            cin >> x >>y;
            visit[y][x] =1; //배추있는 위치
        }
        int result =0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(visit[i][j]==1) //배추 일 때
                {
                    result ++;
                    q.push({i,j}); // y,x순
                    
                    while (!q.empty()) {
                        
                        pair<int, int> now = q.front();
                        
                        q.pop();
                        for(int k=0; k<4; k++)
                        {
                            if(now.first + dy[k] <0 || now.first + dy[k] >=n || now.second + dx[k] <0 || now.second + dx[k] >=m) continue;
                            if(visit[now.first + dy[k]][now.second + dx[k]])
                            {
                                visit[now.first + dy[k]][now.second + dx[k]]=0; // 지나감
                                q.push({now.first + dy[k],now.second + dx[k]});
                            }
                        }
                    }
                }
            }
        }
        
        
        
        
        
        
        
        cout << result <<'\n';
        
        
        
        
        
    }
    
    
    
    
    
    
    return 0;
}
