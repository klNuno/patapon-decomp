#include "common.h"

typedef struct {
    u8 pad_00[0x8D0];
    u8 unk_8D0;
    u8 pad_8D1[0x8E0 - 0x8D1];
    s32 unk_8E0;
} O_08909BEC;

typedef struct {
    u8 pad_00[0x10850];
    u8 unk_10850;
} W_08909BEC;

typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0[4];
} M_08909BEC;

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    O_08909BEC *unk_14;
    u8 pad_18[8];
    u8 unk_20[4];
} T_08909BEC;

s32 func_088586E8(void);
W_08909BEC *func_088C6464(void *);
void func_088D450C(s32, s32);
void func_088D45F4(O_08909BEC *);
s32 func_088D4D94(O_08909BEC *);
M_08909BEC *func_088E2464(s32);
s32 func_088F8FA8(W_08909BEC *, s32);
s32 func_088F9130(W_08909BEC *, s32);
s32 func_088F987C(s32);
void func_088F98E4(s32);
s32 func_088F9E2C(s32, void *);
void func_08909980(T_08909BEC *);
void func_08909A60(T_08909BEC *);
O_08909BEC *func_0892E80C(void *, s32);
u32 func_089B5464(s32);
extern s32 D_089FF8B8[];
extern void *D_08AD8DD8[];

void func_08909BEC(T_08909BEC *arg0) {
    s32 r;
    void *g;
    O_08909BEC *o;

    if (func_088C6464(func_088E2464(arg0->unk_10)->unk_506F0)->unk_10850 != 0) {
        if (arg0->unk_14 != NULL) {
            if (func_088D4D94(arg0->unk_14) == 0) {
                func_088F98E4(arg0->unk_10);
                arg0->unk_14 = NULL;
            } else if (func_088F9130(func_088C6464(func_088E2464(arg0->unk_10)->unk_506F0), *(s32 *)&arg0->unk_10) != 0) {
                arg0->unk_14->unk_8E0 = 1;
            }
        } else if (func_089B5464(func_088586E8()) % 10 == 0) {
            if (func_088F8FA8(func_088C6464(func_088E2464(arg0->unk_10)->unk_506F0), -1) == 0) {
                r = func_088F9E2C(arg0->unk_10, arg0->unk_20);
                if (r != 0) {
                    g = D_08AD8DD8[0] != NULL ? D_08AD8DD8[0] : NULL;
                    o = func_0892E80C(g, func_088F987C(arg0->unk_10));
                    arg0->unk_14 = o;
                    if (o != NULL) {
                        o->unk_8D0 = 1;
                        func_088D450C((s32)arg0->unk_14, r);
                        arg0->unk_14->unk_8E0 = D_089FF8B8[0];
                        func_08909A60(arg0);
                    }
                }
            }
        }
    } else {
        if (arg0->unk_14 != NULL) {
            if (func_088D4D94(arg0->unk_14) == 0) {
                func_088F98E4(arg0->unk_10);
                arg0->unk_14 = NULL;
            } else {
                func_088D45F4(arg0->unk_14);
            }
        }
    }
    func_08909980(arg0);
}
