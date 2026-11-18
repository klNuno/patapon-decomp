#include "common.h"

typedef struct {
    u8 pad_00[0x1C];
    void *unk_1C;
    u8 pad_20[0x14];
} Sub_089C3648;

typedef struct {
    u8 pad_00[0x28];
    void *unk_28;
    Sub_089C3648 unk_2C;
    u8 unk_60[4];
} Struct_089C3648;

extern u8 D_08A48CD4[];
extern u8 D_08A48CBC[];

void func_0880416C(void *);
void func_08865F78(void *, s32);
void func_088CE530(void *, s32);
void func_089C352C(void *);

Struct_089C3648 *func_089C3648(Struct_089C3648 *arg0, s16 arg1) {
    Sub_089C3648 *temp_a0;

    if (arg0 != NULL) {
        arg0->unk_28 = D_08A48CBC;
        func_08865F78(arg0->unk_60, -1);
        temp_a0 = &arg0->unk_2C;
        if (temp_a0 != NULL) {
            arg0->unk_2C.unk_1C = D_08A48CD4;
            func_089C352C(temp_a0);
        }
        func_088CE530(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
