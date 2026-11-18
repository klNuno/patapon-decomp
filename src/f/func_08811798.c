#include "common.h"

typedef struct {
    s32 unk_00;
} Iter;

s32 func_088118F8(Iter, Iter);
void func_088118E8(Iter *, Iter *);
void func_08811898(Iter *, s32);
s32 func_08811584(Iter *);
s32 func_08811888(s32, s32);
s32 func_08811874(Iter *);
void func_08811864(Iter *, s32);

void func_08811798(Iter *arg0, Iter arg1, Iter arg2, s32 arg3) {
    Iter mid;
    s32 len = func_088118F8(arg1, arg2);
    s32 half;

    while (len > 0) {
        func_088118E8(&mid, &arg1);
        half = len / 2;
        func_08811898(&mid, half);
        if (func_08811888(func_08811584(&mid), arg3) != 0) {
            func_08811864(&arg1, func_08811874(&mid));
            len = len - (half + 1);
        } else {
            len = half;
        }
    }
    func_088118E8(arg0, &arg1);
}
