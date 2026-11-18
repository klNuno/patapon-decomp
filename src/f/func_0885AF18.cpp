#include "common.h"

extern "C" {

extern char D_089DD004[];
extern char D_089F89E0[];
extern char D_089F89E8[];
extern char D_089F89EC[];
extern char D_089F89F0[];
extern char D_089F89F4[];
extern char D_089F89F8[];
extern char D_089F8A10[];

typedef struct {
    u8 pad_00[0x100];
    s32 unk_100;
    s32 unk_104;
} S_088854D4;

void func_0881F5C0(void *, s32, s32);
void func_088226BC(char *, char *, ...);
void func_08822918(char *, char *);
void func_08858F88(S_088854D4 *, u32, s32, void *, ...);

class Obj {
public:
    u8 pad_00[8];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual s32 unk_14();
    virtual void unk_18();
    virtual s32 unk_1C();
    virtual void unk_20();
    virtual s32 unk_24();
};

struct Obj_0885AF18 : Obj {
    u8 unk_0C[0x80];
    u8 *unk_8C;
    u8 pad_90[4];
    s32 unk_94;
    s32 unk_98;
    s32 unk_9C;
    void (*unk_A0)(char **, u8 *, s32);
};

struct S {
    char unk_00[0x100];
    s32 unk_100;
};

static inline void clear(char *p, s32 n) {
    if (p != NULL) {
        do {
            *p++ = 0;
        } while (--n);
    }
}

static inline void format(char *p, u32 arg1) {
    if (p != NULL) {
        func_088226BC(p, D_089DD004, arg1 & 0xFF);
    }
}

s32 func_0885AF18(Obj_0885AF18 *arg0, s32 arg1, u32 arg2, s32 arg3, s32 arg4) {
    char sp648[8];
    char sp640[8];
    char sp540[0x100];
    char *sp53C;
    char sp43C[0x100];
    char sp33C[0x100];
    char sp23C[0x100];
    S sp138;
    S sp34;
    const char *src;
    char *dst;
    s32 count;
    s32 i;
    u8 *p;

    src = D_089F89E0;
    dst = sp648;
    count = 4;
    do {
        count--;
        dst[0] = src[0];
        dst[1] = src[1];
        src += 2;
        dst += 2;
    } while (count > 0);

    if (arg1 != 0) {
        func_088226BC(sp648, D_089F89E8);
    }
    clear(sp640, 8);
    if (arg0->unk_24() != 0) {
        if (arg0->unk_1C() == 0) {
            func_088226BC(sp640, D_089F89EC);
        } else {
            func_088226BC(sp640, D_089F89F0);
        }
    }
    clear(sp540, 0x100);
    sp53C = sp540;
    p = arg0->unk_8C;
    if (p != NULL) {
        format(sp53C, *p);
        if (arg0->unk_A0 != NULL) {
            arg0->unk_A0(&sp53C, arg0->unk_8C, arg1);
        }
    }
    clear(sp43C, 0x100);
    clear(sp33C, 0x100);
    for (i = 0; i < arg0->unk_14(); i++) {
        func_08822918(sp33C, D_089F89F4);
    }
    i = arg0->unk_94;
    if (arg1 != 0) {
        i = arg0->unk_98;
    }
    if (arg4 != 0) {
        s32 sign = arg4 < 0 ? -1 : 1;
        arg4 = arg4 >= 0 ? arg4 : -arg4;
        func_088226BC(sp23C, D_089F89F8, sign * (arg0->unk_9C + arg4));
        func_0881F5C0(sp138.unk_00, 0, 0x100);
        sp138.unk_100 = i;
        func_08858F88((S_088854D4 *)&sp138, arg2, arg3, sp23C, sp648, sp33C, sp640, arg0->unk_0C, sp53C);
    } else {
        func_0881F5C0(sp34.unk_00, 0, 0x100);
        sp34.unk_100 = i;
        func_08858F88((S_088854D4 *)&sp34, arg2, arg3, D_089F8A10, sp648, sp33C, sp640, arg0->unk_0C, sp53C);
    }
    return 1;
}

}
