#include "/share/binary_recovery/clang-parser/defs.hh"
_QWORD *__fastcall sub_402DCA(_QWORD *a1)
{
  _QWORD *result; // rax

  *a1 = 0x6A09E667F3BCC908LL;
  a1[1] = 0xBB67AE8584CAA73BLL;
  a1[2] = 0x3C6EF372FE94F82BLL;
  a1[3] = 0xA54FF53A5F1D36F1LL;
  a1[4] = 0x510E527FADE682D1LL;
  a1[5] = 0x9B05688C2B3E6C1FLL;
  a1[6] = 0x1F83D9ABFB41BD6BLL;
  a1[7] = 0x5BE0CD19137E2179LL;
  a1[9] = 0LL;
  a1[8] = a1[9];
  result = a1;
  a1[10] = 0LL;
  return result;
}
