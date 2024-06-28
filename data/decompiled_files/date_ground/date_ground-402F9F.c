#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402F9F(unsigned __int8 a1, FILE *a2, char *a3, const struct tm *a4, unsigned int a5, unsigned int a6)
{
  __int64 result; // rax
  int v7; // eax
  int v8; // eax
  char *v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _BOOL4 v13; // eax
  char v14; // al
  unsigned __int64 v15; // rax
  int v16; // eax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int8 v22; // al
  unsigned __int64 v23; // rax
  int v24; // eax
  _BOOL4 v25; // eax
  _BOOL4 v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  bool v35; // [rsp+3Ah] [rbp-7D6h]
  char v36; // [rsp+3Bh] [rbp-7D5h]
  char v37; // [rsp+3Ch] [rbp-7D4h]
  unsigned __int8 v38; // [rsp+3Dh] [rbp-7D3h]
  char v39; // [rsp+3Eh] [rbp-7D2h]
  char v40; // [rsp+3Fh] [rbp-7D1h]
  int v41; // [rsp+40h] [rbp-7D0h]
  int v42; // [rsp+44h] [rbp-7CCh]
  int v43; // [rsp+48h] [rbp-7C8h]
  int v44; // [rsp+4Ch] [rbp-7C4h]
  int v45; // [rsp+50h] [rbp-7C0h]
  unsigned int v46; // [rsp+54h] [rbp-7BCh]
  int v47; // [rsp+58h] [rbp-7B8h]
  int v48; // [rsp+5Ch] [rbp-7B4h]
  int v49; // [rsp+60h] [rbp-7B0h]
  int ll; // [rsp+64h] [rbp-7ACh]
  int v51; // [rsp+68h] [rbp-7A8h]
  int v52; // [rsp+6Ch] [rbp-7A4h]
  int v53; // [rsp+70h] [rbp-7A0h]
  int ii; // [rsp+74h] [rbp-79Ch]
  int v55; // [rsp+78h] [rbp-798h]
  int v56; // [rsp+7Ch] [rbp-794h]
  int v57; // [rsp+80h] [rbp-790h]
  int v58; // [rsp+84h] [rbp-78Ch]
  int v59; // [rsp+88h] [rbp-788h]
  int v60; // [rsp+8Ch] [rbp-784h]
  int v61; // [rsp+90h] [rbp-780h]
  int v62; // [rsp+94h] [rbp-77Ch]
  int v63; // [rsp+98h] [rbp-778h]
  int v64; // [rsp+9Ch] [rbp-774h]
  char *v65; // [rsp+A0h] [rbp-770h]
  __int64 v66; // [rsp+A8h] [rbp-768h]
  const char *v68; // [rsp+B8h] [rbp-758h]
  unsigned __int8 *ptr; // [rsp+C0h] [rbp-750h]
  __int64 i5; // [rsp+C8h] [rbp-748h]
  unsigned __int64 i1; // [rsp+E0h] [rbp-730h]
  unsigned __int64 i2; // [rsp+E8h] [rbp-728h]
  unsigned __int64 mm; // [rsp+F0h] [rbp-720h]
  unsigned __int64 nn; // [rsp+F8h] [rbp-718h]
  char *v75; // [rsp+100h] [rbp-710h]
  unsigned __int64 i3; // [rsp+108h] [rbp-708h]
  unsigned __int64 i4; // [rsp+110h] [rbp-700h]
  unsigned __int64 i6; // [rsp+120h] [rbp-6F0h]
  unsigned __int64 i14; // [rsp+128h] [rbp-6E8h]
  unsigned __int64 i15; // [rsp+138h] [rbp-6D8h]
  unsigned __int64 i11; // [rsp+140h] [rbp-6D0h]
  unsigned __int64 i12; // [rsp+148h] [rbp-6C8h]
  unsigned __int64 i13; // [rsp+150h] [rbp-6C0h]
  unsigned __int64 i9; // [rsp+158h] [rbp-6B8h]
  unsigned __int64 i10; // [rsp+160h] [rbp-6B0h]
  unsigned __int64 i7; // [rsp+168h] [rbp-6A8h]
  unsigned __int64 i8; // [rsp+170h] [rbp-6A0h]
  unsigned __int64 k; // [rsp+178h] [rbp-698h]
  unsigned __int64 l; // [rsp+180h] [rbp-690h]
  time_t v90; // [rsp+188h] [rbp-688h]
  unsigned __int64 i; // [rsp+190h] [rbp-680h]
  unsigned __int64 j; // [rsp+198h] [rbp-678h]
  unsigned __int64 m; // [rsp+1A0h] [rbp-670h]
  unsigned __int64 n; // [rsp+1A8h] [rbp-668h]
  unsigned __int64 jj; // [rsp+1B0h] [rbp-660h]
  unsigned __int64 kk; // [rsp+1B8h] [rbp-658h]
  unsigned __int64 v97; // [rsp+1F8h] [rbp-618h]
  unsigned __int64 v98; // [rsp+200h] [rbp-610h]
  unsigned __int64 v99; // [rsp+208h] [rbp-608h]
  unsigned __int64 v100; // [rsp+218h] [rbp-5F8h]
  unsigned __int64 v101; // [rsp+220h] [rbp-5F0h]
  unsigned __int64 v102; // [rsp+228h] [rbp-5E8h]
  unsigned __int64 v103; // [rsp+238h] [rbp-5D8h]
  unsigned __int64 v104; // [rsp+240h] [rbp-5D0h]
  unsigned __int64 v105; // [rsp+248h] [rbp-5C8h]
  unsigned __int64 v106; // [rsp+250h] [rbp-5C0h]
  unsigned __int64 v107; // [rsp+260h] [rbp-5B0h]
  unsigned __int64 v108; // [rsp+268h] [rbp-5A8h]
  unsigned __int64 v109; // [rsp+270h] [rbp-5A0h]
  unsigned __int64 v110; // [rsp+278h] [rbp-598h]
  unsigned __int64 v111; // [rsp+280h] [rbp-590h]
  unsigned __int64 v112; // [rsp+288h] [rbp-588h]
  unsigned __int64 v113; // [rsp+290h] [rbp-580h]
  unsigned __int64 v114; // [rsp+2A8h] [rbp-568h]
  unsigned __int64 v115; // [rsp+2B0h] [rbp-560h]
  unsigned __int64 v116; // [rsp+2C8h] [rbp-548h]
  unsigned __int64 v117; // [rsp+2D0h] [rbp-540h]
  unsigned __int64 v118; // [rsp+2E8h] [rbp-528h]
  unsigned __int64 v119; // [rsp+2F0h] [rbp-520h]
  unsigned __int64 v120; // [rsp+2F8h] [rbp-518h]
  unsigned __int64 v121; // [rsp+308h] [rbp-508h]
  unsigned __int64 v122; // [rsp+310h] [rbp-500h]
  unsigned __int64 v123; // [rsp+318h] [rbp-4F8h]
  _BYTE *v124; // [rsp+320h] [rbp-4F0h]
  unsigned __int64 v125; // [rsp+328h] [rbp-4E8h]
  unsigned __int64 v126; // [rsp+330h] [rbp-4E0h]
  unsigned __int64 v127; // [rsp+338h] [rbp-4D8h]
  size_t v128; // [rsp+348h] [rbp-4C8h]
  unsigned __int64 size; // [rsp+350h] [rbp-4C0h]
  unsigned __int64 v130; // [rsp+358h] [rbp-4B8h]
  unsigned __int64 v131; // [rsp+360h] [rbp-4B0h]
  unsigned __int64 v132; // [rsp+368h] [rbp-4A8h]
  unsigned __int64 v133; // [rsp+380h] [rbp-490h]
  unsigned __int64 v134; // [rsp+388h] [rbp-488h]
  unsigned __int64 v135; // [rsp+390h] [rbp-480h]
  struct tm v136; // [rsp+3A0h] [rbp-470h] BYREF
  char format[2]; // [rsp+3E0h] [rbp-430h] BYREF
  char v138; // [rsp+3E2h] [rbp-42Eh] BYREF
  _BYTE v139[5]; // [rsp+3E3h] [rbp-42Dh] BYREF
  char s; // [rsp+3F0h] [rbp-420h] BYREF
  unsigned __int8 v141[22]; // [rsp+3F1h] [rbp-41Fh] BYREF
  _BYTE v142[1033]; // [rsp+407h] [rbp-409h] BYREF
  __int64 savedregs; // [rsp+810h] [rbp+0h] BYREF

  *(_QWORD *)&v142[1009] = __readfsqword(0x28u);
  v41 = a4->tm_hour;
  v66 = 0LL;
  v65 = (char *)a4->tm_zone;
  if ( v41 <= 12 )
  {
    if ( !v41 )
      v41 = 12;
  }
  else
  {
    v41 -= 12;
  }
  while ( 2 )
  {
    if ( !*a3 )
      return v66;
    v42 = 0;
    v44 = 0;
    v48 = -1;
    v37 = 0;
    v38 = a1;
    v39 = 0;
    if ( *a3 != 37 )
    {
      if ( (unsigned __int64)(-1 - v66) <= 1 )
        return 0LL;
      if ( a2 )
        fputc(*a3, a2);
      ++v66;
      goto LABEL_521;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = *++a3;
        if ( v7 == 48 )
          goto LABEL_19;
        if ( v7 > 48 )
          break;
        if ( v7 == 35 )
        {
          v39 = 1;
        }
        else
        {
          if ( v7 != 45 )
            goto LABEL_22;
LABEL_19:
          v42 = *a3;
        }
      }
      if ( v7 != 94 )
        break;
      v38 = 1;
    }
    if ( v7 == 95 )
      goto LABEL_19;
LABEL_22:
    if ( (unsigned int)(*a3 - 48) <= 9 )
    {
      v48 = 0;
      do
      {
        if ( v48 > 214748364 || v48 == 214748364 && *a3 - 48 > 7 )
          v48 = 0x7FFFFFFF;
        else
          v48 = *a3 - 48 + 10 * v48;
        ++a3;
      }
      while ( (unsigned int)(*a3 - 48) <= 9 );
    }
    v8 = *a3;
    if ( v8 == 69 || v8 == 79 )
    {
      v9 = a3++;
      v43 = *v9;
    }
    else
    {
      v43 = 0;
    }
    v49 = *a3;
    if ( v49 == 89 )
    {
      if ( v43 == 69 )
        goto LABEL_160;
      if ( v43 == 79 )
        goto LABEL_498;
      v44 = 4;
      v35 = a4->tm_year < -1900;
      v46 = a4->tm_year + 1900;
      goto LABEL_207;
    }
    if ( v49 > 89 )
    {
      if ( v49 == 108 )
      {
        if ( v43 == 69 )
          goto LABEL_498;
        v44 = 2;
        v45 = v41;
      }
      else
      {
        if ( v49 > 108 )
        {
          if ( v49 == 116 )
          {
            LODWORD(v23) = 0;
            if ( v48 >= 0 )
              LODWORD(v23) = v48;
            v107 = (int)v23;
            v23 = (int)v23;
            if ( (unsigned __int64)(int)v23 <= 1 )
              v23 = 1LL;
            v108 = v23;
            if ( -1 - v66 > v23 )
            {
              if ( a2 )
              {
                if ( v107 > 1 )
                {
                  v109 = v48 - 1LL;
                  if ( v42 == 48 )
                  {
                    for ( i = 0LL; i < v109; ++i )
                      fputc(48, a2);
                  }
                  else
                  {
                    for ( j = 0LL; j < v109; ++j )
                      fputc(32, a2);
                  }
                }
                fputc(9, a2);
              }
              v66 += v108;
              goto LABEL_521;
            }
            return 0LL;
          }
          if ( v49 > 116 )
          {
            if ( v49 == 120 )
            {
              if ( v43 == 79 )
                goto LABEL_498;
              goto LABEL_160;
            }
            if ( v49 > 120 )
            {
              if ( v49 != 121 )
              {
                if ( v49 != 122 )
                  goto LABEL_498;
                i5 = 0LL;
                goto LABEL_485;
              }
              if ( v43 == 69 )
                goto LABEL_160;
              v53 = a4->tm_year % 100;
              if ( v53 < 0 )
              {
                if ( a4->tm_year >= -1900 )
                  v29 = v53 + 100;
                else
                  v29 = -v53;
                v53 = v29;
              }
              v44 = 2;
              v45 = v53;
            }
            else if ( v49 == 117 )
            {
              v44 = 1;
              v45 = (a4->tm_wday + 6) % 7 + 1;
            }
            else
            {
              if ( v49 != 119 || v43 == 69 )
                goto LABEL_498;
              v44 = 1;
              v45 = a4->tm_wday;
            }
            goto LABEL_206;
          }
          if ( v49 != 112 )
          {
            if ( v49 > 112 )
            {
              if ( v49 == 114 )
                goto LABEL_160;
              if ( v49 != 115 )
                goto LABEL_498;
              v136 = *a4;
              v90 = mktime(&v136);
              ptr = v142;
              v35 = v90 < 0;
              do
              {
                v56 = (int)v90 % 10;
                v90 /= 10LL;
                --ptr;
                if ( v35 )
                  v22 = 48 - v56;
                else
                  v22 = v56 + 48;
                *ptr = v22;
              }
              while ( v90 );
              v44 = 1;
              v36 = 0;
              goto LABEL_216;
            }
            if ( v49 != 109 )
            {
              if ( v49 != 110 )
                goto LABEL_498;
              LODWORD(v21) = 0;
              if ( v48 >= 0 )
                LODWORD(v21) = v48;
              v100 = (int)v21;
              v21 = (int)v21;
              if ( (unsigned __int64)(int)v21 <= 1 )
                v21 = 1LL;
              v101 = v21;
              if ( -1 - v66 > v21 )
              {
                if ( a2 )
                {
                  if ( v100 > 1 )
                  {
                    v102 = v48 - 1LL;
                    if ( v42 == 48 )
                    {
                      for ( k = 0LL; k < v102; ++k )
                        fputc(48, a2);
                    }
                    else
                    {
                      for ( l = 0LL; l < v102; ++l )
                        fputc(32, a2);
                    }
                  }
                  fputc(10, a2);
                }
                v66 += v101;
                goto LABEL_521;
              }
              return 0LL;
            }
            if ( v43 == 69 )
              goto LABEL_498;
            v44 = 2;
            v35 = a4->tm_mon < -1;
            v46 = a4->tm_mon + 1;
            goto LABEL_207;
          }
          goto LABEL_375;
        }
        if ( v49 == 100 )
        {
          if ( v43 == 69 )
            goto LABEL_498;
          v44 = 2;
          v45 = a4->tm_mday;
          goto LABEL_206;
        }
        if ( v49 <= 100 )
        {
          if ( v49 == 97 )
          {
            if ( v43 )
              goto LABEL_498;
            if ( v39 )
            {
              v38 = 1;
              v37 = 0;
            }
            goto LABEL_160;
          }
          if ( v49 <= 97 )
          {
            if ( v49 != 90 )
              goto LABEL_498;
            if ( v39 )
            {
              v38 = 0;
              v37 = 1;
            }
            if ( !v65 )
              v65 = (char *)&unk_40E3FA;
            v110 = strlen(v65);
            LODWORD(v30) = 0;
            if ( v48 >= 0 )
              LODWORD(v30) = v48;
            v111 = (int)v30;
            v30 = (int)v30;
            if ( v110 >= (int)v30 )
              v30 = v110;
            v112 = v30;
            if ( -1 - v66 > v30 )
            {
              if ( a2 )
              {
                if ( v110 < v111 )
                {
                  v113 = v48 - v110;
                  if ( v42 == 48 )
                  {
                    for ( m = 0LL; m < v113; ++m )
                      fputc(48, a2);
                  }
                  else
                  {
                    for ( n = 0LL; n < v113; ++n )
                      fputc(32, a2);
                  }
                }
                if ( v37 )
                {
                  sub_402EB4(a2, (unsigned __int8 *)v65, v110);
                }
                else if ( v38 )
                {
                  sub_402F01(a2, (unsigned __int8 *)v65, v110);
                }
                else
                {
                  fwrite(v65, v110, 1uLL, a2);
                }
              }
              v66 += v112;
              goto LABEL_521;
            }
            return 0LL;
          }
          if ( v49 != 98 )
          {
            if ( v43 == 79 )
              goto LABEL_498;
            goto LABEL_160;
          }
LABEL_132:
          if ( v39 )
          {
            v38 = 1;
            v37 = 0;
          }
          if ( !v43 )
            goto LABEL_160;
LABEL_498:
          for ( ii = 1; a3[1 - ii] != 37; ++ii )
            ;
          LODWORD(v31) = 0;
          if ( v48 >= 0 )
            LODWORD(v31) = v48;
          v133 = (int)v31;
          v31 = (int)v31;
          if ( ii >= (unsigned __int64)(int)v31 )
            v31 = ii;
          v134 = v31;
          if ( -1 - v66 > v31 )
          {
            if ( a2 )
            {
              if ( ii < v133 )
              {
                v135 = v48 - (__int64)ii;
                if ( v42 == 48 )
                {
                  for ( jj = 0LL; jj < v135; ++jj )
                    fputc(48, a2);
                }
                else
                {
                  for ( kk = 0LL; kk < v135; ++kk )
                    fputc(32, a2);
                }
              }
              if ( v38 )
                sub_402F01(a2, (unsigned __int8 *)&a3[1 - ii], ii);
              else
                fwrite(&a3[1 - ii], ii, 1uLL, a2);
            }
            v66 += v134;
            goto LABEL_521;
          }
          return 0LL;
        }
        if ( v49 == 104 )
          goto LABEL_132;
        if ( v49 > 104 )
        {
          if ( v49 == 106 )
          {
            if ( v43 == 69 )
              goto LABEL_498;
            v44 = 3;
            v35 = a4->tm_yday < -1;
            v46 = a4->tm_yday + 1;
            goto LABEL_207;
          }
          if ( v49 != 107 || v43 == 69 )
            goto LABEL_498;
          v44 = 2;
          v45 = a4->tm_hour;
        }
        else
        {
          if ( v49 != 101 )
          {
            if ( v49 != 103 )
              goto LABEL_498;
            goto LABEL_411;
          }
          if ( v43 == 69 )
            goto LABEL_498;
          v44 = 2;
          v45 = a4->tm_mday;
        }
      }
      if ( v42 != 48 && v42 != 45 )
        v42 = 95;
      goto LABEL_206;
    }
    if ( v49 == 73 )
    {
      if ( v43 == 69 )
        goto LABEL_498;
      v44 = 2;
      v45 = v41;
      goto LABEL_206;
    }
    if ( v49 > 73 )
    {
      if ( v49 == 83 )
      {
        if ( v43 == 69 )
          goto LABEL_498;
        v44 = 2;
        v45 = a4->tm_sec;
      }
      else if ( v49 > 83 )
      {
        if ( v49 == 86 )
          goto LABEL_411;
        if ( v49 > 86 )
        {
          if ( v49 != 87 )
          {
            if ( v43 == 79 )
              goto LABEL_498;
            goto LABEL_160;
          }
          if ( v43 == 69 )
            goto LABEL_498;
          v44 = 2;
          v45 = (a4->tm_yday - (a4->tm_wday + 6) % 7 + 7) / 7;
          goto LABEL_206;
        }
        if ( v49 == 84 )
        {
          v68 = "%H:%M:%S";
          v11 = sub_402F9F(v38, 0LL, "%H:%M:%S", a4, a5, a6);
          goto LABEL_142;
        }
        if ( v43 == 69 )
          goto LABEL_498;
        v44 = 2;
        v45 = (a4->tm_yday - a4->tm_wday + 7) / 7;
      }
      else
      {
        if ( v49 != 78 )
        {
          if ( v49 <= 78 )
          {
            if ( v49 != 77 || v43 == 69 )
              goto LABEL_498;
            v44 = 2;
            v45 = a4->tm_min;
            goto LABEL_206;
          }
          if ( v49 != 80 )
          {
            if ( v49 != 82 )
              goto LABEL_498;
            v68 = "%H:%M";
            v11 = sub_402F9F(v38, 0LL, "%H:%M", a4, a5, a6);
            goto LABEL_142;
          }
          v37 = 1;
          LOBYTE(v49) = 112;
LABEL_375:
          if ( v39 )
          {
            v38 = 0;
            v37 = 1;
          }
          goto LABEL_160;
        }
        if ( v43 == 69 )
          goto LABEL_498;
        v45 = a6;
        if ( v48 == -1 )
        {
          v48 = 9;
        }
        else
        {
          for ( ll = v48; ll <= 8; ++ll )
            v45 /= 10;
        }
        v44 = v48;
      }
LABEL_206:
      v35 = v45 < 0;
      v46 = v45;
      goto LABEL_207;
    }
    if ( v49 == 66 )
    {
      if ( v43 )
        goto LABEL_498;
      if ( v39 )
      {
        v38 = 1;
        v37 = 0;
      }
      goto LABEL_160;
    }
    if ( v49 > 66 )
    {
      if ( v49 != 70 )
      {
        if ( v49 <= 70 )
        {
          if ( v49 != 67 )
          {
            if ( v49 != 68 || v43 )
              goto LABEL_498;
            v68 = "%m/%d/%y";
            v11 = sub_402F9F(v38, 0LL, "%m/%d/%y", a4, a5, a6);
            goto LABEL_142;
          }
          if ( v43 == 79 )
            goto LABEL_498;
          if ( v43 == 69 )
            goto LABEL_160;
          v55 = a4->tm_year / 100 + 19;
          v13 = a4->tm_year % 100 < 0 && v55 > 0;
          v44 = 2;
          v35 = a4->tm_year < -1900;
          v46 = v55 - v13;
LABEL_207:
          v36 = 0;
          v47 = 0;
          goto LABEL_208;
        }
        if ( v49 != 71 )
        {
          if ( v43 == 69 )
            goto LABEL_498;
          v44 = 2;
          v45 = a4->tm_hour;
          goto LABEL_206;
        }
LABEL_411:
        if ( v43 == 69 )
          goto LABEL_498;
        if ( a4->tm_year >= 0 )
          v24 = -100;
        else
          v24 = 300;
        v57 = a4->tm_year + v24;
        v51 = 0;
        v52 = sub_402F4E(a4->tm_yday, a4->tm_wday);
        if ( v52 >= 0 )
        {
          v26 = (v57 & 3) == 0 && (v57 % 100 || !(v57 % 400));
          v58 = sub_402F4E(a4->tm_yday + -365 - v26, a4->tm_wday);
          if ( v58 >= 0 )
          {
            v51 = 1;
            v52 = v58;
          }
        }
        else
        {
          v51 = -1;
          v25 = (((_BYTE)v57 - 1) & 3) == 0 && ((v57 - 1) % 100 || !((v57 - 1) % 400));
          v52 = sub_402F4E(a4->tm_yday + v25 + 365, a4->tm_wday);
        }
        v27 = *a3;
        if ( v27 == 71 )
        {
          v44 = 4;
          v35 = a4->tm_year < -1900 - v51;
          v46 = a4->tm_year + v51 + 1900;
          goto LABEL_207;
        }
        if ( v27 == 103 )
        {
          v59 = (a4->tm_year % 100 + v51) % 100;
          v44 = 2;
          if ( v59 >= 0 )
          {
            v28 = (a4->tm_year % 100 + v51) % 100;
          }
          else if ( a4->tm_year >= -1900 - v51 )
          {
            v28 = v59 + 100;
          }
          else
          {
            v28 = -v59;
          }
          v45 = v28;
        }
        else
        {
          v44 = 2;
          v45 = v52 / 7 + 1;
        }
        goto LABEL_206;
      }
      if ( v43 )
        goto LABEL_498;
      v68 = "%Y-%m-%d";
      v11 = sub_402F9F(v38, 0LL, "%Y-%m-%d", a4, a5, a6);
LABEL_142:
      v103 = v11;
      LODWORD(v11) = 0;
      if ( v48 >= 0 )
        LODWORD(v11) = v48;
      v104 = (int)v11;
      v11 = (int)v11;
      if ( v103 >= (int)v11 )
        v11 = v103;
      v105 = v11;
      if ( -1 - v66 <= v11 )
        return 0LL;
      if ( a2 )
      {
        if ( v103 < v104 )
        {
          v106 = v48 - v103;
          if ( v42 == 48 )
          {
            for ( mm = 0LL; mm < v106; ++mm )
              fputc(48, a2);
          }
          else
          {
            for ( nn = 0LL; nn < v106; ++nn )
              fputc(32, a2);
          }
        }
        sub_402F9F(v38, a2, v68, a4, a5, a6);
      }
      v66 += v105;
      goto LABEL_521;
    }
    if ( v49 == 37 )
    {
      if ( v43 )
        goto LABEL_498;
      LODWORD(v10) = 0;
      if ( v48 >= 0 )
        LODWORD(v10) = v48;
      v97 = (int)v10;
      v10 = (int)v10;
      if ( (unsigned __int64)(int)v10 <= 1 )
        v10 = 1LL;
      v98 = v10;
      if ( -1 - v66 <= v10 )
        return 0LL;
      if ( a2 )
      {
        if ( v97 > 1 )
        {
          v99 = v48 - 1LL;
          if ( v42 == 48 )
          {
            for ( i1 = 0LL; i1 < v99; ++i1 )
              fputc(48, a2);
          }
          else
          {
            for ( i2 = 0LL; i2 < v99; ++i2 )
              fputc(32, a2);
          }
        }
        fputc(*a3, a2);
      }
      v66 += v98;
      goto LABEL_521;
    }
    if ( v49 <= 37 )
    {
      if ( !*a3 )
        --a3;
      goto LABEL_498;
    }
    if ( v49 != 58 )
    {
      if ( v49 != 65 || v43 )
        goto LABEL_498;
      if ( v39 )
      {
        v38 = 1;
        v37 = 0;
      }
LABEL_160:
      format[0] = 32;
      v75 = &v138;
      format[1] = 37;
      if ( v43 )
      {
        v75 = v139;
        v138 = v43;
      }
      *v75 = v49;
      v75[1] = 0;
      v128 = strftime(&s, 0x400uLL, format, a4);
      if ( v128 )
      {
        size = v128 - 1;
        LODWORD(v12) = 0;
        if ( v48 >= 0 )
          LODWORD(v12) = v48;
        v130 = (int)v12;
        v12 = (int)v12;
        if ( size >= (int)v12 )
          v12 = v128 - 1;
        v131 = v12;
        if ( -1 - v66 <= v12 )
          return 0LL;
        if ( a2 )
        {
          if ( !v44 && size < v130 )
          {
            v132 = v48 - size;
            if ( v42 == 48 )
            {
              for ( i3 = 0LL; i3 < v132; ++i3 )
                fputc(48, a2);
            }
            else
            {
              for ( i4 = 0LL; i4 < v132; ++i4 )
                fputc(32, a2);
            }
          }
          if ( v37 )
          {
            sub_402EB4(a2, v141, size);
          }
          else if ( v38 )
          {
            sub_402F01(a2, v141, size);
          }
          else
          {
            fwrite(v141, size, 1uLL, a2);
          }
        }
        v66 += v131;
      }
LABEL_521:
      ++a3;
      continue;
    }
    break;
  }
  for ( i5 = 1LL; a3[i5] == 58; ++i5 )
    ;
  if ( a3[i5] != 122 )
    goto LABEL_498;
  a3 += i5;
