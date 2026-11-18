#include "common.h"

extern "C" {

void *func_08807190(s32, void *);
void func_0881F120(void *, void *, u32);
u32 func_08822BC4(s8 *);
void func_0886A528(void *, void *);
void *func_088749F0(void *, void *);
void *func_08874A08(void *);
void func_088CAC40(void *, s32);
s8 *func_088CB040(s32);
extern s8 D_089F91E8[];

class Str_08874D2C {
public:
    u32 unk_00;
    s8 unk_04[0x28];

    void init() {
        unk_00 = 0;
        unk_04[unk_00] = D_089F91E8[0];
    }
    int in(s8 *p) {
        if (p < unk_04 || (s8 *)(unk_00 + (u32)this + 4) <= p) return 0; return 1;
    }
    Str_08874D2C *assign(s8 *p, u32 len) {
        if (in(p)) {
            return this;
        }
        func_0881F120(unk_04, p, len);
        unk_00 = len;
        unk_04[len] = D_089F91E8[0];
        return this;
    }
    void copy(Str_08874D2C *o) {
        u32 n = o->unk_00;
        if (n > 0x24) n = 0x24;
        func_0881F120(unk_04, o->unk_04, n);
        unk_00 = n;
        unk_04[n] = D_089F91E8[0];
    }
};

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} H_08874D2C;

typedef struct {
    Str_08874D2C unk_00;
    Str_08874D2C unk_2C;
    H_08874D2C *unk_58;
    s32 unk_5C;
} E_08874D2C;

typedef struct {
    u8 pad_00[4];
    u8 unk_04[0x64];
    E_08874D2C *unk_68;
    s32 unk_6C;
} S_08874D2C;

inline int check(s32 *p) {
    if (p != NULL && *p == 0x2E475858) return 1;
    return 0;
}

void func_08874D2C(S_08874D2C *arg0, H_08874D2C *arg1, s32 arg2, s32 arg3) {
    E_08874D2C tmp;
    void *temp;
    s8 *s;
    u32 len;
    E_08874D2C *e;

    if (!check((s32 *)arg1)) {
        return;
    }
    func_088CAC40(arg1, arg3);
    tmp.unk_00.init();
    tmp.unk_2C.init();
    tmp.unk_58 = NULL;
    temp = func_08807190(0x60, func_088749F0(arg0->unk_04, func_08874A08(arg0->unk_04)));
    if (temp != NULL) {
        func_0886A528(temp, &tmp);
    }
    arg0->unk_6C++;
    e = &(arg0->unk_68 + arg0->unk_6C)[-1];
    e->unk_58 = arg1;
    e->unk_5C = arg2;
    s = func_088CB040(e->unk_58->unk_10);
    len = func_08822BC4(s);
    e->unk_2C.copy(e->unk_00.assign(s, len));
}

}
