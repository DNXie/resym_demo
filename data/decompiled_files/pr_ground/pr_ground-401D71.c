#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401D71(__int64 a1)
{
  __int64 v1; // rbx
  char *v2; // rax
  __int64 result; // rax
  __int64 v4[3]; // [rsp+18h] [rbp-18h] BYREF

  if ( (unsigned int)sub_40A9E8(a1, 0LL, 10LL, v4, &locale) || v4[0] <= 0 || v4[0] > 0x7FFFFFFF )
  {
    v1 = sub_405B47(a1);
    v2 = gettext("invalid number of columns: %s");
    error(1, 0, v2, v1);
  }
  result = v4[0];
  dword_61025C = v4[0];
  byte_610374 = 1;
  return result;
}
