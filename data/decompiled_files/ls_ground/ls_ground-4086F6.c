#include "/share/binary_recovery/clang-parser/defs.hh"
size_t __fastcall sub_4086F6(__int64 a1, __int64 a2)
{
  size_t result; // rax
  int v3; // [rsp+1Ch] [rbp-24h]
  char s[24]; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v5; // [rsp+38h] [rbp-8h]

  v5 = __readfsqword(0x28u);
  if ( a1 )
  {
    v3 = sub_40F59D(a1, 0LL);
    result = 0LL;
    if ( v3 >= 0 )
      result = (unsigned int)v3;
  }
  else
  {
    sprintf(s, "%lu", a2);
    result = strlen(s);
  }
  return result;
}
