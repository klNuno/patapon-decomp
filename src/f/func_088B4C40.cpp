#include "common.h"

extern "C" {

struct V0 {
    virtual void vfunc_08();
    virtual void vfunc_0C(s32, s32 *, s32);
};

typedef struct {
    s32 unk_00;
    V0 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
} H;

void func_088B60B0(H *, s32, s32);
void func_088B7708(s32, s32);
void func_088899D8(s32, s32);

void func_088B4C40(s32 *arg0, s32 arg1, s32 arg2) {
    H h;
    s32 c;

    func_088B60B0(&h, *arg0, arg1);
    func_088B7708(h.unk_08, arg2);
    if (h.unk_08 != 0) {
        *h.unk_0C -= 1;
        c = h.unk_0C != NULL ? *h.unk_0C : 0;
        if (c == 0) {
            h.unk_04->vfunc_0C(h.unk_08, *(s32 **)&h.unk_0C, h.unk_00);
            func_088899D8(h.unk_08, h.unk_00);
        }
    }
}

}
