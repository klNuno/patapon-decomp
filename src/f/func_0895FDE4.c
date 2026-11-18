#include "common.h"

typedef struct T0895FDE4 {
    struct T0895FDE4 *unk_00;
    struct T0895FDE4 *unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    s32 unk_20;
    void *unk_24;
} T0895FDE4;

typedef struct {
    void *unk_00;
} It_08962C50;

extern u8 D_08A47AD4[];
extern u8 D_08A47AE0[];

void func_0895FC4C(It_08962C50 *, void *);
void func_0895FC44(It_08962C50 *, void *);
s32 func_0895FB60(It_08962C50 *, It_08962C50 *);
void func_0895FC1C(It_08962C50 *, It_08962C50 *, s32);
void func_0895FBB4(It_08962C50 *, void *, It_08962C50);

T0895FDE4 *func_0895FDE4(T0895FDE4 *arg0) {
    It_08962C50 it;
    It_08962C50 end;
    It_08962C50 tmp;
    It_08962C50 cur;

    arg0->unk_24 = D_08A47AD4;
    arg0->unk_1C = D_08A47AE0;
    arg0->unk_00 = NULL;
    arg0->unk_04 = NULL;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
    func_0895FC4C(&it, arg0);
    func_0895FC44(&end, arg0);
    while (func_0895FB60(&it, &end) != 0) {
        func_0895FC1C(&cur, &it, 0);
        func_0895FBB4(&tmp, arg0, cur);
    }
    arg0->unk_20 = 0;
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
    return arg0;
}
