#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40290D(int a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int i; // [rsp+1Ch] [rbp-4h]

  for ( i = 0; ; ++i )
  {
    result = i;
    if ( (int)i >= a1 )
      break;
    sub_40226B(*(const char **)(8LL * (int)i + a2));
  }
  return result;
}
