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

extern u8 D_08A46EE4[];
extern u8 D_08A46ED4[];

void func_08927474(s32 *, T0 *);
void func_0892746C(s32 *, T0 *);
s32 func_089273B0(s32 *, s32 *);
void func_08927298(s32 *, s32 *, s32);
void func_08927404(s32 *, T0 *, s32);
void func_08926E0C(T0 *);
void func_0880416C(void *);

T0 *func_089272D8(T0 *arg0, s16 arg1) {
    s32 it;
    s32 end;
    s32 ret;
    s32 cur;

    if (arg0 != NULL) {
        arg0->unk_24 = D_08A46EE4;
        func_08927474(&it, arg0);
        func_0892746C(&end, arg0);
        while (func_089273B0(&it, &end) != 0) {
            func_08927298(&cur, &it, 0);
            func_08927404(&ret, arg0, cur);
        }
        arg0->unk_20 = 0;
        arg0->unk_04 = arg0;
        arg0->unk_00 = arg0;
        if (arg0 != NULL) {
            arg0->unk_1C = D_08A46ED4;
            func_08926E0C(arg0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
