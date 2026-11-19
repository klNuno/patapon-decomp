#include "common.h"

extern "C" {

s32 func_08808B04(u16 *);

class T0 {
public:
    virtual void unk_08();
    virtual void unk_0C();
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
    virtual void unk_38(s32);
};

typedef struct {
    u8 pad_00[0x14];
    u32 *unk_14;
    u32 *unk_18;
} T;

void func_08808A94(T *arg0, u16 arg1) {
    volatile struct {
        u16 unk_00;
        u16 pad_02;
    } temp;
    temp.unk_00 = arg1;
    u32 *ptr = arg0->unk_14;
    if (ptr < arg0->unk_18) {
        u16 unk_00 = temp.unk_00;
        arg0->unk_14 = ptr + 1;
        *(u16 *)ptr = unk_00;
        func_08808B04((u16 *)ptr);
    } else {
        s32 unk_00 = func_08808B04((u16 *)&temp.unk_00);
        ((T0 *)arg0)->unk_38(unk_00);
    }
}

}
