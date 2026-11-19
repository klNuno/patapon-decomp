#include "common.h"

typedef struct {
    u8 pad_00[0x548];
    s32 *unk_548;
    u32 unk_54C;
} T;

extern u32 func_088F9C68(T *);

void func_088F9C70(T *arg0, s32 arg1) {
    u32 temp = arg0->unk_54C;
    if (temp < func_088F9C68(arg0)) {
        s32 *temp2 = arg0->unk_548 + arg0->unk_54C;
        if (temp2 != NULL) {
            *temp2 = arg1;
        }
        arg0->unk_54C++;
    }
}
