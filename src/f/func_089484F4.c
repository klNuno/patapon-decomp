#include "common.h"

void func_08949388(void *, s32);
s32 func_0894A1E4(void *);
void func_08948158(void *);

typedef struct {
    u8 pad_00[0x1500];
    s32 unk_1500;
    u8 pad_1504[0x1F0C];
    u8 unk_3410;
    u8 pad_3411[0x1786F];
    s32 unk_1AC80;
} T;

void func_089484F4(T *arg0) {
    func_08949388(&arg0->unk_3410, arg0->unk_1500);
    if (func_0894A1E4(&arg0->unk_3410) != 0) {
        func_08948158(arg0);
        arg0->unk_1AC80 = 1;
    }
}
