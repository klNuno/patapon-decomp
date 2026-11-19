#include "common.h"

extern "C" {

struct E_089C4A74 {};

struct N_089C4A74 {
    N_089C4A74 *unk_00;
    N_089C4A74 *unk_04;
    char *unk_08;
    int eq4(N_089C4A74 *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(N_089C4A74 *o) {
        int r = 0;
        if (eq4(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(N_089C4A74 *o, const E_089C4A74 &, const E_089C4A74 &) { return !(bool)eq(o); }
};

struct It_089C4A74 {
    N_089C4A74 *unk_00;
    void next() {
        if (unk_00 != NULL) {
            unk_00 = unk_00->unk_04;
        }
    }
};

typedef struct {
    u8 pad_00[0xC];
    u8 unk_0C[0x14C];
    N_089C4A74 unk_158;
    u8 pad_164[0x1B0];
    s32 unk_314;
} T_089C4A74;

s32 func_089C3DA4(char *arg0);
void func_089C3D9C(char *arg0, s32 arg1);
s32 func_089C3EE4(char *arg0);
void func_089C3DAC(char *arg0, s32 arg1);
void func_08945F18(void *arg0, s32 arg1, s32 arg2);

void func_089C4A74(T_089C4A74 *arg0) {
    It_089C4A74 it;
    It_089C4A74 e;

    arg0->unk_314++;
    {
        it.unk_00 = arg0->unk_158.unk_04;
        e.unk_00 = &arg0->unk_158;
        while (it.unk_00->ne(e.unk_00, E_089C4A74(), E_089C4A74())) {
            char *o = *(char *volatile *)&it.unk_00->unk_08;
            if (func_089C3DA4(o) == 0) {
                s32 r;
                func_089C3D9C(o, arg0->unk_314);
                r = func_089C3EE4(o);
                if (r != 0x24) {
                    func_08945F18(arg0->unk_0C, r, 1);
                }
                break;
            }
            it.next();
        }
    }
    {
        it.unk_00 = arg0->unk_158.unk_04;
        while (it.unk_00->ne(e.unk_00, E_089C4A74(), E_089C4A74())) {
            s32 temp = *(volatile s32 *)&arg0->unk_314;
            func_089C3DAC(*(char *volatile *)&it.unk_00->unk_08, temp);
            it.next();
        }
    }
}

}
