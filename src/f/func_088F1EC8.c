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
    f32 unk_30;
    f32 unk_34;
    f32 unk_38;
    f32 unk_3C;
} T;

T *func_088F1EC8(T *arg0, T *arg1)
{
    U *temp2;
    void *temp3;
    V temp;

    arg0->unk_00 = arg1->unk_00;
    arg0->unk_04 = arg1->unk_04;
    arg0->unk_08 = arg1->unk_08;
    arg0->unk_28 = D_08A46364;
    arg0->unk_0C.unk_04 = NULL;

    if (&arg1->unk_0C != &arg0->unk_0C) {
        if (arg1->unk_0C.unk_00 != NULL) {
            temp3 = arg1->unk_0C.unk_04;
            if (temp3 != NULL) {
                arg0->unk_0C.unk_04 = temp3;
                temp2 = &arg0->unk_0C.unk_08;
                if (temp2 != NULL) {
                    temp.unk_00[0] = D_089FDC10[0];
                    temp.unk_00[1] = D_089FDC10[1];
                    temp.unk_00[2] = D_089FDC18[0];
                    *(void *volatile *)&temp2->unk_00 = D_08A46358;
                    temp2->unk_00 = D_08A4634C;
                    temp2->unk_04 = temp;
                    temp2->unk_10 = &arg0->unk_0C.unk_04;
                }
                arg0->unk_0C.unk_00 = temp2;
            } else {
                func_0881F120(&arg0->unk_0C.unk_08, &arg1->unk_0C.unk_08, 0x14);
                arg0->unk_0C.unk_00 = &arg0->unk_0C.unk_08;
            }
        } else {
            arg0->unk_0C.unk_00 = NULL;
            arg0->unk_0C.unk_04 = NULL;
        }
    }
    arg0->unk_30 = arg1->unk_30;
    arg0->unk_34 = arg1->unk_34;
    arg0->unk_38 = arg1->unk_38;
    arg0->unk_3C = arg1->unk_3C;
    return arg0;
}
