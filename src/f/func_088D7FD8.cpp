#include "common.h"

extern "C" {

class Cls_088D7FD8 {
public:
    u8 pad_00[0x8];
    virtual void func_slot0();
    virtual void func_slot1();
    virtual void func_slot2();
    virtual void func_slot3();
    virtual void func_slot4();
};

typedef struct Sub_088D7FD8 {
    u8 pad_00[0x4C];
    u8 *unk_4C;
} Sub_088D7FD8;

typedef struct Obj_088D7FD8 {
    u8 pad_00[0x8];
    u8 *unk_08;
    u8 pad_0C[0x14];
    Sub_088D7FD8 unk_20;
} Obj_088D7FD8;

void func_0880416C(void *);
void func_088CD874(void *, s32);
void func_0895EFE4(void *, s32);
extern u8 D_08A462CC[];
extern u8 D_08A46324[];

Obj_088D7FD8 *func_088D7FD8(Obj_088D7FD8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A46324;
        ((Cls_088D7FD8 *)arg0)->func_slot4();
        if (&arg0->unk_20 != NULL) {
            arg0->unk_20.unk_4C = D_08A462CC;
            func_088CD874(&arg0->unk_20, 0);
        }
        func_0895EFE4(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
