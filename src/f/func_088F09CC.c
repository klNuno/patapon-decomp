#include "common.h"

typedef struct {
    u8 pad_00[0x224];
    s32 unk_224;
} T_088F09CC;

extern s16 D_089FDBE0[];
extern s16 D_089FDBE2[];
extern s16 D_089FDBE4[];
extern s16 D_089FDBE6[];

s32 *func_0885356C(void *, s32, s32, s32);
u8 *func_08852BA8(void *);
s32 func_089A8D10(s32, s32);
void func_0882687C(u16 *, void *);
void func_08826830(u16 *, void *);
void func_088AD400(s32, u16 *, s32);
void func_08852F00(void *, s32);

void func_088F09CC(T_088F09CC *arg0, void *arg1) {
    s16 a[2];
    s16 b[2];
    u16 buf[0x80];
    s32 *p0;
    s32 *p1;
    s32 *p2;
    s32 *p3;
    s32 s;
    s32 t;
    s32 i;

    a[0] = D_089FDBE0[0];
    a[1] = D_089FDBE2[0];
    b[0] = D_089FDBE4[0];
    b[1] = D_089FDBE6[0];
    p0 = func_0885356C(arg1, 0, 1, 4);
    p1 = func_0885356C(arg1, 1, 1, 4);
    p2 = func_0885356C(arg1, 2, 0, 4);
    p3 = func_0885356C(arg1, 3, 0, 4);
    i = *p2;
    s = func_089A8D10(arg0->unk_224, *(s32 *)(func_08852BA8(arg1) + i));
    i = *p3;
    t = func_089A8D10(arg0->unk_224, *(s32 *)(func_08852BA8(arg1) + i));
    if (*p0 != 0) {
        func_0882687C(buf, a);
        func_08826830(buf, (void *)s);
        func_08826830(buf, b);
    } else {
        func_0882687C(buf, (void *)s);
    }
    func_088AD400(*p1, buf, t);
    func_08852F00(arg1, 0);
}
