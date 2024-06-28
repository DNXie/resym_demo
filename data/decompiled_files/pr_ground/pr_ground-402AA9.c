#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_402AA9(int a1)
{
  char *v1; // rax
  int v2; // eax
  void *result; // rax
  int v4; // [rsp+14h] [rbp-1Ch]
  int v5; // [rsp+18h] [rbp-18h]

  v4 = 0;
  dword_61037C = dword_610244 - 10;
  if ( dword_610244 - 10 <= 0 )
  {
    byte_610240 = 0;
    byte_610375 = 1;
  }
  if ( byte_610240 != 1 )
    dword_61037C = dword_610244;
  if ( byte_6103D2 )
    dword_61037C /= 2;
  if ( !a1 )
    byte_610370 = 0;
  if ( byte_610370 )
    dword_61025C = a1;
  if ( byte_610241 )
    byte_61037B = 1;
  if ( dword_61025C <= 1 )
  {
    byte_610241 = 0;
  }
  else
  {
    if ( byte_6103D9 != 1 )
    {
      if ( byte_610381 )
        dest = off_610290[0];
      else
        dest = off_610288[0];
      dword_6103DC = 1;
      byte_6103D9 = 1;
    }
    else if ( byte_610381 != 1 && *dest == 9 )
    {
      dest = off_610288[0];
    }
    byte_610380 = 1;
    byte_610389 = 1;
  }
  if ( byte_610381 )
    byte_610380 = 0;
  if ( byte_6103C0 )
  {
    dword_61026C = dword_610274;
    if ( byte_610268 == 9 )
      dword_6103C4 = 8 - dword_610278 % 8 + dword_610278;
    else
      dword_6103C4 = dword_610278 + 1;
    if ( byte_610370 )
      v4 = dword_6103C4;
    v5 = dword_610278;
    dword_6103BC = 1;
    while ( v5 > 0 )
    {
      dword_6103BC *= 10;
      --v5;
    }
  }
  dword_610384 = (dword_610248 - v4 + (1 - dword_61025C) * dword_6103DC) / dword_61025C;
  if ( dword_610384 <= 0 )
  {
    v1 = gettext("page width too narrow");
    error(1, 0, v1);
  }
  if ( byte_6103C0 )
  {
    free(ptr);
    ptr = (char *)sub_40A750(2 * dword_610278);
  }
  free(qword_610418);
  v2 = dword_610250;
  if ( dword_610250 < 8 )
    v2 = 8;
  result = (void *)sub_40A750(v2);
  qword_610418 = result;
  return result;
}
