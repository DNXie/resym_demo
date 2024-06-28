#include "/share/binary_recovery/clang-parser/defs.hh"
const char *__fastcall sub_401CB3(__int64 a1)
{
  __int64 v2; // [rsp+20h] [rbp-10h]

  if ( !timer )
    time(&timer);
  v2 = timer - a1;
  if ( timer - a1 <= 59 )
    return "     ";
  if ( v2 > 86399 )
    sprintf(s, "%lud", v2 / 86400);
  else
    sprintf(s, "%02d:%02d", (unsigned int)((int)v2 / 3600), (unsigned int)(v2 % 3600 / 60));
  return s;
}
