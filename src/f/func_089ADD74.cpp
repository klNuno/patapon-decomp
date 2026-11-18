#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x60];
} E_089ADD74;

typedef struct {
    E_089ADD74 *unk_00;
    s32 unk_04;
} V_089ADD74;

typedef struct {
    u8 pad_00[0xD84];
    V_089ADD74 unk_D84;
} I_089ADD74;

class B_089ADD74 {
public:
    virtual void func_08();
    virtual void func_0C();
};

typedef struct {
    void *unk_00;
    I_089ADD74 unk_04;
    u8 pad_D90[0x44];
    u8 unk_DD4[0x5C];
    u8 unk_E30[0x1930];
    void *unk_2760;
} S_089ADD74;

extern u8 D_08A48810[];
extern u8 D_08A44CAC[];
extern u8 D_08A44C60[];
extern u8 D_08A44C14[];
void func_089B2808(void *, s32);
void func_089B3344(void *, s32);
void func_0880416C(void *);

S_089ADD74 *func_089ADD74(S_089ADD74 *arg0, s16 arg1) {
    E_089ADD74 *p;
    V_089ADD74 *v;

    if (arg0 != NULL) {
        arg0->unk_2760 = D_08A48810;
        func_089B2808(arg0->unk_E30, -1);
        func_089B3344(arg0->unk_DD4, -1);
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A44CAC;
            if (arg0 != NULL) {
                arg0->unk_00 = D_08A44C60;
                ((B_089ADD74 *)arg0)->func_0C();
                if (&arg0->unk_04 != NULL) {
                    p = arg0->unk_04.unk_D84.unk_00;
                    v = &arg0->unk_04.unk_D84;
                    if ((u32)p != (u32)(p + arg0->unk_04.unk_D84.unk_04)) {
                        do {
                            p++;
                        } while (p != v->unk_00 + arg0->unk_04.unk_D84.unk_04);
                    }
                    arg0->unk_04.unk_D84.unk_04 = 0;
                }
                if (arg0 != NULL) {
                    arg0->unk_00 = D_08A44C14;
                }
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
