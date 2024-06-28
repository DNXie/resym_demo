#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_406185(void *a1, unsigned __int64 *a2, void *a3, __int64 a4, double a5, double a6, double a7, double a8, double a9, double a10, double a11, double a12)
{
  int v13; // esi
  int v14; // edi
  int v15; // ecx
  int v16; // er8
  int v17; // er9
  double v18; // xmm4_8
  double v19; // xmm5_8
  void *v20; // rsp
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned int v24; // eax
  char *v25; // rax
  char *v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  char *v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  int v32; // edi
  int v33; // ecx
  int v34; // er8
  int v35; // er9
  char *v36; // rax
  int v37; // edx
  char *v38; // rax
  char *v39; // rax
  char *v40; // rax
  char *v41; // rax
  char *v42; // rax
  char *v43; // rax
  __int16 v44; // ax
  __int16 v45; // fps
  char *v47; // rax
  char *v48; // rax
  char *v49; // rax
  char *v50; // rax
  char *v51; // rax
  char *v52; // rax
  char *v53; // rax
  char *v54; // rax
  char *v55; // rax
  char *v56; // rax
  char *v57; // rbx
  char *v58; // rax
  char *v59; // rax
  char *v60; // rbx
  char *v61; // rax
  char *v62; // rax
  char *v63; // rax
  char *v64; // rax
  char *v65; // rax
  char *v66; // rax
  __int64 v67; // rax
  char *v68; // rbx
  char *v69; // rax
  char *v70; // rax
  char *v71; // rax
  char *v72; // rax
  char *v73; // rbx
  char *v74; // rax
  char *v75; // rax
  char *v76; // rax
  char *v77; // rax
  char *v78; // rax
  char *v79; // rax
  char *v80; // rax
  unsigned __int64 v81; // rax
  _BYTE *v82; // rax
  _BYTE *v83; // rax
  _BYTE *v84; // rax
  _BYTE *v85; // rax
  _BYTE *v86; // rax
  _BYTE *v87; // rax
  _BYTE *v88; // rax
  _BYTE *v89; // rax
  _BYTE *v90; // rax
  _BYTE *v91; // rax
  unsigned int v92; // eax
  unsigned int v93; // eax
  unsigned __int64 v94; // rax
  __int64 v95; // rax
  unsigned __int64 v96; // rax
  char *v97; // rax
  int v98; // edx
  int *v99; // rdx
  int v100; // eax
  unsigned __int64 v101; // rbx
  __int64 v102; // rax
  unsigned __int64 v103; // rax
  __int64 v104; // rax
  unsigned __int64 v105; // rax
  long double v106; // [rsp+0h] [rbp-8E0h]
  __int64 v107; // [rsp+18h] [rbp-8C8h] BYREF
  __int64 v108; // [rsp+20h] [rbp-8C0h]
  void *v109; // [rsp+28h] [rbp-8B8h]
  unsigned __int64 *v110; // [rsp+30h] [rbp-8B0h]
  void *v111; // [rsp+38h] [rbp-8A8h]
  __int16 v112; // [rsp+4Ah] [rbp-896h]
  int v113; // [rsp+4Ch] [rbp-894h] BYREF
  int v114; // [rsp+50h] [rbp-890h]
  int v115; // [rsp+54h] [rbp-88Ch]
  int v116; // [rsp+58h] [rbp-888h]
  int v117; // [rsp+5Ch] [rbp-884h]
  unsigned int v118; // [rsp+60h] [rbp-880h]
  int v119; // [rsp+64h] [rbp-87Ch]
  int v120; // [rsp+68h] [rbp-878h]
  int v121; // [rsp+6Ch] [rbp-874h]
  unsigned int v122; // [rsp+70h] [rbp-870h]
  int v123; // [rsp+74h] [rbp-86Ch]
  int v124; // [rsp+78h] [rbp-868h]
  unsigned int v125; // [rsp+7Ch] [rbp-864h]
  unsigned int v126; // [rsp+80h] [rbp-860h]
  unsigned int v127; // [rsp+84h] [rbp-85Ch]
  unsigned int v128; // [rsp+88h] [rbp-858h]
  unsigned int v129; // [rsp+8Ch] [rbp-854h]
  unsigned int v130; // [rsp+90h] [rbp-850h]
  unsigned int v131; // [rsp+94h] [rbp-84Ch]
  unsigned int v132; // [rsp+98h] [rbp-848h]
  int v133; // [rsp+9Ch] [rbp-844h]
  unsigned int v134; // [rsp+A0h] [rbp-840h]
  unsigned int v135; // [rsp+A4h] [rbp-83Ch]
  char *format; // [rsp+A8h] [rbp-838h]
  void *v137; // [rsp+B0h] [rbp-830h]
  void *v138; // [rsp+B8h] [rbp-828h]
  __int64 v139; // [rsp+C0h] [rbp-820h]
  char *i; // [rsp+C8h] [rbp-818h]
  void *src; // [rsp+D0h] [rbp-810h]
  unsigned __int64 v142; // [rsp+D8h] [rbp-808h]
  size_t n; // [rsp+E0h] [rbp-800h]
  void *dest; // [rsp+E8h] [rbp-7F8h]
  void *v145; // [rsp+F0h] [rbp-7F0h]
  unsigned __int64 v146; // [rsp+F8h] [rbp-7E8h]
  unsigned __int64 v147; // [rsp+100h] [rbp-7E0h]
  unsigned __int64 v148; // [rsp+108h] [rbp-7D8h]
  void *v149; // [rsp+110h] [rbp-7D0h]
  unsigned __int64 v150; // [rsp+118h] [rbp-7C8h]
  char *v151; // [rsp+120h] [rbp-7C0h]
  char *v152; // [rsp+128h] [rbp-7B8h]
  char *v153; // [rsp+130h] [rbp-7B0h]
  __int64 v154; // [rsp+138h] [rbp-7A8h]
  unsigned __int64 v155; // [rsp+140h] [rbp-7A0h]
  _BYTE *v156; // [rsp+148h] [rbp-798h]
  _BYTE *v157; // [rsp+150h] [rbp-790h]
  void *v158; // [rsp+158h] [rbp-788h]
  void *v159; // [rsp+160h] [rbp-780h]
  void *v160; // [rsp+168h] [rbp-778h]
  size_t maxlen; // [rsp+170h] [rbp-770h]
  void *v162; // [rsp+178h] [rbp-768h]
  void *v163; // [rsp+180h] [rbp-760h]
  unsigned __int64 v164; // [rsp+188h] [rbp-758h]
  size_t size; // [rsp+190h] [rbp-750h]
  size_t v166; // [rsp+198h] [rbp-748h]
  unsigned __int64 v167; // [rsp+1A0h] [rbp-740h]
  size_t v168; // [rsp+1A8h] [rbp-738h]
  size_t v169; // [rsp+1B0h] [rbp-730h]
  void *v170; // [rsp+1B8h] [rbp-728h]
  unsigned __int64 v171; // [rsp+1C0h] [rbp-720h]
  size_t v172; // [rsp+1C8h] [rbp-718h]
  size_t v173; // [rsp+1D0h] [rbp-710h]
  _BYTE *v174; // [rsp+1D8h] [rbp-708h]
  size_t v175; // [rsp+1E0h] [rbp-700h]
  unsigned __int64 v176; // [rsp+1E8h] [rbp-6F8h]
  size_t v177; // [rsp+1F0h] [rbp-6F0h]
  size_t v178; // [rsp+1F8h] [rbp-6E8h]
  size_t v179; // [rsp+200h] [rbp-6E0h]
  size_t v180; // [rsp+208h] [rbp-6D8h]
  __int64 v181; // [rsp+210h] [rbp-6D0h]
  __int64 v182; // [rsp+218h] [rbp-6C8h]
  __int64 v183; // [rsp+220h] [rbp-6C0h]
  __int64 v184; // [rsp+228h] [rbp-6B8h]
  double v185; // [rsp+230h] [rbp-6B0h]
  __int64 v186; // [rsp+238h] [rbp-6A8h]
  __int64 v187; // [rsp+240h] [rbp-6A0h]
  __int64 v188; // [rsp+248h] [rbp-698h]
  unsigned __int64 v189; // [rsp+250h] [rbp-690h]
  size_t v190; // [rsp+258h] [rbp-688h]
  long double v191; // [rsp+260h] [rbp-680h]
  __int64 v192; // [rsp+270h] [rbp-670h]
  int v193; // [rsp+278h] [rbp-668h]
  char v194[8]; // [rsp+280h] [rbp-660h] BYREF
  void *v195; // [rsp+288h] [rbp-658h]
  _BYTE v196[224]; // [rsp+290h] [rbp-650h] BYREF
  __int64 v197; // [rsp+370h] [rbp-570h] BYREF
  void *ptr; // [rsp+378h] [rbp-568h]
  __int64 v199; // [rsp+380h] [rbp-560h]
  __int64 v200; // [rsp+388h] [rbp-558h]
  _BYTE v201[624]; // [rsp+390h] [rbp-550h] BYREF
  char v202[712]; // [rsp+600h] [rbp-2E0h] BYREF
  unsigned __int64 v203; // [rsp+8C8h] [rbp-18h]

  v111 = a1;
  v110 = a2;
  v109 = a3;
  v108 = a4;
  v203 = __readfsqword(0x28u);
  if ( (int)sub_40A58A(a3, &v197, v194) < 0 )
    return 0LL;
  if ( (int)sub_409C78(v108, v194) < 0 )
  {
    if ( ptr != v201 )
      free(ptr);
    if ( v195 != v196 )
      free(v195);
    *__errno_location() = 22;
    return 0LL;
  }
  v13 = v199;
  v14 = 7;
  v164 = sub_4060A9(7uLL, v199, v200, 6LL);
  if ( v164 > 0xF9F )
  {
    size = v164;
    if ( v164 == -1LL )
      goto LABEL_530;
    v14 = size;
    format = (char *)malloc(size);
    if ( !format )
      goto LABEL_530;
    v137 = format;
  }
  else
  {
    v20 = alloca(16 * ((v164 + 30) / 0x10));
    format = (char *)(16 * (((unsigned __int64)&v107 + 7) >> 4));
    v137 = 0LL;
  }
  if ( v111 )
  {
    src = v111;
    v142 = *v110;
  }
  else
  {
    src = 0LL;
    v142 = 0LL;
  }
  n = 0LL;
  v138 = v109;
  v139 = 0LL;
  for ( i = (char *)ptr; ; i += 88 )
  {
    if ( *(void **)i != v138 )
    {
      v166 = *(_QWORD *)i - (_QWORD)v138;
      v167 = sub_406075(n, v166);
      if ( v167 > v142 )
      {
        if ( v142 )
        {
          if ( (v142 & 0x8000000000000000LL) != 0LL )
            v21 = -1LL;
          else
            v21 = 2 * v142;
        }
        else
        {
          v21 = 12LL;
        }
        v142 = v21;
        if ( v167 > v21 )
          v142 = v167;
        v168 = v142;
        if ( v142 == -1LL )
          goto LABEL_525;
        dest = src != v111 && src ? realloc(src, v168) : malloc(v168);
        if ( !dest )
          goto LABEL_525;
        if ( src == v111 && n )
          memcpy(dest, src, n);
        src = dest;
      }
      v13 = (int)v138;
      v14 = (_DWORD)src + n;
      memcpy((char *)src + n, v138, v166);
      n = v167;
    }
    if ( v197 == v139 )
    {
      v22 = sub_406075(n, 1LL);
      if ( v22 > v142 )
      {
        if ( v142 )
        {
          if ( (v142 & 0x8000000000000000LL) != 0LL )
            v104 = -1LL;
          else
            v104 = 2 * v142;
        }
        else
        {
          v104 = 12LL;
        }
        v142 = v104;
        v105 = sub_406075(n, 1LL);
        if ( v105 > v142 )
          v142 = sub_406075(n, 1LL);
        v169 = v142;
        if ( v142 == -1LL )
          goto LABEL_525;
        v163 = src != v111 && src ? realloc(src, v169) : malloc(v169);
        if ( !v163 )
          goto LABEL_525;
        if ( src == v111 && n )
          memcpy(v163, src, n);
        src = v163;
      }
      *((_BYTE *)src + n) = 0;
      if ( src != v111 && n + 1 < v142 )
      {
        v170 = realloc(src, n + 1);
        if ( v170 )
          src = v170;
      }
      if ( v137 )
        free(v137);
      if ( ptr != v201 )
        free(ptr);
      if ( v195 != v196 )
        free(v195);
      *v110 = n;
      return src;
    }
    if ( i[72] == 37 )
    {
      if ( *((_QWORD *)i + 10) != -1LL )
        abort();
      v13 = 1;
      v14 = n;
      v171 = sub_406075(n, 1LL);
      if ( v171 > v142 )
      {
        if ( v142 )
        {
          if ( (v142 & 0x8000000000000000LL) != 0LL )
            v23 = -1LL;
          else
            v23 = 2 * v142;
        }
        else
        {
          v23 = 12LL;
        }
        v142 = v23;
        if ( v171 > v23 )
          v142 = v171;
        v172 = v142;
        if ( v142 == -1LL )
          goto LABEL_525;
        if ( src != v111 && src )
        {
          v13 = v172;
          v14 = (int)src;
          v145 = realloc(src, v172);
        }
        else
        {
          v14 = v172;
          v145 = malloc(v172);
        }
        if ( !v145 )
          goto LABEL_525;
        if ( src == v111 && n )
        {
          v13 = (int)src;
          v14 = (int)v145;
          memcpy(v145, src, n);
        }
        src = v145;
      }
      *((_BYTE *)src + n) = 37;
      n = v171;
      goto LABEL_487;
    }
    if ( *((_QWORD *)i + 10) == -1LL )
      abort();
    if ( i[72] == 110 )
    {
      v24 = *((_DWORD *)v195 + 8 * *((_QWORD *)i + 10));
      if ( v24 == 20 )
      {
        **((_DWORD **)v195 + 4 * *((_QWORD *)i + 10) + 2) = n;
        goto LABEL_487;
      }
      if ( v24 > 0x14 )
      {
        if ( v24 == 21 )
        {
          **((_QWORD **)v195 + 4 * *((_QWORD *)i + 10) + 2) = n;
          goto LABEL_487;
        }
        if ( v24 == 22 )
        {
          **((_QWORD **)v195 + 4 * *((_QWORD *)i + 10) + 2) = n;
          goto LABEL_487;
        }
      }
      else
      {
        if ( v24 == 18 )
        {
          **((_BYTE **)v195 + 4 * *((_QWORD *)i + 10) + 2) = n;
          goto LABEL_487;
        }
        if ( v24 == 19 )
        {
          **((_WORD **)v195 + 4 * *((_QWORD *)i + 10) + 2) = n;
          goto LABEL_487;
        }
      }
      abort();
    }
    if ( i[72] != 102
      && i[72] != 70
      && i[72] != 101
      && i[72] != 69
      && i[72] != 103
      && i[72] != 71
      && i[72] != 97
      && i[72] != 65 )
    {
      break;
    }
    if ( *((_DWORD *)v195 + 8 * *((_QWORD *)i + 10)) != 12 )
      break;
    v25 = (char *)v195 + 32 * *((_QWORD *)i + 10);
    *(_QWORD *)&v106 = *((_QWORD *)v25 + 2);
    DWORD2(v106) = *((_DWORD *)v25 + 6);
    if ( !sub_406140(v14, v13, a5, a6, a7, a8, v18, v19, a11, a12, DWORD2(v106), v15, v16, v17, v106) )
      break;
    v114 = *((_DWORD *)i + 4);
    v115 = 0;
    v146 = 0LL;
    if ( *((_QWORD *)i + 3) != *((_QWORD *)i + 4) )
    {
      if ( *((_QWORD *)i + 5) == -1LL )
      {
        v152 = (char *)*((_QWORD *)i + 3);
        do
        {
          v26 = v152++;
          v27 = *v26 - 48;
          if ( v146 > 0x1999999999999999LL )
            v28 = -1LL;
          else
            v28 = 10 * v146;
          v146 = sub_406075(v28, v27);
        }
        while ( *((char **)i + 4) != v152 );
      }
      else
      {
        if ( *((_DWORD *)v195 + 8 * *((_QWORD *)i + 5)) != 5 )
          abort();
        v120 = *((_DWORD *)v195 + 8 * *((_QWORD *)i + 5) + 4);
        if ( v120 >= 0 )
        {
          v146 = v120;
        }
        else
        {
          v114 |= 2u;
          v146 = (unsigned int)-v120;
        }
      }
      v115 = 1;
    }
    v116 = 0;
    v147 = 0LL;
    if ( *((_QWORD *)i + 6) != *((_QWORD *)i + 7) )
    {
      if ( *((_QWORD *)i + 8) == -1LL )
      {
        v153 = (char *)(*((_QWORD *)i + 6) + 1LL);
        v147 = 0LL;
        while ( *((char **)i + 7) != v153 )
        {
          v29 = v153++;
          v30 = *v29 - 48;
          if ( v147 > 0x1999999999999999LL )
            v31 = -1LL;
          else
            v31 = 10 * v147;
          v147 = sub_406075(v31, v30);
        }
        v116 = 1;
      }
      else
      {
        if ( *((_DWORD *)v195 + 8 * *((_QWORD *)i + 8)) != 5 )
          abort();
        v121 = *((_DWORD *)v195 + 8 * *((_QWORD *)i + 8) + 4);
        if ( v121 >= 0 )
        {
          v147 = v121;
          v116 = 1;
        }
      }
    }
    if ( !v116 && i[72] != 97 && i[72] != 65 )
      v147 = 6LL;
    v148 = 0LL;
    if ( v147 )
      v148 = v147;
    v148 = sub_406075(v148, 12LL);
    if ( v148 < v146 )
      v148 = v146;
    v32 = v148;
    v148 = sub_406075(v148, 1LL);
    if ( v148 > 0x2BC )
    {
      v173 = v148;
      if ( v148 == -1LL )
        goto LABEL_525;
      v32 = v173;
      v149 = malloc(v173);
      if ( !v149 )
        goto LABEL_525;
    }
    else
    {
      v149 = v202;
    }
    v150 = 0LL;
    v151 = (char *)v149;
    v36 = (char *)v195 + 32 * *((_QWORD *)i + 10);
    v37 = *((_DWORD *)v36 + 6);
    *(_QWORD *)&v191 = *((_QWORD *)v36 + 2);
    DWORD2(v191) = v37;
    if ( (unsigned int)sub_409C20(v32, 1, v37, v33, v34, v35, *(__int64 *)&v191, v37) )
    {
      if ( i[72] <= 64 || i[72] > 90 )
      {
        v41 = v151++;
        *v41 = 110;
        v42 = v151++;
        *v42 = 97;
        v43 = v151++;
        *v43 = 110;
      }
      else
      {
        v38 = v151++;
        *v38 = 78;
        v39 = v151++;
        *v39 = 65;
        v40 = v151++;
        *v40 = 78;
      }
    }
    else
    {
      v117 = 0;
      v112 = v134;
      LOBYTE(v44) = v134;
      HIBYTE(v44) = BYTE1(v134) | 3;
      LOWORD(v134) = v44;
      _FST7 = v191;
      __asm { fxam }
      if ( (v45 & 0x200) != 0 )
      {
        v117 = -1;
        v191 = -v191;
      }
      if ( v117 >= 0 )
      {
        if ( (v114 & 4) != 0 )
        {
          v48 = v151++;
          *v48 = 43;
        }
        else if ( (v114 & 8) != 0 )
        {
          v49 = v151++;
          *v49 = 32;
        }
      }
      else
      {
        v47 = v151++;
        *v47 = 45;
      }
      if ( v191 > 0.0 && v191 == v191 + v191 )
      {
        if ( i[72] <= 64 || i[72] > 90 )
        {
          v53 = v151++;
          *v53 = 105;
          v54 = v151++;
          *v54 = 110;
          v55 = v151++;
          *v55 = 102;
        }
        else
        {
          v50 = v151++;
          *v50 = 73;
          v51 = v151++;
          *v51 = 78;
          v52 = v151++;
          *v52 = 70;
        }
      }
      else
      {
        if ( 0.0 != v191 )
          abort();
        v150 = (unsigned __int64)v151;
        switch ( i[72] )
        {
          case 'f':
          case 'F':
            v56 = v151++;
            *v56 = 48;
            if ( (v114 & 0x10) != 0 || v147 )
            {
              v57 = v151++;
              *v57 = sub_40610F();
              while ( v147 )
              {
                v58 = v151++;
                *v58 = 48;
                --v147;
              }
            }
            break;
          case 'e':
          case 'E':
            v59 = v151++;
            *v59 = 48;
            if ( (v114 & 0x10) != 0 || v147 )
            {
              v60 = v151++;
              *v60 = sub_40610F();
              while ( v147 )
              {
                v61 = v151++;
                *v61 = 48;
                --v147;
              }
            }
            v62 = v151++;
            *v62 = i[72];
            v63 = v151++;
            *v63 = 43;
            v64 = v151++;
            *v64 = 48;
            v65 = v151++;
            *v65 = 48;
            break;
          case 'g':
          case 'G':
            v66 = v151++;
            *v66 = 48;
            if ( (v114 & 0x10) != 0 )
            {
              if ( v147 )
                v67 = v147 - 1;
              else
                v67 = 0LL;
              v154 = v67;
              v68 = v151++;
              *v68 = sub_40610F();
              while ( v154 )
              {
                v69 = v151++;
                *v69 = 48;
                --v154;
              }
            }
            break;
          case 'a':
          case 'A':
            v70 = v151++;
            *v70 = 48;
            v71 = v151++;
            *v71 = i[72] + 23;
            v150 = (unsigned __int64)v151;
            v72 = v151++;
            *v72 = 48;
            if ( (v114 & 0x10) != 0 || v147 )
            {
              v73 = v151++;
              *v73 = sub_40610F();
              while ( v147 )
              {
                v74 = v151++;
                *v74 = 48;
                --v147;
              }
            }
            v75 = v151++;
            *v75 = i[72] + 15;
            v76 = v151++;
            *v76 = 43;
            v77 = v151++;
            *v77 = 48;
            break;
          default:
            abort();
        }
      }
      LOWORD(v134) = v112;
    }
    if ( v115 && v151 - (_BYTE *)v149 < v146 )
    {
      v155 = (_BYTE *)v149 - v151 + v146;
      v174 = (char *)v149 + v146;
      if ( (v114 & 2) != 0 )
      {
        while ( v155 )
        {
          v78 = v151++;
          *v78 = 32;
          --v155;
        }
      }
      else if ( (v114 & 0x20) != 0 && v150 )
      {
        v156 = v174;
        while ( (unsigned __int64)v151 > v150 )
          *--v156 = *--v151;
        while ( v155 )
        {
          v79 = v151++;
          *v79 = 48;
          --v155;
        }
      }
      else
      {
        v157 = v174;
        while ( v151 > v149 )
          *--v157 = *--v151;
        while ( v155 )
        {
          v80 = v151++;
          *v80 = 32;
          --v155;
        }
      }
      v151 = v174;
    }
    v175 = v151 - (_BYTE *)v149;
    if ( v151 - (_BYTE *)v149 >= v148 )
      abort();
    if ( v142 - n <= v175 )
    {
      v176 = sub_406075(n, v175);
      if ( v176 > v142 )
      {
        if ( v142 )
        {
          if ( (v142 & 0x8000000000000000LL) != 0LL )
            v81 = -1LL;
          else
            v81 = 2 * v142;
        }
        else
        {
          v81 = 12LL;
        }
        v142 = v81;
        if ( v176 > v81 )
          v142 = v176;
        v177 = v142;
        if ( v142 == -1LL )
          goto LABEL_525;
        v158 = src != v111 && src ? realloc(src, v177) : malloc(v177);
        if ( !v158 )
          goto LABEL_525;
        if ( src == v111 && n )
          memcpy(v158, src, n);
        src = v158;
      }
    }
    v13 = (int)v149;
    v14 = (_DWORD)src + n;
    memcpy((char *)src + n, v149, v175);
    if ( v149 != v202 )
    {
      v14 = (int)v149;
      free(v149);
    }
    n += v175;
LABEL_487:
    v138 = (void *)*((_QWORD *)i + 1);
    ++v139;
  }
  v122 = *((_DWORD *)v195 + 8 * *((_QWORD *)i + 10));
  v123 = *((_DWORD *)i + 4);
  v159 = format + 1;
  *format = 37;
  if ( (v123 & 1) != 0 )
  {
    v82 = v159;
    v159 = (char *)v159 + 1;
    *v82 = 39;
  }
  if ( (v123 & 2) != 0 )
  {
    v83 = v159;
    v159 = (char *)v159 + 1;
    *v83 = 45;
  }
  if ( (v123 & 4) != 0 )
  {
    v84 = v159;
    v159 = (char *)v159 + 1;
    *v84 = 43;
  }
  if ( (v123 & 8) != 0 )
  {
    v85 = v159;
    v159 = (char *)v159 + 1;
    *v85 = 32;
  }
  if ( (v123 & 0x10) != 0 )
  {
    v86 = v159;
    v159 = (char *)v159 + 1;
    *v86 = 35;
  }
  if ( (v123 & 0x40) != 0 )
  {
    v87 = v159;
    v159 = (char *)v159 + 1;
    *v87 = 73;
  }
  if ( (v123 & 0x20) != 0 )
  {
    v88 = v159;
    v159 = (char *)v159 + 1;
    *v88 = 48;
  }
  if ( *((_QWORD *)i + 3) != *((_QWORD *)i + 4) )
  {
    v178 = *((_QWORD *)i + 4) - *((_QWORD *)i + 3);
    memcpy(v159, *((const void **)i + 3), v178);
    v159 = (char *)v159 + v178;
  }
  if ( *((_QWORD *)i + 6) != *((_QWORD *)i + 7) )
  {
    v179 = *((_QWORD *)i + 7) - *((_QWORD *)i + 6);
    memcpy(v159, *((const void **)i + 6), v179);
    v159 = (char *)v159 + v179;
  }
  if ( v122 > 0xA )
  {
    if ( v122 == 14 || v122 == 16 )
      goto LABEL_260;
    if ( v122 == 12 )
    {
      v91 = v159;
      v159 = (char *)v159 + 1;
      *v91 = 76;
    }
  }
  else
  {
    if ( v122 >= 9 )
    {
      v89 = v159;
      v159 = (char *)v159 + 1;
      *v89 = 108;
      goto LABEL_260;
    }
    if ( v122 >= 7 )
    {
LABEL_260:
      v90 = v159;
      v159 = (char *)v159 + 1;
      *v90 = 108;
    }
  }
  *(_WORD *)v159 = (unsigned __int8)i[72];
  v118 = 0;
  if ( *((_QWORD *)i + 5) != -1LL )
  {
    if ( *((_DWORD *)v195 + 8 * *((_QWORD *)i + 5)) != 5 )
      abort();
    v92 = v118++;
    *(&v134 + v92) = *((_DWORD *)v195 + 8 * *((_QWORD *)i + 5) + 4);
  }
  if ( *((_QWORD *)i + 8) != -1LL )
  {
    if ( *((_DWORD *)v195 + 8 * *((_QWORD *)i + 8)) != 5 )
      abort();
    v93 = v118++;
    *(&v134 + v93) = *((_DWORD *)v195 + 8 * *((_QWORD *)i + 8) + 4);
  }
  v94 = sub_406075(n, 2LL);
  if ( v94 > v142 )
  {
    if ( v142 )
    {
      if ( (v142 & 0x8000000000000000LL) != 0LL )
        v95 = -1LL;
      else
        v95 = 2 * v142;
    }
    else
    {
      v95 = 12LL;
    }
    v142 = v95;
    v96 = sub_406075(n, 2LL);
    if ( v96 > v142 )
      v142 = sub_406075(n, 2LL);
    v180 = v142;
    if ( v142 != -1LL )
    {
      v160 = src != v111 && src ? realloc(src, v180) : malloc(v180);
      if ( v160 )
      {
        if ( src == v111 && n )
          memcpy(v160, src, n);
        src = v160;
        goto LABEL_288;
      }
    }
LABEL_525:
    if ( src != v111 && src )
      free(src);
    if ( v137 )
      free(v137);
LABEL_530:
    if ( ptr != v201 )
      free(ptr);
    if ( v195 != v196 )
      free(v195);
    *__errno_location() = 12;
    return 0LL;
  }
LABEL_288:
  *((_BYTE *)src + n) = 0;
  v124 = *__errno_location();
  while ( 1 )
  {
    while ( 1 )
    {
      v113 = -1;
      v119 = 0;
      maxlen = v142 - n;
      if ( v142 - n > 0x7FFFFFFF )
        maxlen = 0x7FFFFFFFLL;
      *__errno_location() = 0;
      if ( v122 == 9 )
      {
        v183 = *((_QWORD *)v195 + 4 * *((_QWORD *)i + 10) + 2);
        if ( v118 == 1 )
        {
          v14 = (_DWORD)src + n;
          v13 = maxlen;
          v119 = snprintf((char *)src + n, maxlen, format, v134, v183, &v113);
        }
        else if ( v118 )
        {
          if ( v118 != 2 )
            abort();
          v14 = (_DWORD)src + n;
          v13 = maxlen;
          v119 = snprintf((char *)src + n, maxlen, format, v134, v135, v183, &v113);
        }
        else
        {
          v14 = (_DWORD)src + n;
          v13 = maxlen;
          v119 = snprintf((char *)src + n, maxlen, format, v183, &v113);
        }
      }
      else if ( v122 > 9 )
      {
        if ( v122 == 13 )
        {
          v131 = *((_DWORD *)v195 + 8 * *((_QWORD *)i + 10) + 4);
          if ( v118 == 1 )
          {
            v14 = (_DWORD)src + n;
            v13 = maxlen;
            v119 = snprintf((char *)src + n, maxlen, format, v134, v131, &v113);
          }
          else if ( v118 )
          {
            if ( v118 != 2 )
              abort();
            v14 = (_DWORD)src + n;
            v13 = maxlen;
            v119 = snprintf((char *)src + n, maxlen, format, v134, v135, v131, &v113);
          }
          else
          {
            v14 = (_DWORD)src + n;
            v13 = maxlen;
            v119 = snprintf((char *)src + n, maxlen, format, v131, &v113);
          }
        }
        else if ( v122 > 0xD )
        {
          if ( v122 == 15 )
          {
            v186 = *((_QWORD *)v195 + 4 * *((_QWORD *)i + 10) + 2);
            if ( v118 == 1 )
            {
              v14 = (_DWORD)src + n;
              v13 = maxlen;
              v119 = snprintf((char *)src + n, maxlen, format, v134, v186, &v113);
            }
            else if ( v118 )
            {
              if ( v118 != 2 )
                abort();
              v14 = (_DWORD)src + n;
              v13 = maxlen;
              v119 = snprintf((char *)src + n, maxlen, format, v134, v135, v186, &v113);
            }
            else
            {
              v14 = (_DWORD)src + n;
              v13 = maxlen;
              v119 = snprintf((char *)src + n, maxlen, format, v186, &v113);
            }
          }
          else if ( v122 < 0xF )
          {
            v132 = *((_DWORD *)v195 + 8 * *((_QWORD *)i + 10) + 4);
            if ( v118 == 1 )
            {
              v14 = (_DWORD)src + n;
              v13 = maxlen;
              v119 = snprintf((char *)src + n, maxlen, format, v134, v132, &v113);
            }
            else if ( v118 )
            {
              if ( v118 != 2 )
                abort();
              v14 = (_DWORD)src + n;
              v13 = maxlen;
              v119 = snprintf((char *)src + n, maxlen, format, v134, v135, v132, &v113);
            }
            else
            {
              v14 = (_DWORD)src + n;
              v13 = maxlen;
              v119 = snprintf((char *)src + n, maxlen, format, v132, &v113);
            }
          }
          else if ( v122 == 16 )
          {
            v187 = *((_QWORD *)v195 + 4 * *((_QWORD *)i + 10) + 2);
            if ( v118 == 1 )
            {
              v14 = (_DWORD)src + n;
              v13 = maxlen;
              v119 = snprintf((char *)src + n, maxlen, format, v134, v187, &v113);
            }
            else if ( v118 )
            {
              if ( v118 != 2 )
                abort();
              v14 = (_DWORD)src + n;
              v13 = maxlen;
              v119 = snprintf((char *)src + n, maxlen, format, v134, v135, v187, &v113);
            }
            else
            {
              v14 = (_DWORD)src + n;
              v13 = maxlen;
              v119 = snprintf((char *)src + n, maxlen, format, v187, &v113);
            }
          }
          else
          {
            if ( v122 != 17 )
LABEL_432:
              abort();
            v188 = *((_QWORD *)v195 + 4 * *((_QWORD *)i + 10) + 2);
            if ( v118 == 1 )
            {
              v14 = (_DWORD)src + n;
              v13 = maxlen;
              v119 = snprintf((char *)src + n, maxlen, format, v134, v188, &v113);
            }
            else if ( v118 )
            {
              if ( v118 != 2 )
                abort();
              v14 = (_DWORD)src + n;
              v13 = maxlen;
              v119 = snprintf((char *)src + n, maxlen, format, v134, v135, v188, &v113);
            }
            else
            {
              v14 = (_DWORD)src + n;
              v13 = maxlen;
              v119 = snprintf((char *)src + n, maxlen, format, v188, &v113);
            }
          }
        }
        else if ( v122 == 11 )
        {
          v185 = *((double *)v195 + 4 * *((_QWORD *)i + 10) + 2);
          if ( v118 == 1 )
          {
            v14 = (_DWORD)src + n;
            v13 = maxlen;
            HIBYTE(v107) = HIBYTE(v185);
            a5 = v185;
            v119 = snprintf((char *)src + n, maxlen, format, v134, &v113, v185);
          }
          else if ( v118 )
          {
            if ( v118 != 2 )
              abort();
            v14 = (_DWORD)src + n;
            v13 = maxlen;
            HIBYTE(v107) = HIBYTE(v185);
            a5 = v185;
            v119 = snprintf((char *)src + n, maxlen, format, v134, v135, &v113, v185);
          }
          else
          {
            v14 = (_DWORD)src + n;
            v13 = maxlen;
            HIBYTE(v107) = HIBYTE(v185);
            a5 = v185;
            v119 = snprintf((char *)src + n, maxlen, format, &v113, v185);
          }
        }
        else if ( v122 > 0xB )
        {
          v97 = (char *)v195 + 32 * *((_QWORD *)i + 10);
          v98 = *((_DWORD *)v97 + 6);
          v192 = *((_QWORD *)v97 + 2);
          v193 = v98;
          if ( v118 == 1 )
          {
            v13 = maxlen;
            v14 = (_DWORD)src + n;
            v119 = snprintf((char *)src + n, maxlen, format, v134, &v113);
          }
          else if ( v118 )
          {
            if ( v118 != 2 )
              abort();
            v13 = maxlen;
            DWORD2(v106) = v193;
            v14 = (_DWORD)src + n;
            v119 = snprintf((char *)src + n, maxlen, format, v134, v135, &v113, v192, *((_QWORD *)&v106 + 1));
          }
          else
          {
            v13 = maxlen;
            v14 = (_DWORD)src + n;
            v119 = snprintf((char *)src + n, maxlen, format, &v113);
          }
        }
        else
        {
          v184 = *((_QWORD *)v195 + 4 * *((_QWORD *)i + 10) + 2);
          if ( v118 == 1 )
          {
            v14 = (_DWORD)src + n;
            v13 = maxlen;
            v119 = snprintf((char *)src + n, maxlen, format, v134, v184, &v113);
          }
          else if ( v118 )
          {
            if ( v118 != 2 )
              abort();
            v14 = (_DWORD)src + n;
            v13 = maxlen;
            v119 = snprintf((char *)src + n, maxlen, format, v134, v135, v184, &v113);
          }
          else
          {
            v14 = (_DWORD)src + n;
            v13 = maxlen;
            v119 = snprintf((char *)src + n, maxlen, format, v184, &v113);
          }
        }
      }
      else if ( v122 == 4 )
      {
        v128 = *((unsigned __int16 *)v195 + 16 * *((_QWORD *)i + 10) + 8);
        if ( v118 == 1 )
        {
          v14 = (_DWORD)src + n;
          v13 = maxlen;
          v119 = snprintf((char *)src + n, maxlen, format, v134, v128, &v113);
        }
        else if ( v118 )
        {
          if ( v118 != 2 )
            abort();
          v14 = (_DWORD)src + n;
          v13 = maxlen;
          v119 = snprintf((char *)src + n, maxlen, format, v134, v135, v128, &v113);
        }
        else
        {
          v14 = (_DWORD)src + n;
          v13 = maxlen;
          v119 = snprintf((char *)src + n, maxlen, format, v128, &v113);
        }
      }
      else if ( v122 > 4 )
      {
        if ( v122 == 6 )
        {
          v130 = *((_DWORD *)v195 + 8 * *((_QWORD *)i + 10) + 4);
          if ( v118 == 1 )
          {
            v14 = (_DWORD)src + n;
            v13 = maxlen;
            v119 = snprintf((char *)src + n, maxlen, format, v134, v130, &v113);
          }
          else if ( v118 )
          {
            if ( v118 != 2 )
              abort();
            v14 = (_DWORD)src + n;
            v13 = maxlen;
            v119 = snprintf((char *)src + n, maxlen, format, v134, v135, v130, &v113);
          }
          else
          {
            v14 = (_DWORD)src + n;
            v13 = maxlen;
            v119 = snprintf((char *)src + n, maxlen, format, v130, &v113);
          }
        }
        else if ( v122 < 6 )
        {
          v129 = *((_DWORD *)v195 + 8 * *((_QWORD *)i + 10) + 4);
          if ( v118 == 1 )
          {
            v14 = (_DWORD)src + n;
            v13 = maxlen;
            v119 = snprintf((char *)src + n, maxlen, format, v134, v129, &v113);
          }
          else if ( v118 )
          {
            if ( v118 != 2 )
              abort();
            v14 = (_DWORD)src + n;
            v13 = maxlen;
            v119 = snprintf((char *)src + n, maxlen, format, v134, v135, v129, &v113);
          }
          else
          {
            v14 = (_DWORD)src + n;
            v13 = maxlen;
            v119 = snprintf((char *)src + n, maxlen, format, v129, &v113);
          }
        }
        else if ( v122 == 7 )
        {
          v181 = *((_QWORD *)v195 + 4 * *((_QWORD *)i + 10) + 2);
          if ( v118 == 1 )
          {
            v14 = (_DWORD)src + n;
            v13 = maxlen;
            v119 = snprintf((char *)src + n, maxlen, format, v134, v181, &v113);
          }
          else if ( v118 )
          {
            if ( v118 != 2 )
              abort();
            v14 = (_DWORD)src + n;
            v13 = maxlen;
            v119 = snprintf((char *)src + n, maxlen, format, v134, v135, v181, &v113);
          }
          else
          {
            v14 = (_DWORD)src + n;
            v13 = maxlen;
            v119 = snprintf((char *)src + n, maxlen, format, v181, &v113);
          }
        }
        else
        {
          v182 = *((_QWORD *)v195 + 4 * *((_QWORD *)i + 10) + 2);
          if ( v118 == 1 )
          {
            v14 = (_DWORD)src + n;
            v13 = maxlen;
            v119 = snprintf((char *)src + n, maxlen, format, v134, v182, &v113);
          }
          else if ( v118 )
          {
            if ( v118 != 2 )
              abort();
            v14 = (_DWORD)src + n;
            v13 = maxlen;
            v119 = snprintf((char *)src + n, maxlen, format, v134, v135, v182, &v113);
          }
          else
          {
            v14 = (_DWORD)src + n;
            v13 = maxlen;
            v119 = snprintf((char *)src + n, maxlen, format, v182, &v113);
          }
        }
      }
      else if ( v122 == 2 )
      {
        v126 = *((unsigned __int8 *)v195 + 32 * *((_QWORD *)i + 10) + 16);
        if ( v118 == 1 )
        {
          v14 = (_DWORD)src + n;
          v13 = maxlen;
          v119 = snprintf((char *)src + n, maxlen, format, v134, v126, &v113);
        }
        else if ( v118 )
        {
          if ( v118 != 2 )
            abort();
          v14 = (_DWORD)src + n;
          v13 = maxlen;
          v119 = snprintf((char *)src + n, maxlen, format, v134, v135, v126, &v113);
        }
        else
        {
          v14 = (_DWORD)src + n;
          v13 = maxlen;
          v119 = snprintf((char *)src + n, maxlen, format, v126, &v113);
        }
      }
      else if ( v122 > 2 )
      {
        v127 = *((__int16 *)v195 + 16 * *((_QWORD *)i + 10) + 8);
        if ( v118 == 1 )
        {
          v14 = (_DWORD)src + n;
          v13 = maxlen;
          v119 = snprintf((char *)src + n, maxlen, format, v134, v127, &v113);
        }
        else if ( v118 )
        {
          if ( v118 != 2 )
            abort();
          v14 = (_DWORD)src + n;
          v13 = maxlen;
          v119 = snprintf((char *)src + n, maxlen, format, v134, v135, v127, &v113);
        }
        else
        {
          v14 = (_DWORD)src + n;
          v13 = maxlen;
          v119 = snprintf((char *)src + n, maxlen, format, v127, &v113);
        }
      }
      else
      {
        if ( v122 != 1 )
          goto LABEL_432;
        v125 = *((char *)v195 + 32 * *((_QWORD *)i + 10) + 16);
        if ( v118 == 1 )
        {
          v14 = (_DWORD)src + n;
          v13 = maxlen;
          v119 = snprintf((char *)src + n, maxlen, format, v134, v125, &v113);
        }
        else if ( v118 )
        {
          if ( v118 != 2 )
            abort();
          v14 = (_DWORD)src + n;
          v13 = maxlen;
          v119 = snprintf((char *)src + n, maxlen, format, v134, v135, v125, &v113);
        }
        else
        {
          v14 = (_DWORD)src + n;
          v13 = maxlen;
          v119 = snprintf((char *)src + n, maxlen, format, v125, &v113);
        }
      }
      if ( v113 >= 0 )
      {
        if ( v113 < maxlen && *((_BYTE *)src + n + v113) )
          abort();
        if ( v119 > v113 )
          v113 = v119;
        goto LABEL_443;
      }
      if ( !*((_BYTE *)v159 + 1) )
        break;
      *((_BYTE *)v159 + 1) = 0;
    }
    if ( v119 >= 0 )
      v113 = v119;
LABEL_443:
    if ( v113 < 0 )
    {
      v133 = *__errno_location();
      if ( src != v111 && src )
        free(src);
      if ( v137 )
        free(v137);
      if ( ptr != v201 )
        free(ptr);
      if ( v195 != v196 )
        free(v195);
      v99 = __errno_location();
      if ( v133 )
      {
        v100 = v133;
      }
      else if ( i[72] == 99 || i[72] == 115 )
      {
        v100 = 84;
      }
      else
      {
        v100 = 22;
      }
      *v99 = v100;
      return 0LL;
    }
    if ( (unsigned int)(v113 + 1) < maxlen )
    {
      n += v113;
      *__errno_location() = v124;
      goto LABEL_487;
    }
    if ( maxlen == 0x7FFFFFFF )
      break;
    if ( (v142 & 0x8000000000000000LL) != 0LL )
      v101 = -1LL;
    else
      v101 = 2 * v142;
    v102 = sub_406075(n, (unsigned int)(v113 + 2));
    v189 = sub_4060F4(v102, v101);
    if ( v189 > v142 )
    {
      if ( v142 )
      {
        if ( (v142 & 0x8000000000000000LL) != 0LL )
          v103 = -1LL;
        else
          v103 = 2 * v142;
      }
      else
      {
        v103 = 12LL;
      }
      v142 = v103;
      if ( v189 > v103 )
        v142 = v189;
      v190 = v142;
      if ( v142 == -1LL )
        goto LABEL_525;
      v162 = src != v111 && src ? realloc(src, v190) : malloc(v190);
      if ( !v162 )
        goto LABEL_525;
      if ( src == v111 && n )
        memcpy(v162, src, n);
      src = v162;
    }
  }
  if ( src != v111 && src )
    free(src);
  if ( v137 )
    free(v137);
  if ( ptr != v201 )
    free(ptr);
  if ( v195 != v196 )
    free(v195);
  *__errno_location() = 75;
  return 0LL;
}
