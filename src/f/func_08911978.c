#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0xC];
    u8 unk_10[0x4];
} Obj_08911978;

extern u8 D_08A4489C[];
extern u8 D_08A45598[];
extern u8 D_08A46980[];
extern u8 D_08A4699C[];

void func_0880416C(void *);
void func_08945EC4(void *, s32);

Obj_08911978 *func_08911978(Obj_08911978 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A46980;
        func_08945EC4(arg0->unk_10, -1);
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A4699C;
            if (arg0 != NULL) {
                arg0->unk_00 = D_08A45598;
                if (arg0 != NULL) {
                    arg0->unk_00 = D_08A4489C;
                }
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
