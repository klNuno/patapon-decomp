#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x34];
    s32 unk_34;
    u8 pad_38[8];
    s16 unk_40[8];
} Q;

union U {
    s32 i[8];
    f32 f[8];
};

struct E {
    s32 unk_00;
    s32 unk_04;
    U unk_08;
    Q *unk_28;

    E() {
        u32 k = 0;
        do {
            unk_08.i[k] = -1;
        } while (++k < 8);
        unk_00 = 0;
        unk_28 = NULL;
    }
    E(Q *q, s32 x) {
        u32 k = 0;
        do {
            unk_08.i[k] = q != NULL ? q->unk_40[k] : -1;
        } while (++k < 8);
        unk_00 = q != NULL ? q->unk_34 : 0;
        unk_04 = x;
        unk_28 = q;
    }
};

struct V {
    E *unk_00;
    s32 unk_04;
    E *begin() { return unk_00; }
    E *end() { return unk_00 + unk_04; }
};

typedef struct {
    u8 pad_00[0x740];
    s32 unk_740;
    u8 pad_744[0x198];
    V unk_8DC;
} S;

Q *func_08958E30(s32, s32);

void func_0895465C(S *arg0, s32 arg1, s32 arg2, s32 arg3) {
    V *v = &arg0->unk_8DC;
    E *it;
    E *end;

    end = v->end();
    for (it = v->begin(); it != end; it++) {
        if (it->unk_28 != NULL && it->unk_28->unk_34 == arg2) {
            *it = E();
        }
    }
    v->unk_00[arg2] = E(func_08958E30(arg0->unk_740, arg2), arg3);
}

}
