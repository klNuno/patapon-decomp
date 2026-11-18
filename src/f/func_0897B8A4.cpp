#include "common.h"
extern "C" {
typedef struct {
    void *unk_00;
} It_08878520;
typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
} Pair_08878520;
struct T {
    virtual void v0();
    virtual void v1(s32, s32, s32);
    u8 unk_04[4];
};
Pair_08878520 *func_0886E1B8(It_08878520 *);
s32 func_0886E1C4(It_08878520 *, It_08878520 *);
void func_0886E1DC(It_08878520 *, void *);
void func_0886E1E8(It_08878520 *, void *, s32 *);
s32 func_0891C5E0(s32);
void func_0897B8A4(T *arg0, s32 arg1, s32 arg2) {
    s32 r;
    s32 key;
    It_08878520 it;
    It_08878520 end;
    s32 v;
    r = func_0891C5E0(arg1);
    if (r != 0) {
        key = r;
        func_0886E1E8(&it, arg0->unk_04, &key);
        func_0886E1DC(&end, arg0->unk_04);
        v = func_0886E1C4(&end, &it) != 0 ? func_0886E1B8(&it)->unk_04 : 0;
        if (v == 0) {
            arg0->v1(r, arg2, 0);
        }
    }
}
}
