#include "common.h"

struct T1 {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[4];
};

struct T2 {
    T1 *unk_00;
};

class T3 {
public:
    void *unk_00;
    u8 pad_04[0x18];
    virtual void unk_08(s32);
};

class T4 {
public:
    u8 pad_00[0x2760];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
};

struct T5 {
    u8 pad_00[0x11F8];
    T2 unk_11F8;
    u8 pad_11FC[0x14];
    T3 unk_1210;
    T4 *unk_1230;
};

extern "C" {

s32 func_089B0EA4(T5 *, s32);
s32 func_089B1314(s32);
s8 *func_089B135C(s32);
s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_08878864(s32, void *, s32, f32, f32, f32);

void func_089B0DB8(T5 *arg0, s32 arg1) {
    T2 *p = &arg0->unk_11F8;
    s32 off = arg1 * 0x10;
    if (func_089B0EA4(arg0, func_089B1314(((T1 *)((u8 *)p->unk_00 + off))->unk_08)) != 0) {
        if (*func_089B135C(((T1 *)((u8 *)p->unk_00 + off))->unk_08) > 0) {
            func_08878864(func_089B53D8(func_088586E8()), NULL, 2, 1.0f, 0.0f, 0.0f);
            if (arg0->unk_1210.unk_00 != NULL) {
                arg0->unk_1210.unk_08(func_089B1314(((T1 *)((u8 *)p->unk_00 + off))->unk_08));
            }
            arg0->unk_1230->unk_28();
        }
    }
}

}
