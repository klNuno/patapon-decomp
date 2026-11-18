#include "common.h"

void *func_08804338(u32);
void func_0880C6F4(void *, void *);
s32 *func_0880C73C(void *, u32);
void *func_0880C784(void *);
u32 func_0880C78C(void *);
void *func_0880C7B0(void *);
u32 func_0880C7B8(void *);
void func_0880E13C(void *, s32, s32, s32);
extern u8 D_08A49654[];

s32 func_0880C624(void *arg0) {
    u32 idx;
    s32 ret;
    void *q;
    struct { void *unk_00; } a;

    a.unk_00 = arg0;
    idx = func_0880C7B8(D_08A49654);
    if (idx >= func_0880C78C(func_0880C7B0(a.unk_00)) || (ret = *func_0880C73C(func_0880C784(a.unk_00), idx)) == 0) {
        if ((q = func_08804338(0x18)) != NULL) {
            func_0880E13C(q, 0, 0, 0);
        }
        func_0880C6F4(func_0880C7B0(a.unk_00), q);
        ret = *func_0880C73C(func_0880C784(a.unk_00), idx);
    }
    return ret;
}
