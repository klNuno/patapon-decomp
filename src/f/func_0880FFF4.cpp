#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0xC];
} T;

void __throw(void *, void *, void (*)(void));
s32 func_0880DFC4(void *);
s32 func_0880ED14(void *);
u32 *func_0880F21C(void *);
s32 *func_0880F23C(void *);
s32 func_0880F25C(void *);
void func_0880FA60(void *, u32);
void func_0880FBC4(void *, u32);
void func_0880FC08(void *, s32);
void func_0880FC44(s32, s32, s32);
s32 func_0880FCBC(s32, u32, s32);
s32 func_0880FCD8(void *);
u32 func_0880FCFC(u32);
void *func_0880FDF4(T *, char *);
u32 func_0880FE74(void);
s32 func_0880FF94(void *);
s8 *func_0881023C(s32, s32, s32);
extern char D_089F6838[];
extern char D_089F688C[];
void func_0880FD2C(void);

void func_0880FFF4(void *arg0, u32 arg1) {
    T e;
    u32 n;
    u32 m;
    s32 p;
    s32 q;
    u8 f;
    s32 g;
    u8 *o = (u8 *)arg0;

    if (func_0880FE74() < arg1) {
        __throw(D_089F6838, func_0880FDF4(&e, D_089F688C), func_0880FD2C);
    }
    f = (u8)func_0880DFC4(o);
    if (f == 0) {
        n = (u8)func_0880ED14(o);
        m = 0xB;
    } else {
        n = *func_0880F21C(o);
        m = func_0880FF94(o);
    }
    if (arg1 < n) {
        arg1 = n;
    }
    if (arg1 + 1 < 0xCU) {
        arg1 = 0xB;
    } else {
        arg1 = func_0880FCFC(arg1 + 1);
    }
    if (arg1 != m) {
        if (arg1 == 0xB) {
            q = func_0880F25C(o);
            g = 0;
            p = *func_0880F23C(o);
        } else {
            if (m < arg1) {
                q = func_0880FCBC(func_0880FCD8(o), arg1, 0);
            } else {
                try {
                    q = func_0880FCBC(func_0880FCD8(o), arg1, 0);
                } catch (...) {
                    return;
                }
            }
            g = 1;
            s32 t;
            if (f != 0) {
                t = *func_0880F23C(o);
            } else {
                t = func_0880F25C(o);
            }
            p = t;
        }
        *func_0881023C(p, p + n, q) = 0;
        if (f != 0) {
            func_0880FC44(func_0880FCD8(o), p, m);
        }
        func_0880FC08(o, g);
        if (g == 0) {
            func_0880FA60(o, n);
        } else {
            *func_0880F23C(o) = q;
            *func_0880F21C(o) = n;
            func_0880FBC4(o, arg1);
        }
    }
}

}
