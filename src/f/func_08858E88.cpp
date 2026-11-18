#include "common.h"

extern "C" {

class C_08858E88 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
};

extern s32 func_0895B5A0(s32);
extern s32 func_0895B5A8(s32);
C_08858E88 *func_0895B5B0(s32);
void func_08827824(C_08858E88 *);
void func_0882791C(C_08858E88 *);
extern s32 D_08A7B970[];

inline void inl_08858E88(s32 i) {
    s32 temp;
    C_08858E88 *obj;

    if (i == 2) {
        return;
    }
    temp = D_08A7B970[i];
    obj = func_0895B5B0(temp);
    func_0895B5A0(temp);
    obj->unk_1C();
    obj->unk_20();
    func_08827824(obj);
    obj->unk_24();
    obj->unk_14();
    func_0882791C(obj);
    obj->unk_18();
    func_0895B5A8(temp);
}

void func_08858E88(void) {
    u32 i;

    for (i = 0; i < 7; i++) {
        if (i != 2 && D_08A7B970[i] != 0) {
            inl_08858E88(i);
        }
    }
}

}
