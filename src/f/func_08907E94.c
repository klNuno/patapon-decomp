#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
u8 *func_08852BA8(void *);
void func_088EF528(void *, void *);
void *func_088EF608(u8 *, u8 *, u8 *, s32 *, u8 *);
extern u8 D_08AD815C[];

void func_08907E94(void *arg0, void *arg1) {
    s32 d;
    u8 buf[0x424];
    s32 *a;
    s32 *b;
    s32 *c;
    s32 *e;
    void *obj;
    u8 *s1;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 0, 4);
    c = func_0885356C(arg1, 2, 0, 4);
    e = func_0885356C(arg1, 3, 0, 4);
    obj = (void *)*a;
    d = *e;
    s1 = func_08852BA8(arg1) + *b;
    func_088EF528(obj, func_088EF608(buf, s1, func_08852BA8(arg1) + *c, &d, D_08AD815C));
    func_08852F00(arg1, 0);
}
