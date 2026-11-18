#include "common.h"

extern "C" {

class T;

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} In_0885CF00;

class T {
public:
    u8 pad_00[0x40];
    T *unk_40;
    s32 unk_44;
    u8 pad_48[4];

    virtual void unk_08();
    virtual void unk_0C();
};

struct U : T {
    s32 unk_50;
    s32 unk_54;
    u8 pad_58[8];
    s32 unk_60;
    u8 pad_64[0xC];
    u8 unk_70;
};

typedef struct {
    u8 pad_00[0x5C];
    s32 unk_5C;
    u8 pad_60[4];
    s32 unk_64;
    s32 unk_68;
} Obj_0885CF00;

void func_0885CF00(Obj_0885CF00 *arg0, In_0885CF00 *arg1, s32 arg2);
void func_0885D0EC(U *, s32, s32, s32);
U *func_0885D364(U *, s32);
s32 func_0885DBAC(U *);

static inline s32 unk_00(In_0885CF00 *arg0) {
    s32 t = arg0 != NULL;
    if (t != 0) {
        t = (arg0->unk_00 & 0x100) != 0;
    }
    return t;
}

static inline s32 unk_0C(In_0885CF00 *arg0) {
    u32 t = (u32)arg0 != 0;
    if (t != 0U) {
        t = (arg0->unk_00 & 0x100) != 0;
    }
    return t;
}

static inline s32 unk_04(s32 v, s32 max) {
    return max < v ? 0 : (v < 0 ? max : v);
}

static inline void unk_08(U *arg0, In_0885CF00 *arg1, s32 arg2, s32 arg3) {
    s32 t;
    s32 n;
    if (arg0 != NULL && arg2 != 0 && unk_0C(arg1) != 0) {
        t = arg1->unk_00;
        if (t & 0x1000) arg3 = t;
        if (arg3 & 0x80) {
            n = func_0885DBAC(arg0) - 1;
            arg0->unk_60 = unk_04(arg0->unk_60 - 1, n);
        }
        if (arg3 & 0x20) {
            n = func_0885DBAC(arg0) - 1;
            arg0->unk_60 = unk_04(arg0->unk_60 + 1, n);
        }
        if (arg3 & 0x10) arg0->unk_60 = -1;
    }
}

void func_0885CC78(U *arg0, In_0885CF00 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 n;
    arg0->unk_0C();
    n = arg0->unk_60;
    if (n < 0) {
        if (arg2 != 0) {
            if (unk_00(arg1) != 0) {
                s32 flags = arg1->unk_0C;
                if (flags & 0x40) {
                    arg0->unk_60 = 0;
                } else {
                    unk_08((U *)arg0->unk_40, arg1, arg2, flags);
                }
            } else {
                func_0885CF00((Obj_0885CF00 *)arg0, arg1, arg2);
            }
        }
        func_0885D0EC(arg0, arg2, arg3, arg4);
    } else {
        U *p = func_0885D364(arg0, n);
        if (p != NULL) {
            u8 b = arg0->unk_70;
            f32 x = (f32)(b != 0 ? arg0->unk_50 : 0);
            f32 y = (f32)(b != 0 ? arg0->unk_54 : 0);
            func_0885CC78(p, arg1, arg2, (s32)((f32)arg3 + x), (s32)((f32)arg4 + y));
            if (arg0->unk_70 != 0) {
                func_0885D0EC(arg0, 0, arg3, arg4);
            }
        } else if (arg0->unk_44 != 0) {
            arg0->unk_60 = 0;
        } else {
            arg0->unk_60 = -1;
        }
    }
}

}
