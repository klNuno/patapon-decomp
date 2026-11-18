#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x58];
    s32 unk_58;
    u8 pad_5C[4];
} E_088E06B4;

typedef struct {
    E_088E06B4 *unk_00;
    s32 unk_04;
} V_088E06B4;

typedef struct {
    u8 pad_00[0xC008];
    V_088E06B4 unk_C008;
} T_088E06B4;

void func_088CAD64(s32);

void func_088E06B4(T_088E06B4 *arg0) {
    E_088E06B4 *p;
    E_088E06B4 *end;

    p = arg0->unk_C008.unk_00;
    E_088E06B4 *&d = arg0->unk_C008.unk_00;
    s32 &n = arg0->unk_C008.unk_04;
    for (end = d + n; p != end; p++) {
        func_088CAD64(p->unk_58);
        p->unk_58 = 0;
    }
    p = arg0->unk_C008.unk_00;
    if ((u32)p != (u32)(d + n)) {
        s32 &n2 = arg0->unk_C008.unk_04;
        do {
            p++;
        } while (p != d + n2);
    }
    arg0->unk_C008.unk_04 = 0;
}

}
