#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40619C(const char *a1, size_t a2, const char *a3, __int64 a4)
{
  char v7; // [rsp+2Ah] [rbp-6h]
  char v8; // [rsp+2Bh] [rbp-5h]
  unsigned int v9; // [rsp+2Ch] [rbp-4h]

  if ( a2 == a4 && !memcmp(a1, a3, a2) )
  {
    *__errno_location() = 0;
    v9 = 0;
  }
  else
  {
    v7 = a1[a2];
    v8 = a3[a4];
    a1[a2] = 0;
    a3[a4] = 0;
    v9 = sub_4060CB(a1, a2 + 1, a3, a4 + 1);
    a1[a2] = v7;
    a3[a4] = v8;
  }
  return v9;
}
