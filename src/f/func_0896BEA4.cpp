#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) { return p; }

struct E {
    s32 unk_00;
    u8 unk_04[0x1C];
    s32 *unk_20;
    s32 unk_24;
    E(const E &o) {
        s32 *s;
        s32 *p;
        s32 **dp;
        s32 *sp;

        unk_00 = o.unk_00;
        unk_20 = (s32 *)(((u32)unk_04 & 3) + (u32)this + 4);
        unk_24 = o.unk_24;
        p = unk_20;
        s = o.unk_20;
        dp = &unk_20;
        if ((u32)p != (u32)(p + unk_24)) {
            sp = &unk_24;
            do {
                new (p) s32(*s++);
                p++;
            } while (p != *dp + *sp);
        }
    }
};

struct T0896BEA4 {
    u8 pad_00[0xFB0];
    E *unk_FB0;
    s32 unk_FB4;
};

void func_0896BEA4(T0896BEA4 *arg0, E *arg1) {
    new (&arg0->unk_FB0[arg0->unk_FB4]) E(*arg1);
    arg0->unk_FB4++;
}

}
