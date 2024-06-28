#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_405B3C(FILE *a1, const char *a2, const char *a3, const char *a4, __int64 *a5, unsigned __int64 a6)
{
  char *v6; // rax
  char *v7; // rax
  __int64 v8; // rbx
  char *v9; // rax
  __int64 v10; // r12
  __int64 v11; // rbx
  char *v12; // rax
  __int64 v13; // r13
  __int64 v14; // r12
  __int64 v15; // rbx
  char *v16; // rax
  int result; // eax
  __int64 v18; // r14
  __int64 v19; // r13
  __int64 v20; // r12
  __int64 v21; // rbx
  char *v22; // rax
  __int64 v23; // r13
  __int64 v24; // r15
  __int64 v25; // r14
  __int64 v26; // r12
  __int64 v27; // rbx
  char *v28; // rax
  __int64 v29; // r14
  __int64 v30; // r13
  __int64 v31; // r15
  __int64 v32; // r12
  __int64 v33; // rbx
  char *v34; // rax
  __int64 v35; // r15
  __int64 v36; // r14
  __int64 v37; // r13
  __int64 v38; // r12
  __int64 v39; // rbx
  char *v40; // rax
  __int64 v41; // r15
  __int64 v42; // r14
  __int64 v43; // r13
  __int64 v44; // r12
  __int64 v45; // rbx
  char *v46; // rax
  __int64 v47; // r15
  __int64 v48; // r14
  __int64 v49; // r13
  __int64 v50; // r12
  __int64 v51; // rbx
  char *v52; // rax
  __int64 v53; // [rsp+30h] [rbp-80h]
  __int64 v54; // [rsp+38h] [rbp-78h]
  __int64 v55; // [rsp+38h] [rbp-78h]
  __int64 v56; // [rsp+40h] [rbp-70h]
  __int64 v57; // [rsp+40h] [rbp-70h]
  __int64 v58; // [rsp+40h] [rbp-70h]
  __int64 v59; // [rsp+48h] [rbp-68h]
  __int64 v60; // [rsp+48h] [rbp-68h]
  __int64 v61; // [rsp+48h] [rbp-68h]
  __int64 v62; // [rsp+48h] [rbp-68h]

  if ( a2 )
    fprintf(a1, "%s (%s) %s\n", a2, a3, a4);
  else
    fprintf(a1, "%s %s\n", a3, a4);
  v6 = gettext("(C)");
  fprintf(a1, "Copyright %s %d Free Software Foundation, Inc.", v6, 2011LL);
  v7 = gettext(
         "\n"
         "License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>.\n"
         "This is free software: you are free to change and redistribute it.\n"
         "There is NO WARRANTY, to the extent permitted by law.\n"
         "\n");
  fputs_unlocked(v7, a1);
  if ( a6 == 4 )
  {
    v18 = a5[3];
    v19 = a5[2];
    v20 = a5[1];
    v21 = *a5;
    v22 = gettext("Written by %s, %s, %s,\nand %s.\n");
    result = fprintf(a1, v22, v21, v20, v19, v18);
  }
  else if ( a6 > 4 )
  {
    if ( a6 == 7 )
    {
      v35 = a5[6];
      v36 = a5[5];
      v37 = a5[4];
      v60 = a5[3];
      v56 = a5[2];
      v38 = a5[1];
      v39 = *a5;
      v40 = gettext("Written by %s, %s, %s,\n%s, %s, %s, and %s.\n");
      result = fprintf(a1, v40, v39, v38, v56, v60, v37, v36, v35);
    }
    else if ( a6 > 7 )
    {
      if ( a6 == 8 )
      {
        v61 = a5[7];
        v41 = a5[6];
        v42 = a5[5];
        v43 = a5[4];
        v57 = a5[3];
        v54 = a5[2];
        v44 = a5[1];
        v45 = *a5;
        v46 = gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n");
        result = fprintf(a1, v46, v45, v44, v54, v57, v43, v42, v41, v61);
      }
      else
      {
        v62 = a5[8];
        v58 = a5[7];
        v47 = a5[6];
        v48 = a5[5];
        v49 = a5[4];
        v55 = a5[3];
        v53 = a5[2];
        v50 = a5[1];
        v51 = *a5;
        if ( a6 == 9 )
          v52 = gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n");
        else
          v52 = gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n");
        result = fprintf(a1, v52, v51, v50, v53, v55, v49, v48, v47, v58, v62);
      }
    }
    else if ( a6 == 5 )
    {
      v23 = a5[4];
      v24 = a5[3];
      v25 = a5[2];
      v26 = a5[1];
      v27 = *a5;
      v28 = gettext("Written by %s, %s, %s,\n%s, and %s.\n");
      result = fprintf(a1, v28, v27, v26, v25, v24, v23);
    }
    else
    {
      v29 = a5[5];
      v30 = a5[4];
      v59 = a5[3];
      v31 = a5[2];
      v32 = a5[1];
      v33 = *a5;
      v34 = gettext("Written by %s, %s, %s,\n%s, %s, and %s.\n");
      result = fprintf(a1, v34, v33, v32, v31, v59, v30, v29);
    }
  }
  else
  {
    switch ( a6 )
    {
      case 1uLL:
        v8 = *a5;
        v9 = gettext("Written by %s.\n");
        result = fprintf(a1, v9, v8);
        break;
      case 0uLL:
        abort();
      case 2uLL:
        v10 = a5[1];
        v11 = *a5;
        v12 = gettext("Written by %s and %s.\n");
        result = fprintf(a1, v12, v11, v10);
        break;
      default:
        v13 = a5[2];
        v14 = a5[1];
        v15 = *a5;
        v16 = gettext("Written by %s, %s, and %s.\n");
        result = fprintf(a1, v16, v15, v14, v13);
        break;
    }
  }
  return result;
}
