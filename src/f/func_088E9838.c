#include "common.h"

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} G_088E9838;

typedef struct {
    u8 pad_00[0x14];
    G_088E9838 *unk_14;
    s32 unk_18;
} T_088E9838;

s32 *func_0885356C(void *, s32, s32, s32);
u8 *func_08852BA8(void *);
s32 func_089A8D10(s32, s32);
void func_088AE2A8(s32);
void func_0882687C(u16 *, s32);
u8 *func_08899E18(s32, s32);
void func_088B47F4(u8 *, f32, f32, u16 *, s32);
void func_08852F00(void *, s32);

void func_088E9838(T_088E9838 *arg0, void *arg1) {
    u16 buf[0x400];
    s32 *p0;
    f32 *p1;
    f32 *p2;
    s32 i;
    s32 s;
    u8 *q;
    u8 *r;

    p0 = func_0885356C(arg1, 0, 1, 4);
    p1 = (f32 *)func_0885356C(arg1, 1, 1, 4);
    p2 = (f32 *)func_0885356C(arg1, 2, 1, 4);
    i = *func_0885356C(arg1, 3, 0, 4);
    s = func_089A8D10(arg0->unk_18, *(s32 *)(func_08852BA8(arg1) + i));
    func_088AE2A8(s);
    func_0882687C(buf, s);
    if (arg0->unk_14 != NULL) {
        if (*p0 == 0 || *p0 == 1U) {
            q = func_08899E18(arg0->unk_14->unk_36B10, *p0);
            if (q != NULL) {
                r = q + 0x7D50;
                if (r != NULL) {
                    func_088B47F4(r, *p1, *p2, buf, 0);
                }
            }
        }
    }
    func_08852F00(arg1, 0);
}
