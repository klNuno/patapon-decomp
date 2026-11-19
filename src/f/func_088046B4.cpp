#include "common.h"

extern "C" {
void func_08805EAC(s32, void *);

typedef void (*F)(void);

void func_088046B4(F *arg0, F *arg1, s32 arg2, void *arg3)
{
    F *temp = arg0;
    if (arg0 < arg1) {
        do {
            (*temp)();
            temp++;
        } while (temp < arg1);
    }
    func_08805EAC(arg2, arg3);
}
}
