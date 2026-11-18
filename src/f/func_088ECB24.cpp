#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0xC];
    s32 *unk_0C;
} E_088ECB24;

typedef struct N_088ECB24 {
    u8 pad_00[0x4];
    struct N_088ECB24 *unk_04;
    E_088ECB24 *unk_08;
} N_088ECB24;

struct It_088ECB24 {
    N_088ECB24 *unk_00;
    void next() {
        if (unk_00 != NULL) {
            unk_00 = unk_00->unk_04;
        }
    }
};

struct L_088ECB24 {
    N_088ECB24 *unk_00;
    u8 pad_04[0x18];
    u32 unk_1C;
    E_088ECB24 *get1() {
        if (unk_1C < 2) {
            return NULL;
        }
        It_088ECB24 it;
        it.unk_00 = unk_00;
        it.next();
        return it.unk_00->unk_08;
    }
};

struct Sub_088ECB24 {
    u8 pad_00[0x224];
    L_088ECB24 unk_224;
};

typedef struct {
    u8 pad_00[0x9600];
    Sub_088ECB24 unk_9600;
    u8 pad_9844[0x98B0 - 0x9600 - sizeof(Sub_088ECB24)];
    s32 unk_98B0;
} R_088ECB24;

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} W_088ECB24;

typedef struct {
    u8 pad_00[0x14];
    W_088ECB24 *unk_14;
} S_088ECB24;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088533F8(void *, s32);
R_088ECB24 *func_08899E18(s32, s32);
void func_088ECC50(s32, s32 *, s32 *, u8);
s32 func_0885A680(void);

void func_088ECB24(S_088ECB24 *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 *c;
    u8 d;
    R_088ECB24 *r;
    Sub_088ECB24 *t;
    s32 *p;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_088533F8(arg1, 2);
    r = func_08899E18(arg0->unk_14->unk_36B10, *a);
    if (r != NULL) {
        if (r->unk_98B0 != 0) {
            func_088ECC50(r->unk_98B0, b, c, d);
            t = &r->unk_9600;
            p = t->unk_224.get1()->unk_0C;
            *p = func_0885A680();
        }
    }
    func_08852F00(arg1, 0);
}

}
