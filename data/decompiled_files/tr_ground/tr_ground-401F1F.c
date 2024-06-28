#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_401F1F(unsigned __int8 a1)
{
  char *s; // [rsp+18h] [rbp-8h]

  s = (char *)sub_406D88(5LL);
  if ( ((*__ctype_b_loc())[a1] & 0x4000) != 0 )
  {
    *s = a1;
    s[1] = 0;
  }
  else
  {
    sprintf(s, "\\%03o", a1);
  }
  return s;
}
