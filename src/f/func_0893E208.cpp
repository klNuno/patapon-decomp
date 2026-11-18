#include "common.h"

extern "C" {

class T {
public:
    u8 pad_00[0x10];
    virtual void unk_08();
    virtual s32 unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
    virtual void unk_30();
    virtual void unk_34();
    virtual void unk_38();
    virtual void unk_3C();
    virtual u32 unk_40();
    virtual void unk_44();
    virtual void unk_48();
    virtual void unk_4C();
    virtual void unk_50(void *, u32, s32, s32);
};

class A {
public:
    virtual u8 *unk_08(u32, s32);
    virtual void unk_0C();
    virtual void unk_10(void *);
};

struct S {
    A *unk_00;
    T *unk_04;
    u8 *unk_08;
    s32 unk_0C;
    s32 unk_10;
    u32 unk_14;
    s32 unk_18;
    s32 unk_1C;

    void unk_20() {
        if (unk_00 != NULL && unk_08 != NULL) {
            unk_00->unk_10(unk_08);
        }
        unk_04 = NULL;
        unk_08 = NULL;
        unk_0C = 0;
        unk_14 = 0;
        unk_10 = -1;
        unk_18 = -1;
        unk_1C = -1;
    }
};

void func_0893E208(S *arg0, T *arg1, s32 arg2) {
    u32 n;
    u32 i;
    u32 j;

    if (arg1 == NULL) {
        arg0->unk_20();
        arg0->unk_04 = arg1;
        return;
    }
    if (arg1->unk_0C() != 0) {
        arg0->unk_20();
        arg0->unk_04 = arg1;
        return;
    }
    n = arg1->unk_40();
    if (arg2 != 0 && arg0->unk_14 < n) {
        arg0->unk_20();
        arg0->unk_04 = arg1;
        if (arg1->unk_0C() == 0) {
            n = arg1->unk_40();
            arg0->unk_08 = arg0->unk_00->unk_08(n << 6, 0x10);
            i = 0;
            if (n != 0) {
                j = 0;
                do {
                    arg0->unk_04->unk_50(arg0->unk_08 + j, i, 0, 0);
                    ++i;
                    j += 0x40;
                } while (i < n);
            }
            arg0->unk_14 = n;
        }
    }
    arg0->unk_04 = arg1;
    arg0->unk_0C = 0;
    arg0->unk_10 = -1;
    arg0->unk_18 = -1;
    arg0->unk_1C = -1;
}

}
