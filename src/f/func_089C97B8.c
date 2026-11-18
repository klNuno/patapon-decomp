#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
    s32 unk_08;
} R_089C97B8;

typedef struct {
    u8 pad_00[0xEB4];
    u32 unk_EB4;
    s32 unk_EB8;
    u8 unk_EBC[0x10];
} S_089C97B8;

R_089C97B8 *func_089C0588(void *);
u32 func_089C0598(void *);
R_089C97B8 *func_089C0580(void *);
void func_0881F5C0(void *, s32, s32);
void *func_08985828(S_089C97B8 *, s32);
void func_0898ABB8(void *, f32, s32, s32);

void func_089C97B8(S_089C97B8 *arg0, s32 arg1, void *arg2) {
    u32 r;
    R_089C97B8 *p;

    p = func_089C0588(arg2);
    if (p->unk_04 != arg0->unk_EB8) {
        arg0->unk_EB4 = 0;
        func_0881F5C0(arg0->unk_EBC, 0, 0x10);
        func_0898ABB8(func_08985828(arg0, 0xB), 0.0f, 1, 1);
    }
    r = func_089C0598(arg2);
    if (r > 7U && arg0->unk_EB4 < 4U) {
        arg0->unk_EB4 = 4;
    }
    p = func_089C0580(arg2);
    if (p != NULL && (u32)(p->unk_08 - 1) < 2U) {
        func_0898ABB8(func_08985828(arg0, arg0->unk_EB4 + 1), 0.0f, 2, 0);
        arg0->unk_EBC[r] = 1;
        arg0->unk_EB4++;
    }
}
