#include "common.h"

extern "C" {
void func_0881F5C0(void *, s32, s32);
void func_08822918(char *, char *);
void func_088226BC(char *, char *, ...);
typedef struct {
    u8 pad_00[0x100];
    s32 unk_100;
    s32 unk_104;
} S_088854D4;

void func_08858F88(S_088854D4 *, u32, s32, void *, ...);

extern char D_089DD000[];
extern char D_089F89E8[];
extern char D_089F89EC[];
extern char D_089F89F0[];
extern char D_089F89F4[];
extern char D_089F89F8[];
extern char D_089F8A10[];
extern char D_089F8A20[];

class UnkBase {
public:
    u8 pad_00[8];

    virtual s32 func_08();
    virtual s32 func_0C();
    virtual s32 func_10();
    virtual s32 func_14();
    virtual s32 func_18();
    virtual s32 func_1C();
    virtual s32 func_20();
    virtual s32 func_24();
};

struct UnkObj : UnkBase {
    u8 unk_0C[0x80];
    s32 *unk_8C;
    u8 pad_90[0xC];
    s32 unk_9C;
    s32 unk_A0;
    s32 unk_A4;
    void (*unk_A8)(char **, s32 *, s32);
};

struct Unk104 {
    char unk_00[0x100];
    s32 unk_100;
};

static inline void func_00(char *arg0, s32 arg1) {
    if (arg0 != NULL) {
        do {
            *arg0++ = 0;
        } while (--arg1);
    }
}

static inline void func_04(char *arg0, s32 arg1) {
    if (arg0 != NULL) {
        func_088226BC(arg0, D_089DD000, arg1);
    }
}

s32 func_0885B3A8(UnkObj *arg0, s32 arg1, u32 arg2, s32 arg3, s32 arg4) {
    char temp_648[8];
    char temp_640[8];
    char temp_540[0x100];
    char *temp_53C;
    char temp_43C[0x100];
    char temp_33C[0x100];
    char temp_23C[0x100];
    Unk104 temp_138;
    Unk104 temp_34;
    s32 i;
    char *src = D_089F8A20;
    char *dst = temp_648;
    s32 n = 4;
    do {
        n--;
        dst[0] = src[0];
        dst[1] = src[1];
        src += 2;
        dst += 2;
    } while (n > 0);

    if (arg1 != 0) {
        func_088226BC(temp_648, D_089F89E8);
    }
    func_00(temp_640, 8);
    if (arg0->func_24() != 0) {
        if (arg0->func_1C() == 0) {
            func_088226BC(temp_640, D_089F89EC);
        } else {
            func_088226BC(temp_640, D_089F89F0);
        }
    }
    func_00(temp_540, 0x100);
    temp_53C = temp_540;
    if (arg0->unk_8C != NULL) {
        func_04(temp_53C, *arg0->unk_8C);
        if (arg0->unk_A8 != NULL) {
            arg0->unk_A8(&temp_53C, arg0->unk_8C, arg1);
        }
    }
    func_00(temp_43C, 0x100);
    func_00(temp_33C, 0x100);
    i = 0;
    if (arg0->func_14() > 0) {
        do {
            func_08822918(temp_33C, D_089F89F4);
            i++;
        } while (i < arg0->func_14());
    }
    i = arg0->unk_9C;
    if (arg1 != 0) {
        i = arg0->unk_A0;
    }
    if (arg4 != 0) {
        s32 sign = arg4 < 0 ? -1 : 1;
        arg4 = arg4 >= 0 ? arg4 : -arg4;
        func_088226BC(temp_23C, D_089F89F8, sign * (arg0->unk_A4 + arg4));
        func_0881F5C0(&temp_138, 0, 0x100);
        temp_138.unk_100 = i;
        func_08858F88((S_088854D4 *)&temp_138, arg2, arg3, temp_23C, temp_648, temp_33C,
                     temp_640, arg0->unk_0C, temp_53C);
    } else {
        func_0881F5C0(&temp_34, 0, 0x100);
        temp_34.unk_100 = i;
        func_08858F88((S_088854D4 *)&temp_34, arg2, arg3, D_089F8A10, temp_648, temp_33C,
                     temp_640, arg0->unk_0C, temp_53C);
    }
    return 1;
}
}
