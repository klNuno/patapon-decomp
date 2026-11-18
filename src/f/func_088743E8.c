#include "common.h"

typedef struct {
    u8 pad_00[0x92EC];
    u8 unk_92EC;
} R;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} P;

typedef struct {
    u8 pad_00[0x1A00];
    char unk_1A00[4];
} U;

typedef struct {
    u8 pad_00[0x2980];
    u8 unk_2980[0x34188];
    U *unk_36B08;
    u8 pad_36B0C[4];
    s32 unk_36B10;
    u8 pad_36B14[0x4C];
    s32 unk_36B60[1];
    u8 pad_36B64[0x1D15C];
    u8 unk_53CC0[0x18B0];
    u8 unk_55570[0x10A64];
    u8 unk_65FD4;
    u8 unk_65FD5;
    u8 pad_65FD6[0xE];
    char unk_65FE4[4];
} T;

void func_08874610(T *, u8);
void func_0887FCC4(char *arg0, s8 arg1);
void func_0888A7B4(s32, s32);
void *func_08899E18(s32, s32);
void func_0889A0E8(s32);
s32 func_088BCF58(s32);
s32 func_088BCF70(s32 *);
void func_088CFE60(s32, s32);
void func_0892A9A0(void *, s32, f32, f32);
void func_0893C334(char *arg0, s8 arg1);
extern void *func_08958954(u8 *);
s32 func_08982048(char *);
void func_089AD48C(void *, u32);

s32 func_088743E8(T *arg0, s32 arg1) {
    R *p;
    P *q;
    s32 x;

    switch (arg1) {
        case 0:
            p = (R *)func_08899E18(arg0->unk_36B10, 1);
            if (p != NULL) {
                p->unk_92EC = 0;
            }
            func_0888A7B4(func_088BCF58((s32)arg0->unk_36B60), 0);
            func_088CFE60(func_088BCF70(arg0->unk_36B60), 0);
            func_0893C334(arg0->unk_65FE4, 0);
            arg0->unk_65FD5 = arg0->unk_65FD4;
            func_08874610(arg0, 0);
            func_0887FCC4(arg0->unk_36B08->unk_1A00, 0);
            func_0892A9A0(arg0->unk_53CC0, 1, 0.0f, 0.0f);
            func_0892A9A0(arg0->unk_53CC0, 2, 0.0f, 0.0f);
            func_0889A0E8(arg0->unk_36B10);
            break;
        case 1:
            x = 0;
            q = (P *)func_08958954(arg0->unk_2980);
            if (q != NULL && q->unk_04 == 1) {
                x = func_08982048((char *)q);
            }
            func_08874610(arg0, arg0->unk_65FD5);
            func_0887FCC4(arg0->unk_36B08->unk_1A00, 1);
            p = (R *)func_08899E18(arg0->unk_36B10, 1);
            if (p != NULL) {
                p->unk_92EC = 1;
            }
            func_0888A7B4(func_088BCF58((s32)arg0->unk_36B60), 1);
            func_088CFE60(func_088BCF70(arg0->unk_36B60), 1);
            func_0893C334(arg0->unk_65FE4, 1);
            func_089AD48C(arg0->unk_55570, x);
            break;
    }
    return 1;
}
