#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401D6B(char a1)
{
  __int64 result; // rax

  if ( byte_608262 )
  {
    result = (unsigned int)dword_613290;
    dword_613294 = dword_613290;
  }
  else if ( byte_608260 )
  {
    if ( a1 )
      result = (unsigned int)dword_608284;
    else
      result = (unsigned int)dword_613290;
    dword_613294 = result;
  }
  else if ( byte_608261 )
  {
    if ( !a1 || dword_608284 == dword_613290 )
    {
      result = (unsigned int)dword_613290;
      if ( dword_613294 == dword_613290 )
      {
        if ( dword_613290 )
          result = 0LL;
        else
          result = 3LL;
        dword_613294 = result;
      }
    }
    else
    {
      result = (unsigned int)dword_608284;
      dword_613294 = dword_608284;
    }
  }
  else
  {
    result = (unsigned int)dword_613290;
    dword_613294 = dword_613290;
  }
  return result;
}
