#include "common.h"

typedef struct { u8 pad_00[8]; } T;
extern void func_08808F28(T *, s32);
extern s32 func_088090D0(T *);
extern s32 func_088090A4(s32, s32);
extern void func_0880644C(void *, s16);

u16 func_08809050(s32 arg0, s32 arg1) {
    T temp;
    u16 result;
    func_08808F28(&temp, arg0);
    result = (u16)func_088090A4(func_088090D0(&temp), arg1);
    func_0880644C(&temp, -1);
    return result;
}
