#include "common.h"

void *func_08804338(s32);
s32 *func_0880C73C(s32, u32);
s32 func_0880C784(s32);
u32 func_0880C78C(s32);
s32 func_0880C7B0(s32);
u32 func_0880C7B8(s32 *);
void func_0880CAD0(s32, void *);
void func_0880F0D0(void *, s32);
extern s32 D_08A49660[];

s32 func_0880CA08(s32 arg0) {
    u32 temp;
    s32 temp2;
    void *temp3;
    struct { s32 unk_00; } o;

    o.unk_00 = arg0;
    temp = func_0880C7B8(D_08A49660);
    if (temp >= func_0880C78C(func_0880C7B0(o.unk_00)) || (temp2 = *func_0880C73C(func_0880C784(o.unk_00), temp)) == 0) {
        if ((temp3 = func_08804338(8)) != NULL) {
            func_0880F0D0(temp3, 0);
        }
        func_0880CAD0(func_0880C7B0(o.unk_00), temp3);
        temp2 = *func_0880C73C(func_0880C784(o.unk_00), temp);
    }
    return temp2;
}
