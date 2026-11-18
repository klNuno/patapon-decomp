#include "common.h"

typedef struct {
    void *unk_00;
    u16 unk_04;
    u16 unk_06;
    void *unk_08;
    u16 unk_0C;
    u16 unk_0E;
    void *unk_10;
    s32 unk_14;
    s32 unk_18;
    void *unk_1C;
    u8 pad_20[8];
    void (*unk_28)(void *);
    s32 unk_2C;
    u8 pad_30[0x10];
    u8 unk_40[4];
} S_088C3184;

typedef struct {
    s32 unk_00;
    u8 pad_04[0x8C];
    void *unk_90;
    u8 pad_94[0x14];
    u8 unk_A8[1];
} T088C00E0;

typedef s32 (*F)(s32);

typedef struct {
    void **unk_00;
    u16 unk_04;
    u16 unk_06;
    void **unk_08;
    u16 unk_0C;
    u16 unk_0E;
    u8 *unk_10;
    s32 unk_14;
    s32 unk_18;
    u8 *unk_1C;
    s32 unk_20;
    F unk_24;
    F unk_28;
    s32 unk_2C;
    f32 unk_30;
    s32 unk_34;
    u8 pad_38[8];
    T088C00E0 unk_40;
} T;

extern s32 func_0881E750(s32);
extern s32 func_0881E77C(s32);
void func_08858498(u8 *, s32);
void func_088BFA7C(char *, ...);
s32 func_088C00E0(T088C00E0 *arg0, s32 arg1, u16 arg2);
void func_088C3184(S_088C3184 *arg0);
s32 sceKernelGetSystemTimeLow(void);

extern char D_089FB60C[];
extern char D_089FB61C[];
extern char D_089FB638[];
extern char D_089FB650[];
extern char D_089FB670[];
extern char D_089FB68C[];
extern u8 D_08AD6BFC[];

s32 func_088C2EB0(T *arg0, s32 arg1, u16 arg2, F arg3, F arg4) {
    s32 n;
    s32 m;
    s32 r;
    s32 i;
    s32 off;
    u16 k;
    u16 l;
    u8 *p;
    void **q;

    arg0->unk_24 = arg3;
    arg0->unk_28 = arg4;
    if (arg0->unk_24 == NULL) {
        arg0->unk_24 = func_0881E750;
    }
    if (arg0->unk_28 == NULL) {
        arg0->unk_28 = func_0881E77C;
    }
    func_08858498(D_08AD6BFC, sceKernelGetSystemTimeLow());
    func_088BFA7C(D_089FB60C);
    arg0->unk_18 = 0;
    arg0->unk_14 = 0;
    arg0->unk_20 = 0;
    arg0->unk_34 = 0;
    arg0->unk_2C = 0;
    if (func_088C00E0(&arg0->unk_40, arg1, arg2) == 0) {
        return 0;
    }

    n = (u16)arg1;
    arg0->unk_10 = (u8 *)arg0->unk_24(n * 0x150);
    m = (u16)arg2;
    arg0->unk_1C = (u8 *)arg0->unk_24(m * 0xD0);
    if (n < 0x10000) {
        q = (void **)arg0->unk_24(n * 4);
    } else {
        q = NULL;
    }
    arg0->unk_00 = q;
    arg0->unk_04 = 0;
    arg0->unk_06 = arg1;
    if (m < 0x10000) {
        q = (void **)arg0->unk_24(m * 4);
    } else {
        q = NULL;
    }
    arg0->unk_08 = q;
    arg0->unk_0C = 0;
    arg0->unk_0E = arg2;
    r = 1;
    if (arg0->unk_10 == NULL) {
        func_088BFA7C(D_089FB61C);
        r = 0;
    }
    if (arg0->unk_1C == NULL) {
        func_088BFA7C(D_089FB638);
        r = 0;
    }
    if (arg0->unk_00 == NULL) {
        func_088BFA7C(D_089FB650);
        r = 0;
    }
    if (arg0->unk_08 == NULL) {
        func_088BFA7C(D_089FB670);
        r = 0;
    }
    if (r == 0) {
        func_088C3184((S_088C3184 *)arg0);
        return 0;
    }

    i = 0;
    if (n > 0) {
        off = 0;
        do {
            l = arg0->unk_06;
            k = arg0->unk_04;
            if (k < l) {
                p = arg0->unk_10 + off;
                if (p != NULL) {
                    arg0->unk_04 = k + 1;
                    arg0->unk_00[k] = p;
                }
            }
            ++i;
            off += 0x150;
        } while (i < n);
    }

    off = 0;
    if (m > 0) {
        i = 0;
        do {
            l = arg0->unk_0E;
            k = arg0->unk_0C;
            if (k < l) {
                p = arg0->unk_1C + i;
                if (p != NULL) {
                    arg0->unk_0C = k + 1;
                    arg0->unk_08[k] = p;
                }
            }
            ++off;
            i += 0xD0;
        } while (off < m);
    }
    func_088BFA7C(D_089FB68C);
    arg0->unk_30 = 1.0f;
    return 1;
}
