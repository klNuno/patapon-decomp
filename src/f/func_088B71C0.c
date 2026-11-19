#include "common.h"

typedef struct {
    u8 pad_00[0x158];
    s32 *unk_158;
} S;

void func_088CE5A4(char *, s32);

void func_088B71C0(S *arg0, s32 arg1) {
    func_088CE5A4((char *)arg0, arg1 + *arg0->unk_158);
}
