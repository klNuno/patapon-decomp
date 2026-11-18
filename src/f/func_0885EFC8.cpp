#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0xAC];
    s32 unk_AC;
} O_0885EFC8;

struct N_0885EFC8 {
    s32 unk_00;
    N_0885EFC8 *unk_04;
    O_0885EFC8 *unk_08;

    int eq2(N_0885EFC8 *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(N_0885EFC8 *o) {
        int r = 0;
        if (eq2(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(N_0885EFC8 *o) { return !(bool)eq(o); }
};

typedef struct {
    u8 pad_00[0x110];
} E_0885EFC8;

struct S_0885EFC8 {
    u8 pad_00[0x14];
    s32 unk_14;
    u8 pad_18[8];
    E_0885EFC8 unk_20[0x80];
    u8 pad_8820[0x1000];
    N_0885EFC8 unk_9820;
    u8 pad_982C[0x1C];
    u8 unk_9848[0x58];
    s32 unk_98A0;
    N_0885EFC8 *end() { return &unk_9820; }
};

void func_0885FE90(O_0885EFC8 *);
void func_0885FB2C(O_0885EFC8 *, s32);
s32 func_0885F204(S_0885EFC8 *, O_0885EFC8 *);
s32 func_0885F13C(N_0885EFC8 *, E_0885EFC8 *);
void func_0885E4AC(N_0885EFC8 *, s32);
void func_0885E330(u8 *, s32);
s32 func_0885E854(N_0885EFC8 *);

void func_0885EFC8(S_0885EFC8 *arg0) {
    struct {
        N_0885EFC8 *unk_00;
    } it;
    N_0885EFC8 *cur;
    s32 n;
    s32 idx;
    s32 r;

    it.unk_00 = arg0->unk_9820.unk_04;
    for (n = 0; it.unk_00->ne(arg0->end());) {
        cur = it.unk_00;
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
        O_0885EFC8 *o = cur->unk_08;
        if (o->unk_AC != 0) {
            func_0885FE90(o);
            n++;
        }
        if (n >= arg0->unk_98A0) {
            return;
        }
        if (o->unk_AC == 0) {
            func_0885FB2C(o, 0);
            idx = func_0885F204(arg0, o);
            if (idx != -1) {
                r = func_0885F13C(&arg0->unk_9820, &arg0->unk_20[idx]);
                if (r != 0) {
                    func_0885E4AC(&arg0->unk_9820, r);
                    func_0885E330(arg0->unk_9848, r);
                    arg0->unk_14 = func_0885E854(&arg0->unk_9820);
                }
            }
        }
    }
}

}
