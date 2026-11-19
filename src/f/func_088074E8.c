#include "common.h"

typedef struct {
    u8 *unk_00;
    u8 pad_04[0x40];
    s32 unk_44;
} T;

typedef struct {
    T *volatile unk_00;
    u8 pad_04[4];
    u8 *unk_08;
    u8 *unk_0C;
} S;

extern u8 D_08A444CC[];
extern u8 D_08A444D8[];
void func_0880416C(void *);
u8 **func_08807468(u8 **arg0, s16 arg1);

S *func_088074E8(S *arg0, s32 arg1) {
    u8 **temp;
    T *temp1;
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A444CC;
        arg0->unk_00->unk_00 = D_08A444D8;
        temp1 = arg0->unk_00;
        temp = &arg0->unk_0C;
        temp1->unk_44 = (u8 *)temp - (u8 *)temp1;
        if (arg1 != 0) {
            func_08807468(temp, 0);
        }
        if ((s16)arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
