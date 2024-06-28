#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_403176(char *a1, unsigned __int64 a2)
{
  const char *v2; // rax
  const char *v3; // rax
  const char *v4; // rax
  const char *v5; // rax
  const char *v6; // rax
  unsigned __int64 result; // rax
  unsigned __int8 v8; // [rsp+1Fh] [rbp-11h]
  int v9; // [rsp+20h] [rbp-10h]
  unsigned int v10; // [rsp+24h] [rbp-Ch]

  while ( 1 )
  {
    result = a2;
    if ( a2 <= (unsigned __int64)a1 )
      return result;
    v8 = *a1;
    if ( byte_610960[(unsigned __int8)*a1] )
    {
      v9 = byte_40D8C0[v8];
      if ( byte_40D8C0[v8] && dword_610384 == 3 )
      {
        v10 = byte_40D7C0[v8];
        if ( v9 == 5 )
        {
          if ( v10 == 105 )
            v5 = "\\";
          else
            v5 = &locale;
          printf("\\\"%s%c", v5, v10);
        }
        else if ( v9 > 5 )
        {
          if ( v9 == 7 )
          {
            printf("\\c{%c}", v10);
            goto LABEL_76;
          }
          if ( v9 < 7 )
          {
            if ( v10 == 105 )
              v6 = "\\";
            else
              v6 = &locale;
            printf("\\~%s%c", v6, v10);
          }
          else
          {
            if ( v9 == 8 )
            {
              if ( v10 == 65 )
              {
                fwrite_unlocked("\\AA{}", 1uLL, 5uLL, stdout);
                goto LABEL_76;
              }
              if ( v10 == 97 )
              {
                fwrite_unlocked("\\aa{}", 1uLL, 5uLL, stdout);
                goto LABEL_76;
              }
              goto LABEL_59;
            }
            if ( v9 == 9 )
            {
              if ( v10 == 79 )
              {
                fwrite_unlocked("\\O{}", 1uLL, 4uLL, stdout);
                goto LABEL_76;
              }
              if ( v10 == 111 )
              {
                fwrite_unlocked("\\o{}", 1uLL, 4uLL, stdout);
                goto LABEL_76;
              }
              goto LABEL_59;
            }
          }
        }
        else if ( v9 == 2 )
        {
          if ( v10 == 105 )
            v2 = "\\";
          else
            v2 = &locale;
          printf("\\'%s%c", v2, v10);
        }
        else if ( v9 > 2 )
        {
          if ( v9 == 3 )
          {
            if ( v10 == 105 )
              v3 = "\\";
            else
              v3 = &locale;
            printf("\\`%s%c", v3, v10);
          }
          else
          {
            if ( v10 == 105 )
              v4 = "\\";
            else
              v4 = &locale;
            printf("\\^%s%c", v4, v10);
          }
        }
        else if ( v9 == 1 )
        {
          if ( v10 == 79 )
          {
            fwrite_unlocked("\\OE{}", 1uLL, 5uLL, stdout);
            goto LABEL_76;
          }
          if ( (int)v10 > 79 )
          {
            if ( v10 == 97 )
            {
              fwrite_unlocked("\\ae{}", 1uLL, 5uLL, stdout);
              goto LABEL_76;
            }
            if ( v10 == 111 )
            {
              fwrite_unlocked("\\oe{}", 1uLL, 5uLL, stdout);
              goto LABEL_76;
            }
          }
          else if ( v10 == 65 )
          {
            fwrite_unlocked("\\AE{}", 1uLL, 5uLL, stdout);
            goto LABEL_76;
          }
LABEL_59:
          putchar_unlocked(32);
          goto LABEL_76;
        }
      }
      else if ( v8 == 92 )
      {
        fwrite_unlocked("\\backslash{}", 1uLL, 0xCuLL, stdout);
      }
      else
      {
        if ( v8 <= 0x5Cu )
        {
          if ( v8 == 34 )
          {
            putchar_unlocked(34);
            putchar_unlocked(34);
            goto LABEL_76;
          }
          if ( v8 < 0x22u || v8 > 0x26u )
            goto LABEL_59;
          goto LABEL_71;
        }
        if ( v8 != 123 && v8 != 125 )
        {
          if ( v8 != 95 )
            goto LABEL_59;
LABEL_71:
          putchar_unlocked(92);
          putchar_unlocked(v8);
          goto LABEL_76;
        }
        printf("$\\%c$", v8);
      }
    }
    else
    {
      putchar_unlocked(*a1);
    }
LABEL_76:
    ++a1;
  }
}
