#include "common.h"
typedef struct {
    u8 pad_00[0xBD];
    u8 unk_BD;
} U;
typedef struct {
    u8 pad_00[4];
    U *unk_04;
} T;
typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} S;
T *func_08852FFC(s32);
void func_0896E3C8(S *arg0) {
    U *temp = func_08852FFC(arg0->unk_04)->unk_04;
    u8 *temp3 = &temp->unk_BD;
    u8 temp2 = *temp3;
    if (__builtin_allegrex_ext(temp2, 6, 1) != 0) {
        *temp3 = temp2 | 0x80;
    }
}
