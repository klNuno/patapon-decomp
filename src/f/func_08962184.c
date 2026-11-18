#include "common.h"

typedef struct T089625D0 {
    struct T089625D0 *unk_00;
    struct T089625D0 *unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    s32 unk_20;
    void *unk_24;
} T089625D0;

extern u8 D_08A47B28[];
extern u8 D_08A47B38[];

void func_08962320(s32 *, T089625D0 *);
void func_08962318(s32 *, T089625D0 *);
s32 func_0896225C(s32 *, s32 *);
void func_08962144(s32 *, s32 *, s32);
void func_089622B0(s32 *, T089625D0 *, s32);
void func_08961CB8(T089625D0 *);
void func_0880416C(void *);

T089625D0 *func_08962184(T089625D0 *arg0, s16 arg1) {
    s32 it;
    s32 end;
    s32 r;
    s32 tmp;

    if (arg0 != NULL) {
        arg0->unk_24 = D_08A47B38;
        func_08962320(&it, arg0);
        func_08962318(&end, arg0);
        while (func_0896225C(&it, &end)) {
            func_08962144(&tmp, &it, 0);
            func_089622B0(&r, arg0, tmp);
        }
        arg0->unk_20 = 0;
        arg0->unk_04 = arg0;
        arg0->unk_00 = arg0;
        if (arg0 != NULL) {
            arg0->unk_1C = D_08A47B28;
            func_08961CB8(arg0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
