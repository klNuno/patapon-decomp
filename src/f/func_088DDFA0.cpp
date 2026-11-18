#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x50];
    bool unk_50;
    void set(bool v) { unk_50 = v; }
} Y_088DDFA0;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0x10];
} Z_088DDFA0;

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
    bool unk_08;
    u8 pad_09[0x50560 - 0x9];
    u8 unk_50560[0x506F0 - 0x50560];
    u8 unk_506F0[0xB21F0 - 0x506F0];
    u8 unk_B21F0[0x1212D0 - 0xB21F0];
    u8 unk_1212D0[4];
} X_088DDFA0;

extern void func_088C649C(char *);
s32 func_088C648C(void *);
void func_088F462C(s32, f32);
void func_088F4040(u8 *);
void func_08997830(void *);
void func_0899708C(void *);
void func_088F4634(s32, Z_088DDFA0 *);
void func_08989CEC(void *);

void func_088DDFA0(X_088DDFA0 *arg0, s32 arg1) {
    Z_088DDFA0 z;

    if (arg0->unk_04 != arg1) {
        arg0->unk_08 = true;
        ((Y_088DDFA0 *)func_088C648C(arg0->unk_506F0))->set(true);
        if (arg0->unk_04 == 3) {
            func_08997830(arg0->unk_B21F0);
        }
        switch (arg1) {
        case -1:
        case 0:
        case 1:
            break;
        case 2:
            func_088F4040(arg0->unk_50560);
            break;
        case 3:
            func_088F4040(arg0->unk_50560);
            func_0899708C(arg0->unk_B21F0);
            break;
        case 4:
            func_088F4040(arg0->unk_50560);
            ((Y_088DDFA0 *)func_088C648C(arg0->unk_506F0))->set(false);
            z.unk_00 = 0;
            z.unk_04 = 0;
            z.unk_08 = 0;
            z.unk_0C = 0;
            func_088F4634(func_088C648C(arg0->unk_506F0), &z);
            func_088F462C(func_088C648C(arg0->unk_506F0), 0.0f);
            func_088C649C((char *)arg0->unk_506F0);
            ((Y_088DDFA0 *)func_088C648C(arg0->unk_506F0))->set(true);
            func_08989CEC(arg0->unk_1212D0);
            break;
        }
    }
    arg0->unk_04 = arg1;
}

}
