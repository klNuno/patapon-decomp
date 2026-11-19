#include "common.h"

extern "C" {

class UnkV {
public:
    virtual void unk_08();
    virtual void unk_0C(s32, s32 *, s32);
};

void func_08891578(s32, s32);
void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_08862BA8(void *, s32);
void func_08944270(void *, s32);
void func_0880416C(void *);
extern u8 D_08A47430[];
extern u8 D_08A47448[];

struct UnkCount {
    s32 *unk_00;

    s32 func_08940B8C_00()
    {
        if (unk_00 != NULL) {
            return *unk_00;
        }
        return 0;
    }

    s32 func_08940B8C_04()
    {
        --*unk_00;
        return func_08940B8C_00();
    }
};

struct UnkPtr {
    s32 unk_00;
    UnkV *unk_04;
    s32 unk_08;
    UnkCount unk_0C;

    void func_08940B8C_08()
    {
        if (this != NULL) {
            if (this != NULL) {
                s32 &temp0 = unk_08;
                if (unk_08 != 0) {
                    UnkCount *temp1 = &unk_0C;
                    if (temp1->func_08940B8C_04() == 0) {
                        unk_04->unk_0C(temp0, *(s32 **)temp1, unk_00);
                        func_08891578(temp0, unk_00);
                    }
                }
            }
        }
    }
};

typedef struct {
    u8 *unk_00;
    u8 pad_04[0x14];
    u8 *unk_18;
    u8 pad_1C[0x3AC];
    u8 unk_3C8[0x1180];
    UnkPtr unk_1548[9];
} Unk;

Unk *func_08940B8C(Unk *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A47430;
        arg0->unk_18 = D_08A47448;
        arg0->unk_1548[8].func_08940B8C_08();
        arg0->unk_1548[7].func_08940B8C_08();
        arg0->unk_1548[6].func_08940B8C_08();
        arg0->unk_1548[5].func_08940B8C_08();
        arg0->unk_1548[4].func_08940B8C_08();
        arg0->unk_1548[3].func_08940B8C_08();
        arg0->unk_1548[2].func_08940B8C_08();
        arg0->unk_1548[1].func_08940B8C_08();
        arg0->unk_1548[0].func_08940B8C_08();
        func_08804000(arg0->unk_3C8, func_08862BA8, 0x8C, 0x20);
        func_08944270(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
