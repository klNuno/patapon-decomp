#include "common.h"

void func_0881F120(void *, void *, s32);
extern f32 D_089FDC10[];
extern f32 D_089FDC18[];
extern u8 D_08A4634C[];
extern u8 D_08A46358[];
extern u8 D_08A46364[];

typedef struct {
    f32 unk_00[3];
} V;

typedef struct {
    void *unk_00;
    V unk_04;
    void **unk_10;
} U;

typedef struct {
    U *unk_00;
    void *unk_04;
    U unk_08;
} W;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    W unk_0C;
    void *unk_28;
    u8 pad_2C[4];
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    s32 unk_3C;
} T;

T *func_088F2008(T *arg0, s32 arg1, s32 arg2, s32 arg3, W *arg4)
{
    struct { U *unk_00; } temp2;
    struct { void *unk_00; } temp3;
    V temp;

    arg0->unk_00 = arg1;
    arg0->unk_04 = arg2;
    arg0->unk_08 = arg3;
    arg0->unk_28 = D_08A46364;
    arg0->unk_0C.unk_04 = NULL;

    if (arg4 != &arg0->unk_0C) {
        if (arg4->unk_00 != NULL) {
            temp3.unk_00 = arg4->unk_04;
            if (temp3.unk_00 != NULL) {
                arg0->unk_0C.unk_04 = temp3.unk_00;
                temp2.unk_00 = &arg0->unk_0C.unk_08;
                if (temp2.unk_00 != NULL) {
                    temp.unk_00[0] = D_089FDC10[0];
                    temp.unk_00[1] = D_089FDC10[1];
                    temp.unk_00[2] = D_089FDC18[0];
                    *(void *volatile *)&temp2.unk_00->unk_00 = D_08A46358;
                    temp2.unk_00->unk_00 = D_08A4634C;
                    temp2.unk_00->unk_04 = temp;
                    temp2.unk_00->unk_10 = &arg0->unk_0C.unk_04;
                }
                arg0->unk_0C.unk_00 = temp2.unk_00;
            } else {
                func_0881F120(&arg0->unk_0C.unk_08, &arg4->unk_08, 0x14);
                arg0->unk_0C.unk_00 = &arg0->unk_0C.unk_08;
            }
        } else {
            arg0->unk_0C.unk_00 = NULL;
            arg0->unk_0C.unk_04 = NULL;
        }
    }
    arg0->unk_30 = 0;
    arg0->unk_34 = 0;
    arg0->unk_38 = 0;
    arg0->unk_3C = 0;
    return arg0;
}
