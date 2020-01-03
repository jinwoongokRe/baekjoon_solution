//
//  main.cpp
//  1673 치킨쿠폰
//
//  Created by 장진웅 on 2019/10/17.
//  Copyright © 2019 장진웅. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

int factorial(int n)
{
    if(n==1)
        return 1; //n이 1일 때 , 1을 반환하고 재귀호출을 끝냄
    
    return n * factorial(n-1); // n과 factorial 함수에 n-1을 넣어서 반환된 값을 곱함
}

int main(int argc, const char * argv[]) {
    
    printf("%d", factorial(5));
    return 0;
}
