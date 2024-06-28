#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_403A6F(unsigned __int8 *a1, int a2)
{
  int v2; // eax
  char *v3; // rax
  char *v4; // rax
  unsigned int v5; // ebx
  char *v6; // rax
  unsigned __int8 v7; // [rsp+1Bh] [rbp-15h]
  int v8; // [rsp+1Ch] [rbp-14h]

  v7 = *a1;
  v8 = 1;
  v2 = *a1;
  if ( v2 == 105 )
    goto LABEL_11;
  if ( *a1 > 0x69u )
  {
    if ( v2 == 117 )
      goto LABEL_18;
    if ( v2 != 120 && v2 != 111 )
      goto LABEL_14;
LABEL_12:
    v8 = 2;
    goto LABEL_18;
  }
  if ( v2 == 88 )
    goto LABEL_12;
  if ( v2 == 100 )
  {
LABEL_11:
    *a1 = 117;
    goto LABEL_18;
  }
  if ( !*a1 )
  {
    v3 = gettext("missing conversion specifier in suffix");
    error(1, 0, v3);
    goto LABEL_18;
  }
LABEL_14:
  if ( ((*__ctype_b_loc())[v7] & 0x4000) != 0 )
    v4 = gettext("invalid conversion specifier in suffix: %c");
  else
    v4 = gettext("invalid conversion specifier in suffix: \\%.3o");
  error(1, 0, v4, v7);
LABEL_18:
  if ( (a2 & ~v8) != 0 )
  {
    if ( ((unsigned __int8)a2 & (unsigned __int8)~(_BYTE)v8 & 2) != 0 )
      v5 = 35;
    else
      v5 = 39;
    v6 = gettext("invalid flags in conversion specification: %%%c%c");
    error(1, 0, v6, v5, v7);
  }
}
