#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401E74(__int64 a1, char a2)
{
  int v2; // eax
  const unsigned __int16 *v3; // rbx
  char *v4; // rax
  _BOOL4 v5; // eax
  int v6; // eax
  const unsigned __int16 *v7; // rbx
  char *v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  char *v11; // rax
  signed __int8 v13; // [rsp+1Bh] [rbp-25h]
  int c; // [rsp+1Ch] [rbp-24h]
  int v15; // [rsp+20h] [rbp-20h]
  int v16; // [rsp+20h] [rbp-20h]
  int v17; // [rsp+20h] [rbp-20h]
  unsigned int v18; // [rsp+24h] [rbp-1Ch]
  unsigned __int8 *i; // [rsp+28h] [rbp-18h]

  i = (unsigned __int8 *)(a1 + 1);
  c = 0;
  if ( *(_BYTE *)(a1 + 1) == 120 )
  {
    v15 = 0;
    for ( i = (unsigned __int8 *)(a1 + 2); v15 <= 1; ++i )
    {
      v3 = *__ctype_b_loc();
      if ( (v3[(unsigned __int8)sub_4017DD(*i)] & 0x1000) == 0 )
        break;
      if ( (char)*i <= 96 || (char)*i > 102 )
      {
        if ( (char)*i <= 64 || (char)*i > 70 )
          v2 = (char)*i - 48;
        else
          v2 = (char)*i - 55;
      }
      else
      {
        v2 = (char)*i - 87;
      }
      c = 16 * c + v2;
      ++v15;
    }
    if ( !v15 )
    {
      v4 = gettext("missing hexadecimal number in escape");
      error(1, 0, v4);
    }
LABEL_15:
    putchar_unlocked(c);
    return (unsigned int)((_DWORD)i - a1 - 1);
  }
  if ( (char)*i > 47 && (char)*i <= 55 )
  {
    v16 = 0;
    v5 = a2 && *i == 48;
    for ( i += v5; v16 <= 2 && (char)*i > 47 && (char)*i <= 55; ++i )
    {
      c = 8 * c + (char)*i - 48;
      ++v16;
    }
    goto LABEL_15;
  }
  if ( *i && strchr("\"\\abcefnrtv", (char)*i) )
  {
    LODWORD(i) = a1 + 2;
    sub_401DA1(*(_BYTE *)(a1 + 1));
  }
  else if ( *i == 117 || *i == 85 )
  {
    v13 = *i;
    v18 = 0;
    if ( *i == 117 )
      v6 = 4;
    else
      v6 = 8;
    v17 = v6;
    i = (unsigned __int8 *)(a1 + 2);
    while ( v17 > 0 )
    {
      v7 = *__ctype_b_loc();
      if ( (v7[(unsigned __int8)sub_4017DD(*i)] & 0x1000) == 0 )
      {
        v8 = gettext("missing hexadecimal number in escape");
        error(1, 0, v8);
      }
      if ( (char)*i <= 96 || (char)*i > 102 )
      {
        if ( (char)*i <= 64 || (char)*i > 70 )
          v9 = (char)*i - 48;
        else
          v9 = (char)*i - 55;
      }
      else
      {
        v9 = (char)*i - 87;
      }
      v18 = 16 * v18 + v9;
      --v17;
      ++i;
    }
    if ( v18 <= 0x9F && v18 != 36 && v18 != 64 && v18 != 96 || v18 > 0xD7FF && v18 <= 0xDFFF )
    {
      if ( v13 == 117 )
        v10 = 4;
      else
        v10 = 8;
      v11 = gettext("invalid universal character name \\%c%0*x");
      error(1, 0, v11, (unsigned int)v13, v10, v18);
    }
    sub_404EED(stdout, v18, 0LL);
  }
  else
  {
    putchar_unlocked(92);
    if ( *i )
    {
      putchar_unlocked((char)*i);
      LODWORD(i) = a1 + 2;
    }
  }
  return (unsigned int)((_DWORD)i - a1 - 1);
}
