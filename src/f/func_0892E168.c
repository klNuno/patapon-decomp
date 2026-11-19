#include "common.h"

typedef struct {
    u8 pad_00[0x30];
    u8 unk_30[0x34];
    void *unk_64;
} N;

extern u8 D_08A47004[];
void func_0892E524(N *arg0);
void func_0892E1E8(void *);
void func_0892E094(void *, s16);
void func_08880088(void *, s16);
void func_0880416C(void *);

N *func_0892E168(N *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_64 = D_08A47004;
        func_0892E524(arg0);
        if (arg0 != NULL) {
            func_0892E1E8(arg0->unk_30);
            func_0892E094(arg0->unk_30, -1);
            func_08880088(arg0, -1);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
