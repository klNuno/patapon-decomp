#include "common.h"

extern "C" {

extern void func_08865FEC(s32, s32, s32);
s32 func_08868CAC(void *, s32, char *, s32);
extern void *D_08AD1E28[];
extern char D_08A0198C[];

class Unk00 {
public:
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32, s32);
};

struct Unk01 {
    u8 pad_00[0x240];
    Unk00 unk_240;
};

void func_0891CC38(Unk01 *arg0) {
    void *temp = D_08AD1E28[0];
    func_08865FEC((s32)&arg0->unk_240,
        func_08868CAC(temp != NULL ? temp : NULL, 6, D_08A0198C, 1), 1);
    arg0->unk_240.unk_14(0, 0);
}

}
