#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0xA8];
} T08953630_E;

typedef struct {
    T08953630_E *unk_00;
    s32 unk_04;
} T08953630_V;

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
    u8 pad_08[0xFC4];
    T08953630_V unk_FCC;
    u8 pad_FD4[0xC0];
    s32 unk_1094;
    u8 pad_1098[0x1B8];
    u8 unk_1250;
    u8 unk_1251;
} T08953630;

extern u32 D_08A04A20[];

inline const u32 &min08953630(const u32 &a, const u32 &b) {
    return (b < a) ? b : a;
}

void func_08953630(T08953630 *arg0, u32 arg1) {
    T08953630_E *p;
    T08953630_V *v;

    arg1 = min08953630(arg1, D_08A04A20[0]);
    if (arg0->unk_1250 == 0) {
        p = arg0->unk_FCC.unk_00;
        v = &arg0->unk_FCC;
        if ((u32)p != (u32)(p + arg0->unk_FCC.unk_04)) {
            do {
                p++;
            } while (p != v->unk_00 + arg0->unk_FCC.unk_04);
        }
        arg0->unk_FCC.unk_04 = 0;
        arg0->unk_1094 = 0;
        arg0->unk_04 = 0;
        arg0->unk_1251 = 1;
    }
}

}
