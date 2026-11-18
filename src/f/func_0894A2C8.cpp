#include "common.h"

extern "C" {

u32 func_08822BC4(s8 *);
void func_0881F120(void *, void *, u32);
extern s8 D_08A04156[];

class Str_0894A2C8 {
public:
    u32 unk_00;
    s8 unk_04[1];

    int in(s8 *p) {
        if (p < unk_04 || (s8 *)(unk_00 + (u32)this + 4) <= p) return 0; return 1;
    }
    Str_0894A2C8 *assign(s8 *p, u32 len) {
        if (in(p)) {
            return this;
        }
        func_0881F120(unk_04, p, len);
        unk_00 = len;
        unk_04[len] = D_08A04156[0];
        return this;
    }
};

Str_0894A2C8 *func_0894A2C8(Str_0894A2C8 *arg0, s8 *arg1) {
    return arg0->assign(arg1, func_08822BC4(arg1));
}

}
