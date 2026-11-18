#include "common.h"

typedef struct N_088C3314 {
    struct N_088C3314 *unk_00;
    struct N_088C3314 *unk_04;
    u8 pad_08[0x10];
    s32 unk_18;
    u8 pad_1C[0x54];
    s32 unk_70;
    s32 *unk_74;
} N_088C3314;

typedef struct {
    N_088C3314 **unk_00;
    u16 unk_04;
    u16 unk_06;
    u8 pad_08[0x24];
    N_088C3314 *unk_2C;
} L_088C3314;

void func_088C3314(L_088C3314 *arg0) {
    N_088C3314 *n;
    N_088C3314 *next;

    n = arg0->unk_2C;
    if (n != NULL) {
        if (n != NULL) {
            do {
                next = n->unk_04;
                if (n->unk_18 != 0) {
                    if (n->unk_00 != NULL) {
                        n->unk_00->unk_04 = n->unk_04;
                    } else {
                        arg0->unk_2C = n->unk_04;
                        if (n->unk_04 != NULL) {
                            n->unk_04->unk_00 = NULL;
                        }
                    }
                    if (n->unk_04 != NULL) {
                        n->unk_04->unk_00 = n->unk_00;
                    } else {
                        if (n->unk_00 != NULL) {
                            n->unk_00->unk_04 = NULL;
                        }
                    }
                    if (arg0->unk_06 > arg0->unk_04 && n != NULL) {
                        arg0->unk_00[arg0->unk_04++] = n;
                    }
                } else if (n->unk_70 == 0) {
                    if (n->unk_74 != NULL) {
                        *n->unk_74 = 1;
                    }
                    if (n->unk_00 != NULL) {
                        n->unk_00->unk_04 = n->unk_04;
                    } else {
                        arg0->unk_2C = n->unk_04;
                        if (n->unk_04 != NULL) {
                            n->unk_04->unk_00 = NULL;
                        }
                    }
                    if (n->unk_04 != NULL) {
                        n->unk_04->unk_00 = n->unk_00;
                    } else {
                        if (n->unk_00 != NULL) {
                            n->unk_00->unk_04 = NULL;
                        }
                    }
                    if (arg0->unk_06 > arg0->unk_04 && n != NULL) {
                        arg0->unk_00[arg0->unk_04++] = n;
                    }
                }
                n = next;
            } while (next != NULL);
        }
    }
}
