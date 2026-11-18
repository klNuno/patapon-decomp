#include "common.h"

extern "C" {

class E {
public:
    u8 pad_00[0x109AC];
    virtual void func_08(s16);
};

typedef struct {
    E **unk_00;
    s32 unk_04;
} B;

struct T_088D9DD4;

typedef struct {
    u8 pad_00[0x84D90];
    E *unk_84D90;
    s32 unk_84D94;
    u8 pad_84D98[0x30];
    E **unk_84DC8;
    s32 unk_84DCC;
} T_088D9864;

void *func_08807190(s32, void *);
T_088D9DD4 *func_088D9DD4(T_088D9DD4 *, T_088D9DD4 *);
s32 func_088DA1A4(char *, s32);
s32 func_088DA1DC(char *);

static inline void temp(T_088D9864 *arg0, E *arg1) {
    E **p = &arg0->unk_84DC8[arg0->unk_84DCC];
    if (p != NULL) {
        *p = arg1;
    }
    ++arg0->unk_84DCC;
}

void func_088D9AB8(T_088D9864 *arg0, s32 arg1) {
    E **p;
    E **q;
    E *r;
    E *s;
    T_088D9DD4 *v;
    u32 i;

    p = arg0->unk_84DC8;
    B &a = *(B *)(u32)&arg0->unk_84DC8;
    q = a.unk_00;
    if (p != q + arg0->unk_84DCC) {
        s32 &n = arg0->unk_84DCC;
        do {
            p++;
        } while (p != q + n);
    }
    arg0->unk_84DCC = 0;
    if (arg1 != 0) {
        r = arg0->unk_84D90;
        E *&b = arg0->unk_84D90;
        if ((u32)r != (u32)(b + arg0->unk_84D94)) {
            s32 &n = arg0->unk_84D94;
            do {
                r->func_08(-1);
                r++;
            } while (r != b + n);
        }
        arg0->unk_84D94 = 0;
        i = 0;
        s32 &n = arg0->unk_84D94;
        do {
            v = (T_088D9DD4 *)func_08807190(sizeof(E), (void *)func_088DA1A4((char *)arg0, func_088DA1DC((char *)arg0)));
            if (v != NULL) {
                func_088D9DD4(v, (T_088D9DD4 *)arg1);
            }
            arg0->unk_84D94++;
            s = (E *)((u8 *)(b + n) - sizeof(E));
            temp(arg0, s);
        } while (++i < 8);
    } else {
        i = 0;
        E *&b = arg0->unk_84D90;
        do {
            s = b + (7 - i);
            temp(arg0, s);
        } while (++i < 8);
    }
}

}
