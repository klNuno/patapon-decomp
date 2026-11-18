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

T089625D0 *func_089625D0(T089625D0 *arg0) {
    s32 it;
    s32 end;
    s32 ret;
    s32 old;

    arg0->unk_24 = D_08A47B38;
    arg0->unk_1C = D_08A47B28;
    arg0->unk_00 = NULL;
    arg0->unk_04 = NULL;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
    func_08962320(&it, arg0);
    func_08962318(&end, arg0);
    while (func_0896225C(&it, &end)) {
        func_08962144(&old, &it, 0);
        func_089622B0(&ret, arg0, old);
    }
    arg0->unk_20 = 0;
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
    return arg0;
}
