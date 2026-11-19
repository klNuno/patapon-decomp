#include "common.h"

extern "C" {
typedef struct {
    f32 unk_00, unk_04;
} V;

typedef struct {
    f32 unk_00, unk_04, unk_08, unk_0C;
} R;

class T {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(f32, f32, s32, R *, u16 *);
    virtual void unk_18(s32);
};

typedef struct {
    u8 pad_00[0x3C];
    u32 unk_3C, unk_40;
} E;

typedef struct {
    u8 pad_00[0x1C];
    E **unk_1C;
    u32 unk_20;
} L;

typedef struct {
    u8 pad_00[0x1870];
    T unk_1870;
    u8 pad_1874[0x6C];
    u32 unk_18E0;
    u8 pad_18E4[0x65C];
    T unk_1F40;
    u8 pad_1F44[0x6C];
    u32 unk_1FB0;
    u8 pad_1FB4[0x65C];
    s32 unk_2610;
    u8 pad_2614[0x408];
    u32 unk_2A1C;
    u8 unk_2A20[0x868];
    f32 unk_3288;
} S;

extern u8 *D_08AD1F14[];
extern u32 D_08A08D08[], D_08A08D0C[];
extern char D_08A08D10[];
extern R D_089F2350[];

void func_088226BC(char *, char *, ...);
void func_0882687C(u16 *, u16 *);
void func_08826830(u16 *, u16 *);
void func_088B3120(u8 *, s32, char *);
s32 func_089A8B5C(u8 *, s32, s32);
s32 func_0899B698(s32);
void func_0899B900(void *, void *);
L *func_089BA7BC(S *);
void func_088AF2FC(V *, T *, u16 *);

static inline const u32 &func_00(const u32 &arg0, const u32 &arg1) {
    if (arg0 < arg1) {
        return arg1;
    }
    return arg0;
}

static inline const u32 &func_04(const u32 &arg0, const u32 &arg1) {
    if (arg0 < arg1) {
        return arg0;
    }
    return arg1;
}

static inline u8 *func_08() {
    u8 *p = D_08AD1F14[0];
    if (p != NULL) {
        return p;
    }
    return NULL;
}

void func_089BA300(S *arg0, s32 arg1) {
    u32 temp0, temp1;
    u16 temp2[0x40];
    u8 temp3[0x40];
    char temp4[0x100];
    u32 temp5;
    struct { V unk_00; u8 pad_08[4]; } temp6;
    u8 *p;
    u32 n, i, off;
    L *l;
    E ***r;
    E *q;

    n = arg0->unk_2A1C;
    if (n != 0) {
        if (arg1 < 0) {
            arg1 = n - 1;
        }
        if (n - 1 < (u32)arg1) {
            arg1 = 0;
        }
        arg0->unk_2610 = arg1;
        func_0899B698((s32)arg0->unk_2A20);
        func_0899B900(arg0->unk_2A20, arg0);
        temp0 = 0;
        temp1 = 0;
        l = func_089BA7BC(arg0);
        if (l->unk_20 != 0) {
            i = 0;
            if (i < l->unk_20) {
                off = 0;
                r = &l->unk_1C;
                do {
                    q = *(E **)((u8 *)*r + off);
                    temp0 += *(volatile u32 *)&q->unk_3C;
                    temp5 = q->unk_40;
                    temp1 = func_00(temp1, temp5);
                    i++;
                    off += 4;
                } while (i < l->unk_20);
            }
        }
        temp0 = func_04(D_08A08D08[0], temp0);
        temp1 = func_04(D_08A08D0C[0], temp1);
        p = func_08() + 0x2460;
        func_088226BC(temp4, D_08A08D10, temp0);
        func_088B3120(temp3, 0x20, temp4);
        func_0882687C(temp2, (u16 *)func_089A8B5C(p, 2, 0x16));
        func_08826830(temp2, (u16 *)temp3);
        func_088AF2FC(&temp6.unk_00, &arg0->unk_1870, temp2);
        arg0->unk_3288 = temp6.unk_00.unk_00;
        arg0->unk_18E0 &= ~0x100;
        arg0->unk_1870.unk_14(0.0f, 0.0f, 0, D_089F2350, temp2);
        arg0->unk_1870.unk_18(0xA0);
        func_088226BC(temp4, D_08A08D10, temp1);
        func_088B3120(temp3, 0x20, temp4);
        func_0882687C(temp2, (u16 *)func_089A8B5C(p, 2, 0x17));
        func_08826830(temp2, (u16 *)temp3);
        arg0->unk_1FB0 &= ~0x100;
        arg0->unk_1F40.unk_14(0.0f, 0.0f, 0, D_089F2350, temp2);
        arg0->unk_1F40.unk_18(0xA0);
    }
}
}
