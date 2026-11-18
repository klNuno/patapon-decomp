#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00[4][4];
} M_08933578;
typedef M_08933578 Mtx;

class S_0887DD74 {
public:
    Mtx unk_00;
    Mtx unk_40;
    u8 pad_80[0xC];
    f32 unk_8C;
    u8 pad_90[8];
    f32 unk_98;
    u8 pad_9C[0x28];
    S_0887DD74 **unk_C4;
    u32 unk_C8;
    u8 pad_CC[0x18];
    u8 unk_E4;
    u8 pad_E5[0x17];

    virtual void unk_08();
    virtual void unk_0C(s32);
};

void func_0887DD74(S_0887DD74 *arg0);
void func_088554A0(M_08933578 *, M_08933578 *, M_08933578 *);
void func_08866B54(Mtx *, s32, void *);
void *func_08866B80(Mtx *, s32);

void func_0887DEB0(S_0887DD74 *arg0, s32 arg1, S_0887DD74 *arg2, f32 arg3) {
    Mtx temp;
    f32 temp2;
    S_0887DD74 **temp3;
    S_0887DD74 **temp4;
    void *temp5;

    func_0887DD74(arg0);
    arg0->unk_E4 = 0;
    arg0->unk_0C(arg1);
    if (arg2 != NULL) {
        func_088554A0(&temp, &arg2->unk_40, &arg0->unk_00);
        func_08866B54(&arg0->unk_40, 0, func_08866B80(&temp, 0));
        func_08866B54(&arg0->unk_40, 1, func_08866B80(&temp, 1));
        func_08866B54(&arg0->unk_40, 2, func_08866B80(&temp, 2));
        temp5 = func_08866B80(&temp, 3);
        func_08866B54(&arg0->unk_40, 3, temp5);
        temp2 = arg0->unk_8C;
    } else {
        func_08866B54(&arg0->unk_40, 0, func_08866B80(&arg0->unk_00, 0));
        func_08866B54(&arg0->unk_40, 1, func_08866B80(&arg0->unk_00, 1));
        func_08866B54(&arg0->unk_40, 2, func_08866B80(&arg0->unk_00, 2));
        temp5 = func_08866B80(&arg0->unk_00, 3);
        func_08866B54(&arg0->unk_40, 3, temp5);
        temp2 = arg0->unk_8C;
    }
    arg0->unk_98 = temp2 * arg3;
    temp3 = arg0->unk_C4;
    temp4 = arg0->unk_C4 + arg0->unk_C8;
    if (temp3 != temp4) {
        do {
            if (*temp3 != NULL) {
                func_0887DEB0(*temp3, arg1, arg0, arg3);
                ++temp3;
            } else {
                ++temp3;
            }
        } while (temp3 != temp4);
    }
}

}
