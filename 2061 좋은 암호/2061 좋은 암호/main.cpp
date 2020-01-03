//
//  main.cpp
//  2061 좋은 암호
//
//  Created by 장진웅 on 2019/12/31.
//  Copyright © 2019 cbycongbab. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

//
//int result(int k, int cnt, int min) //함수 삽질
//{
//    if(k==1)
//    {
//        return min;
//    }
//
//    if(k%cnt==0)
//    {
//        if(min >cnt)
//            min = cnt;
//
//        return result(k/cnt , cnt++, min);
//    }
//}

int main(int argc, const char * argv[]) {
    
    int k, l; //key값과 기준값 l
    scanf("%d %d", &k, &l);
//    cin >> k >> l; //시간초과 때문에 안 씀
    
    int min=999;
    int cnt =2;
    
    while(1)
    {
        if(k==1)
        {
            break;
        }
        if(k%cnt==0)
        {
            k = k/cnt;
            if(min > cnt)
            {
                min =cnt;
            }
        }
        else{
            cnt+=1;
        }
    }
    

    
    if(min >= l)
    {
        printf("GOOD");
    }
    else{
        printf("BAD %d", min);
    }
        
        
    return 0;
}
