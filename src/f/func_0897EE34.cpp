#include "common.h"
extern "C" {
void func_089AE168(void *);
class T {
    u8 pad_00[0x58];
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20(s32 arg0);
};
typedef struct {
    u8 pad_00[0x2780];
    T unk_2780;
} S;
void func_0897EE34(S *arg0) {
    func_089AE168(arg0);
    arg0->unk_2780.unk_20(1);
}
}
