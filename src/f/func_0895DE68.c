#include "common.h"

typedef struct {
    u8 pad_00[0x1C];
    volatile u32 unk_1C;
} S_0895DE68;

void func_0895BB40(S_0895DE68 *);
void func_0895BB48(S_0895DE68 *);
void func_0895DF48(S_0895DE68 *, s32);
void func_0895E000(S_0895DE68 *, s32);
void func_0895E070(S_0895DE68 *, s32);

void func_0895DE68(S_0895DE68 *arg0) {
    u32 prev;

    func_0895BB40(arg0);
    do {
        prev = arg0->unk_1C;
        switch (arg0->unk_1C) {
        case 0:
            break;
        case 1:
            func_0895DF48(arg0, 0);
            break;
        case 2:
            func_0895DF48(arg0, 1);
            break;
        case 3:
            func_0895E000(arg0, 0);
            break;
        case 4:
            func_0895E000(arg0, 1);
            break;
        case 5:
            func_0895E070(arg0, 0);
            break;
        case 6:
            func_0895E070(arg0, 1);
            break;
        }
    } while (arg0->unk_1C != prev);
    func_0895BB48(arg0);
}
