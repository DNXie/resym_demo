#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_401985(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _BOOL4 v3; // eax
  char *v5; // rbx
  int *v6; // rax
  char *v7; // rax
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rax
  char *v11; // rax
  char *v12; // rax
  double v13; // rbx
  char *v14; // rax
  unsigned int v18; // [rsp+2Ch] [rbp-2094h]
  unsigned int v19; // [rsp+30h] [rbp-2090h]
  int v20; // [rsp+34h] [rbp-208Ch]
  time_t timer; // [rsp+38h] [rbp-2088h] BYREF
  unsigned __int64 n; // [rsp+40h] [rbp-2080h]
  __int64 v23; // [rsp+48h] [rbp-2078h]
  __int64 v24; // [rsp+50h] [rbp-2070h]
  FILE *stream; // [rsp+58h] [rbp-2068h]
  char *v26; // [rsp+60h] [rbp-2060h]
  double v27; // [rsp+68h] [rbp-2058h]
  __int64 v28; // [rsp+70h] [rbp-2050h]
  struct tm *v29; // [rsp+78h] [rbp-2048h]
  double loadavg[4]; // [rsp+80h] [rbp-2040h] BYREF
  char s[8200]; // [rsp+A0h] [rbp-2020h] BYREF
  unsigned __int64 v32; // [rsp+20A8h] [rbp-18h]

  v32 = __readfsqword(0x28u);
  n = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  stream = fopen("/proc/uptime", "r");
  if ( stream )
  {
    v26 = fgets_unlocked(s, 0x2000, stream);
    if ( v26 == s )
    {
      v27 = sub_402196(s, loadavg);
      if ( *(char **)&loadavg[0] != s )
      {
        if ( v27 < 0.0 || v27 >= 9.223372036854776e18 )
          v2 = -1LL;
        else
          v2 = (unsigned int)(int)v27;
        v24 = v2;
      }
    }
    sub_407523(stream);
  }
  while ( a1-- )
  {
    v3 = *(_BYTE *)(a2 + 44) && *(_WORD *)a2 == 7;
    n += v3;
    if ( *(_WORD *)a2 == 2 )
      v23 = *(int *)(a2 + 340);
    a2 += 384LL;
  }
  timer = time(0LL);
  if ( !v24 )
  {
    if ( !v23 )
    {
      v5 = gettext("couldn't get boot time");
      v6 = __errno_location();
      error(1, *v6, v5);
    }
    v24 = timer - v23;
  }
  v28 = v24 / 86400;
  v18 = v24 % 86400 / 3600;
  v19 = (v24 % 86400 - (int)(3600 * v18)) / 60;
  v29 = localtime(&timer);
  if ( v29 )
  {
    v7 = gettext(" %H:%M%P  ");
    sub_404F9E(stdout, v7, v29, 0LL, 0LL);
  }
  else
  {
    v8 = gettext(" ??:????  ");
    printf(v8);
  }
  if ( v24 == -1 )
  {
    v9 = gettext("up ???? days ??:??,  ");
    printf(v9);
  }
  else if ( v28 <= 0 )
  {
    printf("up  %2d:%02d,  ", v18, v19);
  }
  else
  {
    v10 = sub_40186D(v28);
    v11 = ngettext("up %ld day %2d:%02d,  ", "up %ld days %2d:%02d,  ", v10);
    printf(v11, v28, v18, v19);
  }
  v12 = ngettext("%lu user", "%lu users", n);
  printf(v12, n);
  v20 = getloadavg(loadavg, 3);
  if ( v20 == -1 )
    goto LABEL_39;
  if ( v20 > 0 )
  {
    v13 = loadavg[0];
    v14 = gettext(",  load average: %.2f");
    printf(v14, v13);
  }
  if ( v20 > 1 )
    printf(", %.2f", loadavg[1]);
  if ( v20 > 2 )
    printf(", %.2f", loadavg[2]);
  if ( v20 > 0 )
LABEL_39:
    putchar_unlocked(10);
  return __readfsqword(0x28u) ^ v32;
}
