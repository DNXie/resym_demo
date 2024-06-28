#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_4041A8(char a1)
{
  char *v1; // rax
  char v3; // [rsp+Ch] [rbp-14h]

  v3 = a1;
  if ( a1 == 101 )
  {
    v3 = 27;
  }
  else if ( a1 > 101 )
  {
    if ( a1 == 114 )
    {
      v3 = 13;
    }
    else if ( a1 > 114 )
    {
      if ( a1 == 116 )
      {
        v3 = 9;
      }
      else
      {
        if ( a1 != 118 )
          goto LABEL_26;
        v3 = 11;
      }
    }
    else if ( a1 == 102 )
    {
      v3 = 12;
    }
    else
    {
      if ( a1 != 110 )
        goto LABEL_26;
      v3 = 10;
    }
  }
  else if ( a1 != 92 )
  {
    if ( a1 > 92 )
    {
      if ( a1 == 97 )
      {
        v3 = 7;
      }
      else
      {
        if ( a1 != 98 )
          goto LABEL_26;
        v3 = 8;
      }
    }
    else if ( a1 != 34 )
    {
LABEL_26:
      v1 = gettext("warning: unrecognized escape `\\%c'");
      error(0, 0, v1, (unsigned int)a1);
      return putchar_unlocked(v3);
    }
  }
  return putchar_unlocked(v3);
}
