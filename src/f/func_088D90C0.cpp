#include "common.h"

extern "C" {

class V {
public:
    virtual void *unk_08(s32, s32);
};

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 *unk_08;
    s32 unk_0C;
    V *unk_10;
    f32 *unk_14;
    s32 unk_18;
    V *unk_1C;
} T;

T *func_088D90C0(T *arg0, T *arg1)
{
    s32 temp;
    s32 *temp2;
    s32 *temp3;
    s32 *temp4;
    s32 *temp5;
    f32 *temp6;
    f32 *temp7;
    f32 *temp8;
    f32 *temp9;

    arg0->unk_00 = arg1->unk_00;
    arg0->unk_04 = arg1->unk_04;
    arg0->unk_08 = NULL;
    arg0->unk_0C = arg1->unk_0C;
    arg0->unk_10 = arg1->unk_10;
    temp = arg0->unk_0C;
    if (temp != 0) {
        arg0->unk_08 = (s32 *)arg0->unk_10->unk_08(temp * 4, 0x20);
        temp2 = arg0->unk_08;
        temp = arg0->unk_0C;
        temp3 = arg1->unk_08;
        temp4 = temp2 + temp;
        do {
            temp5 = temp2++;
            if (temp5 != NULL) {
                *temp5 = *temp3++;
            }
        } while (temp2 != temp4);
    }
    arg0->unk_14 = NULL;
    arg0->unk_18 = arg1->unk_18;
    arg0->unk_1C = arg1->unk_1C;
    temp = arg0->unk_18;
    if (temp != 0) {
        arg0->unk_14 = (f32 *)arg0->unk_1C->unk_08(temp * 4, 0x20);
        temp6 = arg0->unk_14;
        temp = arg0->unk_18;
        temp7 = arg1->unk_14;
        temp8 = temp6 + temp;
        do {
            temp9 = temp6++;
            if (temp9 != NULL) {
                *temp9 = *temp7++;
            }
        } while (temp6 != temp8);
    }
    return arg0;
}

}
