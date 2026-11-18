#include "common.h"

extern "C" {

struct Obj_0889D5E8 {
    u8 pad_00[0x80];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual s32 v4();
    u8 pad_84[0x404 - 0x84];
    s32 unk_404;
    u8 pad_408[0x5B8 - 0x408];
    s32 unk_5B8;
    u8 unk_5BC;
};

s32 func_0882160C(void);
void func_08965B88(s32, s32, s32);

void func_0889D5E8(Obj_0889D5E8 *arg0) {
    if (arg0->unk_404 != 0) {
        func_08965B88(arg0->unk_404, 1, (func_0882160C() % 10) == 0);
        arg0->unk_5BC = arg0->unk_5B8 != arg0->v4();
        arg0->unk_5B8 = arg0->v4();
    }
}

}
