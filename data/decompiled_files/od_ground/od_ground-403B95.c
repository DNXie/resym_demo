#include "/share/binary_recovery/clang-parser/defs.hh"
bool __fastcall sub_403B95(char *a1, __int64 a2)
{
  char *s; // [rsp+8h] [rbp-18h]
  unsigned int v4; // [rsp+1Ch] [rbp-4h]

  s = a1;
  if ( !*a1 )
    return 0;
  if ( *a1 == 43 )
    s = a1 + 1;
  if ( strchr(s, 46) )
  {
    v4 = 10;
  }
  else if ( *s == 48 && (s[1] == 120 || s[1] == 88) )
  {
    v4 = 16;
  }
  else
  {
    v4 = 8;
  }
  return (unsigned int)sub_4081EE(s, 0LL, v4, a2, "Bb") == 0;
}
