#include "common.h"

extern "C" {

class Cls_0887C68C {
public:
    u8 pad_00[0x4C];
    virtual void func_slot0(s32);
};

typedef struct Obj_0887C68C {
    u8 *unk_00;
    u8 pad_04[4];
    Cls_0887C68C *unk_08;
} Obj_0887C68C;

void func_0880416C(void *);
extern u8 D_08A45248[];
extern u8 D_08A4525C[];

Obj_0887C68C *func_0887C68C(Obj_0887C68C *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A45248;
        if (arg0->unk_08 != NULL) {
            if (arg0->unk_08 != NULL) {
                arg0->unk_08->func_slot0(1);
            }
            arg0->unk_08 = NULL;
        }
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A4525C;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
