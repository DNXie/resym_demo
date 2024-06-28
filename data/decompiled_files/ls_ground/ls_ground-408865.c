#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_408865(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 v3; // rdx
  const char *v4; // rax
  const char *v5; // rax
  int v6; // ebx
  char *v7; // rax
  char *v8; // rax
  char *v9; // rdx
  const char *v10; // rax
  unsigned int v11; // eax
  const char *v12; // rbx
  int v13; // er12
  unsigned int v14; // eax
  const char *v15; // rdx
  int v16; // eax
  const char *v17; // rax
  __int64 v18; // r12
  unsigned int v19; // ebx
  __int64 v20; // rax
  int v21; // ebx
  char *v22; // rax
  char *v23; // rax
  char *v24; // rdx
  bool v25; // al
  char *v26; // rax
  const char *v27; // rbx
  int v28; // eax
  int i; // [rsp+1Ch] [rbp-1184h]
  int j; // [rsp+20h] [rbp-1180h]
  int v32; // [rsp+24h] [rbp-117Ch]
  __int64 v33; // [rsp+28h] [rbp-1178h]
  char *s; // [rsp+30h] [rbp-1170h]
  char *sa; // [rsp+30h] [rbp-1170h]
  char *sb; // [rsp+30h] [rbp-1170h]
  const char *v37; // [rsp+38h] [rbp-1168h]
  const char *v38; // [rsp+40h] [rbp-1160h]
  struct tm *v39; // [rsp+48h] [rbp-1158h]
  __int64 v40; // [rsp+58h] [rbp-1148h]
  time_t timer; // [rsp+60h] [rbp-1140h] BYREF
  __int64 v42; // [rsp+68h] [rbp-1138h]
  __int64 v43; // [rsp+70h] [rbp-1130h]
  __int64 v44; // [rsp+78h] [rbp-1128h]
  char v45; // [rsp+80h] [rbp-1120h] BYREF
  _BYTE v46[7]; // [rsp+81h] [rbp-111Fh] BYREF
  char v47; // [rsp+8Ah] [rbp-1116h]
  char v48; // [rsp+8Bh] [rbp-1115h]
  char v49[32]; // [rsp+90h] [rbp-1110h] BYREF
  char v50[656]; // [rsp+B0h] [rbp-10F0h] BYREF
  char v51[3656]; // [rsp+340h] [rbp-E60h] BYREF
  unsigned __int64 v52; // [rsp+1188h] [rbp-18h]

  v52 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 176) )
  {
    sub_40BA8C(a1 + 16, &v45);
  }
  else
  {
    v45 = byte_415E69[*(unsigned int *)(a1 + 160)];
    memset(v46, 63, 0xAuLL);
    v48 = 0;
  }
  if ( byte_61D671 != 1 )
  {
    v47 = 0;
  }
  else if ( *(_DWORD *)(a1 + 180) == 1 )
  {
    v47 = 46;
  }
  else if ( *(_DWORD *)(a1 + 180) == 2 )
  {
    v47 = 43;
  }
  if ( dword_61D6A0 == 1 )
  {
    timer = sub_4027CB(a1 + 16);
    v42 = v1;
  }
  else if ( dword_61D6A0 )
  {
    if ( dword_61D6A0 != 2 )
      abort();
    timer = sub_4027B5(a1 + 16);
    v42 = v3;
  }
  else
  {
    timer = sub_4027E1(a1 + 16);
    v42 = v2;
  }
  s = v51;
  if ( byte_61D6D9 )
  {
    v4 = sub_4087F5((__int64)v50, 0x15uLL, a1);
    sprintf(v51, "%*s ", dword_61D674, v4);
    s = &v51[strlen(v51)];
  }
  if ( byte_61D6AB )
  {
    if ( *(_BYTE *)(a1 + 176) != 1 )
      v5 = "?";
    else
      v5 = (const char *)sub_40DD65(*(_QWORD *)(a1 + 80), v50, (unsigned int)dword_61D6AC, 512LL, qword_61D6B0);
    v37 = v5;
    v6 = dword_61D678;
    for ( i = v6 - sub_40F59D(v5, 0LL); i > 0; --i )
    {
      v7 = s++;
      *v7 = 32;
    }
    do
    {
      v8 = s++;
      v9 = (char *)v37++;
      *v8 = *v9;
    }
    while ( *v8 );
    *(s - 1) = 32;
  }
  if ( *(_BYTE *)(a1 + 176) != 1 )
    v10 = "?";
  else
    v10 = (const char *)sub_40EF8A(*(_QWORD *)(a1 + 32), v50);
  sprintf(s, "%s %*s ", &v45, dword_61D67C, v10);
  sa = &s[strlen(s)];
  if ( byte_61D6B8 )
  {
    fwrite_unlocked("  ", 1uLL, 2uLL, stdout);
    qword_61D7E0 += 2LL;
  }
  if ( byte_61D382 || byte_61D383 || byte_61D6A9 || byte_61D670 )
  {
    fputs_unlocked(v51, stdout);
    qword_61D7E0 += sa - v51;
    if ( byte_61D382 )
      sub_408642(*(_DWORD *)(a1 + 44), dword_61D684, *(_BYTE *)(a1 + 176));
    if ( byte_61D383 )
      sub_40869C(*(_DWORD *)(a1 + 48), dword_61D688, *(_BYTE *)(a1 + 176));
    if ( byte_61D6A9 )
      sub_408642(*(_DWORD *)(a1 + 44), dword_61D68C, *(_BYTE *)(a1 + 176));
    if ( byte_61D670 )
      sub_408579(*(const char **)(a1 + 168), 0LL, dword_61D680);
    sa = v51;
  }
  if ( *(_BYTE *)(a1 + 176) && ((*(_DWORD *)(a1 + 40) & 0xF000) == 0x2000 || (*(_DWORD *)(a1 + 40) & 0xF000) == 24576) )
  {
    v32 = -2 - dword_61D690 - dword_61D694 + dword_61D698;
    v11 = gnu_dev_minor(*(_QWORD *)(a1 + 56));
    v12 = (const char *)sub_40EF8A(v11, v50);
    v13 = dword_61D694;
    v14 = gnu_dev_major(*(_QWORD *)(a1 + 56));
    v15 = (const char *)sub_40EF8A(v14, v49);
    v16 = 0;
    if ( v32 >= 0 )
      v16 = v32;
    sprintf(sa, "%*s, %*s ", v16 + dword_61D690, v15, v13, v12);
    sa += dword_61D698 + 1;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 176) != 1 )
    {
      v17 = "?";
    }
    else
    {
      v18 = qword_61D388;
      v19 = dword_61D6AC;
      v20 = sub_405ACA(*(_QWORD *)(a1 + 64));
      v17 = (const char *)sub_40DD65(v20, v50, v19, 1LL, v18);
    }
    v38 = v17;
    v21 = dword_61D698;
    for ( j = v21 - sub_40F59D(v17, 0LL); j > 0; --j )
    {
      v22 = sa++;
      *v22 = 32;
    }
    do
    {
      v23 = sa++;
      v24 = (char *)v38++;
      *v23 = *v24;
    }
    while ( *v23 );
    *(sa - 1) = 32;
  }
  v39 = localtime(&timer);
  v33 = 0LL;
  *sa = 1;
  if ( *(_BYTE *)(a1 + 176) && v39 )
  {
    if ( (int)sub_402583(qword_61D660, qword_61D668, timer, v42) < 0 )
      sub_40C1E6(&qword_61D660);
    v43 = qword_61D660 - 15778476;
    v44 = qword_61D668;
    v25 = (int)sub_402583(qword_61D660 - 15778476, qword_61D668, timer, v42) < 0
       && (int)sub_402583(timer, v42, qword_61D660, qword_61D668) < 0;
    v33 = sub_4082D4((__int64)sa, 1001LL, (&haystack)[v25], (__int64)v39, 0, v42);
  }
  if ( !v33 && *sa )
  {
    if ( *(_BYTE *)(a1 + 176) != 1 )
      v27 = "?";
    else
      v27 = (const char *)sub_402782(timer, (__int64)v50);
    v28 = sub_40848A();
    sprintf(sa, "%*s ", v28, v27);
    sb = &sa[strlen(sa)];
  }
  else
  {
    v26 = &sa[v33];
    sb = &sa[v33 + 1];
    *v26 = 32;
    *sb = 0;
  }
  fputs_unlocked(v51, stdout);
  qword_61D7E0 += sb - v51;
  v40 = sub_409818(a1, 0LL, &stru_61D800, sb - v51);
  if ( *(_DWORD *)(a1 + 160) == 6 )
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      fwrite_unlocked(" -> ", 1uLL, 4uLL, stdout);
      qword_61D7E0 += 4LL;
      sub_409818(a1, 1LL, 0LL, sb - v51 + v40 + 4);
      if ( dword_61D6BC )
        sub_409D72(1LL, *(unsigned int *)(a1 + 164), 0LL);
    }
  }
  else if ( dword_61D6BC )
  {
    sub_409D72(*(unsigned __int8 *)(a1 + 176), *(unsigned int *)(a1 + 40), *(unsigned int *)(a1 + 160));
  }
  return __readfsqword(0x28u) ^ v52;
}
