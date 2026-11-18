#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x10];
} Sub_089D5D80;

typedef struct {
    u8 pad_00[0xC];
    u8 unk_0C[0x10];
    u8 unk_1C[0xD4C - 0x1C];
    Sub_089D5D80 unk_D4C;
    u8 unk_D60[0x4];
} S_089D5D80;

void func_0880416C(void *);
void func_08914E34(void *, s32);
void func_0893F388(void *, s32);
void func_089D0D04(void *, s32);
void func_089D5F4C(S_089D5D80 *);
extern u8 D_08A46884[];
extern u8 D_08A49038[];

S_089D5D80 *func_089D5D80(S_089D5D80 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_089D5F4C(arg0);
        func_089D0D04(arg0->unk_D60, -1);
        if (&arg0->unk_D4C != NULL) {
            arg0->unk_D4C.unk_00 = D_08A49038;
            if (&arg0->unk_D4C != NULL) {
                arg0->unk_D4C.unk_00 = D_08A46884;
            }
        }
        func_08914E34(arg0->unk_1C, -1);
        func_0893F388(arg0->unk_0C, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
