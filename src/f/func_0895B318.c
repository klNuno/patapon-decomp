#include "common.h"

typedef struct {
    u8 *unk_00;
    u8 unk_04;
    u8 pad_05[0x3];
    s32 unk_08;
} T;

extern void func_0880416C(void *);
void func_0895B754(void *, s16);
extern u8 D_08A47990[];
extern u8 D_08A44770[];

T *func_0895B318(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A47990;
        arg0->unk_08 = 0;
        func_0895B754(&arg0->unk_04, -1);
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A44770;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
