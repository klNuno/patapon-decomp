#include "common.h"

typedef struct {
    u8 pad_00[0x30];
    void *unk_30;
    u8 pad_34[0x24];
    u8 unk_58;
} S;

extern u8 D_08A45D88[];
void func_0880416C(void *);
void func_088B88D8(void *, s16);
void func_088BA1E8(void *, s32);

S *func_088B8AC0(S *arg0, s16 arg1) {
    if (arg0 != NULL) {
        u8 *temp = &arg0->unk_58;
        arg0->unk_30 = D_08A45D88;
        if (temp != NULL) {
            func_088B88D8(temp, -1);
        }
        func_088BA1E8(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
