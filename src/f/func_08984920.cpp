#include "common.h"

extern "C" {

class V {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual s32 unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28(f32 *, f32 *, f32 *);
};

struct O_08909BEC {
    u8 pad_00[0x8D0];
    u8 unk_8D0;
};

struct W {
    u8 pad_00[0x2E3C0];
    u8 unk_2E3C0[1];
};

struct T;
typedef void (T::*P)();

struct T {
    W *unk_00;
    u8 pad_04[0x15C];
    s32 unk_160;
    u8 unk_164;
    u8 pad_165[7];
    O_08909BEC *unk_16C;
    u8 pad_170[0x4CC];
    T *unk_63C;
    P unk_640;
    u8 unk_64C;
    u8 pad_64D[3];
    f32 unk_650;
    f32 unk_654;
};

s32 func_088586E8(void);
void func_088D45F4(O_08909BEC *);
void func_08956380(void *, s32, s32);
extern void *func_08958954(u8 *);
void func_0897C3F4(f32, void *, s32);
void func_08984B54(T *, u32, V *);
void func_08984C38(T *, u32, V *);
void func_0898584C(char *arg0, s32 arg1);
u8 *func_089B53D8(s32);

void func_08984920(T *arg0, u32 arg1)
{
    f32 a;
    f32 b;
    f32 c;
    f32 d;
    V *o;
    f32 x;
    f32 *p;

    o = (V *)func_08958954(arg0->unk_00->unk_2E3C0);
    if (o != NULL) {
        if (arg0->unk_164 == 1) {
            func_08984B54(arg0, arg1, o);
        } else {
            func_08984C38(arg0, arg1, o);
        }
        if (o->unk_14() != 0) {
            a = 0.0f;
            b = 0.0f;
            c = 0.0f;
            o->unk_28(&a, &b, &c);
            if (1.0f == b) {
                func_0898584C((char *)arg0, 0);
            } else {
                if (b >= 0.6f) {
                    func_0898584C((char *)arg0, 1);
                } else {
                    func_0898584C((char *)arg0, 2);
                }
            }
            if (arg0->unk_16C != NULL) {
                func_088D45F4(arg0->unk_16C);
                arg0->unk_16C->unk_8D0 = 0;
                arg0->unk_16C = NULL;
            }
            func_08956380(arg0->unk_00->unk_2E3C0, 0, 1);
            func_0897C3F4(1.0f, func_089B53D8(func_088586E8()) + 0x14, 0);
            arg0->unk_160 = 2;
        }
    }
    if (arg0->unk_64C == 1) {
        x = arg0->unk_650;
        d = x + (f32)arg1 / 4800.0f;
        p = d < arg0->unk_654 ? &d : &arg0->unk_654;
        arg0->unk_650 = *p;
        if (arg0->unk_650 >= arg0->unk_654 && arg0->unk_640) {
            (arg0->unk_63C->*arg0->unk_640)();
        }
    }
}

}
