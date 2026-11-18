#include "common.h"

extern "C" {
struct T {
    T *unk_00;
    T *unk_04;
    s32 unk_08;
    T *unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;

    s32 unk_24(T *arg0) {
        s32 temp;
        if (arg0 == NULL) {
            return 0;
        }
        if (this != arg0) {
            T *temp2 = unk_00;
            if (temp2 != this) {
                arg0->unk_00 = temp2;
                unk_00->unk_04 = arg0;
                unk_00 = arg0;
                temp = 1;
            } else {
                unk_00 = arg0;
                unk_04 = arg0;
                arg0->unk_00 = this;
                temp = 1;
            }
            arg0->unk_04 = this;
            if (temp != 0) {
                arg0->unk_0C = this;
                unk_20++;
            }
        }
        return 1;
    }
};

class V {
public:
    virtual void unk_08();
    virtual s32 unk_0C();
    virtual s32 unk_10();
};

struct S : V {
    u8 pad_04[0xC];
    s32 unk_10;
    s32 unk_14;
    u8 pad_18[0x244];
    T unk_25C;
    u8 pad_280[4];
    char unk_284[0x28];
    u8 unk_2AC;
    u8 pad_2AD[3];
    f32 unk_2B0;
};

void func_0888E9A0(char *);
s32 func_0888EA00(char *arg0);
s32 func_0888EA08(char *arg0);

s32 func_0888E7F0(S *arg0) {
    s32 temp = arg0->unk_0C();
    T *temp2;
    f32 temp3;
    f32 temp4;
    f32 temp5;
    if (temp >= ((V *)arg0)->unk_10()) {
        return 0;
    }
    if (*(char **)&arg0->unk_284[4] == arg0->unk_284) {
        return 0;
    }
    if (func_0888EA08(arg0->unk_284) != 0) {
        temp2 = NULL;
    } else {
        temp2 = (T *)func_0888EA00(arg0->unk_284);
        func_0888E9A0(arg0->unk_284);
    }
    if (temp2 == NULL) {
        return 0;
    }
    if (arg0->unk_25C.unk_24(temp2) == 0) {
        return 0;
    }
    arg0->unk_14 = arg0->unk_25C.unk_20;
    temp3 = (f32)arg0->unk_14 / (f32)arg0->unk_10;
    if (arg0->unk_2AC != 0) {
        temp4 = arg0->unk_2B0;
        if (temp3 > temp4) {
            temp5 = 0.05f + temp4;
            arg0->unk_2B0 = temp5 > 1.0f ? 1.0f : (temp5 < 0.0f ? 0.0f : temp5);
            arg0->unk_2AC = 1;
        }
    }
    return temp2->unk_08;
}
}
