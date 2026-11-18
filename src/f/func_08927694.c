#include "common.h"

typedef struct T08927694 {
    struct T08927694 *unk_00;
    struct T08927694 *unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    s32 unk_20;
    void *unk_24;
} T08927694;

extern u8 D_08A46ED4[];
extern u8 D_08A46EE4[];
void func_08927474(s32 *, T08927694 *);
void func_0892746C(s32 *, T08927694 *);
s32 func_089273B0(s32 *, s32 *);
void func_08927298(s32 *, s32 *, s32);
void func_08927404(s32 *, T08927694 *, s32);

T08927694 *func_08927694(T08927694 *arg0) {
    s32 it;
    s32 end;
    s32 ret;
    s32 old;

    arg0->unk_24 = D_08A46EE4;
    arg0->unk_1C = D_08A46ED4;
    arg0->unk_00 = NULL;
    arg0->unk_04 = NULL;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
    func_08927474(&it, arg0);
    func_0892746C(&end, arg0);
    while (func_089273B0(&it, &end)) {
        func_08927298(&old, &it, 0);
        func_08927404(&ret, arg0, old);
    }
    arg0->unk_20 = 0;
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
    return arg0;
}
