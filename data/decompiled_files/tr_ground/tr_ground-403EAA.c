#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  bool v3; // al
  int v4; // eax
  int v5; // eax
  char *v6; // rax
  __int64 v7; // rbx
  char *v8; // rax
  const char *v9; // rax
  char *v10; // rax
  __int64 v11; // rbx
  char *v12; // rax
  char *v13; // rax
  char *v14; // rbx
  int *v15; // rax
  size_t v16; // rax
  char *v17; // rbx
  int *v18; // rax
  char *v19; // rbx
  int *v20; // rax
  int v21; // [rsp+1Ch] [rbp-E4h] BYREF
  int v22; // [rsp+20h] [rbp-E0h] BYREF
  int i; // [rsp+24h] [rbp-DCh]
  int c; // [rsp+28h] [rbp-D8h]
  int v25; // [rsp+2Ch] [rbp-D4h]
  int v26; // [rsp+30h] [rbp-D0h]
  int v27; // [rsp+34h] [rbp-CCh]
  int v28; // [rsp+38h] [rbp-C8h]
  int v29; // [rsp+3Ch] [rbp-C4h]
  int v30; // [rsp+40h] [rbp-C0h]
  int v31; // [rsp+44h] [rbp-BCh]
  char *v32; // [rsp+48h] [rbp-B8h]
  char *v33; // [rsp+50h] [rbp-B0h]
  size_t n; // [rsp+58h] [rbp-A8h]
  char *v35; // [rsp+60h] [rbp-A0h]
  size_t v36; // [rsp+68h] [rbp-98h]
  char v37; // [rsp+70h] [rbp-90h] BYREF
  char v38; // [rsp+B0h] [rbp-50h] BYREF

  v33 = &v37;
  v32 = &v38;
  sub_404ADA(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_407750(sub_4048CE);
  while ( 1 )
  {
    v25 = getopt_long(a1, a2, "+cCdst", &longopts, 0LL);
    if ( v25 == -1 )
    {
      v26 = a1 - optind;
      v3 = a1 - optind == 2 && byte_60B261 != 1;
      byte_60B264 = v3;
      if ( byte_60B261 == byte_60B260 )
        v4 = 2;
      else
        v4 = 1;
      v27 = v4;
      if ( (unsigned __int8)byte_60B261 > (int)(unsigned __int8)byte_60B260 )
        v5 = 1;
      else
        v5 = 2;
      v28 = v5;
      if ( v26 < v27 )
      {
        if ( v26 )
        {
          v7 = sub_404BE5(a2[a1 - 1]);
          v8 = gettext("missing operand after %s");
          error(0, 0, v8, v7);
          if ( byte_60B260 )
            v9 = "Two strings must be given when both deleting and squeezing repeats.";
          else
            v9 = "Two strings must be given when translating.";
          v10 = gettext(v9);
          fprintf(stderr, "%s\n", v10);
        }
        else
        {
          v6 = gettext("missing operand");
          error(0, 0, v6);
        }
        sub_401737(1);
      }
      if ( v28 < v26 )
      {
        v11 = sub_404BE5((&a2[optind])[v28]);
        v12 = gettext("extra operand %s");
        error(0, 0, v12, v11);
        if ( v26 == 2 )
        {
          v13 = gettext("Only one string may be given when deleting without squeezing repeats.");
          fprintf(stderr, "%s\n", v13);
        }
        sub_401737(1);
      }
      sub_4035B5(v33);
      if ( !sub_4035FB(a2[optind], (__int64)v33) )
        exit(1);
      if ( v26 == 2 )
      {
        sub_4035B5(v32);
        if ( !sub_4035FB(a2[optind + 1], (__int64)v32) )
          exit(1);
      }
      else
      {
        v32 = 0LL;
      }
      sub_403812((__int64)v33, (__int64)v32);
      sub_404AA0(stdin, 2LL);
      if ( byte_60B260 && v26 == 1 )
      {
        sub_403E10(v33, byte_60B262, (__int64)byte_60D280);
        sub_403A23((__int64)&unk_60B280, 0x2000LL, sub_403C35);
      }
      else if ( byte_60B261 && v26 == 1 )
      {
        sub_403E10(v33, byte_60B262, (__int64)byte_60D380);
        while ( 1 )
        {
          n = sub_403C99((__int64)&unk_60B280, 0x2000LL);
          if ( !n )
            break;
          if ( fwrite_unlocked(&unk_60B280, 1uLL, n, stdout) != n )
          {
            v14 = gettext("write error");
            v15 = __errno_location();
            error(1, *v15, v14);
          }
        }
      }
      else if ( byte_60B260 && byte_60B261 && v26 == 2 )
      {
        sub_403E10(v33, byte_60B262, (__int64)byte_60D380);
        sub_403E10(v32, 0, (__int64)byte_60D280);
        sub_403A23((__int64)&unk_60B280, 0x2000LL, (__int64 (__fastcall *)(__int64, __int64))sub_403C99);
      }
      else if ( byte_60B264 )
      {
        if ( !byte_60B262 )
        {
          for ( c = 0; c <= 255; ++c )
            byte_60D480[c] = c;
          *((_QWORD *)v33 + 2) = -2LL;
          *((_QWORD *)v32 + 2) = -2LL;
          while ( 1 )
          {
            v30 = sub_402C37(v33, &v21);
            v31 = sub_402C37(v32, &v22);
            if ( v21 || v22 != 1 )
            {
              if ( v21 != 1 || v22 )
              {
                if ( v30 == -1 || v31 == -1 )
                {
                  if ( v30 != -1 && byte_60B263 != 1 )
                    __assert_fail("c1 == -1 || truncate_set1", "../../src/src/tr.c", 0x785u, "main");
                  goto LABEL_106;
                }
                byte_60D480[v30] = v31;
              }
              else
              {
                for ( c = 0; c <= 255; ++c )
                {
                  if ( ((*__ctype_b_loc())[c] & 0x100) != 0 )
                    byte_60D480[c] = tolower(c);
                }
              }
            }
            else
            {
              for ( c = 0; c <= 255; ++c )
              {
                if ( ((*__ctype_b_loc())[c] & 0x200) != 0 )
                  byte_60D480[c] = toupper(c);
              }
            }
            if ( v22 != 2 )
            {
              sub_402C0D((__int64)v33);
              sub_402C0D((__int64)v32);
            }
          }
        }
        v35 = byte_60D380;
        sub_403E10(v33, 0, (__int64)byte_60D380);
        *((_QWORD *)v32 + 2) = -2LL;
        for ( i = 0; i <= 255; ++i )
          byte_60D480[i] = i;
        for ( i = 0; i <= 255; ++i )
        {
          if ( v35[i] != 1 )
          {
            v29 = sub_402C37(v32, 0LL);
            if ( v29 == -1 && byte_60B263 != 1 )
              __assert_fail("ch != -1 || truncate_set1", "../../src/src/tr.c", 0x74Fu, "main");
            if ( v29 == -1 )
              break;
            byte_60D480[i] = v29;
          }
        }
LABEL_106:
        if ( byte_60B260 )
        {
          sub_403E10(v32, 0, (__int64)byte_60D280);
          sub_403A23((__int64)&unk_60B280, 0x2000LL, (__int64 (__fastcall *)(__int64, __int64))sub_403D92);
        }
        else
        {
          while ( 1 )
          {
            v36 = sub_403D92((__int64)&unk_60B280, 0x2000LL);
            if ( !v36 )
              break;
            v16 = fwrite_unlocked(&unk_60B280, 1uLL, v36, stdout);
            if ( v16 != v36 )
            {
              v17 = gettext("write error");
              v18 = __errno_location();
              error(1, *v18, v17);
            }
          }
        }
      }
      if ( close(0) )
      {
        v19 = gettext("standard input");
        v20 = __errno_location();
        error(1, *v20, v19);
      }
      exit(0);
    }
    if ( v25 == 99 )
      goto LABEL_12;
    if ( v25 > 99 )
    {
      switch ( v25 )
      {
        case 's':
          byte_60B260 = 1;
          break;
        case 't':
          byte_60B263 = 1;
          break;
        case 'd':
          byte_60B261 = 1;
          break;
        default:
          goto LABEL_18;
      }
    }
    else
    {
      if ( v25 == -130 )
        sub_401737(0);
      if ( v25 != 67 )
      {
        if ( v25 == -131 )
        {
          sub_406B20(
            (_DWORD)stdout,
            (unsigned int)"tr",
            (unsigned int)"GNU coreutils",
            (_DWORD)off_60B1D0,
            (unsigned int)"Jim Meyering",
            0,
            (char)a2);
          exit(0);
        }
LABEL_18:
        sub_401737(1);
      }
LABEL_12:
      byte_60B262 = 1;
    }
  }
}
