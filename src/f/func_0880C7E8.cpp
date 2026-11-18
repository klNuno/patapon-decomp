#include "common.h"

extern "C" {

extern u8 D_08A49658[];

u32 func_0880C7B8(void *);
void *func_0880C7B0(void *);
u32 func_0880C78C(void *);
void *func_0880C784(void *);
s32 *func_0880C73C(void *, u32);
void *func_08804338(s32);
void func_0880E378(void *, s32);
void func_0880C8B0(void *, void *);

s32 func_0880C7E8(void *arg0) {
    u32 idx = func_0880C7B8(D_08A49658);
    void *p;
    s32 ret;
    struct { void *unk_00; } temp;

    temp.unk_00 = arg0;

    if (idx < func_0880C78C(func_0880C7B0(temp.unk_00))) {
        ret = *func_0880C73C(func_0880C784(temp.unk_00), idx);
        if (ret != 0) {
            goto end;
        }
    }
    if ((p = func_08804338(0x2C)) != NULL) {
        func_0880E378(p, 0);
    }
    func_0880C8B0(func_0880C7B0(temp.unk_00), p);
    ret = *func_0880C73C(func_0880C784(temp.unk_00), idx);
end:
    return ret;
}

}
