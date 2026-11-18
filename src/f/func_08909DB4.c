#include "common.h"

typedef struct {
    u8 pad_00[0x718];
    s32 unk_718;
    u8 pad_71C[0x8D0 - 0x71C];
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
    u8 pad_18[4];
    u8 unk_1C;
    u8 pad_1D[3];
    u8 unk_20[0x10];
    s32 unk_30;
    s32 unk_34;
    u8 unk_38;
} T_08909BEC;

W_08909BEC *func_088C6464(void *);
void func_088D450C(s32, s32);
void func_088D45F4(O_08909BEC *);
s32 func_088D4D94(O_08909BEC *);
M_08909BEC *func_088E2464(s32);
s32 func_088E2494(s32);
s32 func_088E24A4(s32);
s32 func_088E5574(s32);
s32 func_088F987C(s32);
void func_088F98E4(s32);
s32 func_088F9E2C(s32, void *);
void func_08909980(T_08909BEC *);
void func_08909A60(T_08909BEC *);
void func_08909BEC(T_08909BEC *);
void func_0890AA8C(s32, s32, s32, s32);
s32 func_0890AC7C(s32);
s32 func_0890ACA4(s32);
O_08909BEC *func_0892E80C(void *, s32);
extern void *D_08AD8DD8[];

void func_08909DB4(T_08909BEC *arg0) {
    s32 temp;
    s32 r;
    void *g;
    O_08909BEC *o;

    arg0->unk_1C = 1;
    if (arg0->unk_38 != 0) {
        func_08909BEC(arg0);
    }
    if (arg0->unk_34 >= 0 && arg0->unk_34 != arg0->unk_30) {
        if (func_088C6464(func_088E2464(arg0->unk_10)->unk_506F0)->unk_10850 != 0) {
            o = arg0->unk_14;
            if (o != NULL) {
                if (func_088D4D94(o) == 0) {
                    func_088F98E4(arg0->unk_10);
                    arg0->unk_14 = NULL;
                } else if (func_088E2494(arg0->unk_10) == 0) {
                    o = arg0->unk_14;
                    if (o->unk_718 != 5) {
                        func_088D45F4(o);
                    }
                }
            } else {
                temp = arg0->unk_34;
                if (temp == func_0890AC7C(func_088E5574(arg0->unk_10)) &&
                    func_088E24A4(arg0->unk_10) == 0 && func_088E2494(arg0->unk_10) != 0) {
                    r = func_088F9E2C(arg0->unk_10, arg0->unk_20);
                    if (r != 0) {
                        g = D_08AD8DD8[0] != NULL ? D_08AD8DD8[0] : NULL;
                        o = func_0892E80C(g, func_088F987C(arg0->unk_10));
                        arg0->unk_14 = o;
                        if (o != NULL) {
                            o->unk_8D0 = 1;
                            func_088D450C((s32)arg0->unk_14, r);
                            arg0->unk_14->unk_8E0 = 0;
                            func_08909A60(arg0);
                        }
                    }
                }
            }
        } else if (arg0->unk_14 != NULL && func_088E24A4(arg0->unk_10) == 0) {
            if (func_088D4D94(arg0->unk_14) == 0) {
                func_088F98E4(arg0->unk_10);
                arg0->unk_14 = NULL;
            } else {
                func_088D45F4(arg0->unk_14);
            }
        }

        func_08909980(arg0);
        if (func_088E2494(arg0->unk_10) != 0 && func_088E24A4(arg0->unk_10) == 0) {
            temp = arg0->unk_34;
            if (temp != func_0890AC7C(func_088E5574(arg0->unk_10))) {
                r = func_088E5574(arg0->unk_10);
                func_0890AA8C(r, arg0->unk_34, 1, 1);
            } else {
                temp = arg0->unk_34;
                if (temp == func_0890AC7C(func_088E5574(arg0->unk_10))) {
                    func_0890ACA4(func_088E5574(arg0->unk_10));
                }
            }
        } else {
            temp = arg0->unk_34;
            if (temp == func_0890AC7C(func_088E5574(arg0->unk_10)) &&
                func_0890ACA4(func_088E5574(arg0->unk_10)) != 0) {
                r = func_088E5574(arg0->unk_10);
                func_0890AA8C(r, arg0->unk_30, 1, 1);
            }
        }
        temp = arg0->unk_34;
        if (temp == func_0890AC7C(func_088E5574(arg0->unk_10))) {
            arg0->unk_1C = 0;
        }
    }
}
