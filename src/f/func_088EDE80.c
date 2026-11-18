#include "common.h"

typedef struct {
    u8 pad_00[0x7D50];
    u8 unk_7D50[0x4];
} R_088EDE80;

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} W_088EDE80;

typedef struct {
    u8 pad_00[0x14];
    W_088EDE80 *unk_14;
    s32 unk_18;
} A_088EDE80;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_089A8D10(s32, s32);
void func_088AE2A8(void *);
void func_0882687C(u16 *, void *);
R_088EDE80 *func_08899E18(s32, s32);
void func_088B47F4(u8 *, f32, f32, u16 *, s32);

void func_088EDE80(A_088EDE80 *arg0, void *arg1) {
    u16 buf[0x400];
    s32 *a;
    f32 *b;
    f32 *c;
    u32 *d;
    void *s;
    W_088EDE80 *w;
    R_088EDE80 *r;
    u8 *q;

    a = func_0885356C(arg1, 0, 1, 4);
    b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    d = (u32 *)func_0885356C(arg1, 3, 1, 4);
    s = (void *)func_089A8D10(arg0->unk_18, *d);
    func_088AE2A8(s);
    func_0882687C(buf, s);
    w = arg0->unk_14;
    if (w != NULL && !(*a != 0 && *a != 1)) {
        r = func_08899E18(w->unk_36B10, *a);
        if (r != NULL) {
            q = r->unk_7D50;
            if (q != NULL) {
                func_088B47F4(q, *b, *c, buf, 0);
            }
        }
    }
    func_08852F00(arg1, 0);
}
