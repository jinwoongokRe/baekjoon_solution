////
////  main.c
////  1871 좋은 자동차 번호판
////
////  Created by 장진웅 on 09/09/2019.
////  Copyright © 2019 장진웅. All rights reserved.
////
//
//#include <stdio.h>
//#include <math.h>
//
//int main(int argc, const char * argv[]) {
//
//    int YuRiLove;
//    char input[9];
//    double sum;
//
//    scanf("%d", &YuRiLove);
//
//    for(int i=0; i<YuRiLove; i++)
//    {
//        scanf("%s", input); // ABC-0123 등의 형식을 받음
//        //printf("%c", input[2]); 하면 C가 나온다. //65 >> 48 차이는 17
//        // 하지만 A-17을 하면 48이 나옴, A-65를 해야할 듯
//        sum = pow(26, 2)*(input[0]-65) + pow(26,1)*(input[1]-65) + pow(26, 0)*(input[2]-65);
//
//
//        sum= fabs(sum- (input[4]-48)*1000-(input[5]-48)*100-(input[6]-48)*10-(input[7]-48));
//
//        if(sum <=100)
//        {
//            printf("nice ");
//        }
//        else
//            printf("not nice ");
//
//        printf("\n");
//    }
//
//    return 0;
//}
//

#include <stdio.h>

int main(){
    int a,b,c,d; // 총 각 각 4가지의 경로를 입력 받기 위한 정수 변수들!
    int sum=0;  // 네 경로를 이동하는데 걸리는 시간(초)의 합!
    
    
    scanf("%d", &a);  // 첫번 째 경로 시간 입력받기
    scanf("%d", &b); // 두번 째 경로 시간 입력받기
    scanf("%d", &c); // 세번 째 경로 시간 입력받기
    scanf("%d", &d); // 네번 째 경로 시간 입력받기
    
    sum = a+b+c+d;  // 네 가지 경로에 소요되는 모든 시간 더하기
    
    printf("%d\n", sum/60);  // 소요되는 분을 나타내기 위한 60(초)로 나눈 몫
    printf("%d\n", sum%60); // 소요되는 나머지 초를 나타내기 위한 나머지 계산
    return 0;
}
