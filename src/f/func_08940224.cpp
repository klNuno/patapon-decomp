#include "common.h"

extern "C" {

typedef struct E08940224 {
    u8 pad_00[0x20];
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
} E08940224;

struct N08940224 {
    s32 unk_00;
    N08940224 *unk_04;
    E08940224 *unk_08;

    s32 eqTail(const N08940224 &o) const {
        s32 r = 0;
        if (unk_08 == o.unk_08 && unk_04 == o.unk_04) {
            r = 1;
        }
        return r;
    }
    s32 eq(const N08940224 &o) const {
        s32 r = 0;
        if (eqTail(o) && unk_00 == o.unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(const N08940224 &o) const {
        return !(bool)eq(o);
    }
};

struct I08940224 {
    N08940224 *unk_00;

    void next() {
        if (unk_00 != NULL) {
            unk_00 = unk_00->unk_04;
        }
    }
};

typedef struct S08940224 {
    u8 pad_00[0x1EB8];
    N08940224 unk_1EB8;
    u8 pad_1EC4[0x1F08 - 0x1EC4];
    s32 unk_1F08;
    s32 unk_1F0C;
    s32 unk_1F10;
    N08940224 *unk_1F14;

    N08940224 *end() { return &unk_1EB8; }
} S08940224;

void func_08852D00(void *);
void func_08852C5C(void *, s32, s32);
void func_0885303C(void *, s32, s32);

void func_08940224(S08940224 *arg0, void *arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5) {
    I08940224 it;
    I08940224 end;
    E08940224 *e;

    arg0->unk_1F0C = 1;
    end.unk_00 = arg0->end();
    for (it.unk_00 = arg0->unk_1EB8.unk_04; it.unk_00->ne(*end.unk_00);) {
        e = it.unk_00->unk_08;
        *arg2 = e->unk_20;
        *arg3 = e->unk_24;
        *arg4 = e->unk_28;
        *arg5 = e->unk_2C;
        func_08852D00(arg1);
        func_08852C5C(arg1, arg0->unk_1F08, 0);
        func_0885303C(arg1, 0xA0, 1);
        if (arg0->unk_1F10 != 0) {
            it.unk_00 = arg0->unk_1F14;
            arg0->unk_1F10 = 0;
        } else {
            it.next();
        }
    }
    arg0->unk_1F0C = 0;
}

}
