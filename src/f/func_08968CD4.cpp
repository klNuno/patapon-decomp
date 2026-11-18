#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0xD4];
    u8 unk_D4;
} Z_08968CD4;

typedef struct {
    u8 pad_00[8];
    Z_08968CD4 *unk_08;
} Y_08968CD4;

struct N_08968CD4 {
    N_08968CD4 *unk_00;
    N_08968CD4 *unk_04;
    Y_08968CD4 *unk_08;
    int eq4(N_08968CD4 *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == *(N_08968CD4 **)&o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(N_08968CD4 *o) {
        int r = 0;
        if (eq4(o) && unk_00 == *(N_08968CD4 **)&o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(N_08968CD4 *o) { return !(bool)eq(o); }
};

typedef struct {
    u8 unk_00[0x10];
} A_08968CD4;

struct It_08968CD4 {
    N_08968CD4 *unk_00;
};

typedef struct {
    N_08968CD4 *end() { return &unk_1820; }
    u8 pad_00[0x14];
    s32 unk_14;
    u8 pad_18[8];
    A_08968CD4 unk_20[0x180];
    N_08968CD4 unk_1820;
    u8 pad_182C[0x1C];
    u8 unk_1848[4];
} H_08968CD4;

typedef struct {
    u8 pad_00[8];
    H_08968CD4 *unk_08;
    u8 pad_0C[4];
} E_08968CD4;

typedef struct {
    u8 pad_00[0x438];
    E_08968CD4 *unk_438;
    u32 unk_43C;
} S_08968CD4;

void func_08963000(void);
s32 func_08968F0C(H_08968CD4 *, Y_08968CD4 *);
N_08968CD4 *func_08968E44(N_08968CD4 *, A_08968CD4 *);
void func_08966314(N_08968CD4 *, N_08968CD4 *);
void func_0896671C(void *, N_08968CD4 *);
s32 func_08966988(N_08968CD4 *);

void func_08968CD4(S_08968CD4 *arg0) {
    E_08968CD4 *p;
    E_08968CD4 **d;

    func_08963000();
    p = arg0->unk_438;
    d = &arg0->unk_438;
    if ((u32)p != (u32)(p + arg0->unk_43C)) {
        u32 *sz = &arg0->unk_43C;
        do {
            H_08968CD4 *h = p->unk_08;
            if (h != NULL) {
                It_08968CD4 it;
                it.unk_00 = h->unk_1820.unk_04;
                while (it.unk_00->ne(h->end())) {
                    N_08968CD4 *t = it.unk_00;
                    Y_08968CD4 *y;
                    if (it.unk_00 != NULL) {
                        it.unk_00 = it.unk_00->unk_04;
                    }
                    y = t->unk_08;
                    if (y->unk_08 != NULL && y->unk_08->unk_D4 == 0) {
                        s32 i = func_08968F0C(h, y);
                        if (i != -1) {
                            N_08968CD4 *n = func_08968E44(&h->unk_1820, &h->unk_20[i]);
                            if (n != NULL) {
                                func_08966314(&h->unk_1820, n);
                                func_0896671C(h->unk_1848, n);
                                h->unk_14 = func_08966988(&h->unk_1820);
                            }
                        }
                    }
                }
            }
            p++;
        } while (p != *d + *sz);
    }
}

}
