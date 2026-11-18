#include "common.h"

void func_08855354(char *);
extern int func_08864E80(char *, char *);

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

void func_088E503C(char *arg0, char *arg1) {
    V4 t;
    M m;
    u32 var_s1;
    char *var_s0;

    *(f32 *)(arg0 + 0x2B8) = *(f32 *)(arg1 + 0);
    *(f32 *)(arg0 + 0x2BC) = *(f32 *)(arg1 + 4);
    func_08855354((char *)&m);
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
