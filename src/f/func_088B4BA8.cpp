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
void func_088B76E4(s32, f32);
void func_088899D8(s32, s32);

void func_088B4BA8(s32 *arg0, s32 arg1, f32 arg2) {
    H temp;
    s32 temp2;

    func_088B60B0(&temp, *arg0, arg1);
    func_088B76E4(temp.unk_08, arg2);
    if (temp.unk_08 != 0) {
        *temp.unk_0C -= 1;
        temp2 = temp.unk_0C != NULL ? *temp.unk_0C : 0;
        if (temp2 == 0) {
            temp.unk_04->vfunc_0C(temp.unk_08, *(s32 **)&temp.unk_0C, temp.unk_00);
            func_088899D8(temp.unk_08, temp.unk_00);
        }
    }
}

}
