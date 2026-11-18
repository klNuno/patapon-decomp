#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
} V0888FDE0;

typedef struct {
    u8 pad_00[0x114];
    V0888FDE0 *unk_114;
} W0888FDE0;

typedef struct N0888FDE0 {
    s32 unk_00;
    struct N0888FDE0 *unk_04;
    W0888FDE0 **unk_08;

    int eq2(struct N0888FDE0 *o) {
        int r = 0;
        if (*(s32 *)&unk_08 == *(s32 *)&o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(struct N0888FDE0 *o) {
        int r = 0;
        if (eq2(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(struct N0888FDE0 *o) {
        return !(bool)eq(o);
    }
} N0888FDE0;

typedef struct {
    u8 pad_00[0x60C];
    N0888FDE0 unk_60C;
    u8 pad_618[0x78];
    u8 unk_690;

    N0888FDE0 *end() { return &unk_60C; }
} T0888FDE0;

s32 func_088F5BA0(V0888FDE0 *);
void func_088F5AB4(V0888FDE0 *, s32);

s32 func_0888FDE0(T0888FDE0 *arg0) {
    struct { N0888FDE0 *unk_00; } it;

    if (arg0->unk_690 == 0) {
        return 1;
    }
    it.unk_00 = arg0->unk_60C.unk_04;
    for (; it.unk_00->ne(arg0->end());) {
        if (func_088F5BA0((*it.unk_00->unk_08)->unk_114) == 0) {
            func_088F5AB4((*it.unk_00->unk_08)->unk_114, -(*it.unk_00->unk_08)->unk_114->unk_04);
        }
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
    }
    return 1;
}

}
