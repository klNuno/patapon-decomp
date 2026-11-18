#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V4;

typedef struct {
    V4 unk_00[3];
    V4 unk_30;
    u8 pad_40[0x10];
} M;

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} S;

void func_08852F00(void *, s32);
f32 *func_0885356C(void *, s32, s32, s32);
void func_08855354(char *);
extern int func_08864E80(char *, char *);
char *func_088C64C0(u8 *);

void func_089051CC(S *arg0, void *arg1) {
    V4 t;
    M m;
    f32 *a;
    f32 *b;
    char *p;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    p = func_088C64C0(arg0->unk_10 + 0x506F0);
    func_08855354((char *)&m);
    t.unk_00 = *a;
    t.unk_04 = *b;
    t.unk_08 = 0.0f;
    t.unk_0C = 1.0f;
    m.unk_30 = t;
    func_08864E80(p + 0x40, (char *)&m);
    func_08852F00(arg1, 0);
}
