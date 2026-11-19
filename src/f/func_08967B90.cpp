#include "common.h"

extern "C" {

struct V {
    u8 pad_00[8];
    virtual void unk_v08();
    virtual void unk_v0C();
    virtual void unk_v10();
    virtual void unk_v14();
    virtual void unk_v18();
    virtual void unk_v1C();
    virtual void unk_v20();
};

typedef struct {
    u8 pad_00[0x7FF8];
    V *unk_7FF8;
} T0;

struct T {
    u8 pad_00[0x34];
    V *unk_34;
    u8 pad_38[0xD9C];
    T0 unk_DD4;
};

extern s32 func_08962C50(s32);
void func_08962CE4(T *);

void func_08967B90(T *arg0) {
    V **temp;
    func_08962C50((s32)arg0);
    temp = &arg0->unk_DD4.unk_7FF8;
    (*temp)->unk_v1C();
    func_08962CE4(arg0);
    arg0->unk_34 = arg0->unk_DD4.unk_7FF8;
    (*temp)->unk_v20();
}

}
