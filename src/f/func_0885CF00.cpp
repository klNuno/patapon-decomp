#include "common.h"

extern "C" {

class C_0885CF00 {
public:
    u8 pad_00[0x8];
    virtual void v08(s32);
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C();
    virtual void v20(s32);
};

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} In_0885CF00;

typedef struct {
    u8 pad_00[0x5C];
    s32 unk_5C;
    u8 pad_60[4];
    s32 unk_64;
    s32 unk_68;
} Obj_0885CF00;

extern s32 D_089F8A28[];

s32 func_0885D36C(Obj_0885CF00 *);
C_0885CF00 **func_0885D490(Obj_0885CF00 *, s32);

inline s32 wrap_0885CF00(s32 v, s32 max) {
    return (max < v) ? 0 : ((v < 0) ? max : v);
}

inline const s32 &max_0885CF00(const s32 &a, const s32 &b) {
    return (b > a) ? b : a;
}

void func_0885CF00(Obj_0885CF00 *arg0, In_0885CF00 *arg1, s32 arg2) {
    s32 v;
    s32 flags;
    s32 dir;
    s32 up;
    s32 down;
    C_0885CF00 **pp;
    C_0885CF00 *o;

    if (arg2 != 0 && arg1 != NULL) {
        v = arg1->unk_00;
        flags = arg1->unk_0C;
        if (v & 0x1000) {
            flags = v;
        }
        if (flags & 0x10) {
            arg0->unk_5C = wrap_0885CF00(arg0->unk_5C - 1, func_0885D36C(arg0) - 1);
        }
        if (flags & 0x40) {
            arg0->unk_5C = wrap_0885CF00(arg0->unk_5C + 1, func_0885D36C(arg0) - 1);
        }
        if (arg0->unk_5C < arg0->unk_64) {
            arg0->unk_64 = arg0->unk_5C;
        }
        if (arg0->unk_5C >= arg0->unk_64 + arg0->unk_68) {
            arg0->unk_64 = arg0->unk_5C - arg0->unk_68;
        }
        arg0->unk_64 = max_0885CF00(arg0->unk_64, D_089F8A28[0]);
        dir = 0;
        if (up = flags & 0x80) {
            dir = -1;
        }
        if (down = flags & 0x20) {
            dir = 1;
        }
        if (func_0885D36C(arg0) > 0) {
            pp = func_0885D490(arg0, arg0->unk_5C);
            if (pp != NULL) {
                o = *pp;
                if (o != NULL) {
                    o->v08(dir);
                    if (up) {
                        o->v20(0);
                    }
                    if (down) {
                        o->v20(1);
                    }
                }
            }
        }
    }
}

}
