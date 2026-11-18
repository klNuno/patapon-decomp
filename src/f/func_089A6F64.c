#include "common.h"

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
    u8 pad_38[8];
} M_088E5458;

typedef struct {
    u8 pad_00[0x110];
    void *unk_110;
} Unk10;

typedef struct {
    u8 pad_00[0x10];
    Unk10 *unk_10;
} Unk;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_088664DC(M_088E5458 *, void *, s32);

void func_089A6F64(Unk *arg0, void *arg1) {
    M_088E5458 temp;
    s32 *temp2 = func_0885356C(arg1, 0, 1, 4);
    f32 *temp3 = (f32 *)func_0885356C(arg1, 1, 1, 4);
    f32 *temp4 = (f32 *)func_0885356C(arg1, 2, 1, 4);
    Unk10 *temp5 = arg0->unk_10;
    if (temp5 != NULL) {
        void *temp6 = temp5->unk_110;
        if (temp6 != NULL) {
            s32 temp7 = *temp2;
            if (temp7 >= 0) {
                func_088664DC(&temp, temp6, temp7);
                *temp3 = temp.unk_30;
                *temp4 = temp.unk_34;
            }
        }
    }
    func_08852F00(arg1, 0);
}
