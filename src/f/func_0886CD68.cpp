#include "common.h"

extern "C" {

class Alloc_0886CD68 {
public:
    virtual s32 *vf_08(void *, s32);
};

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0x1510 - 0x54];
    u8 unk_1510;
    u8 pad_1511[0x7];
    u8 unk_1518[0x4];
} Obj_0886CD68;

typedef struct {
    s32 unk_00;
    Alloc_0886CD68 *unk_04;
    Obj_0886CD68 *unk_08;
    s32 *unk_0C;
} Ptr_0886CD68;

Obj_0886CD68 *func_08827A50(s32, s32);
Alloc_0886CD68 *func_08827AD4(void);
void func_0886E47C(void *, s32, void *, s32, s32);
void func_089A6044(void *);
extern u8 D_08A44E34[];

void func_0886CD68(Ptr_0886CD68 *arg0, s32 arg1, s32 arg2, void *arg3) {
    Obj_0886CD68 *obj;

    if ((obj = func_08827A50(0x17B0, arg2)) != NULL) {
        func_0886E47C(obj, arg2, arg3, 0, -1);
        obj->unk_50 = D_08A44E34;
        obj->unk_1510 = 0;
        func_089A6044(obj->unk_1518);
    }
    arg0->unk_00 = arg2;
    arg0->unk_04 = func_08827AD4();
    arg0->unk_08 = obj;
    arg0->unk_0C = arg0->unk_04->vf_08(obj, arg0->unk_00);
    *arg0->unk_0C = 1;
}

}
