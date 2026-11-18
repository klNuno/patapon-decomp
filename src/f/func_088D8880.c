#include "common.h"

void func_0880416C(void *);
void func_088D8908(void *);
extern u8 D_08A463CC[];
extern u8 D_08A463DC[];

typedef struct {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[0x88];
    u8 unk_94[4];
} Obj_088D8880;

Obj_088D8880 *func_088D8880(Obj_088D8880 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0->unk_94 != NULL) {
            func_088D8908(arg0->unk_94);
        }
        if (arg0 != NULL) {
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A463DC;
                if (arg0 != NULL) {
                    arg0->unk_08 = D_08A463CC;
                }
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
