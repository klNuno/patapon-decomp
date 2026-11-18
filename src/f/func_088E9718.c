#include "common.h"

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} T;

typedef struct {
    u8 pad_00[0x14];
    T *unk_14;
} S;

typedef struct {
    u8 pad_00[0x7D50];
    u8 unk_7D50[1];
} U;

extern void func_08852F00(void *, s32);
extern s32 *func_0885356C(void *, s32, s32, s32);
extern s32 func_08852BA8(void *);
extern void *func_08899E18(s32, s32);
extern void func_088B4788(u8 *, s32, s32, f32, f32);

void func_088E9718(S *arg0, void *arg1) {
    s32 *a = func_0885356C(arg1, 0, 1, 4);
    f32 *b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    f32 *c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    s32 *d = func_0885356C(arg1, 3, 0, 4);
    s32 t = func_08852BA8(arg1);
    T *p;
    s32 u;
    U *v;
    u8 *w;
 
    t += *d;
    p = arg0->unk_14;

    if (p != NULL) {
        u = *a;
        if (!(u != 0 && u != 1)) {
            v = (U *)func_08899E18(p->unk_36B10, u);
            if (v != NULL) {
                w = v->unk_7D50;
                if (w != NULL) {
                    func_088B4788(w, t, 0, *b, *c);
                }
            }
        }
    }
    func_08852F00(arg1, 0);
}
