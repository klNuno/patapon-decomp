#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x60];
} E_0890FD98;

typedef struct {
    E_0890FD98 *unk_00;
    s32 unk_04;
} V_0890FD98;

typedef struct {
    u8 pad_00[0xD84];
    V_0890FD98 unk_D84;
} I_0890FD98;

class B_0890FD98 {
public:
    virtual void func_08();
    virtual void func_0C();
};

typedef struct {
    void *unk_00;
    I_0890FD98 unk_04;
} S_0890FD98;

typedef struct {
    void *unk_00;
    u8 pad_04[0x8EC];
    S_0890FD98 unk_8F0;
} O_0890FD98;

extern u8 D_08A44CAC[];
extern u8 D_08A44C60[];
extern u8 D_08A44C14[];
void func_0880416C(void *);
void func_088D4300(void *, s32);
extern u8 D_08A4694C[];

O_0890FD98 *func_0890FD98(O_0890FD98 *arg0, s16 arg1) {
    E_0890FD98 *p;
    V_0890FD98 *v;

    if (arg0 != NULL) {
        arg0->unk_00 = D_08A4694C;
        if (&arg0->unk_8F0 != NULL) {
            arg0->unk_8F0.unk_00 = D_08A44CAC;
            if (&arg0->unk_8F0 != NULL) {
                arg0->unk_8F0.unk_00 = D_08A44C60;
                ((B_0890FD98 *)&arg0->unk_8F0)->func_0C();
                if (&arg0->unk_8F0.unk_04 != NULL) {
                    p = arg0->unk_8F0.unk_04.unk_D84.unk_00;
                    v = &arg0->unk_8F0.unk_04.unk_D84;
                    if ((u32)p != (u32)(p + arg0->unk_8F0.unk_04.unk_D84.unk_04)) {
                        do {
                            p++;
                        } while (p != v->unk_00 + arg0->unk_8F0.unk_04.unk_D84.unk_04);
                    }
                    arg0->unk_8F0.unk_04.unk_D84.unk_04 = 0;
                }
                if (&arg0->unk_8F0 != NULL) {
                    arg0->unk_8F0.unk_00 = D_08A44C14;
                }
            }
        }
        func_088D4300(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
