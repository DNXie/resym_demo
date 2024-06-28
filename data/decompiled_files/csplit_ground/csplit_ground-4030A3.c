#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4030A3(char a1)
{
  __int64 result; // rax
  int *v2; // rax
  unsigned int i; // [rsp+14h] [rbp-Ch]
  const char *name; // [rsp+18h] [rbp-8h]

  result = (unsigned __int8)byte_60B391 ^ 1u;
  if ( byte_60B391 == 1 )
  {
    for ( i = 0; ; ++i )
    {
      result = (unsigned int)dword_60B368;
      if ( i >= dword_60B368 )
        break;
      name = sub_402EF3(i);
      if ( unlink(name) )
      {
        if ( a1 != 1 )
        {
          v2 = __errno_location();
          error(0, *v2, "%s", name);
        }
      }
    }
    dword_60B368 = 0;
  }
  return result;
}
