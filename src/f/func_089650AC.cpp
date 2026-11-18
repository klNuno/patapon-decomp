#include "common.h"

extern "C" {

struct N {
    N *unk_00;
    N *unk_04;
    s32 unk_08;
    N *unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
    u8 pad_24[4];
};

struct U {
    virtual void unk_08();
    virtual s32 unk_0C();
    virtual s32 vfunc_10();
};

struct T : U {
    u8 pad_04[0xC];
    s32 unk_10;
    s32 unk_14;
    u8 pad_18[0xB0 - 0x18];
    N unk_B0;
    N unk_D8;
    u8 unk_100;
    u8 pad_101[3];
    f32 unk_104;

    s32 func_0(N *arg0) {
        s32 temp;
        if (arg0 == NULL) {
            return 0;
        }
        if (&unk_B0 != arg0) {
            if (unk_B0.unk_00 != &unk_B0) {
                arg0->unk_00 = unk_B0.unk_00;
                unk_B0.unk_00->unk_04 = arg0;
                unk_B0.unk_00 = arg0;
                temp = 1;
            } else {
                unk_B0.unk_00 = arg0;
                unk_B0.unk_04 = arg0;
                arg0->unk_00 = &unk_B0;
                temp = 1;
            }
            arg0->unk_04 = &unk_B0;
            if (temp != 0) {
                arg0->unk_0C = &unk_B0;
                unk_B0.unk_20++;
            }
        }
        return 1;
    }
};

s32 func_089652C4(char *arg0);
s32 func_089652BC(char *arg0);
void func_0896525C(N *);

s32 func_089650AC(T *arg0) {
    s32 temp;
    s32 temp1;
    N *temp2;
    f32 temp3;

    temp = arg0->unk_0C();
    temp1 = arg0->vfunc_10();
    if (temp >= temp1) {
        return 0;
    }
    if (arg0->unk_D8.unk_04 == &arg0->unk_D8) {
        return 0;
    }
    if (func_089652C4((char *)&arg0->unk_D8) != 0) {
        temp2 = NULL;
    } else {
        temp2 = (N *)func_089652BC((char *)&arg0->unk_D8);
        func_0896525C(&arg0->unk_D8);
    }
    if (temp2 == NULL) {
        return 0;
    }
    if (arg0->func_0(temp2) == 0) {
        return 0;
    }
    arg0->unk_14 = arg0->unk_B0.unk_20;
    temp3 = (f32)*(volatile s32 *)&arg0->unk_14 / (f32)arg0->unk_10;
    if (arg0->unk_100 != 0 && temp3 > arg0->unk_104) {
        f32 temp4 = 0.05f + arg0->unk_104;
        arg0->unk_104 = temp4 > 1.0f ? 1.0f : (temp4 < 0.0f ? 0.0f : temp4);
        arg0->unk_100 = 1;
    }
    return temp2->unk_08;
}

}
