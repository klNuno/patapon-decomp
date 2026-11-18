#include "common.h"

extern "C" {

typedef struct {
    u8 unk_00;
    u8 unk_01;
    u8 pad_02[6];
} S_088093BC;

typedef struct {
    s32 unk_00;
} Obj_088093BC;

void func_0880CC88(S_088093BC *, Obj_088093BC *);
s32 func_088065CC(s32);
s32 func_0880954C(s32);
s32 func_08809308(s32);
void func_088063A4(s32, s32);
s32 func_08809300(s32);
s32 func_0880639C(s32, s32);
void func_08806144(s32, s32);
void func_088094BC(S_088093BC *, s32);

Obj_088093BC *func_088093BC(Obj_088093BC *arg0) {
    S_088093BC s;
    s32 bad;

    func_0880CC88(&s, arg0);
    s.unk_01 = 1;
    if (func_088065CC(arg0->unk_00) != 0) {
        bad = 0;
        try {
            if (func_0880954C(func_088065CC(arg0->unk_00)) == -1) {
                bad = 1;
            }
        } catch (...) {
            func_088063A4(func_08809308(arg0->unk_00), 1);
            if (func_0880639C(func_08809300(arg0->unk_00), 1) != 0) {
                throw;
            }
        }
        if (bad) {
            func_08806144(arg0->unk_00, 1);
        }
    }
    func_088094BC(&s, -1);
    return arg0;
}

}
