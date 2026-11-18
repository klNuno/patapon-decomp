#include "common.h"

template <class T> inline const T &max_(const T &a, const T &b) {
    return (a < b) ? b : a;
}

extern "C" {

typedef struct C {
    u8 pad_00[0x14];
    u32 unk_14;
} C;

typedef struct S {
    u8 pad_00[0xC];
    C *unk_0C;
    u8 pad_10[0xE8];
    u32 unk_F8;
    u32 unk_FC;
} S;

extern u32 D_08A04240[];
extern u32 D_08A04244[];

u32 func_0887AFCC(C *);
u32 func_0887A6EC(C *, u32);

void func_0894D42C(S *arg0, u32 arg1) {
    u32 t;
    u32 h;

    h = func_0887AFCC(arg0->unk_0C) >> 1;
    t = func_0887A6EC(arg0->unk_0C, h - arg0->unk_0C->unk_14);
    if (arg0->unk_F8 != 0) {
        arg0->unk_F8 = arg1;
        arg0->unk_FC = max_(D_08A04240[0], arg1);
        if (arg1 == 0) {
            arg0->unk_FC = arg0->unk_F8 = max_(arg0->unk_F8, t);
        }
    } else {
        arg0->unk_F8 = arg1;
        arg0->unk_FC = max_(D_08A04244[0], arg1);
    }
}

}
