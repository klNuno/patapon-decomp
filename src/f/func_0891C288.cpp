#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x60];
} E_0891C288;

typedef struct {
    E_0891C288 *unk_00;
    s32 unk_04;
} V_0891C288;

typedef struct {
    u8 pad_00[0x64];
} F_0891C288;

typedef struct {
    F_0891C288 *unk_00;
    s32 unk_04;
} W_0891C288;

typedef struct {
    u8 pad_00[0xD84];
    V_0891C288 unk_D84;
} I_0891C288;

class B_0891C288 {
public:
    virtual void func_08();
    virtual void func_0C();
};

typedef struct {
    void *unk_00;
    I_0891C288 unk_04;
} S_0891C288;

typedef struct {
    u8 pad_00[0x644];
    W_0891C288 unk_644;
    S_0891C288 unk_64C;
} T_0891C288;

extern u8 D_08A44CAC[];
extern u8 D_08A44C60[];
extern u8 D_08A44C14[];
void func_0880416C(void *);

T_0891C288 *func_0891C288(T_0891C288 *arg0, s16 arg1) {
    E_0891C288 *p;
    V_0891C288 *v;
    F_0891C288 *q;
    W_0891C288 *w;

    if (arg0 != NULL) {
        if (&arg0->unk_64C != NULL) {
            arg0->unk_64C.unk_00 = D_08A44CAC;
            if (&arg0->unk_64C != NULL) {
                arg0->unk_64C.unk_00 = D_08A44C60;
                ((B_0891C288 *)&arg0->unk_64C)->func_0C();
                if (&arg0->unk_64C.unk_04 != NULL) {
                    p = arg0->unk_64C.unk_04.unk_D84.unk_00;
                    v = &arg0->unk_64C.unk_04.unk_D84;
                    if ((u32)p != (u32)(p + arg0->unk_64C.unk_04.unk_D84.unk_04)) {
                        do {
                            p++;
                        } while (p != v->unk_00 + arg0->unk_64C.unk_04.unk_D84.unk_04);
                    }
                    arg0->unk_64C.unk_04.unk_D84.unk_04 = 0;
                }
                if (&arg0->unk_64C != NULL) {
                    arg0->unk_64C.unk_00 = D_08A44C14;
                }
            }
        }
        if (arg0 != NULL) {
            q = arg0->unk_644.unk_00;
            w = &arg0->unk_644;
            if ((u32)q != (u32)(q + arg0->unk_644.unk_04)) {
                do {
                    q++;
                } while (q != w->unk_00 + arg0->unk_644.unk_04);
            }
            arg0->unk_644.unk_04 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
