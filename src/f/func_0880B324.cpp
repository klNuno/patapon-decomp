#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x34];
    s16 unk_34;
    u8 pad_36[0x3];
    u8 unk_39;
    u8 unk_3A;
    u8 unk_3B;
} Obj_0880B324;

s32 func_08808A80(void *, void *);

class It_0880B324 {
public:
    s32 unk_00;
    bool unk_eq(It_0880B324 *o) { return !(bool)func_08808A80(this, o); }
};

s32 func_08808B04(s16 *);
s32 func_0880D3D4(Obj_0880B324 *, u8);
s32 func_08808980(void);
s16 func_08808D40(It_0880B324 *);

s32 func_0880B324(Obj_0880B324 *arg0) {
    It_0880B324 sp1C;
    It_0880B324 sp18;
    bool ok;

    if (arg0->unk_3A != 0) {
        return func_08808B04(&arg0->unk_34);
    }
    sp1C.unk_00 = func_0880D3D4(arg0, arg0->unk_39);
    ok = false;
    if (arg0->unk_39 != 0) {
        sp18.unk_00 = func_08808980();
        if (sp1C.unk_eq(&sp18)) {
            ok = true;
        }
    }
    if (ok) {
        arg0->unk_34 = func_08808D40(&sp1C);
        arg0->unk_3A = 1;
        arg0->unk_3B = 1;
    }
    return sp1C.unk_00;
}

}
