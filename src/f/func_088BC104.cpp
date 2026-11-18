#include "common.h"

extern "C" {

struct A_088BC03C {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_088BC03C {
    s32 *unk_00;
    s32 get() {
        if (unk_00 != NULL) {
            return *unk_00;
        }
        return 0;
    }
    s32 release() {
        --*unk_00;
        return get();
    }
};

struct SP_088BC03C {
    void *unk_00;
    C_088BC03C unk_04;
};

typedef struct {
    s32 unk_00;
    A_088BC03C *unk_04;
    SP_088BC03C unk_08;
} Obj_088BC03C;

typedef struct {
    u8 pad_00[0x50];
    s32 unk_50;
    u8 unk_54[0x408];
    u32 unk_45C;
} T088BC03C;

struct Unk1 {
    u8 pad_00[0x30];
    f32 unk_30;
    u8 pad_34[0x1C];
};

void func_088B8BFC(Obj_088BC03C *, void *, u32);
void func_088B5A98(void *, s32);
void func_08855354(char *);
void func_088B8500(void *, Unk1 *, s32, f32 *);

void func_088BC104(T088BC03C *arg0) {
    Obj_088BC03C temp;
    Unk1 temp2;
    f32 temp3[4];
    u32 temp4;
    u32 temp5;

    func_08855354((char *)&temp2);
    temp4 = 0;
    if (arg0->unk_45C != 0) {
        temp5 = 0;
        do {
            SP_088BC03C *temp6;
            C_088BC03C *temp7;

            func_088B8BFC(&temp, arg0->unk_54, temp4);
            temp2.unk_30 = (f32)temp5;
            temp3[0] = 1.0f;
            temp3[1] = 1.0f;
            temp3[2] = 1.0f;
            temp3[3] = 1.0f;
            func_088B8500(temp.unk_08.unk_00, &temp2, arg0->unk_50, temp3);
            temp6 = &temp.unk_08;
            if (temp.unk_08.unk_00 != NULL) {
                temp7 = &temp.unk_08.unk_04;
                if (temp7->release() == 0) {
                    temp.unk_04->v1(temp6->unk_00, temp7->unk_00, temp.unk_00);
                    func_088B5A98(temp6->unk_00, temp.unk_00);
                }
            }
            temp4++;
            temp5 += 0x2D0;
        } while (temp4 < arg0->unk_45C);
    }
}

}
