#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_4035F0(char a1, const char *a2)
{
  int *v2; // rax
  char *v3; // rax
  unsigned __int16 v4; // [rsp+10h] [rbp-10h] BYREF
  unsigned __int16 v5; // [rsp+12h] [rbp-Eh]

  if ( (unsigned int)sub_4034F5(0, (__int64)&v4) )
  {
    if ( *__errno_location() != 22 )
    {
      v2 = __errno_location();
      error(1, *v2, "%s", a2);
    }
    if ( a1 != 1 )
    {
      v3 = gettext("%s: no size information for this device");
      error(1, 0, v3, a2);
    }
  }
  else
  {
    if ( a1 )
      sub_4019C6((__int64)"rows %d; columns %d;", v4, v5);
    else
      sub_4019C6((__int64)"%d %d\n", v4, v5);
    if ( a1 != 1 )
      dword_6132C8 = 0;
  }
}
