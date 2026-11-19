#include "common.h"

typedef struct {
    u8 pad_00[0x10];
} T0895B830;

typedef struct {
    u8 pad_00[4];
    T0895B830 unk_04;
    void *unk_14;
} S;

extern u8 D_08A479C4[];
void func_0880416C(void *);
void func_0895B754(S *, s16);
void func_0895B7E0(T0895B830 *, s16);
void func_0895B8EC(T0895B830 *, s32);

S *func_0895B9E8(S *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_14 = D_08A479C4;
        func_0895B8EC(&arg0->unk_04, 1);
        func_0895B7E0(&arg0->unk_04, -1);
        func_0895B754(arg0, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
