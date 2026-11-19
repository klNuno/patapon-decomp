#include "common.h"
typedef struct {
    s32 unk_00;
} It;

void func_08860FBC(It *, void *);
void func_08860FC4(It *, void *);
void func_08861068(It *, void *, It, It);

void func_088A03B4(u8 *arg0) {
    It temp;
    It temp1;
    It temp2;
    func_08860FC4(&temp1, arg0 + 0x74);
    func_08860FBC(&temp2, arg0 + 0x74);
    func_08861068(&temp, arg0 + 0x74, temp1, temp2);
}
