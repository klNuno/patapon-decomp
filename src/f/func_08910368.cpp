#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x60];
} E08910368;

typedef struct {
    E08910368 *unk_00;
    s32 unk_04;
} V08910368;

typedef struct {
    u8 pad_00[0xD84];
    V08910368 unk_D84;
} I08910368;

class B08910368 {
public:
    virtual void v08();
    virtual void v0C();
};

typedef struct {
    void *unk_00;
    I08910368 unk_04;
} S08910368;

extern u8 D_08A44C14[];
extern u8 D_08A44C60[];
extern u8 D_08A44CAC[];

void func_0880416C(void *);
void func_0891046C(S08910368 *);

S08910368 *func_08910368(S08910368 *arg0, s16 arg1) {
    E08910368 *p;
    V08910368 *v;

    if (arg0 != NULL) {
        func_0891046C(arg0);
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A44CAC;
            if (arg0 != NULL) {
                arg0->unk_00 = D_08A44C60;
                ((B08910368 *)arg0)->v0C();
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
