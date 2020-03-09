//
//  main.cpp
//  7576 토마토
//
//  Created by 장진웅 on 2020/02/15.
//  Copyright © 2020 cbycongbab. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <queue>
int tomato[1001][1001];
int dy[]={1,-1,0,0};//상하좌우
int dx[]={0,0,-1,1};//상하좌우
using namespace std;

queue<pair< pair<int, int>, int> > q; //좌표 및 카운트

int main(int argc, const char * argv[]) {
    int max=0;
    int n,m;//각 세로 가로
    int sw=0;
    scanf("%d %d", &m, &n);//가로 세로
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", &tomato[i][j]); //토마토들 상태 입력
            if(tomato[i][j]==0)
            {
                sw=1; //초기 확인용
            }
            if(tomato[i][j]==1)
            {
                q.push({{i,j},0}); // 큐에 넣고
            }
        }
    }
    if(sw==0) //초기에 이미 다 익었을 경우 0 출력하고 프로그램 종료.
    {
        printf("0");
        return 0;
        
    }
    
    
    while (!q.empty()) {
        pair<int, int> now = q.front().first; //y와 x좌표
        int newcount = q.front().second;
        if(max < newcount)
        {
            max = newcount; //max값 증가.
        }
        q.pop(); // 삭제
        
        for(int k=0; k<4; k++)
        {
            if(now.first + dy[k] < 0 || now.first + dy[k] >=n || now.second + dx[k] <0 || now.second + dx[k] >=m) //좌표값에 맞는지 확인
            {
                continue;
            }
            if(tomato[now.first + dy[k]][now.second + dx[k]]==0) //안익은거만 따지기
            {
                tomato[now.first + dy[k]][now.second + dx[k]]=1; //익은걸루 확인
                q.push({{now.first + dy[k],now.second + dx[k]},newcount+1});
            }
            
        }
        
        
    }
    
    
    
    int newsw=0;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(tomato[i][j]==0)
            {
                printf("-1");
                return 0;
            }
        }
    }
    
    
    printf("%d", max);
    
    
    
    
    
    
    return 0;
}
