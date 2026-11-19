#include "common.h"
extern "C" {
class T {
    u8 pad_00[0x80];
public:
    virtual void unk_08();
    virtual void unk_0C();
};
typedef struct {
    T *unk_00;
    u8 pad_04[4];
    u8 unk_08;
} S;
void func_0890AC48(S *arg0) {
    if (arg0->unk_08 != 0) {
        arg0->unk_00->unk_0C();
    }
}
}
