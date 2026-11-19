#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00, unk_04;
} V;

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
} T_088F2F40;

class O {
public:
    u8 pad_00[0x28];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual V *unk_28();
};

struct N {
    N *unk_00;
    N *unk_04;
    T_088F2F40 unk_08;
};

struct I {
    N *unk_00;
    s32 unk_04(N *arg0) const { return unk_00 == arg0; }
    bool unk_08(N *arg0) const { return !(bool)unk_04(arg0); }
};

typedef struct {
    u8 pad_00[0x3014];
    N unk_3014;
} T;

typedef struct {
    u8 pad_00[4];
    char *unk_04;
} S;

s32 func_088E0F08(char *);
s32 func_088E2484(char *);
void func_088E46C8(T_088F2F40 *, s32);
void func_088F3028(T_088F2F40 *, void *);
char *func_088F3298(char *arg0, char *arg1);
f32 func_088542D4(V *);
f32 fabsf(f32);

s32 func_088F3D18(T_088F2F40 *arg0, S *arg1, V *arg2, s32 arg3) {
    struct {
        u8 pad_00[4];
        T_088F2F40 unk_04[3];
        u8 pad_34[0xC];
    } temp;
    V t0, t1, t2;
    I it;
    N *end;
    T_088F2F40 *ptr;
    O **obj;
    f32 f, x, y, dx;

    arg0->unk_00 = 0;
    *(s32 *)&arg0->pad_04[0] = 0;
    *(s32 *)&arg0->pad_04[4] = 0;
    *(s32 *)&arg0->pad_04[8] = 0;
    f = 3.402823466e38f;
    T *p = (T *)func_088E0F08(arg1->unk_04);
    it.unk_00 = p->unk_3014.unk_00;
    end = &p->unk_3014;
    if (it.unk_08(end)) {
        do {
            ptr = &it.unk_00->unk_08;
            obj = (O **)&ptr->pad_04[4];
            if (func_088E2484((char *)*obj) != 0) {
                V *v = (*obj)->unk_28();
                x = v->unk_00;
                y = v->unk_04;
                switch (arg3) {
                case 0: {
                    f32 lim = 15.0f;
                    if (x + lim > arg2->unk_00 && x - lim < arg2->unk_00) {
                        f32 xx = arg2->unk_00;
                        f32 yy = arg2->unk_04;
                        f32 a = x - xx;
                        f32 b = y - yy;
                        t0.unk_00 = a;
                        t0.unk_04 = b;
                        f32 d = func_088542D4(&t0);
                        if (d < f) {
                            f = d;
                            func_088F3298((char *)&temp.unk_04[2], (char *)ptr);
                            func_088F3028(&temp.unk_04[2], arg0);
                            func_088E46C8(&temp.unk_04[2], -1);
                        }
                    }
                    break;
                }
                case 1:
                    if (!(x >= arg2->unk_00)) {
                        dx = x - arg2->unk_00;
                        if (!(fabsf(dx) < 1.1920928955078125e-7f)) {
                            f32 dy = y - arg2->unk_04;
                            t1.unk_00 = dx;
                            t1.unk_04 = dy;
                            f32 d = func_088542D4(&t1);
                            if (d < f) {
                                f = d;
                                func_088F3298((char *)&temp.unk_04[1], (char *)ptr);
                                func_088F3028(&temp.unk_04[1], arg0);
                                func_088E46C8(&temp.unk_04[1], -1);
                            }
                        }
                    }
                    break;
                case 2:
                    if (!(x <= arg2->unk_00)) {
                        dx = x - arg2->unk_00;
                        if (!(fabsf(dx) < 1.1920928955078125e-7f)) {
                            f32 dy = y - arg2->unk_04;
                            t2.unk_00 = dx;
                            t2.unk_04 = dy;
                            f32 d = func_088542D4(&t2);
                            if (d < f) {
                                f = d;
                                func_088F3298((char *)&temp.unk_04[0], (char *)ptr);
                                func_088F3028(&temp.unk_04[0], arg0);
                                func_088E46C8(&temp.unk_04[0], -1);
                            }
                        }
                    }
                    break;
                }
            }
            it.unk_00 = it.unk_00->unk_00;
        } while (it.unk_08(end));
    }
    return 0;
}

}
