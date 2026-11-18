#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} V_089BB934;

typedef struct {
    u8 pad_00[0x404];
    V_089BB934 unk_404;
} S_089BB934;

typedef struct {
    u8 pad_00[0x30];
    u8 unk_30[0x90];
    u8 unk_C0[0x90];
    u8 unk_150[0x90];
    u8 unk_1E0[0x90];
    u8 unk_270[0x90];
    u8 unk_300[0x90];
    u8 unk_390[0x930 - 0x390];
    u8 unk_930[0x1000 - 0x930];
    u8 unk_1000[0x16E0 - 0x1000];
    u8 unk_16E0[0x1810 - 0x16E0];
    S_089BB934 unk_1810;
    S_089BB934 unk_1C1C;
} O_089BB934;

void func_0880416C(void *);
void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_08865F78(void *, s32);
void func_088F23D0(void *, s32);
void func_089A5724(void *, s32);
void func_089BBBD0(O_089BB934 *);

O_089BB934 *func_089BB934(O_089BB934 *arg0, s16 arg1) {
    s32 *p;
    V_089BB934 *v;

    if (arg0 != NULL) {
        func_089BBBD0(arg0);
        if (&arg0->unk_1C1C != NULL) {
            p = arg0->unk_1C1C.unk_404.unk_00;
            v = &arg0->unk_1C1C.unk_404;
            if ((u32)p != (u32)(p + arg0->unk_1C1C.unk_404.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_1C1C.unk_404.unk_04);
            }
            arg0->unk_1C1C.unk_404.unk_04 = 0;
        }
        if (&arg0->unk_1810 != NULL) {
            p = arg0->unk_1810.unk_404.unk_00;
            v = &arg0->unk_1810.unk_404;
            if ((u32)p != (u32)(p + arg0->unk_1810.unk_404.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_1810.unk_404.unk_04);
            }
            arg0->unk_1810.unk_404.unk_04 = 0;
        }
        func_089A5724(arg0->unk_16E0, -1);
        func_088F23D0(arg0->unk_1000, -1);
        func_088F23D0(arg0->unk_930, -1);
        func_08804000(arg0->unk_390, func_08865F78, 0x90, 0xA);
        func_08865F78(arg0->unk_300, -1);
        func_08865F78(arg0->unk_270, -1);
        func_08865F78(arg0->unk_1E0, -1);
        func_08865F78(arg0->unk_150, -1);
        func_08865F78(arg0->unk_C0, -1);
        func_08865F78(arg0->unk_30, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
