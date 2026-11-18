#include "common.h"

typedef struct {
    void *unk_00;
} Obj_089D6684_08;

typedef struct {
    u8 pad_00[0x8];
    Obj_089D6684_08 unk_08;
    u8 pad_0C[0x10];
    u8 unk_1C[0x10A3C];
    u8 unk_10A58[0x4];
} Obj_089D6684;

extern s32 D_08A46884[];
extern s32 D_08A49048[];

void func_0880416C(void *);
void func_089CE3C0(void *, s32);
void func_089D0D04(void *, s32);

Obj_089D6684 *func_089D6684(Obj_089D6684 *arg0, s16 arg1) {
    Obj_089D6684_08 *temp_v1;

    if (arg0 != NULL) {
        func_089CE3C0(arg0->unk_10A58, -1);
        func_089D0D04(arg0->unk_1C, -1);
        temp_v1 = &arg0->unk_08;
        if (temp_v1 != NULL) {
            arg0->unk_08.unk_00 = D_08A49048;
            if (temp_v1 != NULL) {
                arg0->unk_08.unk_00 = D_08A46884;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
