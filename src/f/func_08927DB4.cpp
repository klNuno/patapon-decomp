#include "common.h"

extern "C" {

typedef struct {
    s32 unk_00;
    s32 unk_04;
} E;

struct N {
    s32 unk_00;
    N *unk_04;
    E *unk_08;
};

struct It {
    N *unk_00;
    int eq1(const It &o) const { int r = 0; if (unk_00->unk_08 == o.unk_00->unk_08 && unk_00->unk_04 == *(N **)&o.unk_00->unk_04) r = 1; return r; }
    int eq(const It &o) const { int r = 0; if (eq1(o) && unk_00->unk_00 == *(s32 *)&o.unk_00->unk_00) r = 1; return r; }
    bool ne(const It &o) const { return !(bool)eq(o); }
};

class U {
    u8 pad_00[0x54];
public:
    f32 unk_54;
private:
    u8 pad_58[0x28];
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual s32 unk_18();
};

struct T {
    u8 pad_00[0x18];
    s32 unk_18;
    f32 unk_1C;
    f32 unk_20;
    u8 unk_24;
    u8 pad_25[7];
    U *unk_2C;
    u8 pad_30[0x1A0];
    N unk_1D0;
    It end() { It r; r.unk_00 = &unk_1D0; return r; }
};

void func_08927ED4(char *arg0, f32 fparg0);
void func_08927EF8(T *);
void func_08928044(T *);
void func_08924D90(E *, s32);
void func_08928198(T *);

void func_08927DB4(T *arg0, s32 arg1) {
    if (arg0->unk_24 != 0) {
        s32 temp = arg0->unk_2C->unk_18();
        if (arg0->unk_18 == temp) {
            func_08927ED4((char *)arg0, (f32)(s32)arg0->unk_2C->unk_54);
        } else {
            arg0->unk_18 = -1;
            arg0->unk_1C = -1.0f;
            arg0->unk_20 = -1.0f;
            arg0->unk_18 = temp;
        }
        func_08927EF8(arg0);
        func_08928044(arg0);
        It it;
        it.unk_00 = arg0->unk_1D0.unk_04;
        while (it.ne(arg0->end())) {
            func_08924D90(*(E **)&it.unk_00->unk_08, arg1);
            if (it.unk_00 != NULL) {
                it.unk_00 = it.unk_00->unk_04;
            }
        }
        func_08928198(arg0);
    }
}

}
