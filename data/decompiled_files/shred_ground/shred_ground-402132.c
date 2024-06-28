#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402132(int a1, __int64 a2)
{
  __int64 result; // rax
  char *v3; // rax
  char *v4; // rax
  int errnum; // [rsp+1Ch] [rbp-4h]
  int errnuma; // [rsp+1Ch] [rbp-4h]

  if ( !fdatasync(a1) )
    return 0LL;
  errnum = *__errno_location();
  if ( !sub_402108(errnum) )
  {
    v3 = gettext("%s: fdatasync failed");
    error(0, errnum, v3, a2);
    *__errno_location() = errnum;
    result = 0xFFFFFFFFLL;
  }
  else if ( fsync(a1) )
  {
    errnuma = *__errno_location();
    if ( !sub_402108(errnuma) )
    {
      v4 = gettext("%s: fsync failed");
      error(0, errnuma, v4, a2);
      *__errno_location() = errnuma;
      result = 0xFFFFFFFFLL;
    }
    else
    {
      sync();
      result = 0LL;
    }
  }
  else
  {
    result = 0LL;
  }
  return result;
}
