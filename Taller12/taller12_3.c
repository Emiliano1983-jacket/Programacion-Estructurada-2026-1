#include <stdio.h>
int var3;
static int var33;
static void fun3(void);
    void fun3a(void)
    {
        printf("func3a\n");
        fun3();
    }
static void fun3(void)
{
    printf("func3\n");
}
void fun33(void)
{
    printf("func33\n");

}