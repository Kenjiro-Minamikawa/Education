#include<stdio.h>

struct Information{
    int age;
    char name[50];
    double weight;
    int grade;
};

int main(){
    struct Information My_info ={19, "minamikawa", 61.0, 4};
    printf("%d\n", My_info.age);
    printf("%s\n", My_info.name);
    printf("%lf\n", My_info.weight);
    printf("%d\n", My_info.grade);

    return 0;
}
