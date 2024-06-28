#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  size_t v4; // rsi
  char **v5; // rax
  int *v6; // rax
  char v8; // [rsp+2Bh] [rbp-35h]
  int v9; // [rsp+2Ch] [rbp-34h]
  __int64 i; // [rsp+30h] [rbp-30h]
  const char *v11; // [rsp+38h] [rbp-28h]
  unsigned __int64 v12; // [rsp+40h] [rbp-20h]
  char **v13; // [rsp+48h] [rbp-18h]

  sub_402BE3(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_405690(sub_402A41);
  src = "\n";
  qword_6082B0 = 1LL;
  byte_6082A9 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = getopt_long(a1, a2, "brs:", &longopts, 0LL);
      if ( v9 == -1 )
      {
        if ( qword_6082B0 )
        {
          qword_6082B0 = strlen(src);
          qword_6082B8 = qword_6082B0;
        }
        else
        {
          buffer.buffer = 0LL;
          buffer.allocated = 0LL;
          buffer.fastmap = (char *)&unk_608320;
          buffer.translate = 0LL;
          v4 = strlen(src);
          v11 = re_compile_pattern(src, v4, &buffer);
          if ( v11 )
            error(1, 0, "%s", v11);
        }
        for ( qword_6082C8 = 0x2000LL; (unsigned __int64)qword_6082C8 >> 1 <= qword_6082B0; qword_6082C8 *= 2LL )
        {
          if ( qword_6082C8 < 0 )
            sub_405081();
        }
        v12 = qword_6082C8 + qword_6082B0 + 1;
        qword_6082D0 = 2 * v12;
        if ( qword_6082C8 >= v12 || v12 >= qword_6082D0 )
          sub_405081();
        dest = (char *)sub_404EFF(qword_6082D0);
        if ( qword_6082B0 )
        {
          strcpy(dest, src);
          dest += qword_6082B0;
        }
        else
        {
          ++dest;
        }
        if ( optind >= a1 )
          v5 = &off_405CE0;
        else
          v5 = &a2[optind];
        v13 = v5;
        v8 = 1;
        for ( i = 0LL; v13[i]; ++i )
          v8 &= sub_402481(v13[i]);
        sub_401988(0LL, 0LL);
        if ( byte_6082A8 )
        {
          if ( close(0) < 0 )
          {
            v6 = __errno_location();
            error(0, *v6, "-");
            v8 = 0;
          }
        }
        exit(v8 == 0);
      }
      if ( v9 != 98 )
        break;
      byte_6082A9 = 0;
    }
    if ( v9 <= 98 )
      break;
    if ( v9 == 114 )
    {
      qword_6082B0 = 0LL;
    }
    else
    {
      if ( v9 != 115 )
        goto LABEL_17;
      src = (char *)optarg;
      if ( !*(_BYTE *)optarg )
      {
        v3 = gettext("separator cannot be empty");
        error(1, 0, v3);
      }
    }
  }
  if ( v9 == -131 )
  {
    sub_404C97(
      (_DWORD)stdout,
      (unsigned int)"tac",
      (unsigned int)"GNU coreutils",
      (_DWORD)off_608200,
      (unsigned int)"Jay Lepreau",
      (unsigned int)"David MacKenzie",
      0);
    exit(0);
  }
  if ( v9 == -130 )
    sub_401887(0);
LABEL_17:
  sub_401887(1);
}
