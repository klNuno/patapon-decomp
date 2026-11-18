#include "common.h"

typedef struct {
    u8 pad_00[0x10A44];
    u8 unk_10A44[0x10D14 - 0x10A44];
    u8 unk_10D14[0x11551 - 0x10D14];
    u8 unk_11551;
    u8 pad_11552[2];
    s32 unk_11554;
    s32 unk_11558;
} S_089CF4BC;

typedef struct {
    u8 pad_00[0x1490];
    void *unk_1490;
} A_089CF4BC;

typedef struct {
    u8 pad_00[0x42820];
    A_089CF4BC *unk_42820;
} G_089CF4BC;

void func_0881F120(void *, s32, s32);
void func_089140B4(void *, s32, s32);
void func_089140C0(void *, s32);
s32 func_08914A74(void *);
s32 func_08914A7C(void *);
s32 func_08914B20(void *);
void func_089B568C(void *, s32);
void func_089CF9BC(S_089CF4BC *);
void func_089D0408(S_089CF4BC *);
void func_089D0470(S_089CF4BC *, s32);
s32 func_089D04A8(S_089CF4BC *);
extern G_089CF4BC *D_08AD1E28[];

s32 func_089CF4BC(S_089CF4BC *arg0) {
    void *s;
    s32 v;

    s = arg0->unk_10D14;
    if (func_089D04A8(arg0) != 0) {
        func_089D0408(arg0);
        func_089CF9BC(arg0);
        func_089140B4(s, arg0->unk_11558, arg0->unk_11554);
        func_089140C0(s, 0);
        return 0;
    }
    if (func_08914A74(s) == 0) {
        v = func_08914A7C(s);
        if (v == 0) {
            func_0881F120((D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL)->unk_42820->unk_1490, arg0->unk_11558, 0x8000);
            func_089D0408(arg0);
            return 1;
        } else if (v == 1) {
            return 1;
        } else if (v == 2) {
            func_089D0470(arg0, 0x1E);
        } else {
            func_089D0408(arg0);
            v = func_08914B20(s);
            switch (v) {
            case (s32)0x80110301:
                func_089D0470(arg0, 7);
                break;
            case (s32)0x80110307:
                func_089D0470(arg0, 0x14);
                break;
            default:
                func_089B568C(arg0->unk_10A44, v);
                arg0->unk_11551 = 1;
                func_089D0470(arg0, 0xC);
                break;
            }
        }
    }
    return 0;
}
