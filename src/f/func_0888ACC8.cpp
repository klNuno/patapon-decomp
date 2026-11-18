#include "common.h"

extern "C" {

typedef struct {
    s32 unk_00;
    u32 unk_04;
    u8 pad_08[4];
    s32 unk_0C;
} UnkObj;
typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
    UnkObj *unk_0C;
    char *unk_10;
} Unk14;
typedef struct {
    char *unk_00;
    void (*unk_04)(char *, UnkObj *, s32, s32);
    s32 unk_08;
    u8 pad_0C[4];
} Unk10;

extern s32 D_089DDF2C[];
extern char *D_089DE4F0[];
s32 func_08822AD0(char *, char *);
void func_0888B0F8(s32, char *);
void func_0888B104(s32, char *);
void func_0888B2D8(Unk14 *, s32);
UnkObj *func_0888B844(Unk14 *);
s32 func_0888B87C(char *);

static inline s32 func_00(UnkObj *arg0) {
    s32 temp = arg0->unk_00 == D_089DDF2C[0];
    if (temp != 0) {
        temp = (arg0->unk_04 & 1) != 0;
    }
    return temp;
}
static inline s32 func_04(Unk14 *arg0, Unk14 *arg1) {
    s32 temp = 0;
    if (arg0->unk_04 == arg1->unk_04 && arg0->unk_08 == arg1->unk_08) {
        temp = 1;
    }
    return temp;
}
inline bool func_10(Unk14 *arg0, Unk14 *arg1) { return !(bool)func_04(arg0, arg1); }
static inline s32 func_08(Unk14 *arg0) {
    s32 temp = 0;
    if (arg0->unk_0C != NULL && arg0->unk_0C->unk_0C != 0) {
        temp = 1;
    }
    return temp;
}
static inline char *func_0C(Unk14 *arg0) {
    return arg0->unk_10 != NULL ? arg0->unk_10 + 7 : NULL;
}

void func_0888ACC8(UnkObj **arg0, Unk10 *arg1, u32 arg2, s32 arg3, Unk10 *arg4) {
    Unk14 temp_4C;
    Unk14 temp_38;
    UnkObj *temp_34;
    char *temp_00;
    if (!func_00(*arg0)) {
        return;
    }
    func_0888B0F8((s32)&temp_4C, (char *)arg0);
    func_0888B104((s32)&temp_38, (char *)arg0);
    temp_00 = D_089DE4F0[0];
    while (func_10(&temp_4C, &temp_38)) {
        if (func_08(&temp_4C) != 0) {
            u32 j;
            char *a;
            char *p = func_0C(&temp_4C);
            s32 n = -1;
            s32 i = 0;
            while (p[i] != 0) {
                if (p[i] == '.') {
                    n = i;
                }
                ++i;
            }
            a = p + (n + 1);
            if (arg3 != 0 && func_08822AD0(a, temp_00) == 0 && func_00(func_0888B844(&temp_4C)) != 0) {
                temp_34 = func_0888B844(&temp_4C);
                func_0888ACC8(&temp_34, arg1, arg2, arg3, NULL);
            } else {
                s32 temp = 0;
                j = 0;
                if (arg2 != 0) {
                    Unk10 *b = arg1;
                    do {
                        if (func_08822AD0(a, b->unk_00) == 0) {
                            s32 n = func_0888B87C((char *)&temp_4C);
                            UnkObj *obj = func_0888B844(&temp_4C);
                            b->unk_04(func_0C(&temp_4C), obj, n, b->unk_08);
                            temp = 1;
                            break;
                        }
                        ++b;
                    } while (++j < arg2);
                }
                if (arg4 != NULL && temp == 0) {
                    s32 n = func_0888B87C((char *)&temp_4C);
                    UnkObj *obj = func_0888B844(&temp_4C);
                    arg4->unk_04(func_0C(&temp_4C), obj, n, arg4->unk_08);
                }
            }
        }
        func_0888B2D8(&temp_4C, 1);
    }
}
}
