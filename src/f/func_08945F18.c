#include "common.h"

typedef struct {
    s8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
} E_08945F18;

typedef struct {
    u8 pad_00[0x4];
    E_08945F18 unk_04[1];
} A_08945F18;

typedef struct {
    u8 pad_00[0x4];
    s16 unk_04;
    u8 pad_06[0x70];
    s16 unk_76;
} R_08945F18;

typedef struct {
    A_08945F18 *unk_00;
    u8 unk_04[1];
} S_08945F18;

extern s32 D_089E9418[];
extern s32 func_08945908(s32, s32);

void func_08945F18(S_08945F18 *arg0, s32 arg1, s32 arg2) {
    s32 tmp;
    R_08945F18 *r;
    E_08945F18 *e;

    r = (R_08945F18 *)func_08945908((s32)arg0->unk_04, arg1);
    e = &arg0->unk_00->unk_04[arg1];
    if (e->unk_02 == 0) {
        e->unk_01 = 1;
    }
    e->unk_02 = 1;
    tmp = e->unk_00 + arg2;
    e->unk_00 = *(tmp < D_089E9418[0] ? &tmp : D_089E9418);
    switch (r->unk_04) {
    case 5:
        e->unk_02 = 0;
        e->unk_00 = 0;
        break;
    }
    if (r->unk_76 == -1) {
        e->unk_01 = 0;
        e->unk_02 = 0;
    }
}
