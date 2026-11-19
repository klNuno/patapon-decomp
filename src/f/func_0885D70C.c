#include "common.h"

void func_0880416C(void *);
extern s32 func_0885DBCC(s32);
extern u8 D_08A44A30[];

typedef struct {
    u8 pad_00[0x4C];
    void *unk_4C;
} T;

T *func_0885D70C(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_4C = D_08A44A30;
        func_0885DBCC((s32)arg0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
