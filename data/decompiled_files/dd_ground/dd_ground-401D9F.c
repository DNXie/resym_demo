#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401D9F(int a1)
{
  __int64 v1; // rbx
  char *v2; // rax
  __int64 v3; // r12
  __int64 v4; // rbx
  char *v5; // rax
  FILE *v6; // rbx
  char *v7; // rax
  FILE *v8; // rbx
  char *v9; // rax
  FILE *v10; // rbx
  char *v11; // rax
  FILE *v12; // rbx
  char *v13; // rax
  FILE *v14; // rbx
  char *v15; // rax
  FILE *v16; // rbx
  char *v17; // rax
  FILE *v18; // rbx
  char *v19; // rax
  FILE *v20; // rbx
  char *v21; // rax
  FILE *v22; // rbx
  char *v23; // rax
  FILE *v24; // rbx
  char *v25; // rax
  FILE *v26; // rbx
  char *v27; // rax
  FILE *v28; // rbx
  char *v29; // rax
  FILE *v30; // rbx
  char *v31; // rax
  FILE *v32; // rbx
  char *v33; // rax
  FILE *v34; // rbx
  char *v35; // rax
  FILE *v36; // rbx
  char *v37; // rax
  char *v38; // rax
  FILE *v39; // rbx
  char *v40; // rax
  FILE *v41; // rbx
  char *v42; // rax

  if ( a1 )
  {
    v1 = qword_60E890;
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = qword_60E890;
    v4 = qword_60E890;
    v5 = gettext("Usage: %s [OPERAND]...\n  or:  %s OPTION\n");
    printf(v5, v4, v3);
    v6 = stdout;
    v7 = gettext(
           "Copy a file, converting and formatting according to the operands.\n"
           "\n"
           "  bs=BYTES        read and write up to BYTES bytes at a time\n"
           "  cbs=BYTES       convert BYTES bytes at a time\n"
           "  conv=CONVS      convert the file as per the comma separated symbol list\n"
           "  count=BLOCKS    copy only BLOCKS input blocks\n"
           "  ibs=BYTES       read up to BYTES bytes at a time (default: 512)\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext(
           "  if=FILE         read from FILE instead of stdin\n"
           "  iflag=FLAGS     read as per the comma separated symbol list\n"
           "  obs=BYTES       write BYTES bytes at a time (default: 512)\n"
           "  of=FILE         write to FILE instead of stdout\n"
           "  oflag=FLAGS     write as per the comma separated symbol list\n"
           "  seek=BLOCKS     skip BLOCKS obs-sized blocks at start of output\n"
           "  skip=BLOCKS     skip BLOCKS ibs-sized blocks at start of input\n"
           "  status=noxfer   suppress transfer statistics\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext(
            "\n"
            "BLOCKS and BYTES may be followed by the following multiplicative suffixes:\n"
            "c =1, w =2, b =512, kB =1000, K =1024, MB =1000*1000, M =1024*1024, xM =M\n"
            "GB =1000*1000*1000, G =1024*1024*1024, and so on for T, P, E, Z, Y.\n"
            "\n"
            "Each CONV symbol may be:\n"
            "\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext(
            "  ascii     from EBCDIC to ASCII\n"
            "  ebcdic    from ASCII to EBCDIC\n"
            "  ibm       from ASCII to alternate EBCDIC\n"
            "  block     pad newline-terminated records with spaces to cbs-size\n"
            "  unblock   replace trailing spaces in cbs-size records with newline\n"
            "  lcase     change upper case to lower case\n"
            "  ucase     change lower case to upper case\n"
            "  swab      swap every pair of input bytes\n"
            "  sync      pad every input block with NULs to ibs-size; when used\n"
            "            with block or unblock, pad with spaces rather than NULs\n");
    fputs_unlocked(v13, v12);
    v14 = stdout;
    v15 = gettext(
            "  excl      fail if the output file already exists\n"
            "  nocreat   do not create the output file\n"
            "  notrunc   do not truncate the output file\n"
            "  noerror   continue after read errors\n"
            "  fdatasync  physically write output file data before finishing\n"
            "  fsync     likewise, but also write metadata\n");
    fputs_unlocked(v15, v14);
    v16 = stdout;
    v17 = gettext(
            "\n"
            "Each FLAG symbol may be:\n"
            "\n"
            "  append    append mode (makes sense only for output; conv=notrunc suggested)\n");
    fputs_unlocked(v17, v16);
    v18 = stdout;
    v19 = gettext("  direct    use direct I/O for data\n");
    fputs_unlocked(v19, v18);
    v20 = stdout;
    v21 = gettext("  directory  fail unless a directory\n");
    fputs_unlocked(v21, v20);
    v22 = stdout;
    v23 = gettext("  dsync     use synchronized I/O for data\n");
    fputs_unlocked(v23, v22);
    v24 = stdout;
    v25 = gettext("  sync      likewise, but also for metadata\n");
    fputs_unlocked(v25, v24);
    v26 = stdout;
    v27 = gettext("  fullblock  accumulate full blocks of input (iflag only)\n");
    fputs_unlocked(v27, v26);
    v28 = stdout;
    v29 = gettext("  nonblock  use non-blocking I/O\n");
    fputs_unlocked(v29, v28);
    v30 = stdout;
    v31 = gettext("  noatime   do not update access time\n");
    fputs_unlocked(v31, v30);
    v32 = stdout;
    v33 = gettext("  nocache   discard cached data\n");
    fputs_unlocked(v33, v32);
    v34 = stdout;
    v35 = gettext("  noctty    do not assign controlling terminal from file\n");
    fputs_unlocked(v35, v34);
    v36 = stdout;
    v37 = gettext("  nofollow  do not follow symlinks\n");
    fputs_unlocked(v37, v36);
    v38 = gettext(
            "\n"
            "Sending a %s signal to a running `dd' process makes it\n"
            "print I/O statistics to standard error and then resume copying.\n"
            "\n"
            "  $ dd if=/dev/zero of=/dev/null& pid=$!\n"
            "  $ kill -%s $pid; sleep 1; kill $pid\n"
            "  18335302+0 records in\n"
            "  18335302+0 records out\n"
            "  9387674624 bytes (9.4 GB) copied, 34.6279 seconds, 271 MB/s\n"
            "\n"
            "Options are:\n"
            "\n");
    printf(v38, "USR1", "USR1");
    v39 = stdout;
    v40 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v40, v39);
    v41 = stdout;
    v42 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v42, v41);
    sub_401C60();
  }
  exit(a1);
}
