#include "common.h"

void func_08814BB4(s32);
s32 func_08814C0C(s32);
void func_088BA020(void *);
void func_088BB914(void *);
void func_0891E000(char *);
void func_0891E048(char *);

typedef struct {
    u8 pad_00[0x7FF8];
    char unk_7FF8;
} S;

typedef struct {
    u8 pad_00[0xC];
    u8 unk_0C[0xDC];
    S unk_E8;
} T;

void func_088BCEF8(T *arg0) {
    func_0891E000(&arg0->unk_E8.unk_7FF8);
    func_08814C0C(1);
    func_08814BB4(4);
    func_088BA020((u8 *)arg0 + 0x14C);
    func_088BB914(arg0->unk_0C);
    func_0891E048(&arg0->unk_E8.unk_7FF8);
}
