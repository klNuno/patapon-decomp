#include "common.h"

typedef struct T0898CBF4 {
    struct T0898CBF4 *unk_00;
    struct T0898CBF4 *unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    s32 unk_20;
    void *unk_24;
} T0898CBF4;

extern u8 D_08A48480[];
extern u8 D_08A48490[];

void func_0898D14C(s32 *, T0898CBF4 *);
void func_0898D144(s32 *, T0898CBF4 *);
s32 func_0898D060(s32 *, s32 *);
void func_0898D11C(s32 *, s32 *, s32);
void func_0898D0B4(s32 *, T0898CBF4 *, s32);
void func_0898CCCC(void *);
void func_0880416C(void *);

T0898CBF4 *func_0898CBF4(T0898CBF4 *arg0, s16 arg1) {
    s32 it;
    s32 end;
    s32 r;
    s32 tmp;

    if (arg0 != NULL) {
        arg0->unk_24 = D_08A48490;
        func_0898D14C(&it, arg0);
        func_0898D144(&end, arg0);
        while (func_0898D060(&it, &end)) {
            func_0898D11C(&tmp, &it, 0);
            func_0898D0B4(&r, arg0, tmp);
        }
        arg0->unk_20 = 0;
        arg0->unk_04 = arg0;
        arg0->unk_00 = arg0;
        if (arg0 != NULL) {
            arg0->unk_1C = D_08A48480;
            func_0898CCCC(arg0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
