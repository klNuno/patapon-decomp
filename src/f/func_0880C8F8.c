#include "common.h"

u32 func_0880C7B8(void *);
void *func_0880C7B0(void *);
u32 func_0880C78C(void *);
void *func_0880C784(void *);
s32 *func_0880C73C(void *, u32);
void *func_08804338(u32);
void func_0880F040(void *, s32);
void func_0880C9C0(void *, void *);
extern u8 D_08A4965C[];

s32 func_0880C8F8(void *arg0) {
    u32 id;
    void *p;
    s32 ret;
    struct { void *unk_00; } o;

    o.unk_00 = arg0;

    id = func_0880C7B8(D_08A4965C);
    if (id >= func_0880C78C(func_0880C7B0(o.unk_00)) || (ret = *func_0880C73C(func_0880C784(o.unk_00), id)) == 0) {
        if ((p = func_08804338(8)) != NULL) {
            func_0880F040(p, 0);
        }
        func_0880C9C0(func_0880C7B0(o.unk_00), p);
        ret = *func_0880C73C(func_0880C784(o.unk_00), id);
    }
    return ret;
}
