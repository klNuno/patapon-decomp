#include "common.h"

typedef struct T0895FA88 {
    struct T0895FA88 *unk_00;
    struct T0895FA88 *unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    s32 unk_20;
    void *unk_24;
} T0895FA88;

typedef struct {
    u8 pad_00[0x24];
    u8 *unk_24;
} B_0895F660;

typedef struct {
    u8 pad_00[0x1C];
    u8 *unk_1C;
    u8 pad_20[0x4];
    B_0895F660 unk_24;
} A_0895F660;

typedef struct {
    void *unk_00;
} It_08962C50;

void func_0880416C(void *);
void func_0895F6F4(A_0895F660 *);
extern u8 D_08A47AD4[];
extern u8 D_08A47AE0[];
void func_0895FC4C(It_08962C50 *, void *);
void func_0895FC44(It_08962C50 *, void *);
s32 func_0895FB60(It_08962C50 *, It_08962C50 *);
void func_0895FC1C(It_08962C50 *, It_08962C50 *, s32);
void func_0895FBB4(It_08962C50 *, void *, It_08962C50);

T0895FA88 *func_0895FA88(T0895FA88 *arg0, s16 arg1) {
    It_08962C50 it;
    It_08962C50 end;
    It_08962C50 tmp;
    It_08962C50 cur;

    if (arg0 != NULL) {
        arg0->unk_24 = D_08A47AD4;
        func_0895FC4C(&it, arg0);
        func_0895FC44(&end, arg0);
        while (func_0895FB60(&it, &end)) {
            func_0895FC1C(&cur, &it, 0);
            func_0895FBB4(&tmp, arg0, cur);
        }
        arg0->unk_20 = 0;
        arg0->unk_04 = arg0;
        arg0->unk_00 = arg0;
        if (arg0 != NULL) {
            arg0->unk_1C = D_08A47AE0;
            func_0895F6F4((A_0895F660 *)arg0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
