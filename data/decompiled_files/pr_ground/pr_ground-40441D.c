#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_40441D()
{
  __int64 result; // rax
  char *v1; // rax
  int v2; // eax
  int v3; // [rsp+4h] [rbp-Ch]
  char *v4; // [rsp+8h] [rbp-8h]

  v3 = dword_6103DC;
  v4 = dest;
  if ( dword_6103E0 > 0 )
  {
    while ( 1 )
    {
      result = (unsigned int)dword_6103E0;
      if ( dword_6103E0 <= 0 )
        break;
      while ( 1 )
      {
        v2 = v3--;
        if ( v2 <= 0 )
          break;
        if ( *v4 == 32 )
        {
          ++v4;
          ++dword_61038C;
        }
        else
        {
          if ( dword_61038C > 0 )
            sub_404381();
          v1 = v4++;
          putchar_unlocked(*v1);
          ++dword_610394;
        }
      }
      if ( dword_61038C > 0 )
        sub_404381();
      --dword_6103E0;
    }
  }
  else
  {
    result = (unsigned int)dword_61038C;
    if ( dword_61038C > 0 )
      result = sub_404381();
  }
  return result;
}
