#include "common.h"

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} W_088E941C;

typedef struct {
    u8 pad_00[0x14];
    W_088E941C *unk_14;
} A_088E941C;

void func_08852F00(void *, s32);
s32 func_08852BA8(void *);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_08890D90(s32, s32);
s32 func_08894FBC(s32, s32, s32);
void func_08897AC0(s32, s32, s32, f32, f32);
s32 func_08899E18(s32, s32);

void func_088E941C(A_088E941C *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 *c;
    f32 *d;
    s32 *e;
    W_088E941C *w;
    s32 r;
    s32 t;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = (f32 *)func_0885356C(arg1, 3, 1, 4);
    e = func_0885356C(arg1, 4, 0, 4);
    t = func_08852BA8(arg1);
    t += *e;
    w = arg0->unk_14;
    if (w != NULL && !(*a != 0 && *a != 1)) {
        r = func_08894FBC(func_08899E18(w->unk_36B10, *a), *b, 1);
        if (r != 0) {
            r = func_08890D90(r, *c);
            if (r != 0) {
                func_08897AC0(r, t, 0, *d, 0.0f);
            }
        }
    }
    func_08852F00(arg1, 0);
}
