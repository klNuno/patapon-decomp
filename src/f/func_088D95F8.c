#include "common.h"

void func_0880416C(void *);
void func_088D9270(void *);
extern u8 D_08A463A0[];
extern u8 D_08A46370[];

typedef struct {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[0x614];
    u8 unk_620[4];
} Obj_088D95F8;

Obj_088D95F8 *func_088D95F8(Obj_088D95F8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0->unk_620 != NULL) {
            func_088D9270(arg0->unk_620);
        }
        if (arg0 != NULL) {
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A46370;
                if (arg0 != NULL) {
                    arg0->unk_08 = D_08A463A0;
                }
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
