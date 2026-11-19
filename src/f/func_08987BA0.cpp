#include "common.h"

extern "C" {

typedef struct { f32 unk_00, unk_04; } V;
typedef struct {
    u8 pad_00[8];
    V *unk_08;
    u8 pad_0C[0xC];
    f32 unk_18, unk_1C;
} T;

class C {
public:
    u8 pad_00[0x91C];
    virtual void unk_08();
    virtual void unk_0C();
    virtual f32 *unk_10();
};

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    s8 *unk_14;
} R;

typedef struct {
    u8 pad_00[0xC];
    T *unk_0C;
    u8 pad_10[8];
    f32 unk_18, unk_1C;
    f32 unk_20[6];
    C *unk_38;
} S;

typedef struct { u8 pad_00[0x18]; } W;

extern u8 *D_08AD1F14[];
s32 func_089A8B74(u8 *, s32);
void func_088AF2FC(V *, T *, u16 *);
void func_088AE388(void *, void *, f32 *, u8 *, f32, f32);

inline void func_00(W *arg0, S *arg1, s32 arg2, const V &arg3, f32 arg4, f32 arg5) {
    f32 arg6 = 0.5f;
    f32 a0 = arg4;
    f32 a1 = arg3.unk_00;
    f32 a = a0 * arg6 - a1 * arg6;
    f32 b0 = arg5;
    f32 b1 = arg3.unk_04;
    f32 b = b0 * arg6 - b1 * arg6;
    func_088AE388(arg0, arg1->unk_0C, arg1->unk_20, (u8 *)arg2,
                  a + arg1->unk_18, b + arg1->unk_1C);
}

s32 func_08987BA0(R *arg0, S *arg1) {
    V temp;
    W temp2;
    f32 x;
    f32 *p;
    T *q;
    s32 n;
    u8 *r;

    if (arg0->unk_14 == NULL || *arg0->unk_14 == 0) {
        return 0;
    }
    x = 0.6f * (f32)arg0->unk_10;
    if (D_08AD1F14[0] != NULL) {
        r = D_08AD1F14[0];
    } else {
        r = NULL;
    }
    n = func_089A8B74(r + 0x2460, 0x2002A);
    q = arg1->unk_0C;
    V *v = q->unk_08;
    q->unk_18 = x - v->unk_00;
    q->unk_1C = x - v->unk_04;
    func_088AF2FC(&temp, arg1->unk_0C, (u16 *)n);
    p = arg1->unk_38->unk_10();
    func_00(&temp2, arg1, n, temp, p[0], (f32)arg0->unk_10);
    return 0;
}

}
