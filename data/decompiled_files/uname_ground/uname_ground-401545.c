#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401545(int a1, char *const *a2)
{
  const char *v2; // rax
  const char *v3; // rax
  __int64 v4; // rbx
  char *v5; // rax
  unsigned int v7; // [rsp+28h] [rbp-18h]
  int v8; // [rsp+2Ch] [rbp-14h]
  int v9; // [rsp+2Ch] [rbp-14h]

  v7 = 0;
  if ( dword_606180 == 2 )
  {
    v8 = getopt_long(a1, a2, &locale, &longopts, 0LL);
    if ( v8 != -1 )
    {
      if ( v8 != -131 )
      {
        if ( v8 == -130 )
          sub_4013F7(0);
        sub_4013F7(1);
      }
      if ( dword_606180 == 1 )
        v2 = "uname";
      else
        v2 = "arch";
      sub_403BA5(
        (_DWORD)stdout,
        (_DWORD)v2,
        (unsigned int)"GNU coreutils",
        (_DWORD)off_606188,
        (unsigned int)"David MacKenzie",
        (unsigned int)"Karel Zak");
      exit(0);
    }
    v7 = 16;
  }
  else
  {
    while ( 1 )
    {
      v9 = getopt_long(a1, a2, "asnrvmpio", &stru_404500, 0LL);
      if ( v9 == -1 )
        break;
      if ( v9 == 110 )
      {
        v7 |= 2u;
      }
      else if ( v9 > 110 )
      {
        if ( v9 == 114 )
        {
          v7 |= 4u;
        }
        else if ( v9 > 114 )
        {
          if ( v9 == 115 )
          {
            v7 |= 1u;
          }
          else
          {
            if ( v9 != 118 )
              goto LABEL_45;
            v7 |= 8u;
          }
        }
        else if ( v9 == 111 )
        {
          v7 |= 0x80u;
        }
        else
        {
          if ( v9 != 112 )
            goto LABEL_45;
          v7 |= 0x20u;
        }
      }
      else if ( v9 == 97 )
      {
        v7 = -1;
      }
      else
      {
        if ( v9 <= 97 )
        {
          if ( v9 == -131 )
          {
            if ( dword_606180 == 1 )
              v3 = "uname";
            else
              v3 = "arch";
            sub_403BA5(
              (_DWORD)stdout,
              (_DWORD)v3,
              (unsigned int)"GNU coreutils",
              (_DWORD)off_606188,
              (unsigned int)"David MacKenzie",
              0);
            exit(0);
          }
          if ( v9 == -130 )
            sub_4013F7(0);
LABEL_45:
          sub_4013F7(1);
        }
        if ( v9 == 105 )
        {
          v7 |= 0x40u;
        }
        else
        {
          if ( v9 != 109 )
            goto LABEL_45;
          v7 |= 0x10u;
        }
      }
    }
  }
  if ( a1 != optind )
  {
    v4 = sub_401CDB(a2[optind]);
    v5 = gettext("extra operand %s");
    error(0, 0, v5, v4);
    sub_4013F7(1);
  }
  return v7;
}
