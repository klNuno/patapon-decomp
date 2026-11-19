#include "common.h"

extern "C" {

class T {
public:
    u8 pad_00[0x14];
    virtual void unk_08(s16);
};

class G {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(T *);
};

void func_0895BAB4(void *);
void func_0895BAC0(void *);
extern T *D_08AD9750[];
extern G *D_08AD9754[];

void func_0893F444(void) {
    if (D_08AD9750[0] != NULL) {
        func_0895BAB4(D_08AD9750[0]);
        func_0895BAC0(D_08AD9750[0]);
        D_08AD9750[0]->unk_08(-1);
        D_08AD9754[0]->unk_10(D_08AD9750[0]);
        D_08AD9750[0] = NULL;
    }
    D_08AD9754[0] = NULL;
}

}
