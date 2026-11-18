#include "common.h"

extern "C" {

class C_089C20D4 {
public:
    u8 pad_00[0x80];
    virtual void v08();
    virtual void v0C(s32);
};

typedef struct {
    u8 pad_00[0x160];
    s32 unk_160;
    u8 pad_164[0x9C];
    C_089C20D4 unk_200;
    u8 pad_284[0x19C];
    u8 unk_420[4];
} Obj_089C20D4;

void func_089D3BC4(void *, s32);
void func_0898566C(Obj_089C20D4 *, s32);
void func_089C2174(Obj_089C20D4 *, s32);
void func_089C291C(Obj_089C20D4 *, s32);

void func_089C20D4(Obj_089C20D4 *arg0, s32 arg1) {
    func_089D3BC4(arg0->unk_420, arg1);
    func_0898566C(arg0, arg1);
    switch (arg0->unk_160) {
    case 0:
        break;
    case 1:
    case 2:
    case 3:
        func_089C2174(arg0, arg1);
        break;
    case 4:
        func_089C291C(arg0, arg1);
        break;
    case 5:
        break;
    }
    arg0->unk_200.v0C(arg1);
}

}
