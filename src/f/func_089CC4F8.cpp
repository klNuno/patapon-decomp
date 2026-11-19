#include "common.h"

extern "C" {

typedef struct Obj_089CC4F8 Obj_089CC4F8;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    Obj_089CC4F8 *unk_08;
    s32 unk_0C;
} Sub_089CC4F8;

struct Obj_089CC4F8 {
    u8 pad_00[0x28];
    void *unk_28;
    Sub_089CC4F8 unk_2C;
    u8 pad_3C[0xC];
    void *unk_48;
    s32 unk_4C;
    u8 unk_50[0x90];
    s32 unk_E0;
    s32 unk_E4;
    s32 unk_E8;
};

extern u8 D_08A48E44[];
extern u8 D_08A48E5C[];

void func_08865EE0(void *);
void func_088CE4F4(void *, s32);

struct E {};

inline void func_00(void *arg0, const E &) {
    func_088CE4F4(arg0, 0);
}

Obj_089CC4F8 *func_089CC4F8(Obj_089CC4F8 *arg0, s32 arg1, s32 arg2) {
    func_00(arg0, E());
    arg0->unk_28 = D_08A48E44;
    arg0->unk_48 = D_08A48E5C;
    arg0->unk_2C.unk_00 = 0;
    arg0->unk_2C.unk_04 = 0;
    arg0->unk_2C.unk_08 = NULL;
    arg0->unk_2C.unk_0C = 0;
    arg0->unk_4C = arg1;
    func_08865EE0(arg0->unk_50);
    arg0->unk_E0 = 0;
    arg0->unk_E4 = 0;
    arg0->unk_E8 = arg2;
    arg0->unk_2C.unk_08 = arg0;
    return arg0;
}

}
