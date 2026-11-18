#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
} H_088EC608;

typedef struct {
    u8 pad_00[0x14A0];
    H_088EC608 *unk_14A0;
} G_088EC608;

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} W_088EC608;

typedef struct {
    u8 pad_00[0x14];
    W_088EC608 *unk_14;
} T088EC608;

extern G_088EC608 *D_08AD1F14[];

s32 *func_0885356C(void *, s32, s32, s32);
s32 func_08899E18(s32, s32);
void func_08852F00(void *, s32);

void func_088EC608(T088EC608 *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    H_088EC608 *h;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    h = (D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL)->unk_14A0;
    switch (*a) {
    case 0:
        *b = h->unk_10;
        break;
    case 1:
        *b = h->unk_0C;
        break;
    }
    func_08899E18(arg0->unk_14->unk_36B10, *a);
    func_08852F00(arg1, 0);
}
