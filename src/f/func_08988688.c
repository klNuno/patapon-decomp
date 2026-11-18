#include "common.h"

extern u8 D_08A482DC[];
extern u8 D_08A482CC[];

typedef struct Obj_08988688 {
    u8 pad_00[0x8];
    void *unk_08;
    u8 pad_0C[0x2C];
    u8 unk_38[4];
} Obj_08988688;

void func_0880416C(void *);
void func_08988710(void *);

Obj_08988688 *func_08988688(Obj_08988688 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0->unk_38 != NULL) {
            func_08988710(arg0->unk_38);
        }
        if (arg0 != NULL) {
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A482CC;
                if (arg0 != NULL) {
                    arg0->unk_08 = D_08A482DC;
                }
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
