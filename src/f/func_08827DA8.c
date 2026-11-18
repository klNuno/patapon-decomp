#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 *unk_10;
    s32 *unk_14;
    s32 *unk_18;
    s32 *unk_1C;
    s32 *unk_20;
} T;

inline void func_inl(T *arg0, s32 n, s32 size, s32 *buf, s32 align) {
    s32 *p;
    s32 v;
    s32 sz = (size + 3) & ~3;
    arg0->unk_04 = n;
    arg0->unk_00 = n;
    arg0->unk_08 = sz;
    arg0->unk_0C = align;
    arg0->unk_10 = buf;
    arg0->unk_1C = buf;
    arg0->unk_14 = buf;
    v = (s32)arg0->unk_10 + (~(arg0->unk_0C - 1) & (arg0->unk_0C + (arg0->unk_00 + 1) * 4 - 1));
    p = buf;
    do {
        *p = v;
        n--;
        p++;
        v += sz;
    } while (n != 0);
    arg0->unk_20 = p;
    arg0->unk_18 = p + 1;
}

void func_08827DA8(T *arg0) {
    func_inl(arg0, arg0->unk_00, arg0->unk_08, arg0->unk_10, arg0->unk_0C);
}
