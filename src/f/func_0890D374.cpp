#include "common.h"

extern "C" {
typedef struct {
    s64 *unk_00;
    u32 unk_04;
} Sub;

class Obj {
public:
    virtual void unk_08();
    virtual void unk_0C();
};

class Obj2 : public Obj {
public:
    u8 pad_04[0xE80];
    Sub unk_E84;
};

void func_0890D374(Obj2 *arg0) {
    s64 *temp;
    u32 off;
    Sub *sub;
    s64 *end;

    arg0->unk_0C();
    temp = arg0->unk_E84.unk_00;
    off = arg0->unk_E84.unk_04;
    sub = &arg0->unk_E84;
    if ((u32)temp != (u32)(temp + off)) {
        end = *(s64 *volatile *)&sub->unk_00 + off;
        do {
            ++temp;
        } while (temp != end);
    }
    arg0->unk_E84.unk_04 = 0;
}
}
