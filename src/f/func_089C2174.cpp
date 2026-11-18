#include "common.h"

extern "C" {

struct T {
    virtual void func_00();
    virtual void func_04();
    virtual void func_08();
    virtual s32 func_0C();
    virtual void func_10();
    virtual void func_14();
    virtual void func_18();
    virtual void func_1C();
    virtual void func_20(s32 *, f32 *, s32 *);
};

struct U {
    u8 pad_00[8];
    s32 unk_08;
};

struct V {
    u8 pad_00[0x2E3C0];
    u8 unk_2E3C0[1];
};

struct S {
    V *unk_00;
    u8 pad_04[0x15C];
    s32 unk_160;
    u8 pad_164[0x2A8];
    f32 unk_40C;
    s32 unk_410;
    s32 unk_414;
};

T *func_08958954(void *);
s32 func_08985828(s32, s32);
void func_0898ABB8(s32, s32, s32, f32);
U *func_089BD3E4(T *);
s32 func_089BD3F4(T *);
s32 func_089BD3FC(T *);
s32 func_089BD404(T *);
s32 func_089BD40C(T *);
void func_089C2528(S *, s32, T *);
void func_089C2800(S *, s32, T *);
void func_089C2AEC(S *, s32, s32);
void func_089C2CA8(S *, s32);
s32 func_089C2E40(S *);
s32 func_089C3134(S *);

extern s32 D_089F2E20[];

void func_089C2174(S *arg0, s32 arg1)
{
    s32 a;
    s32 b;
    T *p = func_08958954(arg0->unk_00->unk_2E3C0);
    if (p == NULL) {
        return;
    }

    U *q = func_089BD3E4(p);
    func_089BD3F4(p);
    if (q != NULL) {
        switch (q->unk_08) {
        case 0x10001: {
            s32 x = func_08985828((s32)arg0, 1);
            func_0898ABB8(x, D_089F2E20[func_089BD404(p)], 0, 0.0f);
            break;
        }
        case 0x10002:
            func_0898ABB8(func_08985828((s32)arg0, 1), 6, 0, 0.0f);
            func_0898ABB8(func_08985828((s32)arg0, 1), 7, 1, 0.6f);
            arg0->unk_160 = 3;
            if (func_089C3134(arg0)) {
                func_089C2AEC(arg0, func_089BD3FC(p), 1);
            }
            break;
        case 0x10003:
            func_0898ABB8(func_08985828((s32)arg0, 1), 8, 0, 0.0f);
            func_0898ABB8(func_08985828((s32)arg0, 1), 9, 1, 0.6f);
            func_089C2AEC(arg0, func_089BD404(p), 0);
            break;
        case 0x10004:
            if (arg0->unk_160 == 1) {
                arg0->unk_414 = func_089BD404(p);
            }
            func_0898ABB8(func_08985828((s32)arg0, 1), 0xA, 0, 0.0f);
            func_0898ABB8(func_08985828((s32)arg0, 1), 0xB, 1, 0.6f);
            arg0->unk_160 = 2;
            break;
        case 0x10005:
            break;
        }
    }

    switch (arg0->unk_160) {
    case 2:
        func_089C2528(arg0, arg1, p);
        break;
    case 3:
        func_089C2800(arg0, arg1, p);
        break;
    }
    if (arg0->unk_160 == 6) {
        p->func_18();
        func_089C2CA8(arg0, 4);
    } else if (p->func_0C() != 0) {
        a = 0;
        b = 0;
        arg0->unk_40C = 0.0f;
        p->func_20(&a, &arg0->unk_40C, &b);
        arg0->unk_410 = func_089BD40C(p);
        if (func_089C2E40(arg0)) {
            f32 x = arg0->unk_40C;
            if (x <= 0.8f) {
                func_089C2CA8(arg0, 1);
            } else if (x <= 0.95f) {
                func_089C2CA8(arg0, 3);
            } else {
                func_089C2CA8(arg0, 2);
            }
        } else if (arg0->unk_410 >= 4) {
            func_089C2CA8(arg0, 1);
        } else {
            func_089C2CA8(arg0, 0);
        }
    }
}

}
