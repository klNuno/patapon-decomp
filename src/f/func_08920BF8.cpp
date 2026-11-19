#include "common.h"

extern "C" {

class V {
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

typedef struct {
    s32 *unk_00;
    u8 pad_04[0x18];
    s32 *unk_1C;
} T;

void func_0880416C(void *);
extern void func_08924038(char *, s32);
extern s32 D_08A46CD4[];
extern s32 D_08A46CE0[];

T *func_08920BF8(T *arg0, s16 arg1) {
    s16 temp = arg1;
    T *temp2 = arg0;

    if (temp2 != NULL) {
        temp2->unk_00 = D_08A46CD4;
        temp2->unk_1C = D_08A46CE0;
        ((V *)temp2)->unk_24();
        func_08924038((char *)temp2, 0);
        if (temp > 0) {
            func_0880416C(temp2);
        }
    }
    return temp2;
}

}
