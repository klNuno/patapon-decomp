#include "common.h"

extern "C" {

typedef struct N08965820 {
    u8 pad_00[0x4];
    struct N08965820 *unk_04;
    struct N08965820 *unk_08;
} N08965820;

typedef struct {
    u8 pad_00[0x4];
    u8 *unk_04;
} T08965820;

typedef struct {
    u8 pad_00[0x214];
    N08965820 *unk_214;
    u8 pad_218[0x18];
    u32 unk_230;
    u8 pad_234[0x5C];
    T08965820 *unk_290;
} S08965820;

typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
} P08965820;

typedef struct {
    s64 unk_00, unk_08;
    f32 unk_10, unk_14, unk_18, unk_1C;
    s32 unk_20;
} L08965820;

struct It08965820 {
    N08965820 *unk_00;
    It08965820(N08965820 *n) : unk_00(n) {}
    void next() {
        if (unk_00 != NULL) {
            unk_00 = unk_00->unk_04;
        }
    }
};

inline N08965820 *at_08965820(S08965820 *o, s32 idx) {
    s32 i;

    if ((u32)idx >= o->unk_230) {
        return NULL;
    }
    It08965820 it(o->unk_214);
    for (i = 0; i < idx; i++) {
        it.next();
    }
    return it.unk_00->unk_08;
}

void func_0895A9C4(s32, u8 *, s32, s32);
void func_08965900(L08965820 *, S08965820 *, P08965820 *, s32);
void func_0895ACD8(s32, L08965820 *);

s32 func_08965820(S08965820 *arg0, s32 arg1, P08965820 *arg2, s32 arg3) {
    L08965820 sp20;
    s32 obj;
    N08965820 *n;

    if (arg1 == 0) {
        return 0;
    }
    if (arg2 == NULL) {
        return 0;
    }
    {
        s32 idx = arg2->unk_24;
        s32 i;
        if ((u32)idx >= arg0->unk_230) {
            n = NULL;
        } else {
            It08965820 it(arg0->unk_214);
            for (i = 0; i < idx; i++) {
                it.next();
            }
            n = it.unk_00->unk_08;
        }
    }
    obj = (s32)n->unk_08;
    func_0895A9C4(obj, arg0->unk_290->unk_04 + 0x90, arg1, arg3);
    func_08965900(&sp20, arg0, arg2, arg3);
    func_0895ACD8(obj, &sp20);
    return 1;
}

}
