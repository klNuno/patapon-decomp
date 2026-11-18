#include "common.h"
extern "C" {
struct V { s32 unk_00, unk_04; f32 unk_08; };
struct N {
    N *unk_00, *unk_04;
    V unk_08;
};
struct T {
    s32 unk_00;
    u8 pad_04[0xC20];
    N *unk_C24, *unk_C28, *unk_C2C;
    s32 unk_C30;
};
extern f32 D_089FBB8C[];
void func_088D5E08(s32 *arg0, V *arg1);
void func_088D630C(V *);

static inline s32 unk_00(N *arg0, N *arg1) {
    return arg0 == arg1;
}

static inline bool unk_04(N *arg0, N *arg1) {
    return !(bool)unk_00(arg0, arg1);
}

static inline const f32 &unk_08(const f32 &arg0, const f32 &arg1) {
    return (arg0 < arg1) ? arg1 : arg0;
}

void func_088D5CAC(T *arg0, u32 arg1) {
    f32 temp0, temp1, temp2;
    N *temp3, *temp4, *temp5, *temp6, *temp7, *temp8;
    V *temp9;

    temp3 = arg0->unk_C24;
    temp4 = (N *)&arg0->unk_C24;
    if (unk_04(temp3, temp4)) {
        temp1 = (f32)arg1 / 4800.0f;
        do {
            temp9 = &temp3->unk_08;
            temp0 = temp3->unk_08.unk_08;
            temp0 -= temp1;
            temp2 = unk_08(D_089FBB8C[0], temp0);
            temp9->unk_08 = temp2;
            if (temp2 <= 0.0f) {
                func_088D5E08(&arg0->unk_00, temp9);
                temp5 = temp3->unk_00;
                arg0->unk_C30--;
                func_088D630C(temp9);
                temp6 = arg0->unk_C2C;
                temp7 = temp3->unk_00;
                temp3->unk_04->unk_00 = temp7;
                temp8 = temp7->unk_04;
                temp7->unk_04 = (*(N *volatile *)&temp3->unk_04);
                temp3->unk_04 = temp6->unk_04;
                (*(N *volatile *)&temp6->unk_04)->unk_00 = temp3;
                temp6->unk_04 = temp8;
                temp3 = temp5;
                temp8->unk_00 = temp6;
            } else {
                temp3 = temp3->unk_00;
            }
        } while (unk_04(temp3, temp4));
    }
}
}
