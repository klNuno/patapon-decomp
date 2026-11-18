#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) { return p; }

struct P_0896A0B0 {
    s32 unk_00;
    s32 unk_04;
    P_0896A0B0(const P_0896A0B0 &o) : unk_00(o.unk_00), unk_04(o.unk_04) {}
};

struct V_0896A0B0 {
    u8 unk_00[0x1004];
    P_0896A0B0 *unk_1004;
    s32 unk_1008;
};

struct E_0896A0B0 {
    s32 unk_00;
    V_0896A0B0 unk_04;
    E_0896A0B0(const E_0896A0B0 &o) {
        P_0896A0B0 *s;
        P_0896A0B0 *p;
        P_0896A0B0 **dp;
        s32 *sp;
        V_0896A0B0 *v;

        unk_00 = o.unk_00;
        v = &unk_04;
        v->unk_1004 = (P_0896A0B0 *)((u32)v + ((u32)v & 3));
        v->unk_1008 = o.unk_04.unk_1008;
        p = v->unk_1004;
        s = o.unk_04.unk_1004;
        dp = &v->unk_1004;
        if ((u32)p != (u32)(p + v->unk_1008)) {
            sp = &v->unk_1008;
            do {
                new (p) P_0896A0B0(*s++);
                p++;
            } while (p != *dp + *sp);
        }
    }
};

struct T_0896A0B0 {
    u8 pad_00[0x20204];
    E_0896A0B0 *unk_20204;
    s32 unk_20208;
};

void func_0896A0B0(T_0896A0B0 *arg0, E_0896A0B0 *arg1) {
    new (&arg0->unk_20204[arg0->unk_20208]) E_0896A0B0(*arg1);
    arg0->unk_20208++;
}

}
