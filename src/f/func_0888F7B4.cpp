#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x114];
    void *unk_114;
    u8 pad_118[0x3AE - 0x118];
    u8 unk_3AE;
} W0888F7B4;

typedef struct N0888F7B4 {
    s32 unk_00;
    struct N0888F7B4 *unk_04;
    W0888F7B4 **unk_08;

    int eq2(struct N0888F7B4 *o) {
        int r = 0;
        if (*(s32 *)&unk_08 == *(s32 *)&o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(struct N0888F7B4 *o) {
        int r = 0;
        if (eq2(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(struct N0888F7B4 *o) {
        return !(bool)eq(o);
    }
} N0888F7B4;

typedef struct {
    u8 pad_00[0x60C];
    N0888F7B4 unk_60C;
    u8 pad_618[0x78];
    u8 unk_690;

    N0888F7B4 *end() { return &unk_60C; }
} T0888F7B4;

s32 func_088F5BA0(void *);

W0888F7B4 *func_0888F7B4(T0888F7B4 *arg0, s32 arg1) {
    struct { N0888F7B4 *unk_00; } it;

    if (arg0->unk_690 == 0) {
        return NULL;
    }
    it.unk_00 = arg0->unk_60C.unk_04;
    for (; it.unk_00->ne(arg0->end());) {
        if ((*it.unk_00->unk_08)->unk_3AE != 0) {
            if (arg1 == 0 || func_088F5BA0((*it.unk_00->unk_08)->unk_114) == 0) {
                return *it.unk_00->unk_08;
            }
        }
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
    }
    return NULL;
}

}
