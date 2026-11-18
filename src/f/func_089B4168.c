#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[4];
    u8 unk_10;
    u8 unk_11;
    u8 pad_12[2];
} S;

extern char D_08A08818[];
extern char D_08A08918[];
extern char D_08A08920[];
extern char D_08A08928[];
extern char D_08A0893C[];
extern char D_08A08950[];
extern char D_08A08960[];
extern char D_08A08988[];
extern char D_08A089B0[];
extern char D_08A089E0[];
void func_08820C24(char *, ...);
void func_088226BC(char *, char *, ...);
void func_088592EC(void *, char *, S *, s32);
void func_08859534(void *);
s32 sceUtilityLoadModule(s32);

static inline void unk_00(char *p) {
    s32 n = 0x200;
    if (p != NULL) {
        do {
            *p++ = 0;
        } while (--n);
    }
}

void func_089B4168(void *arg0) {
    char a[0x200];
    char b[0x200];
    char c[0x200];
    S s;

    unk_00(a);
    unk_00(b);
    unk_00(c);
    func_088226BC(a, D_08A08918, D_08A08920, D_08A08818, D_08A08928);
    func_088226BC(b, D_08A08918, D_08A08920, D_08A08818, D_08A0893C);
    func_088226BC(c, D_08A08918, D_08A08920, D_08A08818, D_08A08950);
    s.unk_00 = 0x14;
    s.unk_04 = 2;
    s.unk_08 = 2;
    s.unk_11 = 1;
    s.unk_10 = 0;
    if (sceUtilityLoadModule(0x301) < 0) {
        do {
            func_08820C24(D_08A08960);
        } while (sceUtilityLoadModule(0x301) < 0);
    }
    if (sceUtilityLoadModule(0x300) < 0) {
        do {
            func_08820C24(D_08A08988);
        } while (sceUtilityLoadModule(0x300) < 0);
    }
    if (sceUtilityLoadModule(0x302) < 0) {
        do {
            func_08820C24(D_08A089B0);
        } while (sceUtilityLoadModule(0x302) < 0);
    }
    if (sceUtilityLoadModule(0x303) < 0) {
        do {
            func_08820C24(D_08A089E0);
        } while (sceUtilityLoadModule(0x303) < 0);
    }
    func_088592EC(arg0, b, &s, 0);
    func_088592EC(arg0, c, NULL, 0);
    func_088592EC(arg0, a, NULL, 0);
    func_08859534(arg0);
}
