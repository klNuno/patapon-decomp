#include "common.h"

extern "C" {

struct A_08954804 {
    s32 unk_00[8];
};

struct E_08954804 {
    s32 unk_00;
    s32 unk_04;
    A_08954804 unk_08;
    s32 unk_28;

    E_08954804() {
        u32 k = 0;
        do {
            unk_08.unk_00[k] = -1;
        } while (++k < 8);
    }
    void set(const E_08954804 &o) {
        unk_00 = 0;
        unk_04 = o.unk_04;
        unk_08 = o.unk_08;
        unk_28 = 0;
    }
};

struct V_08954804 {
    E_08954804 *unk_00;

    E_08954804 &at(u32 i) { return unk_00[i]; }
};

struct S_08954804 {
    u8 pad_00[0x8DC];
    V_08954804 unk_8DC;
};

u32 func_08954034(void);

void func_08954804(S_08954804 *arg0) {
    u32 i;
    V_08954804 *v;
    u32 j;

    i = 0;
    if (i < func_08954034()) {
        v = &arg0->unk_8DC;
        j = 0;
        do {
            ((E_08954804 *)((u8 *)v->unk_00 + j))->set(E_08954804());
            j += sizeof(E_08954804);
        } while (++i < func_08954034());
    }
}

}
