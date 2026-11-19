#include "common.h"

typedef struct {
    void *unk_00;
    s32 unk_04;
    u8 pad_08[8];
    s32 unk_10;
    u8 pad_14[4];
    s32 unk_18;
    u8 pad_1C[4];
    void *unk_20;
} T;

extern u8 D_08A4438C[];
void func_0880416C(void *);
void func_088063E4(T *, s16);
extern void func_0880644C(void *, s16);
extern s32 func_0881E77C(s32);

T *func_08806520(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A4438C;
        func_088063E4(arg0, 0);
        func_0880644C(arg0->unk_20, 1);
        func_0881E77C(arg0->unk_18);
        func_0881E77C(arg0->unk_10);
        func_0881E77C(arg0->unk_04);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
