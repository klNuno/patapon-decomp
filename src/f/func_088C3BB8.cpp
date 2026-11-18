#include "common.h"

extern "C" {

class C_088C3BB8;
struct M_088C3BB8;
typedef void (C_088C3BB8::*P_088C3BB8)(M_088C3BB8 *);

typedef struct N_088C3BB8 {
    struct N_088C3BB8 *unk_00;
    struct N_088C3BB8 *unk_04;
} N_088C3BB8;

struct M_088C3BB8 {
    M_088C3BB8 *unk_00;
    M_088C3BB8 *unk_04;
    u8 pad_08[4];
    u16 unk_0C;
    u16 unk_0E;
    u8 pad_10[0xC];
    N_088C3BB8 *unk_1C;
    u8 pad_20[0x28];
    P_088C3BB8 unk_48;
};

class C_088C3BB8 {
public:
    N_088C3BB8 **unk_00;
    u16 unk_04;
    u16 unk_06;
    N_088C3BB8 **unk_08;
    u16 unk_0C;
    u16 unk_0E;
    u8 pad_10[4];
    M_088C3BB8 *unk_14;
    u8 pad_18[0x18];
    f32 unk_30;
};

void func_088C3314(C_088C3BB8 *);
void func_088C346C(C_088C3BB8 *, M_088C3BB8 *);

void func_088C3BB8(C_088C3BB8 *arg0, f32 arg1) {
    M_088C3BB8 *m;
    M_088C3BB8 *mnext;
    N_088C3BB8 *r;

    arg0->unk_30 = arg1;
    func_088C3314(arg0);
    m = arg0->unk_14;
    if (m != NULL) {
        while (m != NULL) {
            mnext = m->unk_04;
            if (m->unk_48) {
                P_088C3BB8 f = m->unk_48;
                (arg0->*f)(m);
            } else {
                switch (m->unk_0C) {
                case 0x4A0:
                case 0x5D0:
                case 0x280:
                    for (r = m->unk_1C; r != NULL; r = r->unk_04) {
                        if (arg0->unk_0E > arg0->unk_0C && r != NULL) {
                            arg0->unk_08[arg0->unk_0C++] = r;
                        }
                    }
                    break;
                }
                m->unk_1C = NULL;
                func_088C346C(arg0, m);
                m = mnext;
                continue;
            }
            if (m->unk_0E & 0x8200) {
                func_088C346C(arg0, m);
            }
            m = mnext;
        }
    }
}

}
