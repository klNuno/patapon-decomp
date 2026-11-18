#include "common.h"
extern "C" {
struct E {
    u8 pad_00[0x58];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual s32 v8();
};
struct V {
    E **unk_00;
    u32 unk_04;

};
struct T {
    u8 pad_00[0x48];
    V unk_48;
};
E *func_089B3620(T *arg0, s32 arg1) {
    u32 i;
    u32 j;
    E *e;
    V *v;
    i = 0;
    if (arg0->unk_48.unk_04 != 0) {
        j = 0;
        v = &arg0->unk_48;
        do {
            e = *(E **)((u8 *)v->unk_00 + j);
            if (e->v8() == arg1) {
                return e;
            }
            i++;
            j += 4;
        } while (i < arg0->unk_48.unk_04);
    }
    return NULL;
}
}
