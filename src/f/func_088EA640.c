#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    u8 *unk_14;
} A;

void func_08852C5C(void *, s32, s32);
void func_08852D00(void *);
void func_08852F00(void *, s32);
void func_0885303C(void *, s32, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void *func_08895BC4(void *, s32);
void *func_08899E18(s32, s32);
s32 func_0893F2BC(void *, u32);
u32 func_0893F2F4(void *);
s32 func_0893F2FC(void *, u32, s32, void *);

void func_088EA640(A *arg0, void *arg1) {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 *e;
    void *g;
    void *h;
    u32 n;
    s32 cnt;
    u32 i;

    a = *func_0885356C(arg1, 0, 1, 4);
    b = *func_0885356C(arg1, 1, 1, 4);
    c = *func_0885356C(arg1, 2, 1, 4);
    d = *func_0885356C(arg1, 3, 0, 4);
    e = func_0885356C(arg1, 4, 1, 4);
    func_08852F00(arg1, 0);
    g = func_08899E18(*(s32 *)(arg0->unk_14 + 0x36B10), 1);
    h = func_08895BC4(g, a);
    n = func_0893F2F4(h);
    cnt = 0;
    for (i = 0; i < n; i++) {
        if ((u8)func_0893F2FC(h, i, c, g) != 0) {
            *e = func_0893F2BC(h, i);
            func_08852D00(arg1);
            func_08852C5C(arg1, d, 0);
            func_0885303C(arg1, 0xA0, 1);
            if (++cnt >= b) {
                return;
            }
        }
    }
}
