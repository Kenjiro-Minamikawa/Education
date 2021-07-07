#include<stdio.h>
//struct(構造体)の定義
struct Information{
    int age;
    char name[50];
    double weight;
    int grade;
};

int main(){
    //構造体のインスタンスの生成
    struct Information My_info ={19, "minamikawa", 61.0, 4};
    //インスタンス名.メンバ変数でメンバ変数の情報を参照
    printf("%d\n", My_info.age);
    printf("%s\n", My_info.name);
    printf("%lf\n", My_info.weight);
    printf("%d\n", My_info.grade);

    return 0;
}
