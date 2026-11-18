#include "common.h"

typedef struct Obj_0886B1D8 {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[0xA04];
    u8 unk_A10[4];
} Obj_0886B1D8;

void func_0880416C(void *);
void func_0886B260(void *);
extern u8 D_08A44F08[];
extern u8 D_08A44F18[];

Obj_0886B1D8 *func_0886B1D8(Obj_0886B1D8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0->unk_A10 != NULL) {
            func_0886B260(arg0->unk_A10);
        }
        if (arg0 != NULL) {
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A44F18;
                if (arg0 != NULL) {
                    arg0->unk_08 = D_08A44F08;
                }
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
