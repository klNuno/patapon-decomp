#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} Vec_0887DAB8;

typedef struct {
    u8 pad_00[0xA0];
    u8 unk_A0[0x24];
    Vec_0887DAB8 unk_C4;
    u8 pad_CC[0x30];
    void *unk_FC;
} Obj_0887DAB8;

void func_0880416C(void *);
extern u8 D_08A452BC[];

Obj_0887DAB8 *func_0887DAB8(Obj_0887DAB8 *arg0, s16 arg1) {
    Vec_0887DAB8 *temp;
    s32 *temp2;

    if (arg0 != NULL) {
        arg0->unk_FC = D_08A452BC;
        if (arg0->unk_A0 != NULL) {
            temp = &arg0->unk_C4;
            temp2 = arg0->unk_C4.unk_00;
            if ((u32)temp2 != (u32)(temp2 + arg0->unk_C4.unk_04)) {
                do {
                    temp2++;
                } while (temp2 != temp->unk_00 + arg0->unk_C4.unk_04);
            }
            arg0->unk_C4.unk_04 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