LABEL_485:
  if ( a4->tm_isdst < 0 )
    goto LABEL_521;
  v60 = a4->tm_gmtoff;
  v61 = v60 / 3600;
  v62 = v60 / 60 % 60;
  v63 = v60 % 60;
  switch ( i5 )
  {
    case 1LL:
      goto LABEL_492;
    case 0LL:
      v44 = 5;
      v35 = v60 < 0;
      v47 = 0;
      v46 = 100 * v61 + v62;
      goto LABEL_202;
    case 2LL:
      goto LABEL_493;
  }
  if ( i5 != 3 )
    goto LABEL_498;
  if ( v63 )
  {
LABEL_493:
    v44 = 9;
    v35 = v60 < 0;
    v47 = 20;
    v46 = 100 * v62 + 10000 * v61 + v63;
    goto LABEL_202;
  }
  if ( v62 )
  {
LABEL_492:
    v44 = 6;
    v35 = v60 < 0;
    v47 = 4;
    v46 = 100 * v61 + v62;
    goto LABEL_202;
  }
  v44 = 3;
  v35 = v60 < 0;
  v47 = 0;
  v46 = v60 / 3600;
LABEL_202:
  v36 = 1;
LABEL_208:
  if ( v43 == 79 && !v35 )
    goto LABEL_160;
  ptr = v142;
  if ( v35 )
    v46 = -v46;
  do
  {
    if ( (v47 & 1) != 0 )
      *--ptr = 58;
    v47 >>= 1;
    *--ptr = v46 % 0xA + 48;
    v46 /= 0xAu;
  }
  while ( v46 || v47 );
