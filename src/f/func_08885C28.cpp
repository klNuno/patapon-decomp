#include "common.h"

extern "C" {
typedef struct {
    u32 unk_00;
    u32 unk_04;
    char *unk_08;
} S08886960;
struct Unk160 {
    s64 unk_00[0x2C];
};
union Unk178 {
    struct {
        Unk160 unk_00;
        u8 pad_160[0x10];
    } unk_00;
    struct {
        u8 pad_00[0x58];
        char unk_58[0x118];
    } unk_04;
};
struct UnkObj {
    u8 pad_00[0x108];
    s32 unk_108;
    S08886960 unk_10C;
    s32 unk_118;
    s32 unk_11C;
    Unk160 *unk_120;
    u32 unk_124;
    u32 unk_128;
    char unk_12C[1];
};
extern char D_089FA170[];
extern char D_089FA178[];
extern char D_089FA17C[];
void func_0880F3C8(S08886960 *, char *);
void func_0880F440(void *, void *);
void func_08810258(void *, s32);
s32 func_08822AD0(char *, char *);
s32 func_08885648(s32 *, s32 *);
s32 func_08885658(char *, char *);
void func_08886120(Unk160 *, Unk160 *, s32 (*)(s32 *, s32 *));
s32 func_08886960(S08886960 *, S08886960 *, char *);
struct Unk01 { s8 unk_00; };
void func_08886AC4(Unk160 **, Unk160 *, Unk01);
void func_08886B08(Unk160 **, u32, Unk01);
s32 sceIoClose(s32);
s32 sceIoDopen(char *);
s32 sceIoDread(s32, Unk178 *);

inline char *func_00(S08886960 &arg0) {
    return (arg0.unk_00 & 1) != 0 ? arg0.unk_08 : (char *)&arg0 + 1;
}

s32 func_08885C28(UnkObj *arg0, char *arg1) {
    S08886960 temp_1A4;
    S08886960 temp_198;
    Unk178 temp_20;
    func_0880F3C8(&temp_198, D_089FA170);
    func_08886960(&temp_1A4, &temp_198, arg1);
    func_08810258(&temp_198, -1);
    Unk01 temp_00 = { 0 };
    func_08886B08(&arg0->unk_120, arg0->unk_124, temp_00);
    arg0->unk_118 = 0;
    arg0->unk_11C = 0;
    arg0->unk_108 = 0;
    bool temp = !(temp_1A4.unk_00 & 1);
    u32 n = temp ? (u32)(*(u8 *)&temp_1A4 << 24) >> 25 : temp_1A4.unk_04;
    if (n >= 0x400) {
        func_08885C28(arg0, func_00(arg0->unk_10C));
        func_08810258(&temp_1A4, -1);
        return 0;
    }
    s32 fd = sceIoDopen(temp ? (char *)&temp_1A4 + 1 : temp_1A4.unk_08);
    if (fd < 0) {
        func_08810258(&temp_1A4, -1);
        return 0;
    }
    u32 i = 0;
    while (sceIoDread(fd, &temp_20) > 0 && i < 0x40) {
        if (func_08822AD0(temp_20.unk_04.unk_58, D_089FA178) != 0 &&
            func_08822AD0(temp_20.unk_04.unk_58, D_089FA17C) != 0 &&
            func_08885658(temp_20.unk_04.unk_58, arg0->unk_12C) != 0) {
            if (arg0->unk_124 < arg0->unk_128) {
                Unk160 *p = &arg0->unk_120[arg0->unk_124];
                if (p != NULL) {
                    *p = temp_20.unk_00.unk_00;
                }
                ++arg0->unk_124;
            } else {
                Unk01 temp_01 = { 0 };
                func_08886AC4(&arg0->unk_120, &temp_20.unk_00.unk_00, temp_01);
            }
        }
        if (arg0->unk_124 > 0x64U) {
            sceIoClose(fd);
            func_08885C28(arg0, func_00(arg0->unk_10C));
            func_08810258(&temp_1A4, -1);
            return 0;
        }
        ++i;
    }
    func_0880F440(&arg0->unk_10C, arg1);
    sceIoClose(fd);
    func_08886120(arg0->unk_120, arg0->unk_120 + arg0->unk_124, func_08885648);
    func_08810258(&temp_1A4, -1);
    return 1;
}
}
