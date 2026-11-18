#include "common.h"

extern "C" {

class T {
public:
    virtual void unk_08();
    virtual s32 unk_0C();
    virtual s32 unk_10();
};

typedef struct {
    u8 pad_00[8];
    void **unk_08;
} U;

typedef struct {
    u8 pad_00[0x70];
    T unk_70;
    u8 pad_74[0xC];
    s32 unk_80;
    s32 unk_84;
    u8 pad_88[0x8CA4];
    u8 unk_8D2C[0x28];
    u8 unk_8D54[0x28];
    u8 unk_8D7C;
    u8 pad_8D7D[3];
    f32 unk_8D80;
} S;

s32 func_0896217C(void *);
void func_08962990(T *, f32);
s32 func_089629E8(void *, U *);
U *func_08962A54(void *);
s32 func_08962AB0(void *);

inline void **func_00(S *arg0) {
    s32 temp;
    U *q;
    f32 x;
    f32 y;

    temp = arg0->unk_70.unk_0C();
    if (!(temp < arg0->unk_70.unk_10())) {
        return NULL;
    }
    if (func_08962AB0(arg0->unk_8D54) != 0) {
        return NULL;
    }
    q = func_08962A54(arg0->unk_8D54);
    if (q == NULL) {
        return NULL;
    }
    if ((u8)func_089629E8(arg0->unk_8D2C, q) == 0) {
        return NULL;
    }
    arg0->unk_84 = func_0896217C(arg0->unk_8D2C);
    x = (f32)arg0->unk_84 / (f32)arg0->unk_80;
    if (arg0->unk_8D7C != 0) {
        y = arg0->unk_8D80;
        if (x > y) {
            func_08962990(&arg0->unk_70, 0.05f + y);
        }
    }
    return q->unk_08;
}

void **func_0896285C(S *arg0, void *arg1) {
    void **p;
    if ((p = func_00(arg0)) != NULL) {
        *p = arg1;
    }
    return p;
}

}
