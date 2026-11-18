#include "common.h"

extern "C" {

class Del_0888A168 {
public:
    virtual s32 *vf_08(s32, s32);
    virtual void vf_0C(s32, s32 *, s32);
};

Del_0888A168 *func_08827AD4(void);
void func_0888A944(s32, s32);

class Ptr_0888A168 {
public:
    s32 unk_00;
    Del_0888A168 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    void set(void *o, s32 tag) {
        unk_00 = tag;
        unk_04 = func_08827AD4();
        unk_08 = (s32)o;
        unk_0C = unk_04->vf_08(unk_08, unk_00);
        *unk_0C = 1;
    }
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
    void release() {
        s32 &p = unk_08;
        if (p != 0) {
            --*unk_0C;
            s32 *c = *(s32 *volatile *)&unk_0C;
            if ((c != NULL ? *c : 0) == 0) {
                unk_04->vf_0C(p, c, unk_00);
                func_0888A944(p, unk_00);
            }
        }
    }
};

typedef struct {
    u8 pad_00[0x10];
} X_0888A168;

typedef struct {
    u8 pad_00[0x2C];
    u8 unk_2C[0x48 - 0x2C];
} E_0888A168;

typedef struct {
    u8 pad_00[0xAC];
    s32 unk_AC;
} T_0888A168;

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
} H_0888A168;

typedef struct {
    s32 unk_00;
    u8 pad_04[0x614];
    u8 unk_618[0x10];
    u8 unk_628[0xD54 - 0x628];
    u8 unk_D54[0xD68 - 0xD54];
    s32 unk_D68;
    s32 unk_D6C;
} S_0888A168;

void func_0888A438(X_0888A168 *, s32);
void func_0888A3F4(X_0888A168 *, void *);
void func_0888844C(X_0888A168 *, s32);
T_0888A168 *func_0888A728(S_0888A168 *, E_0888A168 *);
void *func_08827A50(s32, s32);
void *func_08887ED4(void *, s32, T_0888A168 *, E_0888A168 *, s32, S_0888A168 *);
s32 func_088D26D0(s32, void *);
void func_08888640(s32, s32, void *);
void func_088890BC(s32, s32);
void func_08889CA8(s32 *, void *);
void func_0888A348(void *, s32, Ptr_0888A168 *);

void func_0888A168(S_0888A168 *arg0, H_0888A168 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    Ptr_0888A168 p;
    X_0888A168 x;
    s32 it;
    s32 n;
    s32 i;
    E_0888A168 *e;
    T_0888A168 *t;
    s32 tag;
    void *o;

    func_0888A438(&x, arg2);
    func_0888A3F4(&x, arg0->unk_D54);
    func_0888844C(&x, -1);
    arg0->unk_D6C = arg4;
    e = (E_0888A168 *)((u8 *)arg1 + arg1->unk_20);
    n = *(s32 *)e;
    e = (E_0888A168 *)((s32 *)e + 1);
    i = 0;
    if (i < n) do {
        t = func_0888A728(arg0, e);
        tag = arg0->unk_00;
        o = func_08827A50(0xA00, tag);
        if (o != NULL) {
            o = func_08887ED4(o, i, t, e, t->unk_AC != 0 ? func_088D26D0(arg0->unk_D68, e->unk_2C) : 0, arg0);
        }
        p.set(o, tag);
        func_08888640(p.unk_08, arg0->unk_00, arg0->unk_628);
        func_088890BC(p.unk_08, arg3);
        func_08889CA8(&it, arg0->unk_618);
        func_0888A348(arg0->unk_618, it, &p);
        p.release();
        i++;
        e++;
    } while (i < n);
}

}
