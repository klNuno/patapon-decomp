#include "common.h"

extern "C" {

struct E_088A449C {
    virtual void v0(s32);
    u8 pad_04[0xA0];
};

typedef struct {
    u8 pad_00[0xA4];
} T_088A449C;

typedef struct {
    u8 pad_00[0x524];
    E_088A449C *unk_524;
    s32 unk_528;
} O_088A449C;

void *func_08807190(s32, void *);
void func_0889B278(T_088A449C *, void *);
void func_0889B528(void *, s32);
void func_088A45BC(void *, T_088A449C *);
s32 func_088A4740(O_088A449C *, s32);
s32 func_088A4760(O_088A449C *);

void func_088A449C(O_088A449C *arg0, void *arg1) {
    T_088A449C t;
    E_088A449C *p;
    E_088A449C **d;
    s32 *n;
    void *q;
    u32 i;

    p = arg0->unk_524;
    d = &arg0->unk_524;
    if ((u32)p != (u32)(p + arg0->unk_528)) {
        n = &arg0->unk_528;
        do {
            p->v0(-1);
            p++;
        } while (p != *d + *n);
    }
    arg0->unk_528 = 0;
    for (i = 0; i < 8; i++) {
        func_0889B278(&t, arg1);
        q = func_08807190(0xA4, (void *)func_088A4740(arg0, func_088A4760(arg0)));
        if (q != NULL) {
            func_088A45BC(q, &t);
        }
        arg0->unk_528++;
        func_0889B528(&t, -1);
    }
}

}
