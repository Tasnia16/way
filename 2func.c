#include<stdio.h>
void func1(void);
void func2(void);
int main(void)
{
    printf("I");
    func1();
    printf("country");
    return 0;
}
 void func1(void)
 {
     func2();
     printf("my");
 }
 void func2(void)
 {
     printf("love");
 }
