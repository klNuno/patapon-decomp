#include "common.h"

typedef struct E_0897C9A8 {
    s32 unk_00;
    u8 pad_04[0xC];
    s32 unk_10;
    u8 unk_14;
    u8 pad_15[0x3F];
} E_0897C9A8;

typedef struct S_0897C9A8 {
    E_0897C9A8 unk_00[10];
} S_0897C9A8;

S_0897C9A8 *func_0897C9A8(S_0897C9A8 *arg0) {
    E_0897C9A8 *p;

    p = arg0->unk_00;
    do {
        p->unk_00 = 0;
        p->unk_10 = 0;
        p->unk_14 = 0;
        p++;
    } while (p < arg0->unk_00 + 10);
    return arg0;
}
