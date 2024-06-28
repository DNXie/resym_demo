#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  bool v3; // al
  int v4; // eax
  char *v5; // rax
  int v6; // eax
  unsigned __int8 *v7; // rax
  unsigned __int8 *v8; // rax
  const char *v9; // rax
  const char *v10; // rax
  unsigned __int8 *v11; // rax
  const char **v12; // [rsp+10h] [rbp-40h]
  int v13; // [rsp+1Ch] [rbp-34h]
  char v14; // [rsp+23h] [rbp-2Dh]
  char v15; // [rsp+24h] [rbp-2Ch]
  unsigned __int8 v16; // [rsp+25h] [rbp-2Bh]
  bool v17; // [rsp+26h] [rbp-2Ah]
  unsigned __int8 v18; // [rsp+27h] [rbp-29h]
  unsigned __int8 v19; // [rsp+27h] [rbp-29h]
  char *v20; // [rsp+28h] [rbp-28h]
  __int64 i; // [rsp+30h] [rbp-20h]
  const char *v22; // [rsp+38h] [rbp-18h]

  v14 = 1;
  v3 = !getenv("POSIXLY_CORRECT") || a1 > 1 && !strcmp(a2[1], "-n");
  v17 = v3;
  v15 = 0;
  sub_401C86(*a2);
  setlocale(6, &locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_404330(sub_401AE4);
  if ( v17 && a1 == 2 )
  {
    if ( !strcmp(a2[1], "--help") )
      sub_4013B7(0);
    if ( !strcmp(a2[1], "--version") )
    {
      sub_403C18(
        (_DWORD)stdout,
        (unsigned int)"echo",
        (unsigned int)"GNU coreutils",
        (_DWORD)off_606180,
        (unsigned int)"Brian Fox",
        (unsigned int)"Chet Ramey",
        0);
      exit(0);
    }
  }
  v13 = a1 - 1;
  v12 = (const char **)(a2 + 1);
  if ( v17 )
  {
    while ( v13 > 0 && **v12 == 45 )
    {
      v20 = (char *)(*v12 + 1);
      for ( i = 0LL; v20[i]; ++i )
      {
        v4 = v20[i];
        if ( v4 != 101 && v4 != 110 && v4 != 69 )
          goto LABEL_33;
      }
      if ( !i )
        break;
      while ( *v20 )
      {
        v5 = v20++;
        v6 = *v5;
        switch ( v6 )
        {
          case 'e':
            v15 = 1;
            break;
          case 'n':
            v14 = 0;
            break;
          case 'E':
            v15 = 0;
            break;
        }
      }
      --v13;
      ++v12;
    }
  }
LABEL_33:
  if ( !v15 )
  {
    while ( v13 > 0 )
    {
      fputs_unlocked(*v12, stdout);
      --v13;
      ++v12;
      if ( v13 > 0 )
        putchar_unlocked(32);
    }
LABEL_92:
    if ( v14 )
      putchar_unlocked(10);
    exit(0);
  }
LABEL_86:
  if ( v13 <= 0 )
    goto LABEL_92;
  v22 = *v12;
  while ( 1 )
  {
    v11 = (unsigned __int8 *)v22++;
    v16 = *v11;
    if ( !*v11 )
    {
      --v13;
      ++v12;
      if ( v13 > 0 )
        putchar_unlocked(32);
      goto LABEL_86;
    }
    if ( v16 == 92 && *v22 )
    {
      v7 = (unsigned __int8 *)v22++;
      v16 = *v7;
      if ( *v7 == 99 )
        exit(0);
      if ( v16 > 0x63u )
      {
        if ( v16 == 114 )
        {
          v16 = 13;
          goto LABEL_82;
        }
        if ( v16 <= 0x72u )
        {
          switch ( v16 )
          {
            case 'f':
              v16 = 12;
              goto LABEL_82;
            case 'n':
              v16 = 10;
              goto LABEL_82;
            case 'e':
              v16 = 27;
              goto LABEL_82;
          }
          goto LABEL_81;
        }
        if ( v16 == 118 )
        {
          v16 = 11;
          goto LABEL_82;
        }
        if ( v16 != 120 )
        {
          if ( v16 == 116 )
          {
            v16 = 9;
            goto LABEL_82;
          }
          goto LABEL_81;
        }
        v18 = *v22;
        if ( ((*__ctype_b_loc())[v18] & 0x1000) == 0 )
          goto LABEL_81;
        ++v22;
        v16 = sub_401518(v18);
        v19 = *v22;
        if ( ((*__ctype_b_loc())[v19] & 0x1000) != 0 )
        {
          ++v22;
          v16 = 16 * v16 + sub_401518(v19);
        }
      }
      else
      {
        if ( v16 > 0x37u )
        {
          if ( v16 == 97 )
          {
            v16 = 7;
            goto LABEL_82;
          }
          if ( v16 > 0x61u )
          {
            v16 = 8;
            goto LABEL_82;
          }
          if ( v16 == 92 )
            goto LABEL_82;
LABEL_81:
          putchar_unlocked(92);
          goto LABEL_82;
        }
        if ( v16 >= 0x31u )
          goto LABEL_74;
        if ( v16 != 48 )
          goto LABEL_81;
        v16 = 0;
        if ( *v22 > 47 && *v22 <= 55 )
        {
          v8 = (unsigned __int8 *)v22++;
          v16 = *v8;
LABEL_74:
          v16 -= 48;
          if ( *v22 > 47 && *v22 <= 55 )
          {
            v9 = v22++;
            v16 = 8 * v16 + *v9 - 48;
          }
          if ( *v22 > 47 && *v22 <= 55 )
          {
            v10 = v22++;
            v16 = 8 * v16 + *v10 - 48;
          }
          goto LABEL_82;
        }
      }
    }
LABEL_82:
    putchar_unlocked(v16);
  }
}
