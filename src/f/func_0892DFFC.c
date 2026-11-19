#include "common.h"

typedef struct S088CE0C0 S088CE0C0;

typedef struct {
    u8 pad_00[0x30];
    char unk_30[0x30];
    s32 unk_60;
    u8 *unk_64;
} T;

S088CE0C0 *func_088E2F9C(S088CE0C0 *arg0);
char *func_0892E130(char *arg0);
extern u8 D_08A47004[];

T *func_0892DFFC(T *arg0, s32 arg1) {
    arg0->unk_64 = D_08A47004;
    func_088E2F9C((S088CE0C0 *)arg0);
    func_0892E130(arg0->unk_30);
    arg0->unk_60 = arg1;
    return arg0;
}
