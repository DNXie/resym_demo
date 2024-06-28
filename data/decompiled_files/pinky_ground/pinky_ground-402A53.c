#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  int v4; // [rsp+28h] [rbp-8h]
  int v5; // [rsp+2Ch] [rbp-4h]

  sub_403110(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_405A40(sub_402DDF);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v4 = getopt_long(a1, a2, "sfwiqbhlp", &longopts, 0LL);
        if ( v4 == -1 )
        {
          v5 = a1 - optind;
          if ( byte_608246 != 1 && !v5 )
          {
            v3 = gettext("no username specified; at least one must be specified when using -l");
            error(0, 0, v3);
            sub_402952(1);
          }
          if ( byte_608246 )
            sub_4028A0("/var/run/utmp", v5, (__int64)&a2[optind]);
          else
            sub_40290D(v5, (__int64)&a2[optind]);
          exit(0);
        }
        if ( v4 != 105 )
          break;
        byte_608242 = 0;
        byte_608247 = 0;
      }
      if ( v4 <= 105 )
        break;
      if ( v4 == 113 )
      {
        byte_608242 = 0;
        byte_608247 = 0;
        byte_608240 = 0;
      }
      else if ( v4 > 113 )
      {
        if ( v4 == 115 )
        {
          byte_608246 = 1;
        }
        else
        {
          if ( v4 != 119 )
            goto LABEL_31;
          byte_608242 = 0;
        }
      }
      else if ( v4 == 108 )
      {
        byte_608246 = 0;
      }
      else
      {
        if ( v4 != 112 )
          goto LABEL_31;
        byte_608244 = 0;
      }
    }
    if ( v4 == 98 )
    {
      byte_608245 = 0;
    }
    else
    {
      if ( v4 <= 98 )
      {
        if ( v4 == -131 )
        {
          sub_4050A2(
            (_DWORD)stdout,
            (unsigned int)"pinky",
            (unsigned int)"GNU coreutils",
            (_DWORD)off_608248,
            (unsigned int)"Joseph Arceneaux",
            (unsigned int)"David MacKenzie",
            "Kaveh Ghazi",
            0LL);
          exit(0);
        }
        if ( v4 == -130 )
          sub_402952(0);
LABEL_31:
        sub_402952(1);
      }
      if ( v4 == 102 )
      {
        byte_608241 = 0;
      }
      else
      {
        if ( v4 != 104 )
          goto LABEL_31;
        byte_608243 = 0;
      }
    }
  }
}
