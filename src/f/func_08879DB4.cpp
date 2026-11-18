#include "common.h"

extern "C" {

typedef struct E {
    s32 unk_00;
    s32 unk_04;
    u32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u8 unk_1C;
    u8 unk_1D;

    E(const E &o) : unk_00(o.unk_00), unk_04(o.unk_04), unk_08(o.unk_08), unk_0C(o.unk_0C),
        unk_10(o.unk_10), unk_14(o.unk_14), unk_18(o.unk_18), unk_1C(o.unk_1C), unk_1D(o.unk_1D) {}
} E;

inline void *operator new(unsigned int, void *p) { return p; }

typedef struct T {
    u8 pad_00[0x104];
    E *unk_104;
    s32 unk_108;

    E *end() { return unk_104 + unk_108; }

    u32 count() {
        u32 sum = 0;
        E *p;

        for (p = unk_104; p != end(); p++) {
            sum += p->unk_08;
        }
        return sum;
    }

    bool full() {
        if (unk_108 == 8) {
            return true;
        }
        return count() >= 8;
    }
} T;

s32 func_08879DB4(T *arg0, E *arg1) {
    s32 ret;

    if (arg0->full()) {
        ret = 0;
    } else {
        new (*(E **)&arg0->unk_104 + *(s32 *)&arg0->unk_108) E(*arg1);
        arg0->unk_108++;
        ret = 1;
    }
    return ret;
}

}
