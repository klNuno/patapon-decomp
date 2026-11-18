#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) { return p; }

struct E {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    E(const E &o) : unk_00(o.unk_00), unk_04(o.unk_04), unk_08(o.unk_08), unk_0C(o.unk_0C) {
        if (unk_08 != 0) {
            *(s32 *)unk_0C += 1;
        }
    }
};

typedef struct {
    u8 pad_00[0x104];
    E *unk_104;
    u32 unk_108;
} T;

T *func_088D91D4(T *arg0, T *arg1) {
    E *s;
    E *p;
    E **dp;
    u32 *sp;

    arg0->unk_104 = (E *)((u32)arg0 + ((u32)arg0 & 3));
    arg0->unk_108 = arg1->unk_108;
    p = arg0->unk_104;
    s = arg1->unk_104;
    dp = &arg0->unk_104;
    if ((u32)p != (u32)(p + arg0->unk_108)) {
        sp = &arg0->unk_108;
        do {
            new (p) E(*s++);
            p++;
        } while (p != *dp + *sp);
    }
    return arg0;
}

}
