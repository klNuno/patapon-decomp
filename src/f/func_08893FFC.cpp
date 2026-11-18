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
    u8 pad_18[0x6A20 - 0x18];
    N unk_6A20;
    N unk_6A48;
    u8 unk_6A70;
    u8 pad_6A71[3];
    f32 unk_6A74;

    s32 func_0(N *arg0) {
        s32 temp;
        if (arg0 == NULL) {
            return 0;
        }
        if (&unk_6A20 != arg0) {
            if (unk_6A20.unk_00 != &unk_6A20) {
                arg0->unk_00 = unk_6A20.unk_00;
                unk_6A20.unk_00->unk_04 = arg0;
                unk_6A20.unk_00 = arg0;
                temp = 1;
            } else {
                unk_6A20.unk_00 = arg0;
                unk_6A20.unk_04 = arg0;
                arg0->unk_00 = &unk_6A20;
                temp = 1;
            }
            arg0->unk_04 = &unk_6A20;
            if (temp != 0) {
                arg0->unk_0C = &unk_6A20;
                unk_6A20.unk_20++;
            }
        }
        return 1;
    }
};

s32 func_08894214(char *arg0);
s32 func_0889420C(char *arg0);
void func_088941AC(N *);

s32 func_08893FFC(T *arg0) {
    s32 temp;
    s32 temp1;
    N *temp2;
    f32 temp3;

    temp = arg0->unk_0C();
    temp1 = arg0->vfunc_10();
    if (temp >= temp1) {
        return 0;
    }
    if (arg0->unk_6A48.unk_04 == &arg0->unk_6A48) {
        return 0;
    }
    if (func_08894214((char *)&arg0->unk_6A48) != 0) {
        temp2 = NULL;
    } else {
        temp2 = (N *)func_0889420C((char *)&arg0->unk_6A48);
        func_088941AC(&arg0->unk_6A48);
    }
    if (temp2 == NULL) {
        return 0;
    }
    if (arg0->func_0(temp2) == 0) {
        return 0;
    }
    arg0->unk_14 = arg0->unk_6A20.unk_20;
    temp3 = (f32)*(volatile s32 *)&arg0->unk_14 / (f32)arg0->unk_10;
    if (arg0->unk_6A70 != 0 && temp3 > arg0->unk_6A74) {
        f32 temp4 = 0.05f + arg0->unk_6A74;
        arg0->unk_6A74 = temp4 > 1.0f ? 1.0f : (temp4 < 0.0f ? 0.0f : temp4);
        arg0->unk_6A70 = 1;
    }
    return temp2->unk_08;
}

}
