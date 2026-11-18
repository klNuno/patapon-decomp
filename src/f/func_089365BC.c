#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    u8 *volatile unk_14;
} Unk;

typedef struct {
    f32 unk_00[16];
} Mtx;

extern char *volatile D_089E7C88[];
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_088226BC(char *, char *, ...);
void func_08866464(Mtx *, void *, void *);

static inline void func_089365BC_00(char *arg0, s32 arg1) {
    if (arg0 != NULL) {
        do {
            *arg0++ = 0;
        } while (--arg1 != 0);
    }
}

void func_089365BC(Unk *arg0, void *arg1) {
    char temp[0x100];
    Mtx temp2;
    s32 *temp3 = func_0885356C(arg1, 0, 1, 4);
    s32 *temp4 = func_0885356C(arg1, 1, 1, 4);
    f32 *temp5 = (f32 *)func_0885356C(arg1, 2, 1, 4);
    f32 *temp6 = (f32 *)func_0885356C(arg1, 3, 1, 4);
    char *volatile *temp9 = &D_089E7C88[*temp3];
    u8 *temp10 = arg0->unk_14;
    char *temp7 = *temp9;
    void *temp8 = temp10 + 0xCF0;
    func_089365BC_00(temp, sizeof(temp));
    switch (*temp3) {
    case 5:
    case 6:
    case 7:
        func_088226BC(temp, temp7, 0, *temp4);
        break;
    default:
        func_088226BC(temp, temp7);
        break;
    }
    func_08866464(&temp2, temp8, temp);
    *temp5 = temp2.unk_00[12];
    *temp6 = temp2.unk_00[13];
    func_08852F00(arg1, 0);
}
