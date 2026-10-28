#include<stdio.h>

typedef struct 
{
    const char *expression;
    int answer;
}Question;


int main(){
    int points = 0;
    Question ques[]= {
        {"7*8",56},
        {"5*5",25},
        {"9*6",54},
        {"4*7",28},
        {"3*3",9},
        {"6*9",54},
        {"8*8",64},
        {"2*5",10},
        {"1*4",4},
        {"10*10",100}
    };
    for(int i=0;i<10;i++){
        printf("%s=",ques[i].expression);
        int user_answer;
        scanf("%d",&user_answer);
        if(user_answer==ques[i].answer){
            printf("Correct!\n");
            points = points + 1;
        }else{
            printf("Wrong! The correct answer is %d\n",ques[i].answer);
        }
    }
    printf("Your total points: %d\n",points);
    return 0;
}