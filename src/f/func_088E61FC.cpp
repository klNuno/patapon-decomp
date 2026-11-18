#include "common.h"

extern "C" {

class Cls_088E61FC {
public:
    virtual void func_slot0();
    virtual void func_slot1(s32, s32 *, s32);
};

class Local_088E61FC {
public:
    s32 unk_00;
    Cls_088E61FC *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 func_count() const { return unk_0C != NULL ? *unk_0C : 0; }
};

u8 func_08853298(s32, Local_088E61FC *);
void func_08853A80(s32, s32);
void func_088E66EC(Local_088E61FC *);

u8 func_088E61FC(s32 arg0) {
    Local_088E61FC local;
    u8 ret;

    func_088E66EC(&local);
    ret = func_08853298(arg0, &local);
    if (local.unk_08 != 0) {
        (*local.unk_0C)--;
        if (local.func_count() == 0) {
            local.unk_04->func_slot1(local.unk_08, local.unk_0C, local.unk_00);
            func_08853A80(local.unk_08, local.unk_00);
        }
    }
    return ret;
}

}
