//
//  main.c
//  1157번 단어공부 다시..
//
//  Created by 권유리 on 25/08/2019.
//  Copyright © 2019 권유리. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char A[1000001]={'\0',}; //입력받는 문자열
    int count[26]={'\0',};  //알파벳 A~Z 카운트 한 개수 저장할 곳
    int max=0, a=0, result=0;
    scanf("%s",A);
    int len = strlen(A);   //문자열 A의 길이
    for(int i=0; i<len; i++){
        if(65<=A[i]&& A[i]<=90){  //대문자일때(아스키코드이용)
            count[A[i]-65]+=1;    //A면 count[0]올라가고 B면 count[1]올라가게끔 한거야!!
        }else{
            count[A[i]-97]+=1;   //소문자일때
        }
    }
    for(int j=0; j<26; j++){   //26개는 알파벳개수
        if(count[j]>max){      //각 알파벳이 나온 숫자가 max값보다 클때
            max=count[j];      //그값이 max값이 되고
            a = 0;             //임의로 잡은 변수 a는 0이 된다.(a설정한 이유:마지막에 출력할 때 쓰려고)
            result = j;        //이때 j=0이면 A의개수고 j=1이면 B의 개수니깐,, 출력할때 쓸라고 해놓은 변수야
        }
        else if(count[j] == max){  //이거는 max값이랑 알파벳 개수가 같은 값이 나왔다는건데, 가장 많이 사용된 알파벳이 여러개라는 의미라서,
            //맨밑에 else로 빠져서 ? 출력하려고 a=1 로 했어 그리고 만약 이 max값보다 큰 count[j]값이 나오면
            //다시 a=0로 만들어서 그값이 출력되게 하려고 a값 잡은거야
            a=1;
        }
    }
    if(a==0){
        printf("%c",result+65);
    }else{
        printf("?");
    }
    return 0;
}
