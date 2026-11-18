#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s8 *unk_04;
} A_08805FA8;

typedef struct {
    u8 pad_00[0x14];
    u8 *unk_14;
    u8 *unk_18;
    u8 pad_1C[0x44];
    s32 unk_60[14];
    s32 unk_98;
    u8 pad_9C[0x4];
    s32 unk_A0;
    s32 unk_A4;
    u32 unk_A8;
    u8 pad_AC[0x4];
    s32 unk_B0;
    u32 unk_B4;
    u8 pad_B8[0x50];
    s32 unk_108[1];
} T_08805FA8;

s32 func_08805FA8(T_08805FA8 *arg0, A_08805FA8 *arg1) {
    u32 n;
    s32 flag;
    s32 off;
    s32 sz;
    u32 m;
    s32 *base;
    s32 *sp;
    s32 has;
    s32 ret;
    s32 i;

    off = arg0->unk_A0;
    sz = arg0->unk_A4;
    n = arg0->unk_A8;
    flag = *arg1->unk_04 & 0x40;
    if (flag) {
        m = arg0->unk_B4;
        base = (s32 *)(arg0->unk_18 + sz + ((m * 4 + 15) & ~15));
        has = arg0->unk_B0;
        if (has) {
            sp = (s32 *)((u8 *)base + (((n + 2) * 4 + 15) & ~15)) - 1;
        } else {
            sp = (s32 *)((u8 *)base + (((n + 1) * 4 + 15) & ~15)) - 1;
        }
    } else {
        has = arg0->unk_B0;
        if (has) {
            sp = (s32 *)(arg0->unk_18 + sz + (((n + 2) * 4 + 15) & ~15)) - 1;
        } else {
            sp = (s32 *)(arg0->unk_18 + sz + (((n + 1) * 4 + 15) & ~15)) - 1;
        }
    }
    ret = *sp;
    if (has) {
        sp--;
        arg0->unk_98 = *sp;
    } else if (n == 9) {
        sp--;
        arg0->unk_98 = *sp;
        n--;
    }
    sp -= n;
    for (i = 0; (u32)i < n; i++) {
        arg0->unk_60[i] = *sp++;
    }
    arg0->unk_14 = arg0->unk_18 + off;
    if (flag) {
        base -= m;
        for (i = 0; (u32)i < m; i++) {
            arg0->unk_108[i] = *base++;
        }
    }
    return ret;
}
