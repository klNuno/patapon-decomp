#include "common.h"

extern "C" {

class C_08874AD4 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual s32 unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
    virtual void unk_30();
    virtual void unk_34();
    virtual void *unk_38(s32);
    virtual void unk_3C();
    virtual void unk_40();
    virtual void unk_44();
    virtual void unk_48(void *);
};

void func_08874AD4(C_08874AD4 *arg0, C_08874AD4 *arg1) {
    s32 n;
    s32 i;

    n = arg1->unk_10();
    for (i = 0; i < n; i++) {
        arg0->unk_48(arg1->unk_38(i));
    }
}

}
