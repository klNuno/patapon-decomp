#include "common.h"

extern "C" {

class T {
    u8 pad_00[0x28];

public:
    virtual void vfunc_08();
    virtual void vfunc_0C();
    virtual void vfunc_10();
    virtual void vfunc_14(s32);
};

typedef struct {
    u8 pad_00[0x30];
    T unk_30;
} U;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[4];
    union {
        s32 unk_00;
        f32 unk_00_f;
    } unk_0C;
} V;

s32 func_08899E18(s32, s32);
s32 func_08899E2C(s32, s32, s32);
extern s32 func_08894FBC(s32, s32, s32);
extern void func_0888FDE0(s32);
void func_0888FF98(s32, s32, f32);

void func_088D5E08(s32 *arg0, V *arg1) {
    s32 temp;
    s32 temp2;

    switch (arg1->unk_00) {
    case 0x20:
        temp = func_08899E18(*arg0, 1);
        if (temp != 0) {
            func_08894FBC(temp, arg1->unk_04, 1);
        }
        break;
    case 0x21:
        temp = func_08899E2C(*arg0, arg1->unk_04, 1);
        if (temp != 0) {
            func_0888FDE0(temp);
        }
        break;
    case 0x22:
        temp = func_08899E18(*arg0, 1);
        if (temp != 0) {
            temp2 = func_08894FBC(temp, arg1->unk_04, 1);
            if (temp2 != 0) {
                ((U *)temp2)->unk_30.vfunc_14(arg1->unk_0C.unk_00);
            }
        }
        break;
    case 0x23:
        temp = func_08899E18(*arg0, 1);
        if (temp != 0) {
            temp2 = func_08894FBC(temp, arg1->unk_04, 1);
            if (temp2 != 0) {
                func_0888FF98(temp2, 1, arg1->unk_0C.unk_00_f);
            }
        }
        break;
    }
}

}
