#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
} Sub;

typedef struct {
    u8 pad_00[8];
    Sub *unk_08;
} Node;

typedef struct {
    u8 pad_00[4];
    Node *unk_04;
} List;

void func_08989538(s32, s32);
void func_0898B9A4(void *, s32, s32 *);
extern List D_08ADB460[];
extern s32 D_08ADB470[];

void func_0898AFCC(u8 *arg0) {
    s32 temp[2];
    u32 i;
    s32 *q;
    s32 *p;
    func_0898B9A4(arg0 + 0x24, (*(Node **)((u32)D_08ADB460 + 4))->unk_08->unk_14, temp);
    i = 0;
    q = temp;
    p = D_08ADB470;
    do {
        func_08989538(*p, *q);
        ++i;
        ++q;
        ++p;
    } while (i < 2U);
}
