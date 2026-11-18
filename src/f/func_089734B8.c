#include "common.h"

typedef struct {
    u8 pad_00[0xBD];
    u8 unk_BD;
} T_089734B8;

typedef struct {
    u8 pad_00[0x4];
    T_089734B8 *unk_04;
} S_089734B8;

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
} A_089734B8;

s32 *func_0884EBA0(s32, s32);
S_089734B8 *func_08852FFC(s32);
s32 func_08853004(s32);
u8 func_08973610(A_089734B8 *);
u8 func_089736A4(A_089734B8 *);
u8 func_08973738(A_089734B8 *);

s32 func_089734B8(A_089734B8 *arg0) {
    S_089734B8 *s;
    s32 r;

    s = func_08852FFC(arg0->unk_08);
    switch (*func_0884EBA0(func_08853004(arg0->unk_08), 0x24)) {
    case 1:
        if (((s->unk_04->unk_BD >> 7) & 1) == 1) {
            r = 1;
        } else {
            r = func_08973738(arg0) != 1;
        }
        break;
    case 2:
        if (func_08973738(arg0) == 1) {
            r = 0;
        } else if (func_089736A4(arg0) == 1) {
            r = 0;
        } else {
            r = ((s->unk_04->unk_BD >> 7) & 1) == 1;
        }
        break;
    case 3:
        if (func_08973738(arg0) == 1) {
            r = 0;
        } else if (func_08973610(arg0) == 1) {
            r = 0;
        } else {
            r = ((s->unk_04->unk_BD >> 7) & 1) == 1;
        }
        break;
    case 5:
        r = 1;
        break;
    default:
        r = 0;
        break;
    }
    return r;
}
