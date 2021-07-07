#include<stdio.h>

typedef struct Information{
    int age;
    char name[50];
    double weight;
    int grade;
} Im;

void set_info(struct Information* hoge){
    printf("Let's input your Information!\n");
    printf("    Age : ");
    scanf("%d", &(*hoge).age);
    printf("   Name : ");
    scanf("%s", (*hoge).name);
    printf(" Weight : ");
    scanf("%lf", &(*hoge).weight);
    printf("  Grade : ");
    scanf("%d", &(*hoge).grade);
}

void show_info(struct Information hoge){
    printf("I'm gonna show Information of Mr.%s\n", hoge.name);
    printf("------------------------\n");
    printf("   Age : %d\n", hoge.age);
    printf("  Name : %s\n", hoge.name);
    printf("Weight : %lf\n",hoge.weight);
    printf(" Grade : %d\n", hoge.grade);
    printf("------------------------\n");
}

int main(){
    int a = 19;
    Im My_info ={a, "minamikawa", 61.0, 4};
    set_info(&My_info);
    show_info(My_info);
    return 0;
}
