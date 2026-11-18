#include "common.h"

extern "C" {

struct A_089D1CA4 {
    virtual s32 *v08(s32, s32);
    virtual void v0C(s32, s32 *, s32);
};

struct H_089D1CA4 {
    s32 unk_00;
    A_089D1CA4 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
};

typedef struct {
    u8 pad_00[0x890];
    f32 unk_890;
    f32 unk_894;
} O;

typedef struct {
    u8 pad_00[0x109B0];
    u8 unk_109B0[0x80];
    s32 unk_10A30;
    s32 unk_10A34;
    u8 unk_10A38;
} T;

void func_0881F5C0(void *, s32, s32);
void *func_08827A50(s32, s32);
extern s32 func_08827AD4(void);
void func_08874714(s32, s32);
void func_088F0E98(char *arg0, f32 fparg0, f32 fparg1);
void *func_0897CF28(void *, s32);
void func_089D0A5C(H_089D1CA4 *, void *);
void func_089D0AC0(T *, H_089D1CA4 *);

inline void func_00(H_089D1CA4 &arg0) {
    s32 *temp;
    if (arg0.unk_08 != 0) {
        **(s32 *volatile *)&arg0.unk_0C -= 1;
        temp = *(s32 *volatile *)&arg0.unk_0C;
        if ((temp != NULL ? *temp : 0) == 0) {
            arg0.unk_04->v0C(arg0.unk_08, arg0.unk_0C, arg0.unk_00);
            func_08874714(arg0.unk_08, arg0.unk_00);
        }
    }
}

T *func_089D05EC(T *arg0, s32 arg1, s32 arg2) {
    H_089D1CA4 temp_30;
    H_089D1CA4 temp_20;
    s32 temp;
    s32 *q;
    O *r;

    temp = (s32)func_08827A50(0xA20, arg1);
    if (temp != 0) {
        temp = (s32)func_0897CF28((void *)temp, arg2);
    }

    temp_20.unk_00 = arg1;
    temp_20.unk_04 = (A_089D1CA4 *)func_08827AD4();
    temp_20.unk_08 = temp;
    q = temp_20.unk_04->v08(temp, *(volatile s32 *)&temp_20.unk_00);
    temp_20.unk_0C = q;
    *q = 1;
    func_089D0AC0(arg0, &temp_20);
    func_00(temp_20);

    arg0->unk_10A30 = 0;
    arg0->unk_10A34 = 0;
    arg0->unk_10A38 = 0;
    func_0881F5C0(arg0->unk_109B0, 0, 0x80);
    func_089D0A5C(&temp_30, arg0);
    func_088F0E98((char *)temp_30.unk_08, 0.0f, 0.0f);
    r = (O *)temp_30.unk_08;
    r->unk_890 = 0.0f;
    r->unk_894 = 0.0f;
    func_00(temp_30);
    return arg0;
}

}
