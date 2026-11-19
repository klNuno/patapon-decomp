#include "common.h"
extern "C" {
class T {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18(f32 arg0);
};
typedef struct {
    u8 pad_00[8];
    T *unk_08;
} S;
void func_0893C4F8(S *arg0) {
    T *temp = arg0->unk_08;
    if (temp != NULL) {
        temp->unk_18(0.1f);
    }
}
}
