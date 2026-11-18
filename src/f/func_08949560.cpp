#include "common.h"

extern "C" {

typedef struct N_08949560 {
    struct N_08949560 *unk_00;
    u8 pad_04[4];
    u32 unk_08;
    u8 pad_0C[0x54];
    u8 unk_60[4];
} N_08949560;

typedef struct Unk_08949560 {
    u8 pad_00[0x100];
    s32 unk_100;
    u8 pad_104[0x410];
    s32 unk_514;
    u32 unk_518;
    u8 pad_51C[0x17020];
    N_08949560 unk_1753C;
} Unk_08949560;

extern u8 D_08A04040[];

void func_08858F88(Unk_08949560 *, s32, s32, void *);

typedef struct {
    N_08949560 *unk_00;
} It_08949560;

inline bool eq_08949560(N_08949560 *a, N_08949560 *b) { return a == b; }
inline bool ne_08949560(N_08949560 *a, N_08949560 *b) { return !eq_08949560(a, b); }

inline void draw_08949560(Unk_08949560 *arg0, const s32 &x, s32 y, It_08949560 it) {
    s32 i;

    for (i = 0; (u32)i < 11 && ne_08949560(it.unk_00, &arg0->unk_1753C); i++) {
        if (it.unk_00->unk_08 & 0x1000) {
            arg0->unk_100 = 0xFF00FF;
        } else {
            arg0->unk_100 = 0xFFFFFF;
        }
        func_08858F88(arg0, x, y + i, it.unk_00->unk_60);
        it.unk_00 = it.unk_00->unk_00;
    }
}

void func_08949560(Unk_08949560 *arg0, s32 arg1, s32 arg2) {
    It_08949560 it;
    u32 n;
    u32 i;

    arg0->unk_100 = 0xFFFFFF;
    func_08858F88(arg0, arg1, arg1 + arg0->unk_514, D_08A04040);
    arg1++;
    it.unk_00 = arg0->unk_1753C.unk_00;
    n = arg0->unk_518;
    i = 0;
    if (n != 0) {
        do {
            i++;
            it.unk_00 = it.unk_00->unk_00;
        } while (i < n);
    }
    draw_08949560(arg0, arg1, arg2, it);
}

}
