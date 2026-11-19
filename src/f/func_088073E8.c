#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x40];
    s32 unk_44;
} T;

typedef struct {
    T *unk_00;
    void *unk_04;
    u8 unk_08[1];
} S;

extern u8 D_08A444F0[];
extern u8 D_08A444FC[];
void func_08807468(void *, s16);
void func_0880416C(void *);

S *func_088073E8(S *arg0, s32 arg1) {
    if (arg0 != NULL) {
        T *temp;
        u8 *temp2;
        arg0->unk_04 = D_08A444F0;
        arg0->unk_00->unk_00 = D_08A444FC;
        temp = arg0->unk_00;
        temp2 = arg0->unk_08;
        temp->unk_44 = temp2 - (u8 *)temp;
        if (arg1 != 0) {
            func_08807468(temp2, 0);
        }
        if ((s16)arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
