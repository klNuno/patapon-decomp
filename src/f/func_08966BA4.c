#include "common.h"

typedef struct T0 {
    struct T0 *unk_00;
    struct T0 *unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    s32 unk_20;
    void *unk_24;
} T0;

extern u8 D_08A47C30[];
extern u8 D_08A47C20[];

void func_08966298(s32 *, T0 *);
void func_08966290(s32 *, T0 *);
s32 func_08966060(s32 *, s32 *);
void func_08966268(s32 *, s32 *, s32);
void func_089660B4(s32 *, T0 *, s32);

T0 *func_08966BA4(T0 *arg0) {
    s32 it;
    s32 end;
    s32 ret;
    s32 cur;

    arg0->unk_24 = D_08A47C30;
    arg0->unk_1C = D_08A47C20;
    arg0->unk_00 = NULL;
    arg0->unk_04 = NULL;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
    func_08966298(&it, arg0);
    func_08966290(&end, arg0);
    while (func_08966060(&it, &end) != 0) {
        func_08966268(&cur, &it, 0);
        func_089660B4(&ret, arg0, cur);
    }
    arg0->unk_20 = 0;
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
    return arg0;
}
