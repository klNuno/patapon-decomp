#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} M_0895DA0C;

typedef struct {
    u8 pad_00[0x18];
    s32 unk_18;
    s32 unk_1C;
    u8 pad_20[0x164];
    u8 unk_184[0x36C - 0x184];
    u8 unk_36C[4];
} S_0895DA0C;

s32 func_0895B250(void *, M_0895DA0C *, s32);
s32 func_0895BB38(S_0895DA0C *);
void func_0895D14C(void *);
void func_0895DB54(S_0895DA0C *);
s32 func_0895DC08(S_0895DA0C *);
void func_0895DCC4(S_0895DA0C *);
void func_0895DE2C(S_0895DA0C *, s32);
void func_0895DE68(S_0895DA0C *);
void func_0895E154(S_0895DA0C *);
void func_0895E9E0(S_0895DA0C *);
void func_0895EE78(S_0895DA0C *);
s32 sceKernelCheckCallback(void);

s32 func_0895DA0C(S_0895DA0C *arg0) {
    M_0895DA0C m;
    u8 *p;
    s32 n;

    if (func_0895DC08(arg0) == 0) {
        return 1;
    }
    while (func_0895BB38(arg0) != 0) {
        p = (u8 *)&m;
        n = 8;
        if (p != NULL) {
            do {
                *p++ = 0;
            } while (--n);
        }
        if ((u8)func_0895B250(arg0->unk_184, &m, 8)) {
            func_0895DE2C(arg0, m.unk_00);
            arg0->unk_1C = m.unk_04;
        }
        switch (arg0->unk_18) {
        case 0:
            break;
        case 1:
            func_0895DE68(arg0);
            break;
        case 3:
            func_0895DB54(arg0);
            break;
        case 5:
            func_0895E9E0(arg0);
            break;
        case 2:
            func_0895E154(arg0);
            break;
        }
        func_0895D14C(arg0->unk_36C);
        sceKernelCheckCallback();
    }
    func_0895EE78(arg0);
    func_0895DCC4(arg0);
    return 1;
}
