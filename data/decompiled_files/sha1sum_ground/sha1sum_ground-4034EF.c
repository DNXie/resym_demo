#include "/share/binary_recovery/clang-parser/defs.hh"
_DWORD *__fastcall sub_4034EF(_DWORD *a1, unsigned __int64 a2, int *a3)
{
  _DWORD *result; // rax
  int v4; // [rsp+24h] [rbp-74h]
  int v5; // [rsp+24h] [rbp-74h]
  int v6; // [rsp+24h] [rbp-74h]
  int v7; // [rsp+24h] [rbp-74h]
  int v8; // [rsp+24h] [rbp-74h]
  int v9; // [rsp+24h] [rbp-74h]
  int v10; // [rsp+24h] [rbp-74h]
  int v11; // [rsp+24h] [rbp-74h]
  int v12; // [rsp+24h] [rbp-74h]
  int v13; // [rsp+24h] [rbp-74h]
  int v14; // [rsp+24h] [rbp-74h]
  int v15; // [rsp+24h] [rbp-74h]
  int v16; // [rsp+24h] [rbp-74h]
  int v17; // [rsp+24h] [rbp-74h]
  int v18; // [rsp+24h] [rbp-74h]
  int v19; // [rsp+24h] [rbp-74h]
  int v20; // [rsp+24h] [rbp-74h]
  int v21; // [rsp+24h] [rbp-74h]
  int v22; // [rsp+24h] [rbp-74h]
  int v23; // [rsp+24h] [rbp-74h]
  int v24; // [rsp+24h] [rbp-74h]
  int v25; // [rsp+24h] [rbp-74h]
  int v26; // [rsp+24h] [rbp-74h]
  int v27; // [rsp+24h] [rbp-74h]
  int v28; // [rsp+24h] [rbp-74h]
  int v29; // [rsp+24h] [rbp-74h]
  int v30; // [rsp+24h] [rbp-74h]
  int v31; // [rsp+24h] [rbp-74h]
  int v32; // [rsp+24h] [rbp-74h]
  int v33; // [rsp+24h] [rbp-74h]
  int v34; // [rsp+24h] [rbp-74h]
  int v35; // [rsp+24h] [rbp-74h]
  int v36; // [rsp+28h] [rbp-70h]
  int v37; // [rsp+28h] [rbp-70h]
  int v38; // [rsp+28h] [rbp-70h]
  int v39; // [rsp+28h] [rbp-70h]
  int v40; // [rsp+28h] [rbp-70h]
  int v41; // [rsp+28h] [rbp-70h]
  int v42; // [rsp+28h] [rbp-70h]
  int v43; // [rsp+28h] [rbp-70h]
  int v44; // [rsp+28h] [rbp-70h]
  int v45; // [rsp+28h] [rbp-70h]
  int v46; // [rsp+28h] [rbp-70h]
  int v47; // [rsp+28h] [rbp-70h]
  int v48; // [rsp+28h] [rbp-70h]
  int v49; // [rsp+28h] [rbp-70h]
  int v50; // [rsp+28h] [rbp-70h]
  int v51; // [rsp+28h] [rbp-70h]
  int v52; // [rsp+28h] [rbp-70h]
  int v53; // [rsp+28h] [rbp-70h]
  int v54; // [rsp+28h] [rbp-70h]
  int v55; // [rsp+28h] [rbp-70h]
  int v56; // [rsp+28h] [rbp-70h]
  int v57; // [rsp+28h] [rbp-70h]
  int v58; // [rsp+28h] [rbp-70h]
  int v59; // [rsp+28h] [rbp-70h]
  int v60; // [rsp+28h] [rbp-70h]
  int v61; // [rsp+28h] [rbp-70h]
  int v62; // [rsp+28h] [rbp-70h]
  int v63; // [rsp+28h] [rbp-70h]
  int v64; // [rsp+28h] [rbp-70h]
  int v65; // [rsp+28h] [rbp-70h]
  int v66; // [rsp+28h] [rbp-70h]
  int v67; // [rsp+28h] [rbp-70h]
  int v68; // [rsp+28h] [rbp-70h]
  int v69; // [rsp+2Ch] [rbp-6Ch]
  int v70; // [rsp+2Ch] [rbp-6Ch]
  int v71; // [rsp+2Ch] [rbp-6Ch]
  int v72; // [rsp+2Ch] [rbp-6Ch]
  int v73; // [rsp+2Ch] [rbp-6Ch]
  int v74; // [rsp+2Ch] [rbp-6Ch]
  int v75; // [rsp+2Ch] [rbp-6Ch]
  int v76; // [rsp+2Ch] [rbp-6Ch]
  int v77; // [rsp+2Ch] [rbp-6Ch]
  int v78; // [rsp+2Ch] [rbp-6Ch]
  int v79; // [rsp+2Ch] [rbp-6Ch]
  int v80; // [rsp+2Ch] [rbp-6Ch]
  int v81; // [rsp+2Ch] [rbp-6Ch]
  int v82; // [rsp+2Ch] [rbp-6Ch]
  int v83; // [rsp+2Ch] [rbp-6Ch]
  int v84; // [rsp+2Ch] [rbp-6Ch]
  int v85; // [rsp+2Ch] [rbp-6Ch]
  int v86; // [rsp+2Ch] [rbp-6Ch]
  int v87; // [rsp+2Ch] [rbp-6Ch]
  int v88; // [rsp+2Ch] [rbp-6Ch]
  int v89; // [rsp+2Ch] [rbp-6Ch]
  int v90; // [rsp+2Ch] [rbp-6Ch]
  int v91; // [rsp+2Ch] [rbp-6Ch]
  int v92; // [rsp+2Ch] [rbp-6Ch]
  int v93; // [rsp+2Ch] [rbp-6Ch]
  int v94; // [rsp+2Ch] [rbp-6Ch]
  int v95; // [rsp+2Ch] [rbp-6Ch]
  int v96; // [rsp+2Ch] [rbp-6Ch]
  int v97; // [rsp+2Ch] [rbp-6Ch]
  int v98; // [rsp+2Ch] [rbp-6Ch]
  int v99; // [rsp+2Ch] [rbp-6Ch]
  int v100; // [rsp+2Ch] [rbp-6Ch]
  int v101; // [rsp+30h] [rbp-68h]
  int v102; // [rsp+30h] [rbp-68h]
  int v103; // [rsp+30h] [rbp-68h]
  int v104; // [rsp+30h] [rbp-68h]
  int v105; // [rsp+30h] [rbp-68h]
  int v106; // [rsp+30h] [rbp-68h]
  int v107; // [rsp+30h] [rbp-68h]
  int v108; // [rsp+30h] [rbp-68h]
  int v109; // [rsp+30h] [rbp-68h]
  int v110; // [rsp+30h] [rbp-68h]
  int v111; // [rsp+30h] [rbp-68h]
  int v112; // [rsp+30h] [rbp-68h]
  int v113; // [rsp+30h] [rbp-68h]
  int v114; // [rsp+30h] [rbp-68h]
  int v115; // [rsp+30h] [rbp-68h]
  int v116; // [rsp+30h] [rbp-68h]
  int v117; // [rsp+30h] [rbp-68h]
  int v118; // [rsp+30h] [rbp-68h]
  int v119; // [rsp+30h] [rbp-68h]
  int v120; // [rsp+30h] [rbp-68h]
  int v121; // [rsp+30h] [rbp-68h]
  int v122; // [rsp+30h] [rbp-68h]
  int v123; // [rsp+30h] [rbp-68h]
  int v124; // [rsp+30h] [rbp-68h]
  int v125; // [rsp+30h] [rbp-68h]
  int v126; // [rsp+30h] [rbp-68h]
  int v127; // [rsp+30h] [rbp-68h]
  int v128; // [rsp+30h] [rbp-68h]
  int v129; // [rsp+30h] [rbp-68h]
  int v130; // [rsp+30h] [rbp-68h]
  int v131; // [rsp+30h] [rbp-68h]
  int v132; // [rsp+30h] [rbp-68h]
  int v133; // [rsp+30h] [rbp-68h]
  int v134; // [rsp+34h] [rbp-64h]
  int v135; // [rsp+34h] [rbp-64h]
  int v136; // [rsp+34h] [rbp-64h]
  int v137; // [rsp+34h] [rbp-64h]
  int v138; // [rsp+34h] [rbp-64h]
  int v139; // [rsp+34h] [rbp-64h]
  int v140; // [rsp+34h] [rbp-64h]
  int v141; // [rsp+34h] [rbp-64h]
  int v142; // [rsp+34h] [rbp-64h]
  int v143; // [rsp+34h] [rbp-64h]
  int v144; // [rsp+34h] [rbp-64h]
  int v145; // [rsp+34h] [rbp-64h]
  int v146; // [rsp+34h] [rbp-64h]
  int v147; // [rsp+34h] [rbp-64h]
  int v148; // [rsp+34h] [rbp-64h]
  int v149; // [rsp+34h] [rbp-64h]
  int v150; // [rsp+34h] [rbp-64h]
  int v151; // [rsp+34h] [rbp-64h]
  int v152; // [rsp+34h] [rbp-64h]
  int v153; // [rsp+34h] [rbp-64h]
  int v154; // [rsp+34h] [rbp-64h]
  int v155; // [rsp+34h] [rbp-64h]
  int v156; // [rsp+34h] [rbp-64h]
  int v157; // [rsp+34h] [rbp-64h]
  int v158; // [rsp+34h] [rbp-64h]
  int v159; // [rsp+34h] [rbp-64h]
  int v160; // [rsp+34h] [rbp-64h]
  int v161; // [rsp+34h] [rbp-64h]
  int v162; // [rsp+34h] [rbp-64h]
  int v163; // [rsp+34h] [rbp-64h]
  int v164; // [rsp+34h] [rbp-64h]
  int v165; // [rsp+34h] [rbp-64h]
  int v166; // [rsp+34h] [rbp-64h]
  int i; // [rsp+38h] [rbp-60h]
  _DWORD *v168; // [rsp+40h] [rbp-58h]
  int v169; // [rsp+58h] [rbp-40h]
  int v170; // [rsp+5Ch] [rbp-3Ch]
  int v171; // [rsp+60h] [rbp-38h]
  int v172; // [rsp+64h] [rbp-34h]
  int v173; // [rsp+68h] [rbp-30h]
  int v174; // [rsp+6Ch] [rbp-2Ch]
  int v175; // [rsp+70h] [rbp-28h]
  int v176; // [rsp+74h] [rbp-24h]
  int v177; // [rsp+78h] [rbp-20h]
  int v178; // [rsp+7Ch] [rbp-1Ch]
  int v179; // [rsp+80h] [rbp-18h]
  int v180; // [rsp+84h] [rbp-14h]
  int v181; // [rsp+88h] [rbp-10h]
  int v182; // [rsp+8Ch] [rbp-Ch]
  int v183; // [rsp+90h] [rbp-8h]
  int v184; // [rsp+94h] [rbp-4h]

  v168 = a1;
  v4 = *a3;
  v36 = a3[1];
  v69 = a3[2];
  v101 = a3[3];
  v134 = a3[4];
  a3[5] += a2;
  if ( (unsigned int)a3[5] < a2 )
    ++a3[6];
  while ( 1 )
  {
    result = v168;
    if ( v168 >= &a1[a2 >> 2] )
      break;
    for ( i = 0; i <= 15; ++i )
    {
      *(&v169 + i) = HIBYTE(*v168) | (*v168 >> 8) & 0xFF00 | ((*v168 & 0xFF00) << 8) | (*v168 << 24);
      ++v168;
    }
    v135 = v169 + __ROR4__(v4, 27) + (v101 ^ v36 & (v69 ^ v101)) + v134 + 1518500249;
    v37 = __ROR4__(v36, 2);
    v102 = v170 + __ROR4__(v135, 27) + (v69 ^ v4 & (v37 ^ v69)) + v101 + 1518500249;
    v5 = __ROR4__(v4, 2);
    v70 = v171 + __ROR4__(v102, 27) + (v37 ^ v135 & (v5 ^ v37)) + v69 + 1518500249;
    v136 = __ROR4__(v135, 2);
    v38 = v172 + __ROR4__(v70, 27) + (v5 ^ v102 & (v136 ^ v5)) + v37 + 1518500249;
    v103 = __ROR4__(v102, 2);
    v6 = v173 + __ROR4__(v38, 27) + (v136 ^ v70 & (v103 ^ v136)) + v5 + 1518500249;
    v71 = __ROR4__(v70, 2);
    v137 = v174 + __ROR4__(v6, 27) + (v103 ^ v38 & (v71 ^ v103)) + v136 + 1518500249;
    v39 = __ROR4__(v38, 2);
    v104 = v175 + __ROR4__(v137, 27) + (v71 ^ v6 & (v39 ^ v71)) + v103 + 1518500249;
    v7 = __ROR4__(v6, 2);
    v72 = v176 + __ROR4__(v104, 27) + (v39 ^ v137 & (v7 ^ v39)) + v71 + 1518500249;
    v138 = __ROR4__(v137, 2);
    v40 = v177 + __ROR4__(v72, 27) + (v7 ^ v104 & (v138 ^ v7)) + v39 + 1518500249;
    v105 = __ROR4__(v104, 2);
    v8 = v178 + __ROR4__(v40, 27) + (v138 ^ v72 & (v105 ^ v138)) + v7 + 1518500249;
    v73 = __ROR4__(v72, 2);
    v139 = v179 + __ROR4__(v8, 27) + (v105 ^ v40 & (v73 ^ v105)) + v138 + 1518500249;
    v41 = __ROR4__(v40, 2);
    v106 = v180 + __ROR4__(v139, 27) + (v73 ^ v8 & (v41 ^ v73)) + v105 + 1518500249;
    v9 = __ROR4__(v8, 2);
    v74 = v181 + __ROR4__(v106, 27) + (v41 ^ v139 & (v9 ^ v41)) + v73 + 1518500249;
    v140 = __ROR4__(v139, 2);
    v42 = v182 + __ROR4__(v74, 27) + (v9 ^ v106 & (v140 ^ v9)) + v41 + 1518500249;
    v107 = __ROR4__(v106, 2);
    v10 = v183 + __ROR4__(v42, 27) + (v140 ^ v74 & (v107 ^ v140)) + v9 + 1518500249;
    v75 = __ROR4__(v74, 2);
    v141 = v184 + __ROR4__(v10, 27) + (v107 ^ v42 & (v75 ^ v107)) + v140 + 1518500249;
    v43 = __ROR4__(v42, 2);
    v169 = __ROR4__(v177 ^ v171 ^ v169 ^ v182, 31);
    v108 = v169 + __ROR4__(v141, 27) + (v75 ^ v10 & (v43 ^ v75)) + v107 + 1518500249;
    v11 = __ROR4__(v10, 2);
    v170 = __ROR4__(v178 ^ v172 ^ v170 ^ v183, 31);
    v76 = v170 + __ROR4__(v108, 27) + (v43 ^ v141 & (v11 ^ v43)) + v75 + 1518500249;
    v142 = __ROR4__(v141, 2);
    v171 = __ROR4__(v179 ^ v173 ^ v171 ^ v184, 31);
    v44 = v171 + __ROR4__(v76, 27) + (v11 ^ v108 & (v142 ^ v11)) + v43 + 1518500249;
    v109 = __ROR4__(v108, 2);
    v172 = __ROR4__(v180 ^ v174 ^ v172 ^ v169, 31);
    v12 = v172 + __ROR4__(v44, 27) + (v142 ^ v76 & (v109 ^ v142)) + v11 + 1518500249;
    v77 = __ROR4__(v76, 2);
    v173 = __ROR4__(v181 ^ v175 ^ v173 ^ v170, 31);
    v143 = v173 + __ROR4__(v12, 27) + (v109 ^ v44 ^ v77) + v142 + 1859775393;
    v45 = __ROR4__(v44, 2);
    v174 = __ROR4__(v182 ^ v176 ^ v174 ^ v171, 31);
    v110 = v174 + __ROR4__(v143, 27) + (v77 ^ v12 ^ v45) + v109 + 1859775393;
    v13 = __ROR4__(v12, 2);
    v175 = __ROR4__(v183 ^ v177 ^ v175 ^ v172, 31);
    v78 = v175 + __ROR4__(v110, 27) + (v45 ^ v143 ^ v13) + v77 + 1859775393;
    v144 = __ROR4__(v143, 2);
    v176 = __ROR4__(v184 ^ v178 ^ v176 ^ v173, 31);
    v46 = v176 + __ROR4__(v78, 27) + (v13 ^ v110 ^ v144) + v45 + 1859775393;
    v111 = __ROR4__(v110, 2);
    v177 = __ROR4__(v169 ^ v179 ^ v177 ^ v174, 31);
    v14 = v177 + __ROR4__(v46, 27) + (v144 ^ v78 ^ v111) + v13 + 1859775393;
    v79 = __ROR4__(v78, 2);
    v178 = __ROR4__(v170 ^ v180 ^ v178 ^ v175, 31);
    v145 = v178 + __ROR4__(v14, 27) + (v111 ^ v46 ^ v79) + v144 + 1859775393;
    v47 = __ROR4__(v46, 2);
    v179 = __ROR4__(v171 ^ v181 ^ v179 ^ v176, 31);
    v112 = v179 + __ROR4__(v145, 27) + (v79 ^ v14 ^ v47) + v111 + 1859775393;
    v15 = __ROR4__(v14, 2);
    v180 = __ROR4__(v172 ^ v182 ^ v180 ^ v177, 31);
    v80 = v180 + __ROR4__(v112, 27) + (v47 ^ v145 ^ v15) + v79 + 1859775393;
    v146 = __ROR4__(v145, 2);
    v181 = __ROR4__(v173 ^ v183 ^ v181 ^ v178, 31);
    v48 = v181 + __ROR4__(v80, 27) + (v15 ^ v112 ^ v146) + v47 + 1859775393;
    v113 = __ROR4__(v112, 2);
    v182 = __ROR4__(v174 ^ v184 ^ v182 ^ v179, 31);
    v16 = v182 + __ROR4__(v48, 27) + (v146 ^ v80 ^ v113) + v15 + 1859775393;
    v81 = __ROR4__(v80, 2);
    v183 = __ROR4__(v175 ^ v169 ^ v183 ^ v180, 31);
    v147 = v183 + __ROR4__(v16, 27) + (v113 ^ v48 ^ v81) + v146 + 1859775393;
    v49 = __ROR4__(v48, 2);
    v184 = __ROR4__(v176 ^ v170 ^ v184 ^ v181, 31);
    v114 = v184 + __ROR4__(v147, 27) + (v81 ^ v16 ^ v49) + v113 + 1859775393;
    v17 = __ROR4__(v16, 2);
    v169 = __ROR4__(v177 ^ v171 ^ v169 ^ v182, 31);
    v82 = v169 + __ROR4__(v114, 27) + (v49 ^ v147 ^ v17) + v81 + 1859775393;
    v148 = __ROR4__(v147, 2);
    v170 = __ROR4__(v178 ^ v172 ^ v170 ^ v183, 31);
    v50 = v170 + __ROR4__(v82, 27) + (v17 ^ v114 ^ v148) + v49 + 1859775393;
    v115 = __ROR4__(v114, 2);
    v171 = __ROR4__(v179 ^ v173 ^ v171 ^ v184, 31);
    v18 = v171 + __ROR4__(v50, 27) + (v148 ^ v82 ^ v115) + v17 + 1859775393;
    v83 = __ROR4__(v82, 2);
    v172 = __ROR4__(v180 ^ v174 ^ v172 ^ v169, 31);
    v149 = v172 + __ROR4__(v18, 27) + (v115 ^ v50 ^ v83) + v148 + 1859775393;
    v51 = __ROR4__(v50, 2);
    v173 = __ROR4__(v181 ^ v175 ^ v173 ^ v170, 31);
    v116 = v173 + __ROR4__(v149, 27) + (v83 ^ v18 ^ v51) + v115 + 1859775393;
    v19 = __ROR4__(v18, 2);
    v174 = __ROR4__(v182 ^ v176 ^ v174 ^ v171, 31);
    v84 = v174 + __ROR4__(v116, 27) + (v51 ^ v149 ^ v19) + v83 + 1859775393;
    v150 = __ROR4__(v149, 2);
    v175 = __ROR4__(v183 ^ v177 ^ v175 ^ v172, 31);
    v52 = v175 + __ROR4__(v84, 27) + (v19 ^ v116 ^ v150) + v51 + 1859775393;
    v117 = __ROR4__(v116, 2);
    v176 = __ROR4__(v184 ^ v178 ^ v176 ^ v173, 31);
    v20 = v176 + __ROR4__(v52, 27) + (v150 ^ v84 ^ v117) + v19 + 1859775393;
    v85 = __ROR4__(v84, 2);
    v177 = __ROR4__(v169 ^ v179 ^ v177 ^ v174, 31);
    v151 = v177 + __ROR4__(v20, 27) + (v85 & v52 | v117 & (v52 | v85)) + v150 - 1894007588;
    v53 = __ROR4__(v52, 2);
    v178 = __ROR4__(v170 ^ v180 ^ v178 ^ v175, 31);
    v118 = v178 + __ROR4__(v151, 27) + (v53 & v20 | v85 & (v20 | v53)) + v117 - 1894007588;
    v21 = __ROR4__(v20, 2);
    v179 = __ROR4__(v171 ^ v181 ^ v179 ^ v176, 31);
    v86 = v179 + __ROR4__(v118, 27) + (v21 & v151 | v53 & (v151 | v21)) + v85 - 1894007588;
    v152 = __ROR4__(v151, 2);
    v180 = __ROR4__(v172 ^ v182 ^ v180 ^ v177, 31);
    v54 = v180 + __ROR4__(v86, 27) + (v152 & v118 | v21 & (v118 | v152)) + v53 - 1894007588;
    v119 = __ROR4__(v118, 2);
    v181 = __ROR4__(v173 ^ v183 ^ v181 ^ v178, 31);
    v22 = v181 + __ROR4__(v54, 27) + (v119 & v86 | v152 & (v86 | v119)) + v21 - 1894007588;
    v87 = __ROR4__(v86, 2);
    v182 = __ROR4__(v174 ^ v184 ^ v182 ^ v179, 31);
    v153 = v182 + __ROR4__(v22, 27) + (v87 & v54 | v119 & (v54 | v87)) + v152 - 1894007588;
    v55 = __ROR4__(v54, 2);
    v183 = __ROR4__(v175 ^ v169 ^ v183 ^ v180, 31);
    v120 = v183 + __ROR4__(v153, 27) + (v55 & v22 | v87 & (v22 | v55)) + v119 - 1894007588;
    v23 = __ROR4__(v22, 2);
    v184 = __ROR4__(v176 ^ v170 ^ v184 ^ v181, 31);
    v88 = v184 + __ROR4__(v120, 27) + (v23 & v153 | v55 & (v153 | v23)) + v87 - 1894007588;
    v154 = __ROR4__(v153, 2);
    v169 = __ROR4__(v177 ^ v171 ^ v169 ^ v182, 31);
    v56 = v169 + __ROR4__(v88, 27) + (v154 & v120 | v23 & (v120 | v154)) + v55 - 1894007588;
    v121 = __ROR4__(v120, 2);
    v170 = __ROR4__(v178 ^ v172 ^ v170 ^ v183, 31);
    v24 = v170 + __ROR4__(v56, 27) + (v121 & v88 | v154 & (v88 | v121)) + v23 - 1894007588;
    v89 = __ROR4__(v88, 2);
    v171 = __ROR4__(v179 ^ v173 ^ v171 ^ v184, 31);
    v155 = v171 + __ROR4__(v24, 27) + (v89 & v56 | v121 & (v56 | v89)) + v154 - 1894007588;
    v57 = __ROR4__(v56, 2);
    v172 = __ROR4__(v180 ^ v174 ^ v172 ^ v169, 31);
    v122 = v172 + __ROR4__(v155, 27) + (v57 & v24 | v89 & (v24 | v57)) + v121 - 1894007588;
    v25 = __ROR4__(v24, 2);
    v173 = __ROR4__(v181 ^ v175 ^ v173 ^ v170, 31);
    v90 = v173 + __ROR4__(v122, 27) + (v25 & v155 | v57 & (v155 | v25)) + v89 - 1894007588;
    v156 = __ROR4__(v155, 2);
    v174 = __ROR4__(v182 ^ v176 ^ v174 ^ v171, 31);
    v58 = v174 + __ROR4__(v90, 27) + (v156 & v122 | v25 & (v122 | v156)) + v57 - 1894007588;
    v123 = __ROR4__(v122, 2);
    v175 = __ROR4__(v183 ^ v177 ^ v175 ^ v172, 31);
    v26 = v175 + __ROR4__(v58, 27) + (v123 & v90 | v156 & (v90 | v123)) + v25 - 1894007588;
    v91 = __ROR4__(v90, 2);
    v176 = __ROR4__(v184 ^ v178 ^ v176 ^ v173, 31);
    v157 = v176 + __ROR4__(v26, 27) + (v91 & v58 | v123 & (v58 | v91)) + v156 - 1894007588;
    v59 = __ROR4__(v58, 2);
    v177 = __ROR4__(v169 ^ v179 ^ v177 ^ v174, 31);
    v124 = v177 + __ROR4__(v157, 27) + (v59 & v26 | v91 & (v26 | v59)) + v123 - 1894007588;
    v27 = __ROR4__(v26, 2);
    v178 = __ROR4__(v170 ^ v180 ^ v178 ^ v175, 31);
    v92 = v178 + __ROR4__(v124, 27) + (v27 & v157 | v59 & (v157 | v27)) + v91 - 1894007588;
    v158 = __ROR4__(v157, 2);
    v179 = __ROR4__(v171 ^ v181 ^ v179 ^ v176, 31);
    v60 = v179 + __ROR4__(v92, 27) + (v158 & v124 | v27 & (v124 | v158)) + v59 - 1894007588;
    v125 = __ROR4__(v124, 2);
    v180 = __ROR4__(v172 ^ v182 ^ v180 ^ v177, 31);
    v28 = v180 + __ROR4__(v60, 27) + (v125 & v92 | v158 & (v92 | v125)) + v27 - 1894007588;
    v93 = __ROR4__(v92, 2);
    v181 = __ROR4__(v173 ^ v183 ^ v181 ^ v178, 31);
    v159 = v181 + __ROR4__(v28, 27) + (v125 ^ v60 ^ v93) + v158 - 899497514;
    v61 = __ROR4__(v60, 2);
    v182 = __ROR4__(v174 ^ v184 ^ v182 ^ v179, 31);
    v126 = v182 + __ROR4__(v159, 27) + (v93 ^ v28 ^ v61) + v125 - 899497514;
    v29 = __ROR4__(v28, 2);
    v183 = __ROR4__(v175 ^ v169 ^ v183 ^ v180, 31);
    v94 = v183 + __ROR4__(v126, 27) + (v61 ^ v159 ^ v29) + v93 - 899497514;
    v160 = __ROR4__(v159, 2);
    v184 = __ROR4__(v176 ^ v170 ^ v184 ^ v181, 31);
    v62 = v184 + __ROR4__(v94, 27) + (v29 ^ v126 ^ v160) + v61 - 899497514;
    v127 = __ROR4__(v126, 2);
    v169 = __ROR4__(v177 ^ v171 ^ v169 ^ v182, 31);
    v30 = v169 + __ROR4__(v62, 27) + (v160 ^ v94 ^ v127) + v29 - 899497514;
    v95 = __ROR4__(v94, 2);
    v170 = __ROR4__(v178 ^ v172 ^ v170 ^ v183, 31);
    v161 = v170 + __ROR4__(v30, 27) + (v127 ^ v62 ^ v95) + v160 - 899497514;
    v63 = __ROR4__(v62, 2);
    v171 = __ROR4__(v179 ^ v173 ^ v171 ^ v184, 31);
    v128 = v171 + __ROR4__(v161, 27) + (v95 ^ v30 ^ v63) + v127 - 899497514;
    v31 = __ROR4__(v30, 2);
    v172 = __ROR4__(v180 ^ v174 ^ v172 ^ v169, 31);
    v96 = v172 + __ROR4__(v128, 27) + (v63 ^ v161 ^ v31) + v95 - 899497514;
    v162 = __ROR4__(v161, 2);
    v173 = __ROR4__(v181 ^ v175 ^ v173 ^ v170, 31);
    v64 = v173 + __ROR4__(v96, 27) + (v31 ^ v128 ^ v162) + v63 - 899497514;
    v129 = __ROR4__(v128, 2);
    v174 = __ROR4__(v182 ^ v176 ^ v174 ^ v171, 31);
    v32 = v174 + __ROR4__(v64, 27) + (v162 ^ v96 ^ v129) + v31 - 899497514;
    v97 = __ROR4__(v96, 2);
    v175 = __ROR4__(v183 ^ v177 ^ v175 ^ v172, 31);
    v163 = v175 + __ROR4__(v32, 27) + (v129 ^ v64 ^ v97) + v162 - 899497514;
    v65 = __ROR4__(v64, 2);
    v176 = __ROR4__(v184 ^ v178 ^ v176 ^ v173, 31);
    v130 = v176 + __ROR4__(v163, 27) + (v97 ^ v32 ^ v65) + v129 - 899497514;
    v33 = __ROR4__(v32, 2);
    v177 = __ROR4__(v169 ^ v179 ^ v177 ^ v174, 31);
    v98 = v177 + __ROR4__(v130, 27) + (v65 ^ v163 ^ v33) + v97 - 899497514;
    v164 = __ROR4__(v163, 2);
    v178 = __ROR4__(v170 ^ v180 ^ v178 ^ v175, 31);
    v66 = v178 + __ROR4__(v98, 27) + (v33 ^ v130 ^ v164) + v65 - 899497514;
    v131 = __ROR4__(v130, 2);
    v179 = __ROR4__(v171 ^ v181 ^ v179 ^ v176, 31);
    v34 = v179 + __ROR4__(v66, 27) + (v164 ^ v98 ^ v131) + v33 - 899497514;
    v99 = __ROR4__(v98, 2);
    v180 = __ROR4__(v172 ^ v182 ^ v180 ^ v177, 31);
    v165 = v180 + __ROR4__(v34, 27) + (v131 ^ v66 ^ v99) + v164 - 899497514;
    v67 = __ROR4__(v66, 2);
    v181 = __ROR4__(v173 ^ v183 ^ v181 ^ v178, 31);
    v132 = v181 + __ROR4__(v165, 27) + (v99 ^ v34 ^ v67) + v131 - 899497514;
    v35 = __ROR4__(v34, 2);
    v182 = __ROR4__(v174 ^ v184 ^ v182 ^ v179, 31);
    v100 = v182 + __ROR4__(v132, 27) + (v67 ^ v165 ^ v35) + v99 - 899497514;
    v166 = __ROR4__(v165, 2);
    v183 = __ROR4__(v175 ^ v169 ^ v183 ^ v180, 31);
    v68 = v183 + __ROR4__(v100, 27) + (v35 ^ v132 ^ v166) + v67 - 899497514;
    v133 = __ROR4__(v132, 2);
    v184 = __ROR4__(v176 ^ v170 ^ v184 ^ v181, 31);
    *a3 += v184 + __ROR4__(v68, 27) + (v166 ^ v100 ^ v133) + v35 - 899497514;
    v4 = *a3;
    a3[1] += v68;
    v36 = a3[1];
    a3[2] += __ROR4__(v100, 2);
    v69 = a3[2];
    a3[3] += v133;
    v101 = a3[3];
    a3[4] += v166;
    v134 = a3[4];
  }
  return result;
}