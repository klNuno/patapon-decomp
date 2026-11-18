#include "common.h"

typedef struct {
    u8 pad_00[0xA38];
    u8 unk_A38[4];
} Obj_08979DAC;

void func_08979E84(s32 *, void *, char *);
char *func_08979F6C(char *arg0, s32 *arg1, s32 *arg2);
s32 *func_08979F84(s32 *arg0);
s32 func_08979F94(s32 *arg0);
s32 func_08979FA0(s32 *, s32 *);
void func_08979FB8(s32 *, void *);
void func_08979FC4(s32 *, void *, s32 *);
void func_0897A034(s32 *, Obj_08979DAC *, s32);
void func_0897A064(s32 *, s32, s32);

void func_08979DAC(Obj_08979DAC *arg0, s32 arg1, s32 arg2) {
    s32 r;
    s32 v;
    s32 it;
    s32 end;
    s32 ins;
    char pair[8];
    s32 d;
    s32 *p;

    func_0897A064(&r, (s32)arg0, arg1);
    if (r < 0) {
        func_0897A034(&v, arg0, arg2);
        func_08979FC4(&it, arg0->unk_A38, &arg1);
        func_08979FB8(&end, arg0->unk_A38);
        if (func_08979FA0(&it, &end)) {
            p = (s32 *)(func_08979F94(&it) + 4);
        } else {
            func_08979E84(&ins, arg0->unk_A38, func_08979F6C(pair, &arg1, func_08979F84(&d)));
            p = (s32 *)(func_08979F94(&ins) + 4);
        }
        *p = v;
    }
}
