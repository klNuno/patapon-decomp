#include "common.h"

void func_08852F00(void *, s32);
void *func_0885356C(void *, s32, s32, s32);
void func_08853894(void *, char *);

void func_088FBF40(void *arg0, void *arg1)
{
    char temp[0x100];

    func_0885356C(arg1, 0, 1, 4);
    func_08853894(arg1, temp);
    func_08852F00(arg1, 0);
}
