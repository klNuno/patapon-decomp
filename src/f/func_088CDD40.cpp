#include "common.h"

extern "C" {

struct E {
    s32 unk_00;
    f32 unk_04;
    f32 unk_08;
    s32 unk_0C;
};

struct A {
    virtual E *v08(s32, s32);
};

struct T {
    A *unk_00;
    s32 unk_04;
    E *unk_08;
    u32 unk_0C;
    u32 unk_10;
};

struct V {
    f32 unk_00;
    f32 unk_04;
};

extern s32 func_088CDFCC(s32, s32);

void func_088CDD40(T *arg0, V *arg1, u32 arg2, u32 arg3) {
    f32 temp;
    f32 temp2;
    f32 temp4;
    f32 temp3;
    f32 temp6;
    f32 temp5;
    f32 temp7;
    u32 i;
    u32 j;
    u32 temp8;
    u32 m;
    u32 n;

    if (arg0->unk_08 != NULL) {
        func_088CDFCC((s32)arg0->unk_08, (s32)arg0->unk_00);
        arg0->unk_08 = NULL;
        arg0->unk_04 = 0;
    }

    arg0->unk_0C = arg2;
    arg0->unk_10 = arg3;
    arg0->unk_04 = (s32)*(volatile u32 *)&arg0->unk_0C * (s32)arg3;
    arg0->unk_08 = arg0->unk_00->v08(arg0->unk_04 * 0x10, 4);

    temp = arg1->unk_00;
    temp2 = arg1->unk_04;
    temp3 = temp;
    temp3 *= -0.5f;
    temp4 = temp2;
    temp4 *= -0.5f;
    n = arg0->unk_0C;
    temp5 = temp / (f32)n;
    m = arg0->unk_10;
    temp6 = temp2 / (f32)m;
    i = 0;
    if (m != 0) {
        temp8 = 0;
        do {
            j = 0;
            if (n != 0) {
                temp7 = temp4 + (f32)i * temp6;
                do {
                    ((E *)((u8 *)*(E *volatile *)&arg0->unk_08 + temp8))->unk_04 = temp3 + (f32)j * temp5;
                    ((E *)((u8 *)*(E *volatile *)&arg0->unk_08 + temp8))->unk_08 = temp7;
                    ((E *)((u8 *)*(E *volatile *)&arg0->unk_08 + temp8))->unk_0C = 0;
                    ((E *)((u8 *)*(E *volatile *)&arg0->unk_08 + temp8))->unk_00 = -1;
                    n = *(volatile u32 *)&arg0->unk_0C;
                    temp8 += 0x10;
                    j++;
                } while (j < n);
            }
            i++;
        } while (i < *(volatile u32 *)&arg0->unk_10);
    }
}

}