LABEL_216:
  if ( v44 < v48 )
    v44 = v48;
  if ( v35 )
  {
    v14 = 45;
  }
  else if ( v36 )
  {
    v14 = 43;
  }
  else
  {
    v14 = 0;
  }
  v40 = v14;
  if ( v42 == 45 )
  {
    if ( v14 )
    {
      LODWORD(v15) = 0;
      if ( v48 >= 0 )
        LODWORD(v15) = v48;
      v114 = (int)v15;
      v15 = (int)v15;
      if ( (unsigned __int64)(int)v15 <= 1 )
        v15 = 1LL;
      v115 = v15;
      if ( -1 - v66 <= v15 )
        return 0LL;
      if ( a2 )
      {
        if ( !v44 && v114 > 1 )
        {
          for ( i6 = 0LL; i6 < v48 - 1LL; ++i6 )
            fputc(32, a2);
        }
        fputc(v40, a2);
      }
      v66 += v115;
    }
LABEL_312:
    v124 = (_BYTE *)(v142 - ptr);
    LODWORD(v20) = 0;
    if ( v48 >= 0 )
      LODWORD(v20) = v48;
    v125 = (int)v20;
    v20 = (int)v20;
    if ( (unsigned __int64)v124 >= (int)v20 )
      v20 = v142 - ptr;
    v126 = v20;
    if ( -1 - v66 > v20 )
    {
      if ( a2 )
      {
        if ( !v44 && (unsigned __int64)v124 < v125 )
        {
          v127 = v48 - (_QWORD)v124;
          if ( v42 == 48 )
          {
            for ( i7 = 0LL; i7 < v127; ++i7 )
              fputc(48, a2);
          }
          else
          {
            for ( i8 = 0LL; i8 < v127; ++i8 )
              fputc(32, a2);
          }
        }
        if ( v38 )
          sub_402F01(a2, ptr, (__int64)v124);
        else
          fwrite(ptr, (size_t)v124, 1uLL, a2);
      }
      v66 += v126;
      goto LABEL_521;
    }
    result = 0LL;
  }
  else
  {
    v64 = v44 + (_DWORD)ptr - ((unsigned int)&savedregs - 1056 + 23) - (v14 != 0);
    if ( v64 <= 0 )
    {
      if ( !v14 )
        goto LABEL_312;
      LODWORD(v19) = 0;
      if ( v48 >= 0 )
        LODWORD(v19) = v48;
      v121 = (int)v19;
      v19 = (int)v19;
      if ( (unsigned __int64)(int)v19 <= 1 )
        v19 = 1LL;
      v122 = v19;
      if ( -1 - v66 > v19 )
      {
        if ( a2 )
        {
          if ( !v44 && v121 > 1 )
          {
            v123 = v48 - 1LL;
            if ( v42 == 48 )
            {
              for ( i9 = 0LL; i9 < v123; ++i9 )
                fputc(48, a2);
            }
            else
            {
              for ( i10 = 0LL; i10 < v123; ++i10 )
                fputc(32, a2);
            }
          }
          fputc(v40, a2);
        }
        v66 += v122;
        goto LABEL_312;
      }
      result = 0LL;
    }
    else
    {
      if ( v42 != 95 )
      {
        if ( v44 >= (unsigned __int64)(-1 - v66) )
          return 0LL;
        if ( v14 )
        {
          LODWORD(v18) = 0;
          if ( v48 >= 0 )
            LODWORD(v18) = v48;
          v118 = (int)v18;
          v18 = (int)v18;
          if ( (unsigned __int64)(int)v18 <= 1 )
            v18 = 1LL;
          v119 = v18;
          if ( -1 - v66 <= v18 )
            return 0LL;
          if ( a2 )
          {
            if ( !v44 && v118 > 1 )
            {
              v120 = v48 - 1LL;
              if ( v42 == 48 )
              {
                for ( i11 = 0LL; i11 < v120; ++i11 )
                  fputc(48, a2);
              }
              else
              {
                for ( i12 = 0LL; i12 < v120; ++i12 )
                  fputc(32, a2);
              }
            }
            fputc(v40, a2);
          }
          v66 += v119;
        }
        if ( a2 )
        {
          for ( i13 = 0LL; v64 > i13; ++i13 )
            fputc(48, a2);
        }
        v66 += v64;
        v48 = 0;
        goto LABEL_312;
      }
      if ( v64 < (unsigned __int64)(-1 - v66) )
      {
        if ( a2 )
        {
          for ( i14 = 0LL; v64 > i14; ++i14 )
            fputc(32, a2);
        }
        v66 += v64;
        if ( v48 <= v64 )
          v16 = 0;
        else
          v16 = v48 - v64;
        v48 = v16;
        if ( !v40 )
          goto LABEL_312;
        LODWORD(v17) = 0;
        if ( v48 >= 0 )
          LODWORD(v17) = v48;
        v116 = (int)v17;
        v17 = (int)v17;
        if ( (unsigned __int64)(int)v17 <= 1 )
          v17 = 1LL;
        v117 = v17;
        if ( -1 - v66 > v17 )
        {
          if ( a2 )
          {
            if ( !v44 && v116 > 1 )
            {
              for ( i15 = 0LL; i15 < v48 - 1LL; ++i15 )
                fputc(32, a2);
            }
            fputc(v40, a2);
          }
          v66 += v117;
          goto LABEL_312;
        }
        result = 0LL;
      }
      else
      {
        result = 0LL;
      }
    }
  }
  return result;
}
