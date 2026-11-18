#include "common.h"

extern "C" {

s32 func_0880ADA4(struct It *, struct It *);

typedef struct It {
    s32 unk_00;

    bool ne(struct It *o) {
        return !(bool)func_0880ADA4(this, o);
    }
} It;

typedef struct {
    u8 pad_00[0x34];
    u8 unk_34;
    u8 pad_35;
    u8 unk_36;
    u8 unk_37;
    u8 unk_38;
} S0;

s32 func_0880A97C(S0 *, s32);
u8 func_0880AD9C(It *);
s32 func_0880ADB8(void);
s32 func_0880ADC0(u8 *);

s32 func_08808010(S0 *arg0) {
    It it;
    It end;
    s32 found;

    if (arg0->unk_37 != 0) {
        arg0->unk_37 = 0;
        return func_0880ADC0(&arg0->unk_34);
    }
    it.unk_00 = func_0880A97C(arg0, 1);
    found = 0;
    if (arg0->unk_36 != 0) {
        end.unk_00 = func_0880ADB8();
        if (it.ne(&end)) {
            found = 1;
        }
    }
    if (found) {
        arg0->unk_34 = func_0880AD9C(&it);
        arg0->unk_38 = 1;
    }
    return it.unk_00;
}

}
