#include "common.h"

extern "C" {
s32 func_08808A80(s32 *, s32 *);
s32 func_08808980(void);
s32 func_08808B04(s32);

class Base {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual s32 unk_28();
};

struct Obj : Base {
    u8 pad_04[4];
    s32 unk_08;
};

void func_08808BB0(Obj *arg0)
{
    s32 temp1;
    s32 temp0;
    temp0 = func_08808980();
    temp1 = arg0->unk_28();
    if (func_08808A80(&temp1, &temp0) != 0) {
        func_08808980();
    } else {
        s32 temp = arg0->unk_08;
        arg0->unk_08 = temp + 4;
        func_08808B04(temp);
    }
}
}
