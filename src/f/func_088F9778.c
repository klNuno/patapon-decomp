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

void func_08855354(char *);
void func_08854F60(f32, V4 *, V4 *);
extern int func_08864E80(char *, char *);

void func_088F9778(char *arg0, char *arg1, s32 arg2) {
    M m;
    V4 r;
    V4 t;
    u32 var_s1;
    char *var_s0;

    *(f32 *)(arg0 + 0x2B8) = *(f32 *)(arg1 + 0);
    *(f32 *)(arg0 + 0x2BC) = *(f32 *)(arg1 + 4);
    func_08855354((char *)&m);
    func_08854F60(arg2 == 0 ? -1.0f : 1.0f, &r, &m.unk_00[0]);
    m.unk_00[0] = r;
    t.unk_00 = *(f32 *)(arg1 + 0);
    t.unk_04 = *(f32 *)(arg1 + 4);
    t.unk_08 = 0.0f;
    t.unk_0C = 1.0f;
    m.unk_30 = t;
    if (*(u8 *)(arg0 + 0xEC) == 1) {
        var_s0 = arg0;
        var_s1 = 0;
        do {
            func_08864E80(var_s0 + 0xF0, (char *)&m);
            var_s1 += 1;
            var_s0 += 0x90;
        } while (var_s1 < 3U);
    }
}
