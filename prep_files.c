# 1 "lib/files.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "lib/files.c"


# 1 "/usr/include/errno.h" 1 3 4
# 25 "/usr/include/errno.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 461 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 452 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 453 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 454 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 462 "/usr/include/features.h" 2 3 4
# 485 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 486 "/usr/include/features.h" 2 3 4
# 26 "/usr/include/errno.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/errno.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4




# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 6 "/usr/include/asm-generic/errno.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 2 3 4
# 1 "/usr/include/linux/errno.h" 2 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/errno.h" 2 3 4
# 29 "/usr/include/errno.h" 2 3 4









# 37 "/usr/include/errno.h" 3 4
extern int *__errno_location (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));







extern char *program_invocation_name;
extern char *program_invocation_short_name;

# 1 "/usr/include/x86_64-linux-gnu/bits/types/error_t.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/types/error_t.h" 3 4
typedef int error_t;
# 49 "/usr/include/errno.h" 2 3 4




# 4 "lib/files.c" 2
# 1 "/usr/include/inttypes.h" 1 3 4
# 27 "/usr/include/inttypes.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;






typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;



typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 141 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 142 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time64.h" 1 3 4
# 143 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 28 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 30 "/usr/include/stdint.h" 2 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 3 4
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 35 "/usr/include/stdint.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 3 4
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
# 38 "/usr/include/stdint.h" 2 3 4





typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;


typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;





typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 71 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 87 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 101 "/usr/include/stdint.h" 3 4
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
# 10 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdint.h" 2 3 4
# 28 "/usr/include/inttypes.h" 2 3 4






typedef int __gwchar_t;
# 266 "/usr/include/inttypes.h" 3 4





typedef struct
  {
    long int quot;
    long int rem;
  } imaxdiv_t;
# 290 "/usr/include/inttypes.h" 3 4
extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern intmax_t strtoimax (const char *__restrict __nptr,
      char **__restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t strtoumax (const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern intmax_t wcstoimax (const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t wcstoumax (const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));





extern long int __strtol_internal (const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, int __group)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern __inline __attribute__ ((__gnu_inline__)) intmax_t
__attribute__ ((__nothrow__ , __leaf__)) strtoimax (const char *__restrict nptr, char **__restrict endptr, int base)

{
  return __strtol_internal (nptr, endptr, base, 0);
}

extern unsigned long int __strtoul_internal (const char *__restrict __nptr,
          char ** __restrict __endptr,
          int __base, int __group)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern __inline __attribute__ ((__gnu_inline__)) uintmax_t
__attribute__ ((__nothrow__ , __leaf__)) strtoumax (const char *__restrict nptr, char **__restrict endptr, int base)

{
  return __strtoul_internal (nptr, endptr, base, 0);
}

extern long int __wcstol_internal (const __gwchar_t * __restrict __nptr,
       __gwchar_t **__restrict __endptr,
       int __base, int __group)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern __inline __attribute__ ((__gnu_inline__)) intmax_t
__attribute__ ((__nothrow__ , __leaf__)) wcstoimax (const __gwchar_t *__restrict nptr, __gwchar_t **__restrict endptr, int base)

{
  return __wcstol_internal (nptr, endptr, base, 0);
}

extern unsigned long int __wcstoul_internal (const __gwchar_t *
          __restrict __nptr,
          __gwchar_t **
          __restrict __endptr,
          int __base, int __group)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern __inline __attribute__ ((__gnu_inline__)) uintmax_t
__attribute__ ((__nothrow__ , __leaf__)) wcstoumax (const __gwchar_t *__restrict nptr, __gwchar_t **__restrict endptr, int base)

{
  return __wcstoul_internal (nptr, endptr, base, 0);
}
# 432 "/usr/include/inttypes.h" 3 4

# 5 "lib/files.c" 2
# 1 "/usr/include/libgen.h" 1 3 4
# 23 "/usr/include/libgen.h" 3 4



extern char *dirname (char *__path) __attribute__ ((__nothrow__ , __leaf__));







extern char *__xpg_basename (char *__path) __attribute__ ((__nothrow__ , __leaf__));



# 6 "lib/files.c" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/limits.h" 1 3 4
# 34 "/usr/lib/gcc/x86_64-linux-gnu/9/include/limits.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/limits.h" 1 3 4
# 194 "/usr/lib/gcc/x86_64-linux-gnu/9/include/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 26 "/usr/include/limits.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/limits.h" 2 3 4
# 183 "/usr/include/limits.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 161 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 2 3 4
# 162 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 184 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" 1 3 4
# 188 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 1 3 4
# 64 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/uio_lim.h" 1 3 4
# 65 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 2 3 4
# 192 "/usr/include/limits.h" 2 3 4
# 195 "/usr/lib/gcc/x86_64-linux-gnu/9/include/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-linux-gnu/9/include/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/x86_64-linux-gnu/9/include/limits.h" 2 3 4
# 7 "lib/files.c" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdbool.h" 1 3 4
# 8 "lib/files.c" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 209 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 34 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 37 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h" 1 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 1 3 4
# 13 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 3 4
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 6 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h" 2 3 4




typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
# 40 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h" 3 4
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
# 41 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h" 1 3 4



struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 42 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h" 1 3 4



struct _IO_FILE;


typedef struct _IO_FILE FILE;
# 43 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h" 3 4
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;




typedef void _IO_lock_t;





struct _IO_FILE
{
  int _flags;


  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;


  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _flags2;
  __off_t _old_offset;


  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  _IO_lock_t *_lock;







  __off64_t _offset;

  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
# 44 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h" 3 4
typedef __ssize_t cookie_read_function_t (void *__cookie, char *__buf,
                                          size_t __nbytes);







typedef __ssize_t cookie_write_function_t (void *__cookie, const char *__buf,
                                           size_t __nbytes);







typedef int cookie_seek_function_t (void *__cookie, __off64_t *__pos, int __w);


typedef int cookie_close_function_t (void *__cookie);






typedef struct _IO_cookie_io_functions_t
{
  cookie_read_function_t *read;
  cookie_write_function_t *write;
  cookie_seek_function_t *seek;
  cookie_close_function_t *close;
} cookie_io_functions_t;
# 47 "/usr/include/stdio.h" 2 3 4





typedef __gnuc_va_list va_list;
# 63 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;






typedef __off64_t off64_t;






typedef __ssize_t ssize_t;






typedef __fpos_t fpos_t;




typedef __fpos64_t fpos64_t;
# 133 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 134 "/usr/include/stdio.h" 2 3 4



extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;






extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));



extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));
# 164 "/usr/include/stdio.h" 3 4
extern int renameat2 (int __oldfd, const char *__old, int __newfd,
        const char *__new, unsigned int __flags) __attribute__ ((__nothrow__ , __leaf__));







extern FILE *tmpfile (void) __attribute__ ((__warn_unused_result__));
# 183 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void) __attribute__ ((__warn_unused_result__));



extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 204 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));







extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 227 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 237 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);
# 246 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) __attribute__ ((__warn_unused_result__));




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
# 270 "/usr/include/stdio.h" 3 4
extern FILE *fopen64 (const char *__restrict __filename,
        const char *__restrict __modes) __attribute__ ((__warn_unused_result__));
extern FILE *freopen64 (const char *__restrict __filename,
   const char *__restrict __modes,
   FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));




extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));





extern FILE *fopencookie (void *__restrict __magic_cookie,
     const char *__restrict __modes,
     cookie_io_functions_t __io_funcs) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));





extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));




extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));







extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));



extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));





extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
        __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0))) __attribute__ ((__warn_unused_result__));
extern int __asprintf (char **__restrict __ptr,
         const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) __attribute__ ((__warn_unused_result__));
extern int asprintf (char **__restrict __ptr,
       const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) __attribute__ ((__warn_unused_result__));




extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));







extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) __attribute__ ((__warn_unused_result__));




extern int scanf (const char *__restrict __format, ...) __attribute__ ((__warn_unused_result__));

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));






extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                          __attribute__ ((__warn_unused_result__));
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                         __attribute__ ((__warn_unused_result__));
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 432 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) __attribute__ ((__warn_unused_result__));





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) __attribute__ ((__warn_unused_result__));


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));




extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) __attribute__ ((__warn_unused_result__));
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) __attribute__ ((__warn_unused_result__));
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 485 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);






extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 510 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 521 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 537 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);







extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     __attribute__ ((__warn_unused_result__));
# 587 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
# 603 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern __ssize_t getdelim (char **__restrict __lineptr,
                           size_t *__restrict __n, int __delimiter,
                           FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));







extern __ssize_t getline (char **__restrict __lineptr,
                          size_t *__restrict __n,
                          FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));







extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 662 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (const char *__restrict __s,
      FILE *__restrict __stream);
# 673 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);







extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) __attribute__ ((__warn_unused_result__));




extern void rewind (FILE *__stream);
# 707 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) __attribute__ ((__warn_unused_result__));
# 731 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 750 "/usr/include/stdio.h" 3 4
extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) __attribute__ ((__warn_unused_result__));
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos);



extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));



extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));







extern void perror (const char *__s);





# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];


extern int _sys_nerr;
extern const char *const _sys_errlist[];
# 782 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 800 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) __attribute__ ((__warn_unused_result__));





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       const char *__restrict __format,
       __gnuc_va_list __args)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 858 "/usr/include/stdio.h" 3 4
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);




# 1 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 1 3 4
# 46 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
getchar (void)
{
  return getc (stdin);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fgetc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}





extern __inline __attribute__ ((__gnu_inline__)) int
getc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}


extern __inline __attribute__ ((__gnu_inline__)) int
getchar_unlocked (void)
{
  return (__builtin_expect (((stdin)->_IO_read_ptr >= (stdin)->_IO_read_end), 0) ? __uflow (stdin) : *(unsigned char *) (stdin)->_IO_read_ptr++);
}




extern __inline __attribute__ ((__gnu_inline__)) int
putchar (int __c)
{
  return putc (__c, stdout);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fputc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}





extern __inline __attribute__ ((__gnu_inline__)) int
putc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}


extern __inline __attribute__ ((__gnu_inline__)) int
putchar_unlocked (int __c)
{
  return (__builtin_expect (((stdout)->_IO_write_ptr >= (stdout)->_IO_write_end), 0) ? __overflow (stdout, (unsigned char) (__c)) : (unsigned char) (*(stdout)->_IO_write_ptr++ = (__c)));
}





extern __inline __attribute__ ((__gnu_inline__)) __ssize_t
getline (char **__lineptr, size_t *__n, FILE *__stream)
{
  return __getdelim (__lineptr, __n, '\n', __stream);
}





extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) feof_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x0010) != 0);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) ferror_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x0020) != 0);
}
# 865 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4
extern int __sprintf_chk (char *__restrict __s, int __flag, size_t __slen,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
extern int __vsprintf_chk (char *__restrict __s, int __flag, size_t __slen,
      const char *__restrict __format,
      __gnuc_va_list __ap) __attribute__ ((__nothrow__ , __leaf__));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) sprintf (char *__restrict __s, const char *__restrict __fmt, ...)
{
  return __builtin___sprintf_chk (__s, 2 - 1,
      __builtin_object_size (__s, 2 > 1), __fmt, __builtin_va_arg_pack ());
}






extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) vsprintf (char *__restrict __s, const char *__restrict __fmt, __gnuc_va_list __ap)

{
  return __builtin___vsprintf_chk (__s, 2 - 1,
       __builtin_object_size (__s, 2 > 1), __fmt, __ap);
}



extern int __snprintf_chk (char *__restrict __s, size_t __n, int __flag,
      size_t __slen, const char *__restrict __format,
      ...) __attribute__ ((__nothrow__ , __leaf__));
extern int __vsnprintf_chk (char *__restrict __s, size_t __n, int __flag,
       size_t __slen, const char *__restrict __format,
       __gnuc_va_list __ap) __attribute__ ((__nothrow__ , __leaf__));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) snprintf (char *__restrict __s, size_t __n, const char *__restrict __fmt, ...)

{
  return __builtin___snprintf_chk (__s, __n, 2 - 1,
       __builtin_object_size (__s, 2 > 1), __fmt, __builtin_va_arg_pack ());
}






extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) vsnprintf (char *__restrict __s, size_t __n, const char *__restrict __fmt, __gnuc_va_list __ap)

{
  return __builtin___vsnprintf_chk (__s, __n, 2 - 1,
        __builtin_object_size (__s, 2 > 1), __fmt, __ap);
}





extern int __fprintf_chk (FILE *__restrict __stream, int __flag,
     const char *__restrict __format, ...);
extern int __printf_chk (int __flag, const char *__restrict __format, ...);
extern int __vfprintf_chk (FILE *__restrict __stream, int __flag,
      const char *__restrict __format, __gnuc_va_list __ap);
extern int __vprintf_chk (int __flag, const char *__restrict __format,
     __gnuc_va_list __ap);


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
fprintf (FILE *__restrict __stream, const char *__restrict __fmt, ...)
{
  return __fprintf_chk (__stream, 2 - 1, __fmt,
   __builtin_va_arg_pack ());
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
printf (const char *__restrict __fmt, ...)
{
  return __printf_chk (2 - 1, __fmt, __builtin_va_arg_pack ());
}







extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
vprintf (const char *__restrict __fmt, __gnuc_va_list __ap)
{

  return __vfprintf_chk (stdout, 2 - 1, __fmt, __ap);



}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
vfprintf (FILE *__restrict __stream,
   const char *__restrict __fmt, __gnuc_va_list __ap)
{
  return __vfprintf_chk (__stream, 2 - 1, __fmt, __ap);
}


extern int __dprintf_chk (int __fd, int __flag, const char *__restrict __fmt,
     ...) __attribute__ ((__format__ (__printf__, 3, 4)));
extern int __vdprintf_chk (int __fd, int __flag,
      const char *__restrict __fmt, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 3, 0)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
dprintf (int __fd, const char *__restrict __fmt, ...)
{
  return __dprintf_chk (__fd, 2 - 1, __fmt,
   __builtin_va_arg_pack ());
}





extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
vdprintf (int __fd, const char *__restrict __fmt, __gnuc_va_list __ap)
{
  return __vdprintf_chk (__fd, 2 - 1, __fmt, __ap);
}




extern int __asprintf_chk (char **__restrict __ptr, int __flag,
      const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__printf__, 3, 4))) __attribute__ ((__warn_unused_result__));
extern int __vasprintf_chk (char **__restrict __ptr, int __flag,
       const char *__restrict __fmt, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__printf__, 3, 0))) __attribute__ ((__warn_unused_result__));
extern int __obstack_printf_chk (struct obstack *__restrict __obstack,
     int __flag, const char *__restrict __format,
     ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__printf__, 3, 4)));
extern int __obstack_vprintf_chk (struct obstack *__restrict __obstack,
      int __flag,
      const char *__restrict __format,
      __gnuc_va_list __args)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__printf__, 3, 0)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) asprintf (char **__restrict __ptr, const char *__restrict __fmt, ...)
{
  return __asprintf_chk (__ptr, 2 - 1, __fmt,
    __builtin_va_arg_pack ());
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) __asprintf (char **__restrict __ptr, const char *__restrict __fmt, ...)

{
  return __asprintf_chk (__ptr, 2 - 1, __fmt,
    __builtin_va_arg_pack ());
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) obstack_printf (struct obstack *__restrict __obstack, const char *__restrict __fmt, ...)

{
  return __obstack_printf_chk (__obstack, 2 - 1, __fmt,
          __builtin_va_arg_pack ());
}
# 209 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) vasprintf (char **__restrict __ptr, const char *__restrict __fmt, __gnuc_va_list __ap)

{
  return __vasprintf_chk (__ptr, 2 - 1, __fmt, __ap);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) obstack_vprintf (struct obstack *__restrict __obstack, const char *__restrict __fmt, __gnuc_va_list __ap)

{
  return __obstack_vprintf_chk (__obstack, 2 - 1, __fmt,
    __ap);
}
# 243 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4
extern char *__fgets_chk (char *__restrict __s, size_t __size, int __n,
     FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern char *__fgets_alias (char *__restrict __s, int __n, FILE *__restrict __stream) __asm__ ("" "fgets")

                                        __attribute__ ((__warn_unused_result__));
extern char *__fgets_chk_warn (char *__restrict __s, size_t __size, int __n, FILE *__restrict __stream) __asm__ ("" "__fgets_chk")


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fgets called with bigger size than length " "of destination buffer")))
                                 ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) char *
fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
{
  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n) || __n <= 0)
 return __fgets_chk (__s, __builtin_object_size (__s, 2 > 1), __n, __stream);

      if ((size_t) __n > __builtin_object_size (__s, 2 > 1))
 return __fgets_chk_warn (__s, __builtin_object_size (__s, 2 > 1), __n, __stream);
    }
  return __fgets_alias (__s, __n, __stream);
}

extern size_t __fread_chk (void *__restrict __ptr, size_t __ptrlen,
      size_t __size, size_t __n,
      FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t __fread_alias (void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "fread")


            __attribute__ ((__warn_unused_result__));
extern size_t __fread_chk_warn (void *__restrict __ptr, size_t __ptrlen, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "__fread_chk")




     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fread called with bigger size * nmemb than length " "of destination buffer")))
                                 ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) size_t
fread (void *__restrict __ptr, size_t __size, size_t __n,
       FILE *__restrict __stream)
{
  if (__builtin_object_size (__ptr, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__size)
   || !__builtin_constant_p (__n)
   || (__size | __n) >= (((size_t) 1) << (8 * sizeof (size_t) / 2)))
 return __fread_chk (__ptr, __builtin_object_size (__ptr, 0), __size, __n, __stream);

      if (__size * __n > __builtin_object_size (__ptr, 0))
 return __fread_chk_warn (__ptr, __builtin_object_size (__ptr, 0), __size, __n, __stream);
    }
  return __fread_alias (__ptr, __size, __n, __stream);
}


extern char *__fgets_unlocked_chk (char *__restrict __s, size_t __size,
       int __n, FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern char *__fgets_unlocked_alias (char *__restrict __s, int __n, FILE *__restrict __stream) __asm__ ("" "fgets_unlocked")

                                                 __attribute__ ((__warn_unused_result__));
extern char *__fgets_unlocked_chk_warn (char *__restrict __s, size_t __size, int __n, FILE *__restrict __stream) __asm__ ("" "__fgets_unlocked_chk")


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fgets_unlocked called with bigger size than length " "of destination buffer")))
                                 ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) char *
fgets_unlocked (char *__restrict __s, int __n, FILE *__restrict __stream)
{
  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n) || __n <= 0)
 return __fgets_unlocked_chk (__s, __builtin_object_size (__s, 2 > 1), __n, __stream);

      if ((size_t) __n > __builtin_object_size (__s, 2 > 1))
 return __fgets_unlocked_chk_warn (__s, __builtin_object_size (__s, 2 > 1), __n, __stream);
    }
  return __fgets_unlocked_alias (__s, __n, __stream);
}




extern size_t __fread_unlocked_chk (void *__restrict __ptr, size_t __ptrlen,
        size_t __size, size_t __n,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t __fread_unlocked_alias (void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "fread_unlocked")


                     __attribute__ ((__warn_unused_result__));
extern size_t __fread_unlocked_chk_warn (void *__restrict __ptr, size_t __ptrlen, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "__fread_unlocked_chk")




     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fread_unlocked called with bigger size * nmemb than " "length of destination buffer")))
                                        ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) size_t
fread_unlocked (void *__restrict __ptr, size_t __size, size_t __n,
  FILE *__restrict __stream)
{
  if (__builtin_object_size (__ptr, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__size)
   || !__builtin_constant_p (__n)
   || (__size | __n) >= (((size_t) 1) << (8 * sizeof (size_t) / 2)))
 return __fread_unlocked_chk (__ptr, __builtin_object_size (__ptr, 0), __size, __n,
         __stream);

      if (__size * __n > __builtin_object_size (__ptr, 0))
 return __fread_unlocked_chk_warn (__ptr, __builtin_object_size (__ptr, 0), __size, __n,
       __stream);
    }


  if (__builtin_constant_p (__size)
      && __builtin_constant_p (__n)
      && (__size | __n) < (((size_t) 1) << (8 * sizeof (size_t) / 2))
      && __size * __n <= 8)
    {
      size_t __cnt = __size * __n;
      char *__cptr = (char *) __ptr;
      if (__cnt == 0)
 return 0;

      for (; __cnt > 0; --__cnt)
 {
   int __c = getc_unlocked (__stream);
   if (__c == (-1))
     break;
   *__cptr++ = __c;
 }
      return (__cptr - (char *) __ptr) / __size;
    }

  return __fread_unlocked_alias (__ptr, __size, __n, __stream);
}
# 868 "/usr/include/stdio.h" 2 3 4






# 9 "lib/files.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 25 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 26 "/usr/include/stdlib.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 321 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 3 4
typedef int wchar_t;
# 32 "/usr/include/stdlib.h" 2 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 40 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 41 "/usr/include/stdlib.h" 2 3 4
# 55 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 1 3 4
# 120 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 2 3 4
# 121 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 2 3 4
# 56 "/usr/include/stdlib.h" 2 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;





__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 97 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));



extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 140 "/usr/include/stdlib.h" 3 4
extern _Float32 strtof32 (const char *__restrict __nptr,
     char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern _Float64 strtof64 (const char *__restrict __nptr,
     char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern _Float128 strtof128 (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern _Float32x strtof32x (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern _Float64x strtof64x (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 176 "/usr/include/stdlib.h" 3 4
extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int strfromd (char *__dest, size_t __size, const char *__format,
       double __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));

extern int strfromf (char *__dest, size_t __size, const char *__format,
       float __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));

extern int strfroml (char *__dest, size_t __size, const char *__format,
       long double __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
# 232 "/usr/include/stdlib.h" 3 4
extern int strfromf32 (char *__dest, size_t __size, const char * __format,
         _Float32 __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));



extern int strfromf64 (char *__dest, size_t __size, const char * __format,
         _Float64 __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));



extern int strfromf128 (char *__dest, size_t __size, const char * __format,
   _Float128 __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));



extern int strfromf32x (char *__dest, size_t __size, const char * __format,
   _Float32x __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));



extern int strfromf64x (char *__dest, size_t __size, const char * __format,
   _Float64x __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
# 272 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 3 4
struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;
# 23 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 2 3 4

typedef __locale_t locale_t;
# 273 "/usr/include/stdlib.h" 2 3 4

extern long int strtol_l (const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     locale_t __loc) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

extern unsigned long int strtoul_l (const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern long long int strtoll_l (const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern unsigned long long int strtoull_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

extern double strtod_l (const char *__restrict __nptr,
   char **__restrict __endptr, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));

extern float strtof_l (const char *__restrict __nptr,
         char **__restrict __endptr, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));

extern long double strtold_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
# 316 "/usr/include/stdlib.h" 3 4
extern _Float32 strtof32_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));



extern _Float64 strtof64_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));



extern _Float128 strtof128_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));



extern _Float32x strtof32x_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));



extern _Float64x strtof64x_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
# 360 "/usr/include/stdlib.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) atoi (const char *__nptr)
{
  return (int) strtol (__nptr, (char **) ((void *)0), 10);
}
extern __inline __attribute__ ((__gnu_inline__)) long int
__attribute__ ((__nothrow__ , __leaf__)) atol (const char *__nptr)
{
  return strtol (__nptr, (char **) ((void *)0), 10);
}


__extension__ extern __inline __attribute__ ((__gnu_inline__)) long long int
__attribute__ ((__nothrow__ , __leaf__)) atoll (const char *__nptr)
{
  return strtoll (__nptr, (char **) ((void *)0), 10);
}
# 385 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));




# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;


typedef __loff_t loff_t;




typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 97 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
# 114 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;




# 1 "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h" 1 3 4






typedef __clock_t clock_t;
# 127 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/clockid_t.h" 1 3 4






typedef __clockid_t clockid_t;
# 129 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h" 1 3 4






typedef __time_t time_t;
# 130 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/timer_t.h" 1 3 4






typedef __timer_t timer_t;
# 131 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 145 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;







typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;


typedef int register_t __attribute__ ((__mode__ (__word__)));
# 176 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 24 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endianness.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/endian.h" 2 3 4
# 25 "/usr/include/endian.h" 2 3 4
# 35 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint16_t
__bswap_16 (__uint16_t __bsx)
{

  return __builtin_bswap16 (__bsx);



}






static __inline __uint32_t
__bswap_32 (__uint32_t __bsx)
{

  return __builtin_bswap32 (__bsx);



}
# 69 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
__extension__ static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{

  return __builtin_bswap64 (__bsx);



}
# 36 "/usr/include/endian.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 1 3 4
# 32 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 3 4
static __inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static __inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static __inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
# 37 "/usr/include/endian.h" 2 3 4
# 177 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h" 1 3 4




typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 5 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 2 3 4


typedef __sigset_t sigset_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h" 1 3 4







struct timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 38 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 3 4
struct timespec
{
  __time_t tv_sec;



  __syscall_slong_t tv_nsec;
# 26 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 3 4
};
# 40 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 49 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef long int __fd_mask;
# 59 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
# 91 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 101 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 113 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);





# 1 "/usr/include/x86_64-linux-gnu/bits/select2.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/select2.h" 3 4
extern long int __fdelt_chk (long int __d);
extern long int __fdelt_warn (long int __d)
  __attribute__((__warning__ ("bit outside of fd_set selected")));
# 124 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



# 180 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 219 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 1 3 4
# 44 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 2 3 4
# 45 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4




typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;

typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
# 74 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h" 3 4
struct __pthread_mutex_s
{
  int __lock;
  unsigned int __count;
  int __owner;

  unsigned int __nusers;



  int __kind;

  short __spins;
  short __elision;
  __pthread_list_t __list;
# 53 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h" 3 4
};
# 75 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4
# 87 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h" 3 4
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;

  int __cur_writer;
  int __shared;
  signed char __rwelision;




  unsigned char __pad1[7];


  unsigned long int __pad2;


  unsigned int __flags;
# 55 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h" 3 4
};
# 88 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4




struct __pthread_cond_s
{
  __extension__ union
  {
    __extension__ unsigned long long int __wseq;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __wseq32;
  };
  __extension__ union
  {
    __extension__ unsigned long long int __g1_start;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __g1_start32;
  };
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};
# 24 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4



typedef unsigned long int pthread_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;




typedef union
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 228 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



# 395 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));



extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) __attribute__ ((__warn_unused_result__));

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (1, 2))) __attribute__ ((__warn_unused_result__));






extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__)) __attribute__ ((__alloc_size__ (2)));







extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__))
     __attribute__ ((__alloc_size__ (2, 3)));



extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));


# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 569 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) __attribute__ ((__warn_unused_result__));




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) __attribute__ ((__warn_unused_result__));



extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));




extern char *secure_getenv (const char *__name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));






extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 675 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 688 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 698 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 710 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 720 "/usr/include/stdlib.h" 3 4
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 731 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 742 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 752 "/usr/include/stdlib.h" 3 4
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 762 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 774 "/usr/include/stdlib.h" 3 4
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 784 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) __attribute__ ((__warn_unused_result__));





extern char *canonicalize_file_name (const char *__name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 800 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));






typedef int (*__compar_fn_t) (const void *, const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (const void *, const void *, void *);




extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) __attribute__ ((__warn_unused_result__));


# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 1 3 4
# 19 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) void *
bsearch (const void *__key, const void *__base, size_t __nmemb, size_t __size,
  __compar_fn_t __compar)
{
  size_t __l, __u, __idx;
  const void *__p;
  int __comparison;

  __l = 0;
  __u = __nmemb;
  while (__l < __u)
    {
      __idx = (__l + __u) / 2;
      __p = (void *) (((const char *) __base) + (__idx * __size));
      __comparison = (*__compar) (__key, __p);
      if (__comparison < 0)
 __u = __idx;
      else if (__comparison > 0)
 __l = __idx + 1;
      else
 return (void *) __p;
    }

  return ((void *)0);
}
# 826 "/usr/include/stdlib.h" 2 3 4




extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));




extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));


__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));






extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));


__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
# 872 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) __attribute__ ((__warn_unused_result__));




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) __attribute__ ((__warn_unused_result__));




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));





extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));







extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 957 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) __attribute__ ((__warn_unused_result__));







extern int posix_openpt (int __oflag) __attribute__ ((__warn_unused_result__));







extern int grantpt (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int unlockpt (int __fd) __attribute__ ((__nothrow__ , __leaf__));




extern char *ptsname (int __fd) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 1013 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) double
__attribute__ ((__nothrow__ , __leaf__)) atof (const char *__nptr)
{
  return strtod (__nptr, (char **) ((void *)0));
}
# 1014 "/usr/include/stdlib.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3 4
extern char *__realpath_chk (const char *__restrict __name,
        char *__restrict __resolved,
        size_t __resolvedlen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern char *__realpath_alias (const char *__restrict __name, char *__restrict __resolved) __asm__ ("" "realpath") __attribute__ ((__nothrow__ , __leaf__))

                                                 __attribute__ ((__warn_unused_result__));
extern char *__realpath_chk_warn (const char *__restrict __name, char *__restrict __resolved, size_t __resolvedlen) __asm__ ("" "__realpath_chk") __attribute__ ((__nothrow__ , __leaf__))


                                                __attribute__ ((__warn_unused_result__))
     __attribute__((__warning__ ("second argument of realpath must be either NULL or at " "least PATH_MAX bytes long buffer")))
                                      ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) char *
__attribute__ ((__nothrow__ , __leaf__)) realpath (const char *__restrict __name, char *__restrict __resolved)
{
  if (__builtin_object_size (__resolved, 2 > 1) != (size_t) -1)
    {

      if (__builtin_object_size (__resolved, 2 > 1) < 4096)
 return __realpath_chk_warn (__name, __resolved, __builtin_object_size (__resolved, 2 > 1));

      return __realpath_chk (__name, __resolved, __builtin_object_size (__resolved, 2 > 1));
    }

  return __realpath_alias (__name, __resolved);
}


extern int __ptsname_r_chk (int __fd, char *__buf, size_t __buflen,
       size_t __nreal) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int __ptsname_r_alias (int __fd, char *__buf, size_t __buflen) __asm__ ("" "ptsname_r") __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__nonnull__ (2)));
extern int __ptsname_r_chk_warn (int __fd, char *__buf, size_t __buflen, size_t __nreal) __asm__ ("" "__ptsname_r_chk") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__nonnull__ (2))) __attribute__((__warning__ ("ptsname_r called with buflen bigger than " "size of buf")))
                   ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) ptsname_r (int __fd, char *__buf, size_t __buflen)
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __ptsname_r_chk (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1));
      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __ptsname_r_chk_warn (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __ptsname_r_alias (__fd, __buf, __buflen);
}


extern int __wctomb_chk (char *__s, wchar_t __wchar, size_t __buflen)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int __wctomb_alias (char *__s, wchar_t __wchar) __asm__ ("" "wctomb") __attribute__ ((__nothrow__ , __leaf__))
              __attribute__ ((__warn_unused_result__));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) int
__attribute__ ((__nothrow__ , __leaf__)) wctomb (char *__s, wchar_t __wchar)
{







  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1 && 16 > __builtin_object_size (__s, 2 > 1))
    return __wctomb_chk (__s, __wchar, __builtin_object_size (__s, 2 > 1));
  return __wctomb_alias (__s, __wchar);
}


extern size_t __mbstowcs_chk (wchar_t *__restrict __dst,
         const char *__restrict __src,
         size_t __len, size_t __dstlen) __attribute__ ((__nothrow__ , __leaf__));
extern size_t __mbstowcs_alias (wchar_t *__restrict __dst, const char *__restrict __src, size_t __len) __asm__ ("" "mbstowcs") __attribute__ ((__nothrow__ , __leaf__))


                                  ;
extern size_t __mbstowcs_chk_warn (wchar_t *__restrict __dst, const char *__restrict __src, size_t __len, size_t __dstlen) __asm__ ("" "__mbstowcs_chk") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__((__warning__ ("mbstowcs called with dst buffer smaller than len " "* sizeof (wchar_t)")))
                        ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) size_t
__attribute__ ((__nothrow__ , __leaf__)) mbstowcs (wchar_t *__restrict __dst, const char *__restrict __src, size_t __len)

{
  if (__builtin_object_size (__dst, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __mbstowcs_chk (__dst, __src, __len,
          __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t));

      if (__len > __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t))
 return __mbstowcs_chk_warn (__dst, __src, __len,
         __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t));
    }
  return __mbstowcs_alias (__dst, __src, __len);
}


extern size_t __wcstombs_chk (char *__restrict __dst,
         const wchar_t *__restrict __src,
         size_t __len, size_t __dstlen) __attribute__ ((__nothrow__ , __leaf__));
extern size_t __wcstombs_alias (char *__restrict __dst, const wchar_t *__restrict __src, size_t __len) __asm__ ("" "wcstombs") __attribute__ ((__nothrow__ , __leaf__))


                                  ;
extern size_t __wcstombs_chk_warn (char *__restrict __dst, const wchar_t *__restrict __src, size_t __len, size_t __dstlen) __asm__ ("" "__wcstombs_chk") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__((__warning__ ("wcstombs called with dst buffer smaller than len")));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) size_t
__attribute__ ((__nothrow__ , __leaf__)) wcstombs (char *__restrict __dst, const wchar_t *__restrict __src, size_t __len)

{
  if (__builtin_object_size (__dst, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __wcstombs_chk (__dst, __src, __len, __builtin_object_size (__dst, 2 > 1));
      if (__len > __builtin_object_size (__dst, 2 > 1))
 return __wcstombs_chk_warn (__dst, __src, __len, __builtin_object_size (__dst, 2 > 1));
    }
  return __wcstombs_alias (__dst, __src, __len);
}
# 1018 "/usr/include/stdlib.h" 2 3 4






# 10 "lib/files.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 26 "/usr/include/string.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/string.h" 2 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 34 "/usr/include/string.h" 2 3 4
# 43 "/usr/include/string.h" 3 4
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 91 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 104 "/usr/include/string.h" 3 4
extern void *rawmemchr (const void *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 115 "/usr/include/string.h" 3 4
extern void *memrchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));


extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 226 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 253 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 266 "/usr/include/string.h" 3 4
extern char *strchrnul (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 303 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 330 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 360 "/usr/include/string.h" 3 4
extern char *strcasestr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));







extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));
# 421 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__));





extern char *strerror_l (int __errnum, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/strings.h" 1 3 4
# 23 "/usr/include/strings.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 24 "/usr/include/strings.h" 2 3 4










extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 68 "/usr/include/strings.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 96 "/usr/include/strings.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int ffsl (long int __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));






extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));



extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));








# 1 "/usr/include/x86_64-linux-gnu/bits/strings_fortified.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/strings_fortified.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void
__attribute__ ((__nothrow__ , __leaf__)) bcopy (const void *__src, void *__dest, size_t __len)
{
  (void) __builtin___memmove_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void
__attribute__ ((__nothrow__ , __leaf__)) bzero (void *__dest, size_t __len)
{
  (void) __builtin___memset_chk (__dest, '\0', __len, __builtin_object_size (__dest, 0));
}
# 145 "/usr/include/strings.h" 2 3 4
# 433 "/usr/include/string.h" 2 3 4



extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int strverscmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 495 "/usr/include/string.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/string_fortified.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/string_fortified.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__nothrow__ , __leaf__)) memcpy (void *__restrict __dest, const void *__restrict __src, size_t __len)

{
  return __builtin___memcpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__nothrow__ , __leaf__)) memmove (void *__dest, const void *__src, size_t __len)
{
  return __builtin___memmove_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__nothrow__ , __leaf__)) mempcpy (void *__restrict __dest, const void *__restrict __src, size_t __len)

{
  return __builtin___mempcpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}
# 58 "/usr/include/x86_64-linux-gnu/bits/string_fortified.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__nothrow__ , __leaf__)) memset (void *__dest, int __ch, size_t __len)
{
# 71 "/usr/include/x86_64-linux-gnu/bits/string_fortified.h" 3 4
  return __builtin___memset_chk (__dest, __ch, __len, __builtin_object_size (__dest, 0));
}




void __explicit_bzero_chk (void *__dest, size_t __len, size_t __destlen)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void
__attribute__ ((__nothrow__ , __leaf__)) explicit_bzero (void *__dest, size_t __len)
{
  __explicit_bzero_chk (__dest, __len, __builtin_object_size (__dest, 0));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strcpy (char *__restrict __dest, const char *__restrict __src)
{
  return __builtin___strcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) stpcpy (char *__restrict __dest, const char *__restrict __src)
{
  return __builtin___stpcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}



extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strncpy (char *__restrict __dest, const char *__restrict __src, size_t __len)

{
  return __builtin___strncpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 2 > 1));
}


extern char *__stpncpy_chk (char *__dest, const char *__src, size_t __n,
       size_t __destlen) __attribute__ ((__nothrow__ , __leaf__));
extern char *__stpncpy_alias (char *__dest, const char *__src, size_t __n) __asm__ ("" "stpncpy") __attribute__ ((__nothrow__ , __leaf__))
                                 ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) stpncpy (char *__dest, const char *__src, size_t __n)
{
  if (__builtin_object_size (__dest, 2 > 1) != (size_t) -1
      && (!__builtin_constant_p (__n) || __n > __builtin_object_size (__dest, 2 > 1)))
    return __stpncpy_chk (__dest, __src, __n, __builtin_object_size (__dest, 2 > 1));
  return __stpncpy_alias (__dest, __src, __n);
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strcat (char *__restrict __dest, const char *__restrict __src)
{
  return __builtin___strcat_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strncat (char *__restrict __dest, const char *__restrict __src, size_t __len)

{
  return __builtin___strncat_chk (__dest, __src, __len, __builtin_object_size (__dest, 2 > 1));
}
# 496 "/usr/include/string.h" 2 3 4




# 11 "lib/files.c" 2


# 1 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_mu.h" 1
# 11 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_mu.h"
# 1 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_common.h" 1
# 18 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_common.h"

# 18 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_common.h"
typedef uint8_t UINT8;
typedef uint8_t BYTE;
typedef int8_t INT8;
typedef int BOOL;
typedef uint16_t UINT16;
typedef int16_t INT16;
typedef uint32_t UINT32;
typedef int32_t INT32;
typedef uint64_t UINT64;
typedef int64_t INT64;




typedef struct TSS2_ABI_VERSION TSS2_ABI_VERSION;
struct TSS2_ABI_VERSION {
    uint32_t tssCreator;
    uint32_t tssFamily;
    uint32_t tssLevel;
    uint32_t tssVersion;
};
# 47 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_common.h"
typedef uint32_t TSS2_RC;
# 12 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_mu.h" 2
# 1 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tpm2_types.h" 1
# 74 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tpm2_types.h"
typedef UINT16 TPM2_ALG_ID;
# 127 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tpm2_types.h"
typedef UINT16 TPM2_ECC_CURVE;
# 139 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tpm2_types.h"
typedef UINT32 TPM2_CC;
# 268 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tpm2_types.h"
typedef UINT32 TPM2_ALGORITHM_ID;
typedef UINT32 TPM2_MODIFIER_INDICATOR;
typedef UINT32 TPM2_AUTHORIZATION_SIZE;
typedef UINT32 TPM2_PARAMETER_SIZE;
typedef UINT16 TPM2_KEY_SIZE;
typedef UINT16 TPM2_KEY_BITS;


typedef UINT32 TPM2_SPEC;







typedef UINT32 TPM2_GENERATED;



typedef UINT32 TPM2_RC;
# 558 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tpm2_types.h"
typedef INT8 TPM2_CLOCK_ADJUST;
# 574 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tpm2_types.h"
typedef UINT16 TPM2_EO;
# 589 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tpm2_types.h"
typedef UINT16 TPM2_ST;
# 649 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tpm2_types.h"
typedef UINT16 TPM2_SU;
# 661 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tpm2_types.h"
typedef UINT8 TPM2_SE;
# 670 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tpm2_types.h"
typedef UINT32 TPM2_CAP;
# 687 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tpm2_types.h"
typedef UINT32 TPM2_PT;
# 951 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tpm2_types.h"
typedef UINT32 TPM2_PT_PCR;
# 1036 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tpm2_types.h"
typedef UINT32 TPM2_PS;
# 1057 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tpm2_types.h"
typedef UINT32 TPM2_HANDLE;


typedef UINT8 TPM2_HT;
# 1092 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tpm2_types.h"
typedef TPM2_HANDLE TPM2_RH;
# 1138 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tpm2_types.h"
typedef TPM2_HANDLE TPM2_HC;
# 1182 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tpm2_types.h"
typedef uint32_t TPMA_ALGORITHM;
# 1211 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tpm2_types.h"
typedef uint32_t TPMA_OBJECT;
# 1280 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tpm2_types.h"
typedef UINT8 TPMA_SESSION;
# 1364 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tpm2_types.h"
typedef UINT8 TPMA_LOCALITY;
# 1377 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tpm2_types.h"
typedef uint32_t TPMA_PERMANENT;
# 1407 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tpm2_types.h"
typedef uint32_t TPMA_STARTUP_CLEAR;
# 1465 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tpm2_types.h"
typedef uint32_t TPMA_MEMORY;
# 1487 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tpm2_types.h"
typedef uint32_t TPMA_CC;
# 1517 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tpm2_types.h"
typedef uint32_t TPMA_MODES;







typedef uint32_t TPMA_X509_KEY_USAGE;
# 1557 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tpm2_types.h"
typedef uint32_t TPMA_ACT;
# 1567 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tpm2_types.h"
typedef BYTE TPMI_YES_NO;




typedef TPM2_HANDLE TPMI_DH_OBJECT;


typedef TPM2_HANDLE TPMI_DH_PARENT;


typedef TPM2_HANDLE TPMI_DH_PERSISTENT;


typedef TPM2_HANDLE TPMI_DH_ENTITY;


typedef TPM2_HANDLE TPMI_DH_PCR;


typedef TPM2_HANDLE TPMI_SH_AUTH_SESSION;


typedef TPM2_HANDLE TPMI_SH_HMAC;


typedef TPM2_HANDLE TPMI_SH_POLICY;


typedef TPM2_HANDLE TPMI_DH_CONTEXT;


typedef TPM2_HANDLE TPMI_DH_SAVED;






typedef TPM2_HANDLE TPMI_RH_HIERARCHY;


typedef TPM2_HANDLE TPMI_RH_ENABLES;


typedef TPM2_HANDLE TPMI_RH_HIERARCHY_AUTH;


typedef TPM2_HANDLE TPMI_RH_HIERARCHY_POLICY;


typedef TPM2_HANDLE TPMI_RH_PLATFORM;


typedef TPM2_HANDLE TPMI_RH_OWNER;


typedef TPM2_HANDLE TPMI_RH_ENDORSEMENT;


typedef TPM2_HANDLE TPMI_RH_PROVISION;


typedef TPM2_HANDLE TPMI_RH_CLEAR;


typedef TPM2_HANDLE TPMI_RH_NV_AUTH;


typedef TPM2_HANDLE TPMI_RH_LOCKOUT;


typedef TPM2_HANDLE TPMI_RH_NV_INDEX;


typedef TPM2_HANDLE TPMI_RH_AC;


typedef TPM2_HANDLE TPMI_RH_ACT;


typedef TPM2_ALG_ID TPMI_ALG_HASH;


typedef TPM2_ALG_ID TPMI_ALG_ASYM;


typedef TPM2_ALG_ID TPMI_ALG_SYM;


typedef TPM2_ALG_ID TPMI_ALG_SYM_OBJECT;


typedef TPM2_ALG_ID TPMI_ALG_SYM_MODE;


typedef TPM2_ALG_ID TPMI_ALG_KDF;


typedef TPM2_ALG_ID TPMI_ALG_SIG_SCHEME;


typedef TPM2_ALG_ID TPMI_ECC_KEY_EXCHANGE;


typedef TPM2_ST TPMI_ST_COMMAND_TAG;


typedef TPM2_ALG_ID TPMI_ALG_MAC_SCHEME;


typedef TPM2_ALG_ID TPMI_ALG_CIPHER_MODE;


typedef struct TPMS_EMPTY TPMS_EMPTY;
struct TPMS_EMPTY {
    UINT8 empty[1];
};


typedef union TPMU_HA TPMU_HA;
union TPMU_HA {
    BYTE sha[20];
    BYTE sha1[20];
    BYTE sha256[32];
    BYTE sha384[48];
    BYTE sha512[64];
    BYTE sm3_256[32];
};


typedef struct TPMT_HA TPMT_HA;
struct TPMT_HA {
    TPMI_ALG_HASH
    hashAlg;



    TPMU_HA digest;
};


typedef struct TPM2B_DIGEST TPM2B_DIGEST;
struct TPM2B_DIGEST {
    UINT16 size;
    BYTE buffer[sizeof(TPMU_HA)];
};


typedef struct TPM2B_DATA TPM2B_DATA;
struct TPM2B_DATA {
    UINT16 size;
    BYTE buffer[sizeof(TPMU_HA)];
};


typedef TPM2B_DIGEST TPM2B_NONCE;


typedef TPM2B_DIGEST TPM2B_AUTH;


typedef TPM2B_DIGEST TPM2B_OPERAND;


typedef struct TPM2B_EVENT TPM2B_EVENT;
struct TPM2B_EVENT {
    UINT16 size;
    BYTE buffer[1024];
};


typedef struct TPM2B_MAX_BUFFER TPM2B_MAX_BUFFER;
struct TPM2B_MAX_BUFFER {
    UINT16 size;
    BYTE buffer[65000];
};


typedef struct TPM2B_MAX_NV_BUFFER TPM2B_MAX_NV_BUFFER;
struct TPM2B_MAX_NV_BUFFER {
    UINT16 size;
    BYTE buffer[2048];
};


typedef TPM2B_DIGEST TPM2B_TIMEOUT;


typedef struct TPM2B_IV TPM2B_IV;
struct TPM2B_IV {
    UINT16 size;
    BYTE buffer[16];
};


typedef union TPMU_NAME TPMU_NAME;
union TPMU_NAME {
    TPMT_HA digest;
    TPM2_HANDLE handle;
};


typedef struct TPM2B_NAME TPM2B_NAME;
struct TPM2B_NAME {
    UINT16 size;
    BYTE name[sizeof(TPMU_NAME)];
};


typedef struct TPMS_PCR_SELECT TPMS_PCR_SELECT;
struct TPMS_PCR_SELECT {
    UINT8 sizeofSelect;
    BYTE pcrSelect[((32 + 7) / 8)];
};


typedef struct TPMS_PCR_SELECTION TPMS_PCR_SELECTION;
struct TPMS_PCR_SELECTION {
    TPMI_ALG_HASH hash;
    UINT8 sizeofSelect;
    BYTE pcrSelect[((32 + 7) / 8)];
};


typedef struct TPMT_TK_CREATION TPMT_TK_CREATION;
struct TPMT_TK_CREATION {
    TPM2_ST tag;
    TPMI_RH_HIERARCHY hierarchy;
    TPM2B_DIGEST digest;
};


typedef struct TPMT_TK_VERIFIED TPMT_TK_VERIFIED;
struct TPMT_TK_VERIFIED {
    TPM2_ST tag;
    TPMI_RH_HIERARCHY hierarchy;
    TPM2B_DIGEST digest;
};


typedef struct TPMT_TK_AUTH TPMT_TK_AUTH;
struct TPMT_TK_AUTH {
    TPM2_ST tag;
    TPMI_RH_HIERARCHY hierarchy;
    TPM2B_DIGEST digest;
};


typedef struct TPMT_TK_HASHCHECK TPMT_TK_HASHCHECK;
struct TPMT_TK_HASHCHECK {
    TPM2_ST tag;
    TPMI_RH_HIERARCHY hierarchy;
    TPM2B_DIGEST digest;
};


typedef struct TPMS_ALG_PROPERTY TPMS_ALG_PROPERTY;
struct TPMS_ALG_PROPERTY {
    TPM2_ALG_ID alg;
    TPMA_ALGORITHM algProperties;
};


typedef struct TPMS_TAGGED_PROPERTY TPMS_TAGGED_PROPERTY;
struct TPMS_TAGGED_PROPERTY {
    TPM2_PT property;
    UINT32 value;
};


typedef struct TPMS_TAGGED_PCR_SELECT TPMS_TAGGED_PCR_SELECT;
struct TPMS_TAGGED_PCR_SELECT {
    TPM2_PT_PCR tag;
    UINT8 sizeofSelect;
    BYTE pcrSelect[((32 + 7) / 8)];
};


typedef struct TPMS_TAGGED_POLICY TPMS_TAGGED_POLICY;
struct TPMS_TAGGED_POLICY {
    TPM2_HANDLE handle;
    TPMT_HA policyHash;
};


typedef struct TPMS_ACT_DATA TPMS_ACT_DATA;
struct TPMS_ACT_DATA {
    TPM2_HANDLE handle;
    UINT32 timeout;
    TPMA_ACT attributes;
};


typedef struct TPML_CC TPML_CC;
struct TPML_CC {
    UINT32 count;
    TPM2_CC commandCodes[256];


};


typedef struct TPML_CCA TPML_CCA;
struct TPML_CCA {
    UINT32 count;
    TPMA_CC commandAttributes[256];
};


typedef struct TPML_ALG TPML_ALG;
struct TPML_ALG {
    UINT32 count;
    TPM2_ALG_ID
    algorithms[128];


};


typedef struct TPML_HANDLE TPML_HANDLE;
struct TPML_HANDLE {
    UINT32 count;
    TPM2_HANDLE handle[((1024 - sizeof(TPM2_CAP) - sizeof(UINT32)) / sizeof(TPM2_HANDLE))];
};


typedef struct TPML_DIGEST TPML_DIGEST;
struct TPML_DIGEST {
    UINT32 count;
    TPM2B_DIGEST
    digests[8];


};


typedef struct TPML_DIGEST_VALUES TPML_DIGEST_VALUES;
struct TPML_DIGEST_VALUES {
    UINT32 count;
    TPMT_HA digests[16];
};


typedef struct TPML_PCR_SELECTION TPML_PCR_SELECTION;
struct TPML_PCR_SELECTION {
    UINT32 count;
    TPMS_PCR_SELECTION pcrSelections[16];
};


typedef struct TPML_ALG_PROPERTY TPML_ALG_PROPERTY;
struct TPML_ALG_PROPERTY {
    UINT32 count;
    TPMS_ALG_PROPERTY algProperties[((1024 - sizeof(TPM2_CAP) - sizeof(UINT32)) / sizeof(TPMS_ALG_PROPERTY))];
};


typedef struct TPML_TAGGED_TPM_PROPERTY TPML_TAGGED_TPM_PROPERTY;
struct TPML_TAGGED_TPM_PROPERTY {
    UINT32 count;
    TPMS_TAGGED_PROPERTY tpmProperty[((1024 - sizeof(TPM2_CAP) - sizeof(UINT32)) / sizeof(TPMS_TAGGED_PROPERTY))];
};


typedef struct TPML_TAGGED_PCR_PROPERTY TPML_TAGGED_PCR_PROPERTY;
struct TPML_TAGGED_PCR_PROPERTY {
    UINT32 count;
    TPMS_TAGGED_PCR_SELECT pcrProperty[((1024 - sizeof(TPM2_CAP) - sizeof(UINT32)) / sizeof(TPMS_TAGGED_PCR_SELECT))];
};


typedef struct TPML_ECC_CURVE TPML_ECC_CURVE;
struct TPML_ECC_CURVE {
    UINT32 count;
    TPM2_ECC_CURVE eccCurves[((1024 - sizeof(TPM2_CAP) - sizeof(UINT32)) / sizeof(TPM2_ECC_CURVE))];
};


typedef struct TPML_TAGGED_POLICY TPML_TAGGED_POLICY;
struct TPML_TAGGED_POLICY {
    UINT32 count;
    TPMS_TAGGED_POLICY policies[((1024 - sizeof(TPM2_CAP) - sizeof(UINT32)) / sizeof(TPMS_TAGGED_POLICY))];
};


typedef struct TPML_ACT_DATA TPML_ACT_DATA;
struct TPML_ACT_DATA {
    UINT32 count;
    TPMS_ACT_DATA actData[((1024 - sizeof(TPM2_CAP) - sizeof(UINT32)) / sizeof(TPMS_ACT_DATA))];
};



typedef struct TPM2B_MAX_CAP_BUFFER TPM2B_MAX_CAP_BUFFER;
struct TPM2B_MAX_CAP_BUFFER {
    UINT16 size;
    BYTE buffer[1024];
};


typedef union TPMU_CAPABILITIES TPMU_CAPABILITIES;
union TPMU_CAPABILITIES {
    TPML_ALG_PROPERTY algorithms;
    TPML_HANDLE handles;
    TPML_CCA command;
    TPML_CC ppCommands;
    TPML_CC auditCommands;
    TPML_PCR_SELECTION assignedPCR;
    TPML_TAGGED_TPM_PROPERTY tpmProperties;
    TPML_TAGGED_PCR_PROPERTY pcrProperties;
    TPML_ECC_CURVE eccCurves;
    TPML_TAGGED_POLICY authPolicies;
    TPML_ACT_DATA actData;
    TPM2B_MAX_CAP_BUFFER vendor;
};


typedef struct TPMS_CAPABILITY_DATA TPMS_CAPABILITY_DATA;
struct TPMS_CAPABILITY_DATA {
    TPM2_CAP capability;
    TPMU_CAPABILITIES data;
};


typedef struct TPMS_CLOCK_INFO TPMS_CLOCK_INFO;
struct TPMS_CLOCK_INFO {
    UINT64 clock;





    UINT32 resetCount;
    UINT32 restartCount;

    TPMI_YES_NO safe;

};


typedef struct TPMS_TIME_INFO TPMS_TIME_INFO;
struct TPMS_TIME_INFO {
    UINT64 time;

    TPMS_CLOCK_INFO clockInfo;
};


typedef struct TPMS_TIME_ATTEST_INFO TPMS_TIME_ATTEST_INFO;
struct TPMS_TIME_ATTEST_INFO {
    TPMS_TIME_INFO time;
    UINT64 firmwareVersion;

};


typedef struct TPMS_CERTIFY_INFO TPMS_CERTIFY_INFO;
struct TPMS_CERTIFY_INFO {
    TPM2B_NAME name;
    TPM2B_NAME qualifiedName;
};


typedef struct TPMS_QUOTE_INFO TPMS_QUOTE_INFO;
struct TPMS_QUOTE_INFO {
    TPML_PCR_SELECTION pcrSelect;
    TPM2B_DIGEST pcrDigest;
};


typedef struct TPMS_COMMAND_AUDIT_INFO TPMS_COMMAND_AUDIT_INFO;
struct TPMS_COMMAND_AUDIT_INFO {
    UINT64 auditCounter;
    TPM2_ALG_ID digestAlg;
    TPM2B_DIGEST auditDigest;
    TPM2B_DIGEST commandDigest;
};


typedef struct TPMS_SESSION_AUDIT_INFO TPMS_SESSION_AUDIT_INFO;
struct TPMS_SESSION_AUDIT_INFO {
    TPMI_YES_NO
    exclusiveSession;


    TPM2B_DIGEST sessionDigest;
};


typedef struct TPMS_CREATION_INFO TPMS_CREATION_INFO;
struct TPMS_CREATION_INFO {
    TPM2B_NAME objectName;
    TPM2B_DIGEST creationHash;
};


typedef struct TPMS_NV_CERTIFY_INFO TPMS_NV_CERTIFY_INFO;
struct TPMS_NV_CERTIFY_INFO {
    TPM2B_NAME indexName;
    UINT16 offset;
    TPM2B_MAX_NV_BUFFER nvContents;
};


typedef struct TPMS_NV_DIGEST_CERTIFY_INFO TPMS_NV_DIGEST_CERTIFY_INFO;
struct TPMS_NV_DIGEST_CERTIFY_INFO {
    TPM2B_NAME indexName;
    TPM2B_DIGEST nvDigest;
};


typedef TPM2_ST TPMI_ST_ATTEST;


typedef union TPMU_ATTEST TPMU_ATTEST;
union TPMU_ATTEST {
    TPMS_CERTIFY_INFO certify;
    TPMS_CREATION_INFO creation;
    TPMS_QUOTE_INFO quote;
    TPMS_COMMAND_AUDIT_INFO commandAudit;
    TPMS_SESSION_AUDIT_INFO sessionAudit;
    TPMS_TIME_ATTEST_INFO time;
    TPMS_NV_CERTIFY_INFO nv;
};


typedef struct TPMS_ATTEST TPMS_ATTEST;
struct TPMS_ATTEST {
    TPM2_GENERATED magic;

    TPMI_ST_ATTEST type;
    TPM2B_NAME qualifiedSigner;
    TPM2B_DATA extraData;



    TPMS_CLOCK_INFO clockInfo;
    UINT64 firmwareVersion;

    TPMU_ATTEST attested;
};


typedef struct TPM2B_ATTEST TPM2B_ATTEST;
struct TPM2B_ATTEST {
    UINT16 size;
    BYTE attestationData[sizeof(TPMS_ATTEST)];
};


typedef struct TPMS_AUTH_COMMAND TPMS_AUTH_COMMAND;
struct TPMS_AUTH_COMMAND {
    TPMI_SH_AUTH_SESSION sessionHandle;
    TPM2B_NONCE nonce;
    TPMA_SESSION sessionAttributes;
    TPM2B_AUTH hmac;
};


typedef struct TPMS_AUTH_RESPONSE TPMS_AUTH_RESPONSE;
struct TPMS_AUTH_RESPONSE {
    TPM2B_NONCE nonce;
    TPMA_SESSION sessionAttributes;
    TPM2B_AUTH hmac;
};


typedef TPM2_KEY_BITS TPMI_AES_KEY_BITS;


typedef TPM2_KEY_BITS TPMI_SM4_KEY_BITS;


typedef TPM2_KEY_BITS TPMI_CAMELLIA_KEY_BITS;


typedef union TPMU_SYM_KEY_BITS TPMU_SYM_KEY_BITS;
union TPMU_SYM_KEY_BITS {
    TPMI_AES_KEY_BITS aes;
    TPMI_SM4_KEY_BITS sm4;
    TPMI_CAMELLIA_KEY_BITS camellia;
    TPM2_KEY_BITS sym;
    TPMI_ALG_HASH exclusiveOr;
    TPMS_EMPTY null;
};


typedef union TPMU_SYM_MODE TPMU_SYM_MODE;
union TPMU_SYM_MODE {
    TPMI_ALG_SYM_MODE aes;
    TPMI_ALG_SYM_MODE sm4;
    TPMI_ALG_SYM_MODE camellia;
    TPMI_ALG_SYM_MODE sym;
    TPMS_EMPTY exclusiveOr;
    TPMS_EMPTY null;
};


typedef struct TPMT_SYM_DEF TPMT_SYM_DEF;
struct TPMT_SYM_DEF {
    TPMI_ALG_SYM algorithm;
    TPMU_SYM_KEY_BITS keyBits;
    TPMU_SYM_MODE mode;
};


typedef struct TPMT_SYM_DEF_OBJECT TPMT_SYM_DEF_OBJECT;
struct TPMT_SYM_DEF_OBJECT {
    TPMI_ALG_SYM_OBJECT algorithm;
    TPMU_SYM_KEY_BITS keyBits;
    TPMU_SYM_MODE mode;
};


typedef struct TPM2B_SYM_KEY TPM2B_SYM_KEY;
struct TPM2B_SYM_KEY {
    UINT16 size;
    BYTE buffer[32];
};


typedef struct TPMS_SYMCIPHER_PARMS TPMS_SYMCIPHER_PARMS;
struct TPMS_SYMCIPHER_PARMS {
    TPMT_SYM_DEF_OBJECT sym;
};


typedef struct TPM2B_LABEL TPM2B_LABEL;
struct TPM2B_LABEL {
    UINT16 size;
    BYTE buffer[32];
};


typedef struct TPMS_DERIVE TPMS_DERIVE;
struct TPMS_DERIVE {
    TPM2B_LABEL label;
    TPM2B_LABEL context;
};


typedef struct TPM2B_DERIVE TPM2B_DERIVE;
struct TPM2B_DERIVE {
    UINT16 size;
    BYTE buffer[sizeof(TPMS_DERIVE)];
};


typedef union TPMU_SENSITIVE_CREATE TPMU_SENSITIVE_CREATE;
union TPMU_SENSITIVE_CREATE {
    BYTE create[256];
    TPMS_DERIVE derive;
};


typedef struct TPM2B_SENSITIVE_DATA TPM2B_SENSITIVE_DATA;
struct TPM2B_SENSITIVE_DATA {
    UINT16 size;
    BYTE buffer[sizeof(TPMU_SENSITIVE_CREATE)];
};


typedef struct TPMS_SENSITIVE_CREATE TPMS_SENSITIVE_CREATE;
struct TPMS_SENSITIVE_CREATE {
    TPM2B_AUTH userAuth;
    TPM2B_SENSITIVE_DATA data;
};


typedef struct TPM2B_SENSITIVE_CREATE TPM2B_SENSITIVE_CREATE;
struct TPM2B_SENSITIVE_CREATE {
    UINT16 size;
    TPMS_SENSITIVE_CREATE sensitive;
};


typedef struct TPMS_SCHEME_HASH TPMS_SCHEME_HASH;
struct TPMS_SCHEME_HASH {
    TPMI_ALG_HASH hashAlg;
};


typedef struct TPMS_SCHEME_ECDAA TPMS_SCHEME_ECDAA;
struct TPMS_SCHEME_ECDAA {
    TPMI_ALG_HASH hashAlg;
    UINT16 count;
};


typedef TPM2_ALG_ID TPMI_ALG_KEYEDHASH_SCHEME;


typedef TPMS_SCHEME_HASH TPMS_SCHEME_HMAC;


typedef struct TPMS_SCHEME_XOR TPMS_SCHEME_XOR;
struct TPMS_SCHEME_XOR {
    TPMI_ALG_HASH hashAlg;
    TPMI_ALG_KDF kdf;
};


typedef union TPMU_SCHEME_KEYEDHASH TPMU_SCHEME_KEYEDHASH;
union TPMU_SCHEME_KEYEDHASH {
    TPMS_SCHEME_HMAC hmac;
    TPMS_SCHEME_XOR exclusiveOr;
    TPMS_EMPTY null;
};


typedef struct TPMT_KEYEDHASH_SCHEME TPMT_KEYEDHASH_SCHEME;
struct TPMT_KEYEDHASH_SCHEME {
    TPMI_ALG_KEYEDHASH_SCHEME scheme;
    TPMU_SCHEME_KEYEDHASH details;
};


typedef TPMS_SCHEME_HASH TPMS_SIG_SCHEME_RSASSA;
typedef TPMS_SCHEME_HASH TPMS_SIG_SCHEME_RSAPSS;


typedef TPMS_SCHEME_HASH TPMS_SIG_SCHEME_ECDSA;
typedef TPMS_SCHEME_HASH TPMS_SIG_SCHEME_SM2;
typedef TPMS_SCHEME_HASH TPMS_SIG_SCHEME_ECSCHNORR;
typedef TPMS_SCHEME_ECDAA TPMS_SIG_SCHEME_ECDAA;


typedef union TPMU_SIG_SCHEME TPMU_SIG_SCHEME;
union TPMU_SIG_SCHEME {
    TPMS_SIG_SCHEME_RSASSA rsassa;
    TPMS_SIG_SCHEME_RSAPSS rsapss;
    TPMS_SIG_SCHEME_ECDSA ecdsa;
    TPMS_SIG_SCHEME_ECDAA ecdaa;
    TPMS_SIG_SCHEME_SM2 sm2;
    TPMS_SIG_SCHEME_ECSCHNORR ecschnorr;
    TPMS_SCHEME_HMAC hmac;
    TPMS_SCHEME_HASH any;
    TPMS_EMPTY null;
};


typedef struct TPMT_SIG_SCHEME TPMT_SIG_SCHEME;
struct TPMT_SIG_SCHEME {
    TPMI_ALG_SIG_SCHEME scheme;
    TPMU_SIG_SCHEME details;
};


typedef TPMS_SCHEME_HASH TPMS_ENC_SCHEME_OAEP;
typedef TPMS_EMPTY TPMS_ENC_SCHEME_RSAES;


typedef TPMS_SCHEME_HASH TPMS_KEY_SCHEME_ECDH;
typedef TPMS_SCHEME_HASH TPMS_KEY_SCHEME_ECMQV;


typedef TPMS_SCHEME_HASH TPMS_SCHEME_MGF1;
typedef TPMS_SCHEME_HASH
    TPMS_SCHEME_KDF1_SP800_56A;
typedef TPMS_SCHEME_HASH TPMS_SCHEME_KDF2;
typedef TPMS_SCHEME_HASH
    TPMS_SCHEME_KDF1_SP800_108;


typedef union TPMU_KDF_SCHEME TPMU_KDF_SCHEME;
union TPMU_KDF_SCHEME {
    TPMS_SCHEME_MGF1 mgf1;
    TPMS_SCHEME_KDF1_SP800_56A kdf1_sp800_56a;
    TPMS_SCHEME_KDF2 kdf2;
    TPMS_SCHEME_KDF1_SP800_108 kdf1_sp800_108;
    TPMS_EMPTY null;
};


typedef struct TPMT_KDF_SCHEME TPMT_KDF_SCHEME;
struct TPMT_KDF_SCHEME {
    TPMI_ALG_KDF scheme;
    TPMU_KDF_SCHEME details;
};


typedef TPM2_ALG_ID TPMI_ALG_ASYM_SCHEME;


typedef union TPMU_ASYM_SCHEME TPMU_ASYM_SCHEME;
union TPMU_ASYM_SCHEME {
    TPMS_KEY_SCHEME_ECDH ecdh;
    TPMS_KEY_SCHEME_ECMQV ecmqv;
    TPMS_SIG_SCHEME_RSASSA rsassa;
    TPMS_SIG_SCHEME_RSAPSS rsapss;
    TPMS_SIG_SCHEME_ECDSA ecdsa;
    TPMS_SIG_SCHEME_ECDAA ecdaa;
    TPMS_SIG_SCHEME_SM2 sm2;
    TPMS_SIG_SCHEME_ECSCHNORR ecschnorr;
    TPMS_ENC_SCHEME_RSAES rsaes;
    TPMS_ENC_SCHEME_OAEP oaep;
    TPMS_SCHEME_HASH anySig;
    TPMS_EMPTY null;
};


typedef struct TPMT_ASYM_SCHEME TPMT_ASYM_SCHEME;
struct TPMT_ASYM_SCHEME {
    TPMI_ALG_ASYM_SCHEME scheme;
    TPMU_ASYM_SCHEME details;
};


typedef TPM2_ALG_ID TPMI_ALG_RSA_SCHEME;


typedef struct TPMT_RSA_SCHEME TPMT_RSA_SCHEME;
struct TPMT_RSA_SCHEME {
    TPMI_ALG_RSA_SCHEME scheme;
    TPMU_ASYM_SCHEME details;
};


typedef TPM2_ALG_ID TPMI_ALG_RSA_DECRYPT;


typedef struct TPMT_RSA_DECRYPT TPMT_RSA_DECRYPT;
struct TPMT_RSA_DECRYPT {
    TPMI_ALG_RSA_DECRYPT scheme;
    TPMU_ASYM_SCHEME details;
};


typedef struct TPM2B_PUBLIC_KEY_RSA TPM2B_PUBLIC_KEY_RSA;
struct TPM2B_PUBLIC_KEY_RSA {
    UINT16 size;
    BYTE buffer[512];
};


typedef TPM2_KEY_BITS TPMI_RSA_KEY_BITS;


typedef struct TPM2B_PRIVATE_KEY_RSA TPM2B_PRIVATE_KEY_RSA;
struct TPM2B_PRIVATE_KEY_RSA {
    UINT16 size;
    BYTE buffer[512 / 2 * 5];
};


typedef struct TPM2B_ECC_PARAMETER TPM2B_ECC_PARAMETER;
struct TPM2B_ECC_PARAMETER {
    UINT16 size;
    BYTE buffer[128];
};


typedef struct TPMS_ECC_POINT TPMS_ECC_POINT;
struct TPMS_ECC_POINT {
    TPM2B_ECC_PARAMETER x;
    TPM2B_ECC_PARAMETER y;
};


typedef struct TPM2B_ECC_POINT TPM2B_ECC_POINT;
struct TPM2B_ECC_POINT {
    UINT16 size;
    TPMS_ECC_POINT point;
};


typedef TPM2_ALG_ID TPMI_ALG_ECC_SCHEME;


typedef TPM2_ECC_CURVE TPMI_ECC_CURVE;


typedef struct TPMT_ECC_SCHEME TPMT_ECC_SCHEME;
struct TPMT_ECC_SCHEME {
    TPMI_ALG_ECC_SCHEME scheme;
    TPMU_ASYM_SCHEME details;
};


typedef struct TPMS_ALGORITHM_DETAIL_ECC TPMS_ALGORITHM_DETAIL_ECC;
struct TPMS_ALGORITHM_DETAIL_ECC {
    TPM2_ECC_CURVE curveID;
    UINT16 keySize;
    TPMT_KDF_SCHEME kdf;

    TPMT_ECC_SCHEME sign;

    TPM2B_ECC_PARAMETER p;
    TPM2B_ECC_PARAMETER a;
    TPM2B_ECC_PARAMETER b;
    TPM2B_ECC_PARAMETER gX;
    TPM2B_ECC_PARAMETER gY;
    TPM2B_ECC_PARAMETER n;
    TPM2B_ECC_PARAMETER h;
};


typedef struct TPMS_SIGNATURE_RSA TPMS_SIGNATURE_RSA;
struct TPMS_SIGNATURE_RSA {
    TPMI_ALG_HASH
    hash;
    TPM2B_PUBLIC_KEY_RSA sig;
};


typedef TPMS_SIGNATURE_RSA TPMS_SIGNATURE_RSASSA;
typedef TPMS_SIGNATURE_RSA TPMS_SIGNATURE_RSAPSS;


typedef struct TPMS_SIGNATURE_ECC TPMS_SIGNATURE_ECC;
struct TPMS_SIGNATURE_ECC {
    TPMI_ALG_HASH
    hash;
    TPM2B_ECC_PARAMETER signatureR;
    TPM2B_ECC_PARAMETER signatureS;
};


typedef TPMS_SIGNATURE_ECC TPMS_SIGNATURE_ECDSA;
typedef TPMS_SIGNATURE_ECC TPMS_SIGNATURE_ECDAA;
typedef TPMS_SIGNATURE_ECC TPMS_SIGNATURE_SM2;
typedef TPMS_SIGNATURE_ECC TPMS_SIGNATURE_ECSCHNORR;


typedef union TPMU_SIGNATURE TPMU_SIGNATURE;
union TPMU_SIGNATURE {
    TPMS_SIGNATURE_RSASSA rsassa;
    TPMS_SIGNATURE_RSAPSS rsapss;
    TPMS_SIGNATURE_ECDSA ecdsa;
    TPMS_SIGNATURE_ECDAA ecdaa;
    TPMS_SIGNATURE_SM2 sm2;
    TPMS_SIGNATURE_ECSCHNORR ecschnorr;
    TPMT_HA hmac;
    TPMS_SCHEME_HASH any;
    TPMS_EMPTY null;
};


typedef struct TPMT_SIGNATURE TPMT_SIGNATURE;
struct TPMT_SIGNATURE {
    TPMI_ALG_SIG_SCHEME sigAlg;
    TPMU_SIGNATURE signature;
};


typedef union TPMU_ENCRYPTED_SECRET TPMU_ENCRYPTED_SECRET;
union TPMU_ENCRYPTED_SECRET {
    BYTE ecc[sizeof(TPMS_ECC_POINT)];
    BYTE rsa[512];
    BYTE symmetric[sizeof(TPM2B_DIGEST)];
    BYTE keyedHash[sizeof(TPM2B_DIGEST)];

};


typedef struct TPM2B_ENCRYPTED_SECRET TPM2B_ENCRYPTED_SECRET;
struct TPM2B_ENCRYPTED_SECRET {
    UINT16 size;
    BYTE secret[sizeof(TPMU_ENCRYPTED_SECRET)];
};


typedef TPM2_ALG_ID TPMI_ALG_PUBLIC;


typedef union TPMU_PUBLIC_ID TPMU_PUBLIC_ID;
union TPMU_PUBLIC_ID {
    TPM2B_DIGEST keyedHash;
    TPM2B_DIGEST sym;
    TPM2B_PUBLIC_KEY_RSA rsa;

    TPMS_ECC_POINT ecc;
    TPM2B_MAX_BUFFER kem;
    TPMS_DERIVE derive;

};


typedef struct TPMS_KEYEDHASH_PARMS TPMS_KEYEDHASH_PARMS;
struct TPMS_KEYEDHASH_PARMS {
    TPMT_KEYEDHASH_SCHEME
    scheme;


};


typedef struct TPMS_ASYM_PARMS TPMS_ASYM_PARMS;
struct TPMS_ASYM_PARMS {
    TPMT_SYM_DEF_OBJECT
    symmetric;


    TPMT_ASYM_SCHEME
    scheme;


};


typedef struct TPMS_RSA_PARMS TPMS_RSA_PARMS;
struct TPMS_RSA_PARMS {
    TPMT_SYM_DEF_OBJECT
    symmetric;


    TPMT_RSA_SCHEME
    scheme;





    TPMI_RSA_KEY_BITS keyBits;
    UINT32 exponent;

};


typedef struct TPMS_ECC_PARMS TPMS_ECC_PARMS;
struct TPMS_ECC_PARMS {
    TPMT_SYM_DEF_OBJECT
    symmetric;


    TPMT_ECC_SCHEME
    scheme;




    TPMI_ECC_CURVE curveID;
    TPMT_KDF_SCHEME
    kdf;



};


typedef union TPMU_PUBLIC_PARMS TPMU_PUBLIC_PARMS;
union TPMU_PUBLIC_PARMS {
    TPMS_KEYEDHASH_PARMS keyedHashDetail;
    TPMS_SYMCIPHER_PARMS symDetail;
    TPMS_RSA_PARMS rsaDetail;
    TPMS_ECC_PARMS eccDetail;
    TPMS_ASYM_PARMS asymDetail;
};


typedef struct TPMT_PUBLIC_PARMS TPMT_PUBLIC_PARMS;
struct TPMT_PUBLIC_PARMS {
    TPMI_ALG_PUBLIC type;
    TPMU_PUBLIC_PARMS parameters;
};


typedef struct TPMT_PUBLIC TPMT_PUBLIC;
struct TPMT_PUBLIC {
    TPMI_ALG_PUBLIC type;
    TPMI_ALG_HASH nameAlg;


    TPMA_OBJECT objectAttributes;

    TPM2B_DIGEST authPolicy;


    TPMU_PUBLIC_PARMS parameters;
    TPMU_PUBLIC_ID unique;

};


typedef struct TPM2B_PUBLIC TPM2B_PUBLIC;
struct TPM2B_PUBLIC {
    UINT16 size;
    TPMT_PUBLIC publicArea;
};


typedef struct TPM2B_TEMPLATE TPM2B_TEMPLATE;
struct TPM2B_TEMPLATE {
    UINT16 size;
    BYTE buffer[sizeof(TPMT_PUBLIC)];
};


typedef struct TPM2B_PRIVATE_VENDOR_SPECIFIC TPM2B_PRIVATE_VENDOR_SPECIFIC;
struct TPM2B_PRIVATE_VENDOR_SPECIFIC {
    UINT16 size;
    BYTE buffer[65536];
};


typedef union TPMU_SENSITIVE_COMPOSITE TPMU_SENSITIVE_COMPOSITE;
union TPMU_SENSITIVE_COMPOSITE {
    TPM2B_PRIVATE_KEY_RSA rsa;
    TPM2B_ECC_PARAMETER ecc;
    TPM2B_SENSITIVE_DATA bits;
    TPM2B_SYM_KEY sym;
    TPM2B_PRIVATE_VENDOR_SPECIFIC any;
};


typedef struct TPMT_SENSITIVE TPMT_SENSITIVE;
struct TPMT_SENSITIVE {
    TPMI_ALG_PUBLIC sensitiveType;

    TPM2B_AUTH authValue;


    TPM2B_DIGEST seedValue;


    TPMU_SENSITIVE_COMPOSITE sensitive;
};


typedef struct TPM2B_SENSITIVE TPM2B_SENSITIVE;
struct TPM2B_SENSITIVE {
    UINT16 size;
    TPMT_SENSITIVE sensitiveArea;
};


typedef struct _PRIVATE _PRIVATE;
struct _PRIVATE {
    TPM2B_DIGEST integrityOuter;
    TPM2B_DIGEST integrityInner;
    TPM2B_SENSITIVE sensitive;
};


typedef struct TPM2B_PRIVATE TPM2B_PRIVATE;
struct TPM2B_PRIVATE {
    UINT16 size;
    BYTE buffer[sizeof(_PRIVATE)];
};


typedef struct TPMS_ID_OBJECT TPMS_ID_OBJECT;
struct TPMS_ID_OBJECT {
    TPM2B_DIGEST integrityHMAC;
    TPM2B_DIGEST
    encIdentity;




};


typedef struct TPM2B_ID_OBJECT TPM2B_ID_OBJECT;
struct TPM2B_ID_OBJECT {
    UINT16 size;
    BYTE credential[sizeof(TPMS_ID_OBJECT)];
};


typedef uint32_t TPM2_NV_INDEX;
# 2738 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tpm2_types.h"
typedef UINT8 TPM2_NT;
# 2761 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tpm2_types.h"
typedef struct TPMS_NV_PIN_COUNTER_PARAMETERS TPMS_NV_PIN_COUNTER_PARAMETERS;
struct TPMS_NV_PIN_COUNTER_PARAMETERS {
    UINT32 pinCount;



    UINT32 pinLimit;

};


typedef uint32_t TPMA_NV;
# 2877 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tpm2_types.h"
typedef struct TPMS_NV_PUBLIC TPMS_NV_PUBLIC;
struct TPMS_NV_PUBLIC {
    TPMI_RH_NV_INDEX nvIndex;
    TPMI_ALG_HASH
    nameAlg;

    TPMA_NV attributes;
    TPM2B_DIGEST authPolicy;


    UINT16 dataSize;

};


typedef struct TPM2B_NV_PUBLIC TPM2B_NV_PUBLIC;
struct TPM2B_NV_PUBLIC {
    UINT16 size;
    TPMS_NV_PUBLIC nvPublic;
};


typedef struct TPM2B_CONTEXT_SENSITIVE TPM2B_CONTEXT_SENSITIVE;
struct TPM2B_CONTEXT_SENSITIVE {
    UINT16 size;
    BYTE buffer[131072];
};


typedef struct TPMS_CONTEXT_DATA TPMS_CONTEXT_DATA;
struct TPMS_CONTEXT_DATA {
    TPM2B_DIGEST integrity;
    TPM2B_CONTEXT_SENSITIVE encrypted;
};


typedef struct TPM2B_CONTEXT_DATA TPM2B_CONTEXT_DATA;
struct TPM2B_CONTEXT_DATA {
    UINT32 size;
    BYTE buffer[sizeof(TPMS_CONTEXT_DATA)];
};


typedef struct TPMS_CONTEXT TPMS_CONTEXT;
struct TPMS_CONTEXT {
    UINT64 sequence;

    TPMI_DH_CONTEXT savedHandle;

    TPMI_RH_HIERARCHY hierarchy;
    TPM2B_CONTEXT_DATA contextBlob;
};


typedef struct TPMS_CREATION_DATA TPMS_CREATION_DATA;
struct TPMS_CREATION_DATA {
    TPML_PCR_SELECTION pcrSelect;
    TPM2B_DIGEST pcrDigest;


    TPMA_LOCALITY locality;
    TPM2_ALG_ID parentNameAlg;
    TPM2B_NAME
    parentName;


    TPM2B_NAME parentQualifiedName;

    TPM2B_DATA outsideInfo;


};


typedef struct TPM2B_CREATION_DATA TPM2B_CREATION_DATA;
struct TPM2B_CREATION_DATA {
    UINT16 size;
    TPMS_CREATION_DATA creationData;
};

typedef UINT32 TPM_AT;
# 2971 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tpm2_types.h"
typedef UINT32 TPM_EA;






typedef struct TPMS_AC_OUTPUT TPMS_AC_OUTPUT;
struct TPMS_AC_OUTPUT {
    TPM_AT tag;
    UINT32 data;
};


typedef struct TPML_AC_CAPABILITIES TPML_AC_CAPABILITIES;
struct TPML_AC_CAPABILITIES {
    UINT32 count;
    TPMS_AC_OUTPUT acCapabilities[(1024 / sizeof(TPMS_AC_OUTPUT))];
};



typedef struct TPML_INTEL_PTT_PROPERTY TPML_INTEL_PTT_PROPERTY;
struct TPML_INTEL_PTT_PROPERTY {
    UINT32 count;
    UINT32 property[(1024 / sizeof(UINT32))];
};
# 13 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_mu.h" 2
# 23 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_mu.h"
TSS2_RC
Tss2_MU_INT8_Marshal(INT8 src, uint8_t buffer[], size_t buffer_size, size_t *offset);

TSS2_RC
Tss2_MU_INT8_Unmarshal(uint8_t const buffer[], size_t buffer_size, size_t *offset, INT8 *dest);

TSS2_RC
Tss2_MU_INT16_Marshal(INT16 src, uint8_t buffer[], size_t buffer_size, size_t *offset);

TSS2_RC
Tss2_MU_INT16_Unmarshal(uint8_t const buffer[], size_t buffer_size, size_t *offset, INT16 *dest);

TSS2_RC
Tss2_MU_INT32_Marshal(INT32 src, uint8_t buffer[], size_t buffer_size, size_t *offset);

TSS2_RC
Tss2_MU_INT32_Unmarshal(uint8_t const buffer[], size_t buffer_size, size_t *offset, INT32 *dest);

TSS2_RC
Tss2_MU_INT64_Marshal(INT64 src, uint8_t buffer[], size_t buffer_size, size_t *offset);

TSS2_RC
Tss2_MU_INT64_Unmarshal(uint8_t const buffer[], size_t buffer_size, size_t *offset, INT64 *dest);

TSS2_RC
Tss2_MU_UINT8_Marshal(UINT8 src, uint8_t buffer[], size_t buffer_size, size_t *offset);

TSS2_RC
Tss2_MU_UINT8_Unmarshal(uint8_t const buffer[], size_t buffer_size, size_t *offset, UINT8 *dest);

TSS2_RC
Tss2_MU_UINT16_Marshal(UINT16 src, uint8_t buffer[], size_t buffer_size, size_t *offset);

TSS2_RC
Tss2_MU_UINT16_Unmarshal(uint8_t const buffer[], size_t buffer_size, size_t *offset, UINT16 *dest);

TSS2_RC
Tss2_MU_UINT32_Marshal(UINT32 src, uint8_t buffer[], size_t buffer_size, size_t *offset);

TSS2_RC
Tss2_MU_UINT32_Unmarshal(uint8_t const buffer[], size_t buffer_size, size_t *offset, UINT32 *dest);

TSS2_RC
Tss2_MU_UINT64_Marshal(UINT64 src, uint8_t buffer[], size_t buffer_size, size_t *offset);

TSS2_RC
Tss2_MU_UINT64_Unmarshal(uint8_t const buffer[], size_t buffer_size, size_t *offset, UINT64 *dest);

TSS2_RC
Tss2_MU_TPM2_CC_Marshal(TPM2_CC src, uint8_t buffer[], size_t buffer_size, size_t *offset);

TSS2_RC
Tss2_MU_TPM2_CC_Unmarshal(uint8_t const buffer[],
                          size_t buffer_size,
                          size_t *offset,
                          TPM2_CC *dest);

TSS2_RC
Tss2_MU_TPM2_ST_Marshal(TPM2_ST src, uint8_t buffer[], size_t buffer_size, size_t *offset);

TSS2_RC
Tss2_MU_TPM2_ST_Unmarshal(uint8_t const buffer[],
                          size_t buffer_size,
                          size_t *offset,
                          TPM2_ST *dest);

TSS2_RC
Tss2_MU_TPMA_ALGORITHM_Marshal(TPMA_ALGORITHM src,
                               uint8_t buffer[],
                               size_t buffer_size,
                               size_t *offset);

TSS2_RC
Tss2_MU_TPMA_ALGORITHM_Unmarshal(uint8_t const buffer[],
                                 size_t buffer_size,
                                 size_t *offset,
                                 TPMA_ALGORITHM *dest);

TSS2_RC
Tss2_MU_TPMA_CC_Marshal(TPMA_CC src, uint8_t buffer[], size_t buffer_size, size_t *offset);

TSS2_RC
Tss2_MU_TPMA_CC_Unmarshal(uint8_t const buffer[],
                          size_t buffer_size,
                          size_t *offset,
                          TPMA_CC *dest);

TSS2_RC
Tss2_MU_TPMA_LOCALITY_Marshal(TPMA_LOCALITY src,
                              uint8_t buffer[],
                              size_t buffer_size,
                              size_t *offset);

TSS2_RC
Tss2_MU_TPMA_LOCALITY_Unmarshal(uint8_t const buffer[],
                                size_t buffer_size,
                                size_t *offset,
                                TPMA_LOCALITY *dest);
TSS2_RC

Tss2_MU_TPMA_NV_Marshal(TPMA_NV src, uint8_t buffer[], size_t buffer_size, size_t *offset);

TSS2_RC
Tss2_MU_TPMA_NV_Unmarshal(uint8_t const buffer[],
                          size_t buffer_size,
                          size_t *offset,
                          TPMA_NV *dest);

TSS2_RC
Tss2_MU_TPMA_OBJECT_Marshal(TPMA_OBJECT src, uint8_t buffer[], size_t buffer_size, size_t *offset);

TSS2_RC
Tss2_MU_TPMA_OBJECT_Unmarshal(uint8_t const buffer[],
                              size_t buffer_size,
                              size_t *offset,
                              TPMA_OBJECT *dest);

TSS2_RC
Tss2_MU_TPMA_PERMANENT_Marshal(TPMA_PERMANENT src,
                               uint8_t buffer[],
                               size_t buffer_size,
                               size_t *offset);

TSS2_RC
Tss2_MU_TPMA_PERMANENT_Unmarshal(uint8_t const buffer[],
                                 size_t buffer_size,
                                 size_t *offset,
                                 TPMA_PERMANENT *dest);

TSS2_RC
Tss2_MU_TPMA_SESSION_Marshal(TPMA_SESSION src,
                             uint8_t buffer[],
                             size_t buffer_size,
                             size_t *offset);

TSS2_RC
Tss2_MU_TPMA_SESSION_Unmarshal(uint8_t const buffer[],
                               size_t buffer_size,
                               size_t *offset,
                               TPMA_SESSION *dest);

TSS2_RC
Tss2_MU_TPMA_STARTUP_CLEAR_Marshal(TPMA_STARTUP_CLEAR src,
                                   uint8_t buffer[],
                                   size_t buffer_size,
                                   size_t *offset);

TSS2_RC
Tss2_MU_TPMA_STARTUP_CLEAR_Unmarshal(uint8_t const buffer[],
                                     size_t buffer_size,
                                     size_t *offset,
                                     TPMA_STARTUP_CLEAR *dest);

TSS2_RC
Tss2_MU_TPM2B_DIGEST_Marshal(TPM2B_DIGEST const *src,
                             uint8_t buffer[],
                             size_t buffer_size,
                             size_t *offset);

TSS2_RC
Tss2_MU_TPM2B_DIGEST_Unmarshal(uint8_t const buffer[],
                               size_t buffer_size,
                               size_t *offset,
                               TPM2B_DIGEST *dest);

TSS2_RC
Tss2_MU_TPM2B_ATTEST_Marshal(TPM2B_ATTEST const *src,
                             uint8_t buffer[],
                             size_t buffer_size,
                             size_t *offset);

TSS2_RC
Tss2_MU_TPM2B_ATTEST_Unmarshal(uint8_t const buffer[],
                               size_t buffer_size,
                               size_t *offset,
                               TPM2B_ATTEST *dest);

TSS2_RC
Tss2_MU_TPM2B_NAME_Marshal(TPM2B_NAME const *src,
                           uint8_t buffer[],
                           size_t buffer_size,
                           size_t *offset);

TSS2_RC
Tss2_MU_TPM2B_NAME_Unmarshal(uint8_t const buffer[],
                             size_t buffer_size,
                             size_t *offset,
                             TPM2B_NAME *dest);

TSS2_RC
Tss2_MU_TPM2B_MAX_NV_BUFFER_Marshal(TPM2B_MAX_NV_BUFFER const *src,
                                    uint8_t buffer[],
                                    size_t buffer_size,
                                    size_t *offset);

TSS2_RC
Tss2_MU_TPM2B_MAX_NV_BUFFER_Unmarshal(uint8_t const buffer[],
                                      size_t buffer_size,
                                      size_t *offset,
                                      TPM2B_MAX_NV_BUFFER *dest);

TSS2_RC
Tss2_MU_TPM2B_SENSITIVE_DATA_Marshal(TPM2B_SENSITIVE_DATA const *src,
                                     uint8_t buffer[],
                                     size_t buffer_size,
                                     size_t *offset);

TSS2_RC
Tss2_MU_TPM2B_SENSITIVE_DATA_Unmarshal(uint8_t const buffer[],
                                       size_t buffer_size,
                                       size_t *offset,
                                       TPM2B_SENSITIVE_DATA *dest);

TSS2_RC
Tss2_MU_TPM2B_ECC_PARAMETER_Marshal(TPM2B_ECC_PARAMETER const *src,
                                    uint8_t buffer[],
                                    size_t buffer_size,
                                    size_t *offset);

TSS2_RC
Tss2_MU_TPM2B_ECC_PARAMETER_Unmarshal(uint8_t const buffer[],
                                      size_t buffer_size,
                                      size_t *offset,
                                      TPM2B_ECC_PARAMETER *dest);

TSS2_RC
Tss2_MU_TPM2B_PUBLIC_KEY_RSA_Marshal(TPM2B_PUBLIC_KEY_RSA const *src,
                                     uint8_t buffer[],
                                     size_t buffer_size,
                                     size_t *offset);

TSS2_RC
Tss2_MU_TPM2B_PUBLIC_KEY_RSA_Unmarshal(uint8_t const buffer[],
                                       size_t buffer_size,
                                       size_t *offset,
                                       TPM2B_PUBLIC_KEY_RSA *dest);

TSS2_RC
Tss2_MU_TPM2B_PRIVATE_KEY_RSA_Marshal(TPM2B_PRIVATE_KEY_RSA const *src,
                                      uint8_t buffer[],
                                      size_t buffer_size,
                                      size_t *offset);

TSS2_RC
Tss2_MU_TPM2B_PRIVATE_KEY_RSA_Unmarshal(uint8_t const buffer[],
                                        size_t buffer_size,
                                        size_t *offset,
                                        TPM2B_PRIVATE_KEY_RSA *dest);

TSS2_RC
Tss2_MU_TPM2B_PRIVATE_Marshal(TPM2B_PRIVATE const *src,
                              uint8_t buffer[],
                              size_t buffer_size,
                              size_t *offset);

TSS2_RC
Tss2_MU_TPM2B_PRIVATE_Unmarshal(uint8_t const buffer[],
                                size_t buffer_size,
                                size_t *offset,
                                TPM2B_PRIVATE *dest);

TSS2_RC
Tss2_MU_TPM2B_CONTEXT_SENSITIVE_Marshal(TPM2B_CONTEXT_SENSITIVE const *src,
                                        uint8_t buffer[],
                                        size_t buffer_size,
                                        size_t *offset);

TSS2_RC
Tss2_MU_TPM2B_CONTEXT_SENSITIVE_Unmarshal(uint8_t const buffer[],
                                          size_t buffer_size,
                                          size_t *offset,
                                          TPM2B_CONTEXT_SENSITIVE *dest);

TSS2_RC
Tss2_MU_TPM2B_CONTEXT_DATA_Marshal(TPM2B_CONTEXT_DATA const *src,
                                   uint8_t buffer[],
                                   size_t buffer_size,
                                   size_t *offset);

TSS2_RC
Tss2_MU_TPM2B_CONTEXT_DATA_Unmarshal(uint8_t const buffer[],
                                     size_t buffer_size,
                                     size_t *offset,
                                     TPM2B_CONTEXT_DATA *dest);

TSS2_RC
Tss2_MU_TPM2B_DATA_Marshal(TPM2B_DATA const *src,
                           uint8_t buffer[],
                           size_t buffer_size,
                           size_t *offset);

TSS2_RC
Tss2_MU_TPM2B_DATA_Unmarshal(uint8_t const buffer[],
                             size_t buffer_size,
                             size_t *offset,
                             TPM2B_DATA *dest);

TSS2_RC
Tss2_MU_TPM2B_SYM_KEY_Marshal(TPM2B_SYM_KEY const *src,
                              uint8_t buffer[],
                              size_t buffer_size,
                              size_t *offset);

TSS2_RC
Tss2_MU_TPM2B_SYM_KEY_Unmarshal(uint8_t const buffer[],
                                size_t buffer_size,
                                size_t *offset,
                                TPM2B_SYM_KEY *dest);

TSS2_RC
Tss2_MU_TPM2B_ECC_POINT_Marshal(TPM2B_ECC_POINT const *src,
                                uint8_t buffer[],
                                size_t buffer_size,
                                size_t *offset);

TSS2_RC
Tss2_MU_TPM2B_ECC_POINT_Unmarshal(uint8_t const buffer[],
                                  size_t buffer_size,
                                  size_t *offset,
                                  TPM2B_ECC_POINT *dest);

TSS2_RC
Tss2_MU_TPM2B_NV_PUBLIC_Marshal(TPM2B_NV_PUBLIC const *src,
                                uint8_t buffer[],
                                size_t buffer_size,
                                size_t *offset);

TSS2_RC
Tss2_MU_TPM2B_NV_PUBLIC_Unmarshal(uint8_t const buffer[],
                                  size_t buffer_size,
                                  size_t *offset,
                                  TPM2B_NV_PUBLIC *dest);

TSS2_RC
Tss2_MU_TPM2B_SENSITIVE_Marshal(TPM2B_SENSITIVE const *src,
                                uint8_t buffer[],
                                size_t buffer_size,
                                size_t *offset);

TSS2_RC
Tss2_MU_TPM2B_SENSITIVE_Unmarshal(uint8_t const buffer[],
                                  size_t buffer_size,
                                  size_t *offset,
                                  TPM2B_SENSITIVE *dest);

TSS2_RC
Tss2_MU_TPM2B_SENSITIVE_CREATE_Marshal(TPM2B_SENSITIVE_CREATE const *src,
                                       uint8_t buffer[],
                                       size_t buffer_size,
                                       size_t *offset);

TSS2_RC
Tss2_MU_TPM2B_SENSITIVE_CREATE_Unmarshal(uint8_t const buffer[],
                                         size_t buffer_size,
                                         size_t *offset,
                                         TPM2B_SENSITIVE_CREATE *dest);

TSS2_RC
Tss2_MU_TPM2B_CREATION_DATA_Marshal(TPM2B_CREATION_DATA const *src,
                                    uint8_t buffer[],
                                    size_t buffer_size,
                                    size_t *offset);

TSS2_RC
Tss2_MU_TPM2B_CREATION_DATA_Unmarshal(uint8_t const buffer[],
                                      size_t buffer_size,
                                      size_t *offset,
                                      TPM2B_CREATION_DATA *dest);

TSS2_RC
Tss2_MU_TPM2B_PUBLIC_Marshal(TPM2B_PUBLIC const *src,
                             uint8_t buffer[],
                             size_t buffer_size,
                             size_t *offset);

TSS2_RC
Tss2_MU_TPM2B_PUBLIC_Unmarshal(uint8_t const buffer[],
                               size_t buffer_size,
                               size_t *offset,
                               TPM2B_PUBLIC *dest);

TSS2_RC
Tss2_MU_TPM2B_ENCRYPTED_SECRET_Marshal(TPM2B_ENCRYPTED_SECRET const *src,
                                       uint8_t buffer[],
                                       size_t buffer_size,
                                       size_t *offset);

TSS2_RC
Tss2_MU_TPM2B_ENCRYPTED_SECRET_Unmarshal(uint8_t const buffer[],
                                         size_t buffer_size,
                                         size_t *offset,
                                         TPM2B_ENCRYPTED_SECRET *dest);

TSS2_RC
Tss2_MU_TPM2B_ID_OBJECT_Marshal(TPM2B_ID_OBJECT const *src,
                                uint8_t buffer[],
                                size_t buffer_size,
                                size_t *offset);

TSS2_RC
Tss2_MU_TPM2B_ID_OBJECT_Unmarshal(uint8_t const buffer[],
                                  size_t buffer_size,
                                  size_t *offset,
                                  TPM2B_ID_OBJECT *dest);

TSS2_RC
Tss2_MU_TPM2B_IV_Marshal(TPM2B_IV const *src, uint8_t buffer[], size_t buffer_size, size_t *offset);

TSS2_RC
Tss2_MU_TPM2B_IV_Unmarshal(uint8_t const buffer[],
                           size_t buffer_size,
                           size_t *offset,
                           TPM2B_IV *dest);

TSS2_RC
Tss2_MU_TPM2B_AUTH_Marshal(TPM2B_AUTH const *src,
                           uint8_t buffer[],
                           size_t buffer_size,
                           size_t *offset);

TSS2_RC
Tss2_MU_TPM2B_AUTH_Unmarshal(uint8_t const buffer[],
                             size_t buffer_size,
                             size_t *offset,
                             TPM2B_AUTH *dest);

TSS2_RC
Tss2_MU_TPM2B_EVENT_Marshal(TPM2B_EVENT const *src,
                            uint8_t buffer[],
                            size_t buffer_size,
                            size_t *offset);

TSS2_RC
Tss2_MU_TPM2B_EVENT_Unmarshal(uint8_t const buffer[],
                              size_t buffer_size,
                              size_t *offset,
                              TPM2B_EVENT *dest);

TSS2_RC
Tss2_MU_TPM2B_MAX_BUFFER_Marshal(TPM2B_MAX_BUFFER const *src,
                                 uint8_t buffer[],
                                 size_t buffer_size,
                                 size_t *offset);

TSS2_RC
Tss2_MU_TPM2B_MAX_BUFFER_Unmarshal(uint8_t const buffer[],
                                   size_t buffer_size,
                                   size_t *offset,
                                   TPM2B_MAX_BUFFER *dest);

TSS2_RC
Tss2_MU_TPM2B_NONCE_Marshal(TPM2B_NONCE const *src,
                            uint8_t buffer[],
                            size_t buffer_size,
                            size_t *offset);

TSS2_RC
Tss2_MU_TPM2B_NONCE_Unmarshal(uint8_t const buffer[],
                              size_t buffer_size,
                              size_t *offset,
                              TPM2B_NONCE *dest);

TSS2_RC
Tss2_MU_TPM2B_OPERAND_Marshal(TPM2B_OPERAND const *src,
                              uint8_t buffer[],
                              size_t buffer_size,
                              size_t *offset);

TSS2_RC
Tss2_MU_TPM2B_OPERAND_Unmarshal(uint8_t const buffer[],
                                size_t buffer_size,
                                size_t *offset,
                                TPM2B_OPERAND *dest);

TSS2_RC
Tss2_MU_TPM2B_TIMEOUT_Marshal(TPM2B_TIMEOUT const *src,
                              uint8_t buffer[],
                              size_t buffer_size,
                              size_t *offset);

TSS2_RC
Tss2_MU_TPM2B_TIMEOUT_Unmarshal(uint8_t const buffer[],
                                size_t buffer_size,
                                size_t *offset,
                                TPM2B_TIMEOUT *dest);

TSS2_RC
Tss2_MU_TPM2B_TEMPLATE_Marshal(TPM2B_TEMPLATE const *src,
                               uint8_t buffer[],
                               size_t buffer_size,
                               size_t *offset);

TSS2_RC
Tss2_MU_TPM2B_TEMPLATE_Unmarshal(uint8_t const buffer[],
                                 size_t buffer_size,
                                 size_t *offset,
                                 TPM2B_TEMPLATE *dest);

TSS2_RC
Tss2_MU_TPMS_CONTEXT_Marshal(TPMS_CONTEXT const *src,
                             uint8_t buffer[],
                             size_t buffer_size,
                             size_t *offset);

TSS2_RC
Tss2_MU_TPMS_CONTEXT_Unmarshal(uint8_t const buffer[],
                               size_t buffer_size,
                               size_t *offset,
                               TPMS_CONTEXT *dest);

TSS2_RC
Tss2_MU_TPMS_TIME_INFO_Marshal(TPMS_TIME_INFO const *src,
                               uint8_t buffer[],
                               size_t buffer_size,
                               size_t *offset);

TSS2_RC
Tss2_MU_TPMS_TIME_INFO_Unmarshal(uint8_t const buffer[],
                                 size_t buffer_size,
                                 size_t *offset,
                                 TPMS_TIME_INFO *dest);

TSS2_RC
Tss2_MU_TPMS_ECC_POINT_Marshal(TPMS_ECC_POINT const *src,
                               uint8_t buffer[],
                               size_t buffer_size,
                               size_t *offset);

TSS2_RC
Tss2_MU_TPMS_ECC_POINT_Unmarshal(uint8_t const buffer[],
                                 size_t buffer_size,
                                 size_t *offset,
                                 TPMS_ECC_POINT *dest);

TSS2_RC
Tss2_MU_TPMS_NV_PUBLIC_Marshal(TPMS_NV_PUBLIC const *src,
                               uint8_t buffer[],
                               size_t buffer_size,
                               size_t *offset);

TSS2_RC
Tss2_MU_TPMS_NV_PUBLIC_Unmarshal(uint8_t const buffer[],
                                 size_t buffer_size,
                                 size_t *offset,
                                 TPMS_NV_PUBLIC *dest);

TSS2_RC
Tss2_MU_TPMS_ALG_PROPERTY_Marshal(TPMS_ALG_PROPERTY const *src,
                                  uint8_t buffer[],
                                  size_t buffer_size,
                                  size_t *offset);

TSS2_RC
Tss2_MU_TPMS_ALG_PROPERTY_Unmarshal(uint8_t const buffer[],
                                    size_t buffer_size,
                                    size_t *offset,
                                    TPMS_ALG_PROPERTY *dest);

TSS2_RC
Tss2_MU_TPMS_TAGGED_PROPERTY_Marshal(TPMS_TAGGED_PROPERTY const *src,
                                     uint8_t buffer[],
                                     size_t buffer_size,
                                     size_t *offset);

TSS2_RC
Tss2_MU_TPMS_TAGGED_PROPERTY_Unmarshal(uint8_t const buffer[],
                                       size_t buffer_size,
                                       size_t *offset,
                                       TPMS_TAGGED_PROPERTY *dest);

TSS2_RC
Tss2_MU_TPMS_TAGGED_POLICY_Marshal(TPMS_TAGGED_POLICY const *src,
                                   uint8_t buffer[],
                                   size_t buffer_size,
                                   size_t *offset);

TSS2_RC
Tss2_MU_TPMS_TAGGED_POLICY_Unmarshal(uint8_t const buffer[],
                                     size_t buffer_size,
                                     size_t *offset,
                                     TPMS_TAGGED_POLICY *dest);

TSS2_RC
Tss2_MU_TPMS_CLOCK_INFO_Marshal(TPMS_CLOCK_INFO const *src,
                                uint8_t buffer[],
                                size_t buffer_size,
                                size_t *offset);

TSS2_RC
Tss2_MU_TPMS_CLOCK_INFO_Unmarshal(uint8_t const buffer[],
                                  size_t buffer_size,
                                  size_t *offset,
                                  TPMS_CLOCK_INFO *dest);

TSS2_RC
Tss2_MU_TPMS_TIME_ATTEST_INFO_Marshal(TPMS_TIME_ATTEST_INFO const *src,
                                      uint8_t buffer[],
                                      size_t buffer_size,
                                      size_t *offset);

TSS2_RC
Tss2_MU_TPMS_TIME_ATTEST_INFO_Unmarshal(uint8_t const buffer[],
                                        size_t buffer_size,
                                        size_t *offset,
                                        TPMS_TIME_ATTEST_INFO *dest);

TSS2_RC
Tss2_MU_TPMS_CERTIFY_INFO_Marshal(TPMS_CERTIFY_INFO const *src,
                                  uint8_t buffer[],
                                  size_t buffer_size,
                                  size_t *offset);

TSS2_RC
Tss2_MU_TPMS_CERTIFY_INFO_Unmarshal(uint8_t const buffer[],
                                    size_t buffer_size,
                                    size_t *offset,
                                    TPMS_CERTIFY_INFO *dest);

TSS2_RC
Tss2_MU_TPMS_COMMAND_AUDIT_INFO_Marshal(TPMS_COMMAND_AUDIT_INFO const *src,
                                        uint8_t buffer[],
                                        size_t buffer_size,
                                        size_t *offset);

TSS2_RC
Tss2_MU_TPMS_COMMAND_AUDIT_INFO_Unmarshal(uint8_t const buffer[],
                                          size_t buffer_size,
                                          size_t *offset,
                                          TPMS_COMMAND_AUDIT_INFO *dest);

TSS2_RC
Tss2_MU_TPMS_SESSION_AUDIT_INFO_Marshal(TPMS_SESSION_AUDIT_INFO const *src,
                                        uint8_t buffer[],
                                        size_t buffer_size,
                                        size_t *offset);

TSS2_RC
Tss2_MU_TPMS_SESSION_AUDIT_INFO_Unmarshal(uint8_t const buffer[],
                                          size_t buffer_size,
                                          size_t *offset,
                                          TPMS_SESSION_AUDIT_INFO *dest);

TSS2_RC
Tss2_MU_TPMS_CREATION_INFO_Marshal(TPMS_CREATION_INFO const *src,
                                   uint8_t buffer[],
                                   size_t buffer_size,
                                   size_t *offset);

TSS2_RC
Tss2_MU_TPMS_CREATION_INFO_Unmarshal(uint8_t const buffer[],
                                     size_t buffer_size,
                                     size_t *offset,
                                     TPMS_CREATION_INFO *dest);

TSS2_RC
Tss2_MU_TPMS_NV_CERTIFY_INFO_Marshal(TPMS_NV_CERTIFY_INFO const *src,
                                     uint8_t buffer[],
                                     size_t buffer_size,
                                     size_t *offset);

TSS2_RC
Tss2_MU_TPMS_NV_CERTIFY_INFO_Unmarshal(uint8_t const buffer[],
                                       size_t buffer_size,
                                       size_t *offset,
                                       TPMS_NV_CERTIFY_INFO *dest);

TSS2_RC
Tss2_MU_TPMS_AUTH_COMMAND_Marshal(TPMS_AUTH_COMMAND const *src,
                                  uint8_t buffer[],
                                  size_t buffer_size,
                                  size_t *offset);

TSS2_RC
Tss2_MU_TPMS_AUTH_COMMAND_Unmarshal(uint8_t const buffer[],
                                    size_t buffer_size,
                                    size_t *offset,
                                    TPMS_AUTH_COMMAND *dest);

TSS2_RC
Tss2_MU_TPMS_AUTH_RESPONSE_Marshal(TPMS_AUTH_RESPONSE const *src,
                                   uint8_t buffer[],
                                   size_t buffer_size,
                                   size_t *offset);

TSS2_RC
Tss2_MU_TPMS_AUTH_RESPONSE_Unmarshal(uint8_t const buffer[],
                                     size_t buffer_size,
                                     size_t *offset,
                                     TPMS_AUTH_RESPONSE *dest);

TSS2_RC
Tss2_MU_TPMS_SENSITIVE_CREATE_Marshal(TPMS_SENSITIVE_CREATE const *src,
                                      uint8_t buffer[],
                                      size_t buffer_size,
                                      size_t *offset);

TSS2_RC
Tss2_MU_TPMS_SENSITIVE_CREATE_Unmarshal(uint8_t const buffer[],
                                        size_t buffer_size,
                                        size_t *offset,
                                        TPMS_SENSITIVE_CREATE *dest);

TSS2_RC
Tss2_MU_TPMS_SCHEME_HASH_Marshal(TPMS_SCHEME_HASH const *src,
                                 uint8_t buffer[],
                                 size_t buffer_size,
                                 size_t *offset);

TSS2_RC
Tss2_MU_TPMS_SCHEME_HASH_Unmarshal(uint8_t const buffer[],
                                   size_t buffer_size,
                                   size_t *offset,
                                   TPMS_SCHEME_HASH *dest);

TSS2_RC
Tss2_MU_TPMS_SCHEME_ECDAA_Marshal(TPMS_SCHEME_ECDAA const *src,
                                  uint8_t buffer[],
                                  size_t buffer_size,
                                  size_t *offset);

TSS2_RC
Tss2_MU_TPMS_SCHEME_ECDAA_Unmarshal(uint8_t const buffer[],
                                    size_t buffer_size,
                                    size_t *offset,
                                    TPMS_SCHEME_ECDAA *dest);

TSS2_RC
Tss2_MU_TPMS_SCHEME_XOR_Marshal(TPMS_SCHEME_XOR const *src,
                                uint8_t buffer[],
                                size_t buffer_size,
                                size_t *offset);

TSS2_RC
Tss2_MU_TPMS_SCHEME_XOR_Unmarshal(uint8_t const buffer[],
                                  size_t buffer_size,
                                  size_t *offset,
                                  TPMS_SCHEME_XOR *dest);

TSS2_RC
Tss2_MU_TPMS_SIGNATURE_RSA_Marshal(TPMS_SIGNATURE_RSA const *src,
                                   uint8_t buffer[],
                                   size_t buffer_size,
                                   size_t *offset);

TSS2_RC
Tss2_MU_TPMS_SIGNATURE_RSA_Unmarshal(uint8_t const buffer[],
                                     size_t buffer_size,
                                     size_t *offset,
                                     TPMS_SIGNATURE_RSA *dest);

TSS2_RC
Tss2_MU_TPMS_SIGNATURE_ECC_Marshal(TPMS_SIGNATURE_ECC const *src,
                                   uint8_t buffer[],
                                   size_t buffer_size,
                                   size_t *offset);

TSS2_RC
Tss2_MU_TPMS_SIGNATURE_ECC_Unmarshal(uint8_t const buffer[],
                                     size_t buffer_size,
                                     size_t *offset,
                                     TPMS_SIGNATURE_ECC *dest);

TSS2_RC
Tss2_MU_TPMS_NV_PIN_COUNTER_PARAMETERS_Marshal(TPMS_NV_PIN_COUNTER_PARAMETERS const *src,
                                               uint8_t buffer[],
                                               size_t buffer_size,
                                               size_t *offset);

TSS2_RC
Tss2_MU_TPMS_NV_PIN_COUNTER_PARAMETERS_Unmarshal(uint8_t const buffer[],
                                                 size_t buffer_size,
                                                 size_t *offset,
                                                 TPMS_NV_PIN_COUNTER_PARAMETERS *dest);

TSS2_RC
Tss2_MU_TPMS_CONTEXT_DATA_Marshal(TPMS_CONTEXT_DATA const *src,
                                  uint8_t buffer[],
                                  size_t buffer_size,
                                  size_t *offset);

TSS2_RC
Tss2_MU_TPMS_CONTEXT_DATA_Unmarshal(uint8_t const buffer[],
                                    size_t buffer_size,
                                    size_t *offset,
                                    TPMS_CONTEXT_DATA *dest);

TSS2_RC
Tss2_MU_TPMS_PCR_SELECT_Marshal(TPMS_PCR_SELECT const *src,
                                uint8_t buffer[],
                                size_t buffer_size,
                                size_t *offset);

TSS2_RC
Tss2_MU_TPMS_PCR_SELECT_Unmarshal(uint8_t const buffer[],
                                  size_t buffer_size,
                                  size_t *offset,
                                  TPMS_PCR_SELECT *dest);

TSS2_RC
Tss2_MU_TPMS_PCR_SELECTION_Marshal(TPMS_PCR_SELECTION const *src,
                                   uint8_t buffer[],
                                   size_t buffer_size,
                                   size_t *offset);

TSS2_RC
Tss2_MU_TPMS_PCR_SELECTION_Unmarshal(uint8_t const buffer[],
                                     size_t buffer_size,
                                     size_t *offset,
                                     TPMS_PCR_SELECTION *dest);

TSS2_RC
Tss2_MU_TPMS_TAGGED_PCR_SELECT_Marshal(TPMS_TAGGED_PCR_SELECT const *src,
                                       uint8_t buffer[],
                                       size_t buffer_size,
                                       size_t *offset);

TSS2_RC
Tss2_MU_TPMS_TAGGED_PCR_SELECT_Unmarshal(uint8_t const buffer[],
                                         size_t buffer_size,
                                         size_t *offset,
                                         TPMS_TAGGED_PCR_SELECT *dest);

TSS2_RC
Tss2_MU_TPMS_QUOTE_INFO_Marshal(TPMS_QUOTE_INFO const *src,
                                uint8_t buffer[],
                                size_t buffer_size,
                                size_t *offset);

TSS2_RC
Tss2_MU_TPMS_QUOTE_INFO_Unmarshal(uint8_t const buffer[],
                                  size_t buffer_size,
                                  size_t *offset,
                                  TPMS_QUOTE_INFO *dest);

TSS2_RC
Tss2_MU_TPMS_CREATION_DATA_Marshal(TPMS_CREATION_DATA const *src,
                                   uint8_t buffer[],
                                   size_t buffer_size,
                                   size_t *offset);

TSS2_RC
Tss2_MU_TPMS_CREATION_DATA_Unmarshal(uint8_t const buffer[],
                                     size_t buffer_size,
                                     size_t *offset,
                                     TPMS_CREATION_DATA *dest);

TSS2_RC
Tss2_MU_TPMS_ECC_PARMS_Marshal(TPMS_ECC_PARMS const *src,
                               uint8_t buffer[],
                               size_t buffer_size,
                               size_t *offset);

TSS2_RC
Tss2_MU_TPMS_ECC_PARMS_Unmarshal(uint8_t const buffer[],
                                 size_t buffer_size,
                                 size_t *offset,
                                 TPMS_ECC_PARMS *dest);

TSS2_RC
Tss2_MU_TPMS_ATTEST_Marshal(TPMS_ATTEST const *src,
                            uint8_t buffer[],
                            size_t buffer_size,
                            size_t *offset);

TSS2_RC
Tss2_MU_TPMS_ATTEST_Unmarshal(uint8_t const buffer[],
                              size_t buffer_size,
                              size_t *offset,
                              TPMS_ATTEST *dest);

TSS2_RC
Tss2_MU_TPMS_ALGORITHM_DETAIL_ECC_Marshal(TPMS_ALGORITHM_DETAIL_ECC const *src,
                                          uint8_t buffer[],
                                          size_t buffer_size,
                                          size_t *offset);

TSS2_RC
Tss2_MU_TPMS_ALGORITHM_DETAIL_ECC_Unmarshal(uint8_t const buffer[],
                                            size_t buffer_size,
                                            size_t *offset,
                                            TPMS_ALGORITHM_DETAIL_ECC *dest);

TSS2_RC
Tss2_MU_TPMS_CAPABILITY_DATA_Marshal(TPMS_CAPABILITY_DATA const *src,
                                     uint8_t buffer[],
                                     size_t buffer_size,
                                     size_t *offset);

TSS2_RC
Tss2_MU_TPMS_CAPABILITY_DATA_Unmarshal(uint8_t const buffer[],
                                       size_t buffer_size,
                                       size_t *offset,
                                       TPMS_CAPABILITY_DATA *dest);

TSS2_RC
Tss2_MU_TPMS_KEYEDHASH_PARMS_Marshal(TPMS_KEYEDHASH_PARMS const *src,
                                     uint8_t buffer[],
                                     size_t buffer_size,
                                     size_t *offset);

TSS2_RC
Tss2_MU_TPMS_KEYEDHASH_PARMS_Unmarshal(uint8_t const buffer[],
                                       size_t buffer_size,
                                       size_t *offset,
                                       TPMS_KEYEDHASH_PARMS *dest);

TSS2_RC
Tss2_MU_TPMS_RSA_PARMS_Marshal(TPMS_RSA_PARMS const *src,
                               uint8_t buffer[],
                               size_t buffer_size,
                               size_t *offset);

TSS2_RC
Tss2_MU_TPMS_RSA_PARMS_Unmarshal(uint8_t const buffer[],
                                 size_t buffer_size,
                                 size_t *offset,
                                 TPMS_RSA_PARMS *dest);

TSS2_RC
Tss2_MU_TPMS_SYMCIPHER_PARMS_Marshal(TPMS_SYMCIPHER_PARMS const *src,
                                     uint8_t buffer[],
                                     size_t buffer_size,
                                     size_t *offset);

TSS2_RC
Tss2_MU_TPMS_SYMCIPHER_PARMS_Unmarshal(uint8_t const buffer[],
                                       size_t buffer_size,
                                       size_t *offset,
                                       TPMS_SYMCIPHER_PARMS *dest);

TSS2_RC
Tss2_MU_TPMS_AC_OUTPUT_Marshal(TPMS_AC_OUTPUT const *src,
                               uint8_t buffer[],
                               size_t buffer_size,
                               size_t *offset);

TSS2_RC
Tss2_MU_TPMS_AC_OUTPUT_Unmarshal(uint8_t const buffer[],
                                 size_t buffer_size,
                                 size_t *offset,
                                 TPMS_AC_OUTPUT *dest);

TSS2_RC
Tss2_MU_TPMS_ID_OBJECT_Marshal(TPMS_ID_OBJECT const *src,
                               uint8_t buffer[],
                               size_t buffer_size,
                               size_t *offset);

TSS2_RC
Tss2_MU_TPMS_ID_OBJECT_Unmarshal(uint8_t const buffer[],
                                 size_t buffer_size,
                                 size_t *offset,
                                 TPMS_ID_OBJECT *dest);

TSS2_RC
Tss2_MU_TPMS_ACT_DATA_Marshal(TPMS_ACT_DATA const *src,
                              uint8_t buffer[],
                              size_t buffer_size,
                              size_t *offset);

TSS2_RC
Tss2_MU_TPMS_ACT_DATA_Unmarshal(uint8_t const buffer[],
                                size_t buffer_size,
                                size_t *offset,
                                TPMS_ACT_DATA *dest);

TSS2_RC
Tss2_MU_TPMS_NV_DIGEST_CERTIFY_INFO_Marshal(TPMS_NV_DIGEST_CERTIFY_INFO const *src,
                                            uint8_t buffer[],
                                            size_t buffer_size,
                                            size_t *offset);

TSS2_RC
Tss2_MU_TPMS_NV_DIGEST_CERTIFY_INFO_Unmarshal(uint8_t const buffer[],
                                              size_t buffer_size,
                                              size_t *offset,
                                              TPMS_NV_DIGEST_CERTIFY_INFO *dest);

TSS2_RC
Tss2_MU_TPML_CC_Marshal(TPML_CC const *src, uint8_t buffer[], size_t buffer_size, size_t *offset);

TSS2_RC
Tss2_MU_TPML_CC_Unmarshal(uint8_t const buffer[],
                          size_t buffer_size,
                          size_t *offset,
                          TPML_CC *dest);

TSS2_RC
Tss2_MU_TPML_CCA_Marshal(TPML_CCA const *src, uint8_t buffer[], size_t buffer_size, size_t *offset);

TSS2_RC
Tss2_MU_TPML_CCA_Unmarshal(uint8_t const buffer[],
                           size_t buffer_size,
                           size_t *offset,
                           TPML_CCA *dest);

TSS2_RC
Tss2_MU_TPML_ALG_Marshal(TPML_ALG const *src, uint8_t buffer[], size_t buffer_size, size_t *offset);

TSS2_RC
Tss2_MU_TPML_ALG_Unmarshal(uint8_t const buffer[],
                           size_t buffer_size,
                           size_t *offset,
                           TPML_ALG *dest);

TSS2_RC
Tss2_MU_TPML_HANDLE_Marshal(TPML_HANDLE const *src,
                            uint8_t buffer[],
                            size_t buffer_size,
                            size_t *offset);

TSS2_RC
Tss2_MU_TPML_HANDLE_Unmarshal(uint8_t const buffer[],
                              size_t buffer_size,
                              size_t *offset,
                              TPML_HANDLE *dest);

TSS2_RC
Tss2_MU_TPML_DIGEST_Marshal(TPML_DIGEST const *src,
                            uint8_t buffer[],
                            size_t buffer_size,
                            size_t *offset);

TSS2_RC
Tss2_MU_TPML_DIGEST_Unmarshal(uint8_t const buffer[],
                              size_t buffer_size,
                              size_t *offset,
                              TPML_DIGEST *dest);

TSS2_RC
Tss2_MU_TPML_DIGEST_VALUES_Marshal(TPML_DIGEST_VALUES const *src,
                                   uint8_t buffer[],
                                   size_t buffer_size,
                                   size_t *offset);

TSS2_RC
Tss2_MU_TPML_DIGEST_VALUES_Unmarshal(uint8_t const buffer[],
                                     size_t buffer_size,
                                     size_t *offset,
                                     TPML_DIGEST_VALUES *dest);

TSS2_RC
Tss2_MU_TPML_PCR_SELECTION_Marshal(TPML_PCR_SELECTION const *src,
                                   uint8_t buffer[],
                                   size_t buffer_size,
                                   size_t *offset);

TSS2_RC
Tss2_MU_TPML_PCR_SELECTION_Unmarshal(uint8_t const buffer[],
                                     size_t buffer_size,
                                     size_t *offset,
                                     TPML_PCR_SELECTION *dest);

TSS2_RC
Tss2_MU_TPML_ALG_PROPERTY_Marshal(TPML_ALG_PROPERTY const *src,
                                  uint8_t buffer[],
                                  size_t buffer_size,
                                  size_t *offset);

TSS2_RC
Tss2_MU_TPML_ALG_PROPERTY_Unmarshal(uint8_t const buffer[],
                                    size_t buffer_size,
                                    size_t *offset,
                                    TPML_ALG_PROPERTY *dest);

TSS2_RC
Tss2_MU_TPML_ECC_CURVE_Marshal(TPML_ECC_CURVE const *src,
                               uint8_t buffer[],
                               size_t buffer_size,
                               size_t *offset);

TSS2_RC
Tss2_MU_TPML_ECC_CURVE_Unmarshal(uint8_t const buffer[],
                                 size_t buffer_size,
                                 size_t *offset,
                                 TPML_ECC_CURVE *dest);

TSS2_RC
Tss2_MU_TPML_TAGGED_PCR_PROPERTY_Marshal(TPML_TAGGED_PCR_PROPERTY const *src,
                                         uint8_t buffer[],
                                         size_t buffer_size,
                                         size_t *offset);

TSS2_RC
Tss2_MU_TPML_TAGGED_PCR_PROPERTY_Unmarshal(uint8_t const buffer[],
                                           size_t buffer_size,
                                           size_t *offset,
                                           TPML_TAGGED_PCR_PROPERTY *dest);

TSS2_RC
Tss2_MU_TPML_TAGGED_TPM_PROPERTY_Marshal(TPML_TAGGED_TPM_PROPERTY const *src,
                                         uint8_t buffer[],
                                         size_t buffer_size,
                                         size_t *offset);

TSS2_RC
Tss2_MU_TPML_TAGGED_TPM_PROPERTY_Unmarshal(uint8_t const buffer[],
                                           size_t buffer_size,
                                           size_t *offset,
                                           TPML_TAGGED_TPM_PROPERTY *dest);

TSS2_RC
Tss2_MU_TPML_AC_CAPABILITIES_Marshal(TPML_AC_CAPABILITIES const *src,
                                     uint8_t buffer[],
                                     size_t buffer_size,
                                     size_t *offset);

TSS2_RC
Tss2_MU_TPML_AC_CAPABILITIES_Unmarshal(uint8_t const buffer[],
                                       size_t buffer_size,
                                       size_t *offset,
                                       TPML_AC_CAPABILITIES *dest);

TSS2_RC
Tss2_MU_TPML_TAGGED_POLICY_Marshal(TPML_TAGGED_POLICY const *src,
                                   uint8_t buffer[],
                                   size_t buffer_size,
                                   size_t *offset);

TSS2_RC
Tss2_MU_TPML_TAGGED_POLICY_Unmarshal(uint8_t const buffer[],
                                     size_t buffer_size,
                                     size_t *offset,
                                     TPML_TAGGED_POLICY *dest);

TSS2_RC
Tss2_MU_TPML_ACT_DATA_Marshal(TPML_ACT_DATA const *src,
                              uint8_t buffer[],
                              size_t buffer_size,
                              size_t *offset);

TSS2_RC
Tss2_MU_TPML_ACT_DATA_Unmarshal(uint8_t const buffer[],
                                size_t buffer_size,
                                size_t *offset,
                                TPML_ACT_DATA *dest);

TSS2_RC
Tss2_MU_TPMU_HA_Marshal(TPMU_HA const *src,
                        uint32_t selector_value,
                        uint8_t buffer[],
                        size_t buffer_size,
                        size_t *offset);

TSS2_RC
Tss2_MU_TPMU_HA_Unmarshal(uint8_t const buffer[],
                          size_t buffer_size,
                          size_t *offset,
                          uint32_t selector_value,
                          TPMU_HA *dest);

TSS2_RC
Tss2_MU_TPMU_CAPABILITIES_Marshal(TPMU_CAPABILITIES const *src,
                                  uint32_t selector_value,
                                  uint8_t buffer[],
                                  size_t buffer_size,
                                  size_t *offset);

TSS2_RC
Tss2_MU_TPMU_CAPABILITIES_Unmarshal(uint8_t const buffer[],
                                    size_t buffer_size,
                                    size_t *offset,
                                    uint32_t selector_value,
                                    TPMU_CAPABILITIES *dest);

TSS2_RC
Tss2_MU_TPMU_ATTEST_Marshal(TPMU_ATTEST const *src,
                            uint32_t selector_value,
                            uint8_t buffer[],
                            size_t buffer_size,
                            size_t *offset);

TSS2_RC
Tss2_MU_TPMU_ATTEST_Unmarshal(uint8_t const buffer[],
                              size_t buffer_size,
                              size_t *offset,
                              uint32_t selector_value,
                              TPMU_ATTEST *dest);

TSS2_RC
Tss2_MU_TPMU_SYM_KEY_BITS_Marshal(TPMU_SYM_KEY_BITS const *src,
                                  uint32_t selector_value,
                                  uint8_t buffer[],
                                  size_t buffer_size,
                                  size_t *offset);

TSS2_RC
Tss2_MU_TPMU_SYM_KEY_BITS_Unmarshal(uint8_t const buffer[],
                                    size_t buffer_size,
                                    size_t *offset,
                                    uint32_t selector_value,
                                    TPMU_SYM_KEY_BITS *dest);

TSS2_RC
Tss2_MU_TPMU_SYM_MODE_Marshal(TPMU_SYM_MODE const *src,
                              uint32_t selector_value,
                              uint8_t buffer[],
                              size_t buffer_size,
                              size_t *offset);

TSS2_RC
Tss2_MU_TPMU_SYM_MODE_Unmarshal(uint8_t const buffer[],
                                size_t buffer_size,
                                size_t *offset,
                                uint32_t selector_value,
                                TPMU_SYM_MODE *dest);

TSS2_RC
Tss2_MU_TPMU_SIG_SCHEME_Marshal(TPMU_SIG_SCHEME const *src,
                                uint32_t selector_value,
                                uint8_t buffer[],
                                size_t buffer_size,
                                size_t *offset);

TSS2_RC
Tss2_MU_TPMU_SIG_SCHEME_Unmarshal(uint8_t const buffer[],
                                  size_t buffer_size,
                                  size_t *offset,
                                  uint32_t selector_value,
                                  TPMU_SIG_SCHEME *dest);

TSS2_RC
Tss2_MU_TPMU_KDF_SCHEME_Marshal(TPMU_KDF_SCHEME const *src,
                                uint32_t selector_value,
                                uint8_t buffer[],
                                size_t buffer_size,
                                size_t *offset);

TSS2_RC
Tss2_MU_TPMU_KDF_SCHEME_Unmarshal(uint8_t const buffer[],
                                  size_t buffer_size,
                                  size_t *offset,
                                  uint32_t selector_value,
                                  TPMU_KDF_SCHEME *dest);

TSS2_RC
Tss2_MU_TPMU_ASYM_SCHEME_Marshal(TPMU_ASYM_SCHEME const *src,
                                 uint32_t selector_value,
                                 uint8_t buffer[],
                                 size_t buffer_size,
                                 size_t *offset);

TSS2_RC
Tss2_MU_TPMU_ASYM_SCHEME_Unmarshal(uint8_t const buffer[],
                                   size_t buffer_size,
                                   size_t *offset,
                                   uint32_t selector_value,
                                   TPMU_ASYM_SCHEME *dest);

TSS2_RC
Tss2_MU_TPMU_SCHEME_KEYEDHASH_Marshal(TPMU_SCHEME_KEYEDHASH const *src,
                                      uint32_t selector_value,
                                      uint8_t buffer[],
                                      size_t buffer_size,
                                      size_t *offset);

TSS2_RC
Tss2_MU_TPMU_SCHEME_KEYEDHASH_Unmarshal(uint8_t const buffer[],
                                        size_t buffer_size,
                                        size_t *offset,
                                        uint32_t selector_value,
                                        TPMU_SCHEME_KEYEDHASH *dest);

TSS2_RC
Tss2_MU_TPMU_SIGNATURE_Marshal(TPMU_SIGNATURE const *src,
                               uint32_t selector_value,
                               uint8_t buffer[],
                               size_t buffer_size,
                               size_t *offset);

TSS2_RC
Tss2_MU_TPMU_SIGNATURE_Unmarshal(uint8_t const buffer[],
                                 size_t buffer_size,
                                 size_t *offset,
                                 uint32_t selector_value,
                                 TPMU_SIGNATURE *dest);

TSS2_RC
Tss2_MU_TPMU_SENSITIVE_COMPOSITE_Marshal(TPMU_SENSITIVE_COMPOSITE const *src,
                                         uint32_t selector_value,
                                         uint8_t buffer[],
                                         size_t buffer_size,
                                         size_t *offset);

TSS2_RC
Tss2_MU_TPMU_SENSITIVE_COMPOSITE_Unmarshal(uint8_t const buffer[],
                                           size_t buffer_size,
                                           size_t *offset,
                                           uint32_t selector_value,
                                           TPMU_SENSITIVE_COMPOSITE *dest);

TSS2_RC
Tss2_MU_TPMU_ENCRYPTED_SECRET_Marshal(TPMU_ENCRYPTED_SECRET const *src,
                                      uint32_t selector_value,
                                      uint8_t buffer[],
                                      size_t buffer_size,
                                      size_t *offset);

TSS2_RC
Tss2_MU_TPMU_ENCRYPTED_SECRET_Unmarshal(uint8_t const buffer[],
                                        size_t buffer_size,
                                        size_t *offset,
                                        uint32_t selector_value,
                                        TPMU_ENCRYPTED_SECRET *dest);

TSS2_RC
Tss2_MU_TPMU_PUBLIC_PARMS_Marshal(TPMU_PUBLIC_PARMS const *src,
                                  uint32_t selector_value,
                                  uint8_t buffer[],
                                  size_t buffer_size,
                                  size_t *offset);

TSS2_RC
Tss2_MU_TPMU_PUBLIC_PARMS_Unmarshal(uint8_t const buffer[],
                                    size_t buffer_size,
                                    size_t *offset,
                                    uint32_t selector_value,
                                    TPMU_PUBLIC_PARMS *dest);

TSS2_RC
Tss2_MU_TPMU_PUBLIC_ID_Marshal(TPMU_PUBLIC_ID const *src,
                               uint32_t selector_value,
                               uint8_t buffer[],
                               size_t buffer_size,
                               size_t *offset);

TSS2_RC
Tss2_MU_TPMU_PUBLIC_ID_Unmarshal(uint8_t const buffer[],
                                 size_t buffer_size,
                                 size_t *offset,
                                 uint32_t selector_value,
                                 TPMU_PUBLIC_ID *dest);

TSS2_RC
Tss2_MU_TPMU_NAME_Marshal(TPMU_NAME const *src,
                          uint32_t selector_value,
                          uint8_t buffer[],
                          size_t buffer_size,
                          size_t *offset);

TSS2_RC
Tss2_MU_TPMU_NAME_Unmarshal(uint8_t const buffer[],
                            size_t buffer_size,
                            size_t *offset,
                            uint32_t selector_value,
                            TPMU_NAME *dest);

TSS2_RC
Tss2_MU_TPMT_HA_Marshal(TPMT_HA const *src, uint8_t buffer[], size_t buffer_size, size_t *offset);

TSS2_RC
Tss2_MU_TPMT_HA_Unmarshal(uint8_t const buffer[],
                          size_t buffer_size,
                          size_t *offset,
                          TPMT_HA *dest);

TSS2_RC
Tss2_MU_TPMT_SYM_DEF_Marshal(TPMT_SYM_DEF const *src,
                             uint8_t buffer[],
                             size_t buffer_size,
                             size_t *offset);

TSS2_RC
Tss2_MU_TPMT_SYM_DEF_Unmarshal(uint8_t const buffer[],
                               size_t buffer_size,
                               size_t *offset,
                               TPMT_SYM_DEF *dest);

TSS2_RC
Tss2_MU_TPMT_SYM_DEF_OBJECT_Marshal(TPMT_SYM_DEF_OBJECT const *src,
                                    uint8_t buffer[],
                                    size_t buffer_size,
                                    size_t *offset);

TSS2_RC
Tss2_MU_TPMT_SYM_DEF_OBJECT_Unmarshal(uint8_t const buffer[],
                                      size_t buffer_size,
                                      size_t *offset,
                                      TPMT_SYM_DEF_OBJECT *dest);

TSS2_RC
Tss2_MU_TPMT_KEYEDHASH_SCHEME_Marshal(TPMT_KEYEDHASH_SCHEME const *src,
                                      uint8_t buffer[],
                                      size_t buffer_size,
                                      size_t *offset);

TSS2_RC
Tss2_MU_TPMT_KEYEDHASH_SCHEME_Unmarshal(uint8_t const buffer[],
                                        size_t buffer_size,
                                        size_t *offset,
                                        TPMT_KEYEDHASH_SCHEME *dest);

TSS2_RC
Tss2_MU_TPMT_SIG_SCHEME_Marshal(TPMT_SIG_SCHEME const *src,
                                uint8_t buffer[],
                                size_t buffer_size,
                                size_t *offset);

TSS2_RC
Tss2_MU_TPMT_SIG_SCHEME_Unmarshal(uint8_t const buffer[],
                                  size_t buffer_size,
                                  size_t *offset,
                                  TPMT_SIG_SCHEME *dest);

TSS2_RC
Tss2_MU_TPMT_KDF_SCHEME_Marshal(TPMT_KDF_SCHEME const *src,
                                uint8_t buffer[],
                                size_t buffer_size,
                                size_t *offset);

TSS2_RC
Tss2_MU_TPMT_KDF_SCHEME_Unmarshal(uint8_t const buffer[],
                                  size_t buffer_size,
                                  size_t *offset,
                                  TPMT_KDF_SCHEME *dest);

TSS2_RC
Tss2_MU_TPMT_ASYM_SCHEME_Marshal(TPMT_ASYM_SCHEME const *src,
                                 uint8_t buffer[],
                                 size_t buffer_size,
                                 size_t *offset);

TSS2_RC
Tss2_MU_TPMT_ASYM_SCHEME_Unmarshal(uint8_t const buffer[],
                                   size_t buffer_size,
                                   size_t *offset,
                                   TPMT_ASYM_SCHEME *dest);

TSS2_RC
Tss2_MU_TPMT_RSA_SCHEME_Marshal(TPMT_RSA_SCHEME const *src,
                                uint8_t buffer[],
                                size_t buffer_size,
                                size_t *offset);

TSS2_RC
Tss2_MU_TPMT_RSA_SCHEME_Unmarshal(uint8_t const buffer[],
                                  size_t buffer_size,
                                  size_t *offset,
                                  TPMT_RSA_SCHEME *dest);

TSS2_RC
Tss2_MU_TPMT_RSA_DECRYPT_Marshal(TPMT_RSA_DECRYPT const *src,
                                 uint8_t buffer[],
                                 size_t buffer_size,
                                 size_t *offset);

TSS2_RC
Tss2_MU_TPMT_RSA_DECRYPT_Unmarshal(uint8_t const buffer[],
                                   size_t buffer_size,
                                   size_t *offset,
                                   TPMT_RSA_DECRYPT *dest);

TSS2_RC
Tss2_MU_TPMT_ECC_SCHEME_Marshal(TPMT_ECC_SCHEME const *src,
                                uint8_t buffer[],
                                size_t buffer_size,
                                size_t *offset);

TSS2_RC
Tss2_MU_TPMT_ECC_SCHEME_Unmarshal(uint8_t const buffer[],
                                  size_t buffer_size,
                                  size_t *offset,
                                  TPMT_ECC_SCHEME *dest);

TSS2_RC
Tss2_MU_TPMT_SIGNATURE_Marshal(TPMT_SIGNATURE const *src,
                               uint8_t buffer[],
                               size_t buffer_size,
                               size_t *offset);

TSS2_RC
Tss2_MU_TPMT_SIGNATURE_Unmarshal(uint8_t const buffer[],
                                 size_t buffer_size,
                                 size_t *offset,
                                 TPMT_SIGNATURE *dest);

TSS2_RC
Tss2_MU_TPMT_SENSITIVE_Marshal(TPMT_SENSITIVE const *src,
                               uint8_t buffer[],
                               size_t buffer_size,
                               size_t *offset);

TSS2_RC
Tss2_MU_TPMT_SENSITIVE_Unmarshal(uint8_t const buffer[],
                                 size_t buffer_size,
                                 size_t *offset,
                                 TPMT_SENSITIVE *dest);

TSS2_RC
Tss2_MU_TPMT_PUBLIC_Marshal(TPMT_PUBLIC const *src,
                            uint8_t buffer[],
                            size_t buffer_size,
                            size_t *offset);

TSS2_RC
Tss2_MU_TPMT_PUBLIC_Unmarshal(uint8_t const buffer[],
                              size_t buffer_size,
                              size_t *offset,
                              TPMT_PUBLIC *dest);

TSS2_RC
Tss2_MU_TPMT_PUBLIC_PARMS_Marshal(TPMT_PUBLIC_PARMS const *src,
                                  uint8_t buffer[],
                                  size_t buffer_size,
                                  size_t *offset);

TSS2_RC
Tss2_MU_TPMT_PUBLIC_PARMS_Unmarshal(uint8_t const buffer[],
                                    size_t buffer_size,
                                    size_t *offset,
                                    TPMT_PUBLIC_PARMS *dest);

TSS2_RC
Tss2_MU_TPMT_TK_CREATION_Marshal(TPMT_TK_CREATION const *src,
                                 uint8_t buffer[],
                                 size_t buffer_size,
                                 size_t *offset);

TSS2_RC
Tss2_MU_TPMT_TK_CREATION_Unmarshal(uint8_t const buffer[],
                                   size_t buffer_size,
                                   size_t *offset,
                                   TPMT_TK_CREATION *dest);

TSS2_RC
Tss2_MU_TPMT_TK_VERIFIED_Marshal(TPMT_TK_VERIFIED const *src,
                                 uint8_t buffer[],
                                 size_t buffer_size,
                                 size_t *offset);

TSS2_RC
Tss2_MU_TPMT_TK_VERIFIED_Unmarshal(uint8_t const buffer[],
                                   size_t buffer_size,
                                   size_t *offset,
                                   TPMT_TK_VERIFIED *dest);

TSS2_RC
Tss2_MU_TPMT_TK_AUTH_Marshal(TPMT_TK_AUTH const *src,
                             uint8_t buffer[],
                             size_t buffer_size,
                             size_t *offset);

TSS2_RC
Tss2_MU_TPMT_TK_AUTH_Unmarshal(uint8_t const buffer[],
                               size_t buffer_size,
                               size_t *offset,
                               TPMT_TK_AUTH *dest);

TSS2_RC
Tss2_MU_TPMT_TK_HASHCHECK_Marshal(TPMT_TK_HASHCHECK const *src,
                                  uint8_t buffer[],
                                  size_t buffer_size,
                                  size_t *offset);

TSS2_RC
Tss2_MU_TPMT_TK_HASHCHECK_Unmarshal(uint8_t const buffer[],
                                    size_t buffer_size,
                                    size_t *offset,
                                    TPMT_TK_HASHCHECK *dest);

TSS2_RC
Tss2_MU_TPM2_HANDLE_Marshal(TPM2_HANDLE in, uint8_t *buffer, size_t size, size_t *offset);

TSS2_RC
Tss2_MU_TPM2_HANDLE_Unmarshal(uint8_t const buffer[],
                              size_t size,
                              size_t *offset,
                              TPM2_HANDLE *out);

TSS2_RC
Tss2_MU_TPMI_ALG_HASH_Marshal(TPMI_ALG_HASH in, uint8_t *buffer, size_t size, size_t *offset);

TSS2_RC
Tss2_MU_TPMI_ALG_HASH_Unmarshal(uint8_t const buffer[],
                                size_t size,
                                size_t *offset,
                                TPMI_ALG_HASH *out);

TSS2_RC
Tss2_MU_BYTE_Marshal(BYTE in, uint8_t *buffer, size_t size, size_t *offset);

TSS2_RC
Tss2_MU_BYTE_Unmarshal(uint8_t const buffer[], size_t size, size_t *offset, BYTE *out);

TSS2_RC
Tss2_MU_TPM2_SE_Marshal(TPM2_SE in, uint8_t *buffer, size_t size, size_t *offset);

TSS2_RC
Tss2_MU_TPM2_SE_Unmarshal(uint8_t const buffer[], size_t size, size_t *offset, TPM2_SE *out);

TSS2_RC
Tss2_MU_TPM2_NT_Marshal(TPM2_NT in, uint8_t *buffer, size_t size, size_t *offset);

TSS2_RC
Tss2_MU_TPM2_NT_Unmarshal(uint8_t const buffer[], size_t size, size_t *offset, TPM2_NT *out);

TSS2_RC
Tss2_MU_TPMS_EMPTY_Marshal(TPMS_EMPTY const *in, uint8_t *buffer, size_t size, size_t *offset);

TSS2_RC
Tss2_MU_TPMS_EMPTY_Unmarshal(uint8_t const buffer[], size_t size, size_t *offset, TPMS_EMPTY *out);

TSS2_RC
Tss2_MU_TPM2B_MAX_CAP_BUFFER_Marshal(TPM2B_MAX_CAP_BUFFER const *src,
                                     uint8_t buffer[],
                                     size_t buffer_size,
                                     size_t *offset);

TSS2_RC
Tss2_MU_TPM2B_MAX_CAP_BUFFER_Unmarshal(uint8_t const buffer[],
                                       size_t buffer_size,
                                       size_t *offset,
                                       TPM2B_MAX_CAP_BUFFER *dest);


TSS2_RC
Tss2_MU_TPML_INTEL_PTT_PROPERTY_Marshal(TPML_INTEL_PTT_PROPERTY const *src,
                                        uint8_t buffer[],
                                        size_t buffer_size,
                                        size_t *offset);

TSS2_RC
Tss2_MU_TPML_INTEL_PTT_PROPERTY_Unmarshal(uint8_t const buffer[],
                                          size_t buffer_size,
                                          size_t *offset,
                                          TPML_INTEL_PTT_PROPERTY *dest);
# 14 "lib/files.c" 2

# 1 "lib/files.h" 1
# 9 "lib/files.h"
# 1 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_esys.h" 1
# 9 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_esys.h"
# 1 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_sys.h" 1
# 14 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_sys.h"
# 1 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tcti.h" 1
# 39 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tcti.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 143 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 3 4

# 143 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 40 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tcti.h" 2
# 53 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tcti.h"
# 1 "/usr/include/poll.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/poll.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/sys/poll.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/poll.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/sys/poll.h" 2 3 4







typedef unsigned long int nfds_t;


struct pollfd
  {
    int fd;
    short int events;
    short int revents;
  };



# 54 "/usr/include/x86_64-linux-gnu/sys/poll.h" 3 4
extern int poll (struct pollfd *__fds, nfds_t __nfds, int __timeout);
# 63 "/usr/include/x86_64-linux-gnu/sys/poll.h" 3 4
extern int ppoll (struct pollfd *__fds, nfds_t __nfds,
    const struct timespec *__timeout,
    const __sigset_t *__ss);







# 1 "/usr/include/x86_64-linux-gnu/bits/poll2.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/poll2.h" 3 4


extern int __poll_alias (struct pollfd *__fds, nfds_t __nfds, int __timeout) __asm__ ("" "poll")
                               ;
extern int __poll_chk (struct pollfd *__fds, nfds_t __nfds, int __timeout,
         long unsigned int __fdslen);
extern int __poll_chk_warn (struct pollfd *__fds, nfds_t __nfds, int __timeout, long unsigned int __fdslen) __asm__ ("" "__poll_chk")


  __attribute__((__warning__ ("poll called with fds buffer too small file nfds entries")));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
poll (struct pollfd *__fds, nfds_t __nfds, int __timeout)
{
  if (__builtin_object_size (__fds, 2 > 1) != (long unsigned int) -1)
    {
      if (! __builtin_constant_p (__nfds))
 return __poll_chk (__fds, __nfds, __timeout, __builtin_object_size (__fds, 2 > 1));
      else if (__builtin_object_size (__fds, 2 > 1) / sizeof (*__fds) < __nfds)
 return __poll_chk_warn (__fds, __nfds, __timeout, __builtin_object_size (__fds, 2 > 1));
    }

  return __poll_alias (__fds, __nfds, __timeout);
}



extern int __ppoll_alias (struct pollfd *__fds, nfds_t __nfds, const struct timespec *__timeout, const __sigset_t *__ss) __asm__ ("" "ppoll")

                                          ;
extern int __ppoll_chk (struct pollfd *__fds, nfds_t __nfds,
   const struct timespec *__timeout,
   const __sigset_t *__ss, long unsigned int __fdslen);
extern int __ppoll_chk_warn (struct pollfd *__fds, nfds_t __nfds, const struct timespec *__timeout, const __sigset_t *__ss, long unsigned int __fdslen) __asm__ ("" "__ppoll_chk")




  __attribute__((__warning__ ("ppoll called with fds buffer too small file nfds entries")));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
ppoll (struct pollfd *__fds, nfds_t __nfds, const struct timespec *__timeout,
       const __sigset_t *__ss)
{
  if (__builtin_object_size (__fds, 2 > 1) != (long unsigned int) -1)
    {
      if (! __builtin_constant_p (__nfds))
 return __ppoll_chk (__fds, __nfds, __timeout, __ss, __builtin_object_size (__fds, 2 > 1));
      else if (__builtin_object_size (__fds, 2 > 1) / sizeof (*__fds) < __nfds)
 return __ppoll_chk_warn (__fds, __nfds, __timeout, __ss,
     __builtin_object_size (__fds, 2 > 1));
    }

  return __ppoll_alias (__fds, __nfds, __timeout, __ss);
}



# 74 "/usr/include/x86_64-linux-gnu/sys/poll.h" 2 3 4
# 1 "/usr/include/poll.h" 2 3 4
# 54 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tcti.h" 2


# 55 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tcti.h"
typedef struct pollfd TSS2_TCTI_POLL_HANDLE;
# 128 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_tcti.h"
typedef struct TSS2_TCTI_OPAQUE_CONTEXT_BLOB TSS2_TCTI_CONTEXT;





typedef TSS2_RC (*TSS2_TCTI_TRANSMIT_FCN)(TSS2_TCTI_CONTEXT *tctiContext,
                                          size_t size,
                                          uint8_t const *command);
typedef TSS2_RC (*TSS2_TCTI_RECEIVE_FCN)(TSS2_TCTI_CONTEXT *tctiContext,
                                         size_t *size,
                                         uint8_t *response,
                                         int32_t timeout);
typedef void (*TSS2_TCTI_FINALIZE_FCN)(TSS2_TCTI_CONTEXT *tctiContext);
typedef TSS2_RC (*TSS2_TCTI_CANCEL_FCN)(TSS2_TCTI_CONTEXT *tctiContext);
typedef TSS2_RC (*TSS2_TCTI_GET_POLL_HANDLES_FCN)(TSS2_TCTI_CONTEXT *tctiContext,
                                                  TSS2_TCTI_POLL_HANDLE *handles,
                                                  size_t *num_handles);
typedef TSS2_RC (*TSS2_TCTI_SET_LOCALITY_FCN)(TSS2_TCTI_CONTEXT *tctiContext, uint8_t locality);
typedef TSS2_RC (*TSS2_TCTI_MAKE_STICKY_FCN)(TSS2_TCTI_CONTEXT *tctiContext,
                                             TPM2_HANDLE *handle,
                                             uint8_t sticky);
typedef TSS2_RC (*TSS2_TCTI_INIT_FUNC)(TSS2_TCTI_CONTEXT *tctiContext,
                                       size_t *size,
                                       const char *config);


typedef struct TSS2_TCTI_CONTEXT_COMMON_V1 TSS2_TCTI_CONTEXT_COMMON_V1;
struct TSS2_TCTI_CONTEXT_COMMON_V1 {
    uint64_t magic;
    uint32_t version;
    TSS2_TCTI_TRANSMIT_FCN transmit;
    TSS2_TCTI_RECEIVE_FCN receive;
    TSS2_TCTI_FINALIZE_FCN finalize;
    TSS2_TCTI_CANCEL_FCN cancel;
    TSS2_TCTI_GET_POLL_HANDLES_FCN getPollHandles;
    TSS2_TCTI_SET_LOCALITY_FCN setLocality;
};

typedef struct TSS2_TCTI_CONTEXT_COMMON_V2 TSS2_TCTI_CONTEXT_COMMON_V2;
struct TSS2_TCTI_CONTEXT_COMMON_V2 {
    TSS2_TCTI_CONTEXT_COMMON_V1 v1;
    TSS2_TCTI_MAKE_STICKY_FCN makeSticky;
};

typedef TSS2_TCTI_CONTEXT_COMMON_V2 TSS2_TCTI_CONTEXT_COMMON_CURRENT;



typedef struct TSS2_TCTI_INFO TSS2_TCTI_INFO;
struct TSS2_TCTI_INFO {
    uint32_t version;
    const char *name;
    const char *description;
    const char *config_help;
    TSS2_TCTI_INIT_FUNC init;
};

typedef const TSS2_TCTI_INFO *(*TSS2_TCTI_INFO_FUNC)(void);
# 15 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_sys.h" 2
# 26 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_sys.h"
typedef struct _TSS2_SYS_OPAQUE_CONTEXT_BLOB TSS2_SYS_CONTEXT;




typedef struct TSS2L_SYS_AUTH_COMMAND TSS2L_SYS_AUTH_COMMAND;
struct TSS2L_SYS_AUTH_COMMAND {
    uint16_t count;
    TPMS_AUTH_COMMAND auths[3];
};

typedef struct TSS2L_SYS_AUTH_RESPONSE TSS2L_SYS_AUTH_RESPONSE;
struct TSS2L_SYS_AUTH_RESPONSE {
    uint16_t count;
    TPMS_AUTH_RESPONSE auths[3];
};

size_t Tss2_Sys_GetContextSize(size_t maxCommandResponseSize);

TSS2_RC Tss2_Sys_Initialize(TSS2_SYS_CONTEXT *sysContext,
                            size_t contextSize,
                            TSS2_TCTI_CONTEXT *tctiContext,
                            TSS2_ABI_VERSION *abiVersion);

void Tss2_Sys_Finalize(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_GetTctiContext(TSS2_SYS_CONTEXT *sysContext, TSS2_TCTI_CONTEXT **tctiContext);


TSS2_RC Tss2_Sys_GetDecryptParam(TSS2_SYS_CONTEXT *sysContext,
                                 size_t *decryptParamSize,
                                 const uint8_t **decryptParamBuffer);

TSS2_RC Tss2_Sys_SetDecryptParam(TSS2_SYS_CONTEXT *sysContext,
                                 size_t decryptParamSize,
                                 const uint8_t *decryptParamBuffer);

TSS2_RC Tss2_Sys_GetCpBuffer(TSS2_SYS_CONTEXT *sysContext,
                             size_t *cpBufferUsedSize,
                             const uint8_t **cpBuffer);

TSS2_RC Tss2_Sys_SetCmdAuths(TSS2_SYS_CONTEXT *sysContext,
                             const TSS2L_SYS_AUTH_COMMAND *cmdAuthsArray);


TSS2_RC Tss2_Sys_ExecuteAsync(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_ExecuteFinish(TSS2_SYS_CONTEXT *sysContext, int32_t timeout);

TSS2_RC Tss2_Sys_Execute(TSS2_SYS_CONTEXT *sysContext);


TSS2_RC Tss2_Sys_GetCommandCode(TSS2_SYS_CONTEXT *sysContext, UINT8 *commandCode);

TSS2_RC Tss2_Sys_GetRspAuths(TSS2_SYS_CONTEXT *sysContext, TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_GetEncryptParam(TSS2_SYS_CONTEXT *sysContext,
                                 size_t *encryptParamSize,
                                 const uint8_t **encryptParamBuffer);

TSS2_RC Tss2_Sys_SetEncryptParam(TSS2_SYS_CONTEXT *sysContext,
                                 size_t encryptParamSize,
                                 const uint8_t *encryptParamBuffer);

TSS2_RC Tss2_Sys_GetRpBuffer(TSS2_SYS_CONTEXT *sysContext,
                             size_t *rpBufferUsedSize,
                             const uint8_t **rpBuffer);

TSS2_RC Tss2_Sys_Startup_Prepare(TSS2_SYS_CONTEXT *sysContext, TPM2_SU startupType);

TSS2_RC Tss2_Sys_Startup_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_Startup(TSS2_SYS_CONTEXT *sysContext, TPM2_SU startupType);

TSS2_RC Tss2_Sys_Shutdown_Prepare(TSS2_SYS_CONTEXT *sysContext, TPM2_SU shutdownType);

TSS2_RC Tss2_Sys_Shutdown_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_Shutdown(TSS2_SYS_CONTEXT *sysContext,
                          TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                          TPM2_SU shutdownType,
                          TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_SelfTest_Prepare(TSS2_SYS_CONTEXT *sysContext, TPMI_YES_NO fullTest);

TSS2_RC Tss2_Sys_SelfTest_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_SelfTest(TSS2_SYS_CONTEXT *sysContext,
                          TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                          TPMI_YES_NO fullTest,
                          TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_IncrementalSelfTest_Prepare(TSS2_SYS_CONTEXT *sysContext, const TPML_ALG *toTest);

TSS2_RC Tss2_Sys_IncrementalSelfTest_Complete(TSS2_SYS_CONTEXT *sysContext, TPML_ALG *toDoList);

TSS2_RC Tss2_Sys_IncrementalSelfTest(TSS2_SYS_CONTEXT *sysContext,
                                     TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                     const TPML_ALG *toTest,
                                     TPML_ALG *toDoList,
                                     TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_GetTestResult_Prepare(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_GetTestResult_Complete(TSS2_SYS_CONTEXT *sysContext,
                                        TPM2B_MAX_BUFFER *outData,
                                        TPM2_RC *testResult);

TSS2_RC Tss2_Sys_GetTestResult(TSS2_SYS_CONTEXT *sysContext,
                               TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                               TPM2B_MAX_BUFFER *outData,
                               TPM2_RC *testResult,
                               TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_StartAuthSession_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                          TPMI_DH_OBJECT tpmKey,
                                          TPMI_DH_ENTITY bind,
                                          const TPM2B_NONCE *nonceCaller,
                                          const TPM2B_ENCRYPTED_SECRET *encryptedSalt,
                                          TPM2_SE sessionType,
                                          const TPMT_SYM_DEF *symmetric,
                                          TPMI_ALG_HASH authHash);

TSS2_RC Tss2_Sys_StartAuthSession_Complete(TSS2_SYS_CONTEXT *sysContext,
                                           TPMI_SH_AUTH_SESSION *sessionHandle,
                                           TPM2B_NONCE *nonceTPM);

TSS2_RC Tss2_Sys_StartAuthSession(TSS2_SYS_CONTEXT *sysContext,
                                  TPMI_DH_OBJECT tpmKey,
                                  TPMI_DH_ENTITY bind,
                                  TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                  const TPM2B_NONCE *nonceCaller,
                                  const TPM2B_ENCRYPTED_SECRET *encryptedSalt,
                                  TPM2_SE sessionType,
                                  const TPMT_SYM_DEF *symmetric,
                                  TPMI_ALG_HASH authHash,
                                  TPMI_SH_AUTH_SESSION *sessionHandle,
                                  TPM2B_NONCE *nonceTPM,
                                  TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_PolicyRestart_Prepare(TSS2_SYS_CONTEXT *sysContext, TPMI_SH_POLICY sessionHandle);

TSS2_RC Tss2_Sys_PolicyRestart_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_PolicyRestart(TSS2_SYS_CONTEXT *sysContext,
                               TPMI_SH_POLICY sessionHandle,
                               TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                               TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_Create_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                TPMI_DH_OBJECT parentHandle,
                                const TPM2B_SENSITIVE_CREATE *inSensitive,
                                const TPM2B_PUBLIC *inPublic,
                                const TPM2B_DATA *outsideInfo,
                                const TPML_PCR_SELECTION *creationPCR);

TSS2_RC Tss2_Sys_Create_Complete(TSS2_SYS_CONTEXT *sysContext,
                                 TPM2B_PRIVATE *outPrivate,
                                 TPM2B_PUBLIC *outPublic,
                                 TPM2B_CREATION_DATA *creationData,
                                 TPM2B_DIGEST *creationHash,
                                 TPMT_TK_CREATION *creationTicket);

TSS2_RC Tss2_Sys_Create(TSS2_SYS_CONTEXT *sysContext,
                        TPMI_DH_OBJECT parentHandle,
                        TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                        const TPM2B_SENSITIVE_CREATE *inSensitive,
                        const TPM2B_PUBLIC *inPublic,
                        const TPM2B_DATA *outsideInfo,
                        const TPML_PCR_SELECTION *creationPCR,
                        TPM2B_PRIVATE *outPrivate,
                        TPM2B_PUBLIC *outPublic,
                        TPM2B_CREATION_DATA *creationData,
                        TPM2B_DIGEST *creationHash,
                        TPMT_TK_CREATION *creationTicket,
                        TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_Load_Prepare(TSS2_SYS_CONTEXT *sysContext,
                              TPMI_DH_OBJECT parentHandle,
                              const TPM2B_PRIVATE *inPrivate,
                              const TPM2B_PUBLIC *inPublic);

TSS2_RC
Tss2_Sys_Load_Complete(TSS2_SYS_CONTEXT *sysContext, TPM2_HANDLE *objectHandle, TPM2B_NAME *name);

TSS2_RC Tss2_Sys_Load(TSS2_SYS_CONTEXT *sysContext,
                      TPMI_DH_OBJECT parentHandle,
                      TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                      const TPM2B_PRIVATE *inPrivate,
                      const TPM2B_PUBLIC *inPublic,
                      TPM2_HANDLE *objectHandle,
                      TPM2B_NAME *name,
                      TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_LoadExternal_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                      const TPM2B_SENSITIVE *inPrivate,
                                      const TPM2B_PUBLIC *inPublic,
                                      TPMI_RH_HIERARCHY hierarchy);

TSS2_RC Tss2_Sys_LoadExternal_Complete(TSS2_SYS_CONTEXT *sysContext,
                                       TPM2_HANDLE *objectHandle,
                                       TPM2B_NAME *name);

TSS2_RC Tss2_Sys_LoadExternal(TSS2_SYS_CONTEXT *sysContext,
                              TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                              const TPM2B_SENSITIVE *inPrivate,
                              const TPM2B_PUBLIC *inPublic,
                              TPMI_RH_HIERARCHY hierarchy,
                              TPM2_HANDLE *objectHandle,
                              TPM2B_NAME *name,
                              TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_ReadPublic_Prepare(TSS2_SYS_CONTEXT *sysContext, TPMI_DH_OBJECT objectHandle);

TSS2_RC Tss2_Sys_ReadPublic_Complete(TSS2_SYS_CONTEXT *sysContext,
                                     TPM2B_PUBLIC *outPublic,
                                     TPM2B_NAME *name,
                                     TPM2B_NAME *qualifiedName);

TSS2_RC Tss2_Sys_ReadPublic(TSS2_SYS_CONTEXT *sysContext,
                            TPMI_DH_OBJECT objectHandle,
                            TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                            TPM2B_PUBLIC *outPublic,
                            TPM2B_NAME *name,
                            TPM2B_NAME *qualifiedName,
                            TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_ActivateCredential_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                            TPMI_DH_OBJECT activateHandle,
                                            TPMI_DH_OBJECT keyHandle,
                                            const TPM2B_ID_OBJECT *credentialBlob,
                                            const TPM2B_ENCRYPTED_SECRET *secret);

TSS2_RC Tss2_Sys_ActivateCredential_Complete(TSS2_SYS_CONTEXT *sysContext, TPM2B_DIGEST *certInfo);

TSS2_RC Tss2_Sys_ActivateCredential(TSS2_SYS_CONTEXT *sysContext,
                                    TPMI_DH_OBJECT activateHandle,
                                    TPMI_DH_OBJECT keyHandle,
                                    TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                    const TPM2B_ID_OBJECT *credentialBlob,
                                    const TPM2B_ENCRYPTED_SECRET *secret,
                                    TPM2B_DIGEST *certInfo,
                                    TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_MakeCredential_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                        TPMI_DH_OBJECT handle,
                                        const TPM2B_DIGEST *credential,
                                        const TPM2B_NAME *objectName);

TSS2_RC Tss2_Sys_MakeCredential_Complete(TSS2_SYS_CONTEXT *sysContext,
                                         TPM2B_ID_OBJECT *credentialBlob,
                                         TPM2B_ENCRYPTED_SECRET *secret);

TSS2_RC Tss2_Sys_MakeCredential(TSS2_SYS_CONTEXT *sysContext,
                                TPMI_DH_OBJECT handle,
                                TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                const TPM2B_DIGEST *credential,
                                const TPM2B_NAME *objectName,
                                TPM2B_ID_OBJECT *credentialBlob,
                                TPM2B_ENCRYPTED_SECRET *secret,
                                TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_Unseal_Prepare(TSS2_SYS_CONTEXT *sysContext, TPMI_DH_OBJECT itemHandle);

TSS2_RC Tss2_Sys_Unseal_Complete(TSS2_SYS_CONTEXT *sysContext, TPM2B_SENSITIVE_DATA *outData);

TSS2_RC Tss2_Sys_Unseal(TSS2_SYS_CONTEXT *sysContext,
                        TPMI_DH_OBJECT itemHandle,
                        TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                        TPM2B_SENSITIVE_DATA *outData,
                        TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_ObjectChangeAuth_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                          TPMI_DH_OBJECT objectHandle,
                                          TPMI_DH_OBJECT parentHandle,
                                          const TPM2B_AUTH *newAuth);

TSS2_RC Tss2_Sys_ObjectChangeAuth_Complete(TSS2_SYS_CONTEXT *sysContext, TPM2B_PRIVATE *outPrivate);

TSS2_RC Tss2_Sys_ObjectChangeAuth(TSS2_SYS_CONTEXT *sysContext,
                                  TPMI_DH_OBJECT objectHandle,
                                  TPMI_DH_OBJECT parentHandle,
                                  TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                  const TPM2B_AUTH *newAuth,
                                  TPM2B_PRIVATE *outPrivate,
                                  TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_Duplicate_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                   TPMI_DH_OBJECT objectHandle,
                                   TPMI_DH_OBJECT newParentHandle,
                                   const TPM2B_DATA *encryptionKeyIn,
                                   const TPMT_SYM_DEF_OBJECT *symmetricAlg);

TSS2_RC Tss2_Sys_Duplicate_Complete(TSS2_SYS_CONTEXT *sysContext,
                                    TPM2B_DATA *encryptionKeyOut,
                                    TPM2B_PRIVATE *duplicate,
                                    TPM2B_ENCRYPTED_SECRET *outSymSeed);

TSS2_RC Tss2_Sys_Duplicate(TSS2_SYS_CONTEXT *sysContext,
                           TPMI_DH_OBJECT objectHandle,
                           TPMI_DH_OBJECT newParentHandle,
                           TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                           const TPM2B_DATA *encryptionKeyIn,
                           const TPMT_SYM_DEF_OBJECT *symmetricAlg,
                           TPM2B_DATA *encryptionKeyOut,
                           TPM2B_PRIVATE *duplicate,
                           TPM2B_ENCRYPTED_SECRET *outSymSeed,
                           TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_Rewrap_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                TPMI_DH_OBJECT oldParent,
                                TPMI_DH_OBJECT newParent,
                                const TPM2B_PRIVATE *inDuplicate,
                                const TPM2B_NAME *name,
                                const TPM2B_ENCRYPTED_SECRET *inSymSeed);

TSS2_RC Tss2_Sys_Rewrap_Complete(TSS2_SYS_CONTEXT *sysContext,
                                 TPM2B_PRIVATE *outDuplicate,
                                 TPM2B_ENCRYPTED_SECRET *outSymSeed);

TSS2_RC Tss2_Sys_Rewrap(TSS2_SYS_CONTEXT *sysContext,
                        TPMI_DH_OBJECT oldParent,
                        TPMI_DH_OBJECT newParent,
                        TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                        const TPM2B_PRIVATE *inDuplicate,
                        const TPM2B_NAME *name,
                        const TPM2B_ENCRYPTED_SECRET *inSymSeed,
                        TPM2B_PRIVATE *outDuplicate,
                        TPM2B_ENCRYPTED_SECRET *outSymSeed,
                        TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_Import_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                TPMI_DH_OBJECT parentHandle,
                                const TPM2B_DATA *encryptionKey,
                                const TPM2B_PUBLIC *objectPublic,
                                const TPM2B_PRIVATE *duplicate,
                                const TPM2B_ENCRYPTED_SECRET *inSymSeed,
                                const TPMT_SYM_DEF_OBJECT *symmetricAlg);

TSS2_RC Tss2_Sys_Import_Complete(TSS2_SYS_CONTEXT *sysContext, TPM2B_PRIVATE *outPrivate);

TSS2_RC Tss2_Sys_Import(TSS2_SYS_CONTEXT *sysContext,
                        TPMI_DH_OBJECT parentHandle,
                        TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                        const TPM2B_DATA *encryptionKey,
                        const TPM2B_PUBLIC *objectPublic,
                        const TPM2B_PRIVATE *duplicate,
                        const TPM2B_ENCRYPTED_SECRET *inSymSeed,
                        const TPMT_SYM_DEF_OBJECT *symmetricAlg,
                        TPM2B_PRIVATE *outPrivate,
                        TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_RSA_Encrypt_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                     TPMI_DH_OBJECT keyHandle,
                                     const TPM2B_PUBLIC_KEY_RSA *message,
                                     const TPMT_RSA_DECRYPT *inScheme,
                                     const TPM2B_DATA *label);

TSS2_RC Tss2_Sys_RSA_Encrypt_Complete(TSS2_SYS_CONTEXT *sysContext, TPM2B_PUBLIC_KEY_RSA *outData);

TSS2_RC Tss2_Sys_RSA_Encrypt(TSS2_SYS_CONTEXT *sysContext,
                             TPMI_DH_OBJECT keyHandle,
                             TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                             const TPM2B_PUBLIC_KEY_RSA *message,
                             const TPMT_RSA_DECRYPT *inScheme,
                             const TPM2B_DATA *label,
                             TPM2B_PUBLIC_KEY_RSA *outData,
                             TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_RSA_Decrypt_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                     TPMI_DH_OBJECT keyHandle,
                                     const TPM2B_PUBLIC_KEY_RSA *cipherText,
                                     const TPMT_RSA_DECRYPT *inScheme,
                                     const TPM2B_DATA *label);

TSS2_RC Tss2_Sys_RSA_Decrypt_Complete(TSS2_SYS_CONTEXT *sysContext, TPM2B_PUBLIC_KEY_RSA *message);

TSS2_RC Tss2_Sys_RSA_Decrypt(TSS2_SYS_CONTEXT *sysContext,
                             TPMI_DH_OBJECT keyHandle,
                             TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                             const TPM2B_PUBLIC_KEY_RSA *cipherText,
                             const TPMT_RSA_DECRYPT *inScheme,
                             const TPM2B_DATA *label,
                             TPM2B_PUBLIC_KEY_RSA *message,
                             TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_ECDH_KeyGen_Prepare(TSS2_SYS_CONTEXT *sysContext, TPMI_DH_OBJECT keyHandle);

TSS2_RC Tss2_Sys_ECDH_KeyGen_Complete(TSS2_SYS_CONTEXT *sysContext,
                                      TPM2B_ECC_POINT *zPoint,
                                      TPM2B_ECC_POINT *pubPoint);

TSS2_RC Tss2_Sys_ECDH_KeyGen(TSS2_SYS_CONTEXT *sysContext,
                             TPMI_DH_OBJECT keyHandle,
                             TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                             TPM2B_ECC_POINT *zPoint,
                             TPM2B_ECC_POINT *pubPoint,
                             TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_ECDH_ZGen_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                   TPMI_DH_OBJECT keyHandle,
                                   const TPM2B_ECC_POINT *inPoint);

TSS2_RC Tss2_Sys_ECDH_ZGen_Complete(TSS2_SYS_CONTEXT *sysContext, TPM2B_ECC_POINT *outPoint);

TSS2_RC Tss2_Sys_ECDH_ZGen(TSS2_SYS_CONTEXT *sysContext,
                           TPMI_DH_OBJECT keyHandle,
                           TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                           const TPM2B_ECC_POINT *inPoint,
                           TPM2B_ECC_POINT *outPoint,
                           TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_ECC_Parameters_Prepare(TSS2_SYS_CONTEXT *sysContext, TPMI_ECC_CURVE curveID);

TSS2_RC Tss2_Sys_ECC_Parameters_Complete(TSS2_SYS_CONTEXT *sysContext,
                                         TPMS_ALGORITHM_DETAIL_ECC *parameters);

TSS2_RC Tss2_Sys_ECC_Parameters(TSS2_SYS_CONTEXT *sysContext,
                                TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                TPMI_ECC_CURVE curveID,
                                TPMS_ALGORITHM_DETAIL_ECC *parameters,
                                TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_ZGen_2Phase_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                     TPMI_DH_OBJECT keyA,
                                     const TPM2B_ECC_POINT *inQsB,
                                     const TPM2B_ECC_POINT *inQeB,
                                     TPMI_ECC_KEY_EXCHANGE inScheme,
                                     UINT16 counter);

TSS2_RC Tss2_Sys_ZGen_2Phase_Complete(TSS2_SYS_CONTEXT *sysContext,
                                      TPM2B_ECC_POINT *outZ1,
                                      TPM2B_ECC_POINT *outZ2);

TSS2_RC Tss2_Sys_ZGen_2Phase(TSS2_SYS_CONTEXT *sysContext,
                             TPMI_DH_OBJECT keyA,
                             TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                             const TPM2B_ECC_POINT *inQsB,
                             const TPM2B_ECC_POINT *inQeB,
                             TPMI_ECC_KEY_EXCHANGE inScheme,
                             UINT16 counter,
                             TPM2B_ECC_POINT *outZ1,
                             TPM2B_ECC_POINT *outZ2,
                             TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_EncryptDecrypt_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                        TPMI_DH_OBJECT keyHandle,
                                        TPMI_YES_NO decrypt,
                                        TPMI_ALG_CIPHER_MODE mode,
                                        const TPM2B_IV *ivIn,
                                        const TPM2B_MAX_BUFFER *inData);

TSS2_RC Tss2_Sys_EncryptDecrypt_Complete(TSS2_SYS_CONTEXT *sysContext,
                                         TPM2B_MAX_BUFFER *outData,
                                         TPM2B_IV *ivOut);

TSS2_RC Tss2_Sys_EncryptDecrypt(TSS2_SYS_CONTEXT *sysContext,
                                TPMI_DH_OBJECT keyHandle,
                                TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                TPMI_YES_NO decrypt,
                                TPMI_ALG_CIPHER_MODE mode,
                                const TPM2B_IV *ivIn,
                                const TPM2B_MAX_BUFFER *inData,
                                TPM2B_MAX_BUFFER *outData,
                                TPM2B_IV *ivOut,
                                TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_EncryptDecrypt2_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                         TPMI_DH_OBJECT keyHandle,
                                         const TPM2B_MAX_BUFFER *inData,
                                         TPMI_YES_NO decrypt,
                                         TPMI_ALG_CIPHER_MODE mode,
                                         const TPM2B_IV *ivIn);

TSS2_RC Tss2_Sys_EncryptDecrypt2_Complete(TSS2_SYS_CONTEXT *sysContext,
                                          TPM2B_MAX_BUFFER *outData,
                                          TPM2B_IV *ivOut);

TSS2_RC Tss2_Sys_EncryptDecrypt2(TSS2_SYS_CONTEXT *sysContext,
                                 TPMI_DH_OBJECT keyHandle,
                                 TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                 const TPM2B_MAX_BUFFER *inData,
                                 TPMI_YES_NO decrypt,
                                 TPMI_ALG_CIPHER_MODE mode,
                                 const TPM2B_IV *ivIn,
                                 TPM2B_MAX_BUFFER *outData,
                                 TPM2B_IV *ivOut,
                                 TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_Hash_Prepare(TSS2_SYS_CONTEXT *sysContext,
                              const TPM2B_MAX_BUFFER *data,
                              TPMI_ALG_HASH hashAlg,
                              TPMI_RH_HIERARCHY hierarchy);

TSS2_RC Tss2_Sys_Hash_Complete(TSS2_SYS_CONTEXT *sysContext,
                               TPM2B_DIGEST *outHash,
                               TPMT_TK_HASHCHECK *validation);

TSS2_RC Tss2_Sys_Hash(TSS2_SYS_CONTEXT *sysContext,
                      TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                      const TPM2B_MAX_BUFFER *data,
                      TPMI_ALG_HASH hashAlg,
                      TPMI_RH_HIERARCHY hierarchy,
                      TPM2B_DIGEST *outHash,
                      TPMT_TK_HASHCHECK *validation,
                      TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_HMAC_Prepare(TSS2_SYS_CONTEXT *sysContext,
                              TPMI_DH_OBJECT handle,
                              const TPM2B_MAX_BUFFER *buffer,
                              TPMI_ALG_HASH hashAlg);

TSS2_RC Tss2_Sys_HMAC_Complete(TSS2_SYS_CONTEXT *sysContext, TPM2B_DIGEST *outHMAC);

TSS2_RC Tss2_Sys_HMAC(TSS2_SYS_CONTEXT *sysContext,
                      TPMI_DH_OBJECT handle,
                      TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                      const TPM2B_MAX_BUFFER *buffer,
                      TPMI_ALG_HASH hashAlg,
                      TPM2B_DIGEST *outHMAC,
                      TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_MAC_Prepare(TSS2_SYS_CONTEXT *sysContext,
                             TPMI_DH_OBJECT handle,
                             const TPM2B_MAX_BUFFER *buffer,
                             TPMI_ALG_MAC_SCHEME inScheme);

TSS2_RC Tss2_Sys_MAC_Complete(TSS2_SYS_CONTEXT *sysContext, TPM2B_DIGEST *outMAC);

TSS2_RC Tss2_Sys_MAC(TSS2_SYS_CONTEXT *sysContext,
                     TPMI_DH_OBJECT handle,
                     const TSS2L_SYS_AUTH_COMMAND *cmdAuths,
                     const TPM2B_MAX_BUFFER *buffer,
                     TPMI_ALG_MAC_SCHEME inScheme,
                     TPM2B_DIGEST *outMAC,
                     TSS2L_SYS_AUTH_RESPONSE *rspAuths);

TSS2_RC Tss2_Sys_GetRandom_Prepare(TSS2_SYS_CONTEXT *sysContext, UINT16 bytesRequested);

TSS2_RC Tss2_Sys_GetRandom_Complete(TSS2_SYS_CONTEXT *sysContext, TPM2B_DIGEST *randomBytes);

TSS2_RC Tss2_Sys_GetRandom(TSS2_SYS_CONTEXT *sysContext,
                           TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                           UINT16 bytesRequested,
                           TPM2B_DIGEST *randomBytes,
                           TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_StirRandom_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                    const TPM2B_SENSITIVE_DATA *inData);

TSS2_RC Tss2_Sys_StirRandom_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_StirRandom(TSS2_SYS_CONTEXT *sysContext,
                            TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                            const TPM2B_SENSITIVE_DATA *inData,
                            TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_HMAC_Start_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                    TPMI_DH_OBJECT handle,
                                    const TPM2B_AUTH *auth,
                                    TPMI_ALG_HASH hashAlg);

TSS2_RC Tss2_Sys_HMAC_Start_Complete(TSS2_SYS_CONTEXT *sysContext, TPMI_DH_OBJECT *sequenceHandle);

TSS2_RC Tss2_Sys_HMAC_Start(TSS2_SYS_CONTEXT *sysContext,
                            TPMI_DH_OBJECT handle,
                            TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                            const TPM2B_AUTH *auth,
                            TPMI_ALG_HASH hashAlg,
                            TPMI_DH_OBJECT *sequenceHandle,
                            TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_MAC_Start_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                   TPMI_DH_OBJECT handle,
                                   const TPM2B_AUTH *auth,
                                   TPMI_ALG_MAC_SCHEME inScheme);

TSS2_RC Tss2_Sys_MAC_Start_Complete(TSS2_SYS_CONTEXT *sysContext, TPMI_DH_OBJECT *sequenceHandle);

TSS2_RC Tss2_Sys_MAC_Start(TSS2_SYS_CONTEXT *sysContext,
                           TPMI_DH_OBJECT handle,
                           const TSS2L_SYS_AUTH_COMMAND *cmdAuths,
                           const TPM2B_AUTH *auth,
                           TPMI_ALG_MAC_SCHEME inScheme,
                           TPMI_DH_OBJECT *sequenceHandle,
                           TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_HashSequenceStart_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                           const TPM2B_AUTH *auth,
                                           TPMI_ALG_HASH hashAlg);

TSS2_RC Tss2_Sys_HashSequenceStart_Complete(TSS2_SYS_CONTEXT *sysContext,
                                            TPMI_DH_OBJECT *sequenceHandle);

TSS2_RC Tss2_Sys_HashSequenceStart(TSS2_SYS_CONTEXT *sysContext,
                                   TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                   const TPM2B_AUTH *auth,
                                   TPMI_ALG_HASH hashAlg,
                                   TPMI_DH_OBJECT *sequenceHandle,
                                   TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_SequenceUpdate_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                        TPMI_DH_OBJECT sequenceHandle,
                                        const TPM2B_MAX_BUFFER *buffer);

TSS2_RC Tss2_Sys_SequenceUpdate_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_SequenceUpdate(TSS2_SYS_CONTEXT *sysContext,
                                TPMI_DH_OBJECT sequenceHandle,
                                TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                const TPM2B_MAX_BUFFER *buffer,
                                TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_SequenceComplete_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                          TPMI_DH_OBJECT sequenceHandle,
                                          const TPM2B_MAX_BUFFER *buffer,
                                          TPMI_RH_HIERARCHY hierarchy);

TSS2_RC Tss2_Sys_SequenceComplete_Complete(TSS2_SYS_CONTEXT *sysContext,
                                           TPM2B_DIGEST *result,
                                           TPMT_TK_HASHCHECK *validation);

TSS2_RC Tss2_Sys_SequenceComplete(TSS2_SYS_CONTEXT *sysContext,
                                  TPMI_DH_OBJECT sequenceHandle,
                                  TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                  const TPM2B_MAX_BUFFER *buffer,
                                  TPMI_RH_HIERARCHY hierarchy,
                                  TPM2B_DIGEST *result,
                                  TPMT_TK_HASHCHECK *validation,
                                  TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_EventSequenceComplete_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                               TPMI_DH_PCR pcrHandle,
                                               TPMI_DH_OBJECT sequenceHandle,
                                               const TPM2B_MAX_BUFFER *buffer);

TSS2_RC Tss2_Sys_EventSequenceComplete_Complete(TSS2_SYS_CONTEXT *sysContext,
                                                TPML_DIGEST_VALUES *results);

TSS2_RC Tss2_Sys_EventSequenceComplete(TSS2_SYS_CONTEXT *sysContext,
                                       TPMI_DH_PCR pcrHandle,
                                       TPMI_DH_OBJECT sequenceHandle,
                                       TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                       const TPM2B_MAX_BUFFER *buffer,
                                       TPML_DIGEST_VALUES *results,
                                       TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_Certify_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                 TPMI_DH_OBJECT objectHandle,
                                 TPMI_DH_OBJECT signHandle,
                                 const TPM2B_DATA *qualifyingData,
                                 const TPMT_SIG_SCHEME *inScheme);

TSS2_RC Tss2_Sys_Certify_Complete(TSS2_SYS_CONTEXT *sysContext,
                                  TPM2B_ATTEST *certifyInfo,
                                  TPMT_SIGNATURE *signature);

TSS2_RC Tss2_Sys_Certify(TSS2_SYS_CONTEXT *sysContext,
                         TPMI_DH_OBJECT objectHandle,
                         TPMI_DH_OBJECT signHandle,
                         TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                         const TPM2B_DATA *qualifyingData,
                         const TPMT_SIG_SCHEME *inScheme,
                         TPM2B_ATTEST *certifyInfo,
                         TPMT_SIGNATURE *signature,
                         TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_CertifyX509_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                     TPMI_DH_OBJECT objectHandle,
                                     TPMI_DH_OBJECT signHandle,
                                     const TPM2B_DATA *reserved,
                                     const TPMT_SIG_SCHEME *inScheme,
                                     const TPM2B_MAX_BUFFER *partialCertificate);

TSS2_RC Tss2_Sys_CertifyX509_Complete(TSS2_SYS_CONTEXT *sysContext,
                                      TPM2B_MAX_BUFFER *addedToCertificate,
                                      TPM2B_DIGEST *tbsDigest,
                                      TPMT_SIGNATURE *signature);

TSS2_RC Tss2_Sys_CertifyX509(TSS2_SYS_CONTEXT *sysContext,
                             TPMI_DH_OBJECT objectHandle,
                             TPMI_DH_OBJECT signHandle,
                             TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                             const TPM2B_DATA *reserved,
                             const TPMT_SIG_SCHEME *inScheme,
                             const TPM2B_MAX_BUFFER *partialCertificate,
                             TPM2B_MAX_BUFFER *addedToCertificate,
                             TPM2B_DIGEST *tbsDigest,
                             TPMT_SIGNATURE *signature,
                             TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_CertifyCreation_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                         TPMI_DH_OBJECT signHandle,
                                         TPMI_DH_OBJECT objectHandle,
                                         const TPM2B_DATA *qualifyingData,
                                         const TPM2B_DIGEST *creationHash,
                                         const TPMT_SIG_SCHEME *inScheme,
                                         const TPMT_TK_CREATION *creationTicket);

TSS2_RC Tss2_Sys_CertifyCreation_Complete(TSS2_SYS_CONTEXT *sysContext,
                                          TPM2B_ATTEST *certifyInfo,
                                          TPMT_SIGNATURE *signature);

TSS2_RC Tss2_Sys_CertifyCreation(TSS2_SYS_CONTEXT *sysContext,
                                 TPMI_DH_OBJECT signHandle,
                                 TPMI_DH_OBJECT objectHandle,
                                 TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                 const TPM2B_DATA *qualifyingData,
                                 const TPM2B_DIGEST *creationHash,
                                 const TPMT_SIG_SCHEME *inScheme,
                                 const TPMT_TK_CREATION *creationTicket,
                                 TPM2B_ATTEST *certifyInfo,
                                 TPMT_SIGNATURE *signature,
                                 TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_Quote_Prepare(TSS2_SYS_CONTEXT *sysContext,
                               TPMI_DH_OBJECT signHandle,
                               const TPM2B_DATA *qualifyingData,
                               const TPMT_SIG_SCHEME *inScheme,
                               const TPML_PCR_SELECTION *PCRselect);

TSS2_RC Tss2_Sys_Quote_Complete(TSS2_SYS_CONTEXT *sysContext,
                                TPM2B_ATTEST *quoted,
                                TPMT_SIGNATURE *signature);

TSS2_RC Tss2_Sys_Quote(TSS2_SYS_CONTEXT *sysContext,
                       TPMI_DH_OBJECT signHandle,
                       TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                       const TPM2B_DATA *qualifyingData,
                       const TPMT_SIG_SCHEME *inScheme,
                       const TPML_PCR_SELECTION *PCRselect,
                       TPM2B_ATTEST *quoted,
                       TPMT_SIGNATURE *signature,
                       TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_GetSessionAuditDigest_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                               TPMI_RH_ENDORSEMENT privacyAdminHandle,
                                               TPMI_DH_OBJECT signHandle,
                                               TPMI_SH_HMAC sessionHandle,
                                               const TPM2B_DATA *qualifyingData,
                                               const TPMT_SIG_SCHEME *inScheme);

TSS2_RC Tss2_Sys_GetSessionAuditDigest_Complete(TSS2_SYS_CONTEXT *sysContext,
                                                TPM2B_ATTEST *auditInfo,
                                                TPMT_SIGNATURE *signature);

TSS2_RC Tss2_Sys_GetSessionAuditDigest(TSS2_SYS_CONTEXT *sysContext,
                                       TPMI_RH_ENDORSEMENT privacyAdminHandle,
                                       TPMI_DH_OBJECT signHandle,
                                       TPMI_SH_HMAC sessionHandle,
                                       TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                       const TPM2B_DATA *qualifyingData,
                                       const TPMT_SIG_SCHEME *inScheme,
                                       TPM2B_ATTEST *auditInfo,
                                       TPMT_SIGNATURE *signature,
                                       TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_GetCommandAuditDigest_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                               TPMI_RH_ENDORSEMENT privacyHandle,
                                               TPMI_DH_OBJECT signHandle,
                                               const TPM2B_DATA *qualifyingData,
                                               const TPMT_SIG_SCHEME *inScheme);

TSS2_RC Tss2_Sys_GetCommandAuditDigest_Complete(TSS2_SYS_CONTEXT *sysContext,
                                                TPM2B_ATTEST *auditInfo,
                                                TPMT_SIGNATURE *signature);

TSS2_RC Tss2_Sys_GetCommandAuditDigest(TSS2_SYS_CONTEXT *sysContext,
                                       TPMI_RH_ENDORSEMENT privacyHandle,
                                       TPMI_DH_OBJECT signHandle,
                                       TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                       const TPM2B_DATA *qualifyingData,
                                       const TPMT_SIG_SCHEME *inScheme,
                                       TPM2B_ATTEST *auditInfo,
                                       TPMT_SIGNATURE *signature,
                                       TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_GetTime_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                 TPMI_RH_ENDORSEMENT privacyAdminHandle,
                                 TPMI_DH_OBJECT signHandle,
                                 const TPM2B_DATA *qualifyingData,
                                 const TPMT_SIG_SCHEME *inScheme);

TSS2_RC Tss2_Sys_GetTime_Complete(TSS2_SYS_CONTEXT *sysContext,
                                  TPM2B_ATTEST *timeInfo,
                                  TPMT_SIGNATURE *signature);

TSS2_RC Tss2_Sys_GetTime(TSS2_SYS_CONTEXT *sysContext,
                         TPMI_RH_ENDORSEMENT privacyAdminHandle,
                         TPMI_DH_OBJECT signHandle,
                         TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                         const TPM2B_DATA *qualifyingData,
                         const TPMT_SIG_SCHEME *inScheme,
                         TPM2B_ATTEST *timeInfo,
                         TPMT_SIGNATURE *signature,
                         TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_Commit_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                TPMI_DH_OBJECT signHandle,
                                const TPM2B_ECC_POINT *P1,
                                const TPM2B_SENSITIVE_DATA *s2,
                                const TPM2B_ECC_PARAMETER *y2);

TSS2_RC Tss2_Sys_Commit_Complete(TSS2_SYS_CONTEXT *sysContext,
                                 TPM2B_ECC_POINT *K,
                                 TPM2B_ECC_POINT *L,
                                 TPM2B_ECC_POINT *E,
                                 UINT16 *counter);

TSS2_RC Tss2_Sys_Commit(TSS2_SYS_CONTEXT *sysContext,
                        TPMI_DH_OBJECT signHandle,
                        TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                        const TPM2B_ECC_POINT *P1,
                        const TPM2B_SENSITIVE_DATA *s2,
                        const TPM2B_ECC_PARAMETER *y2,
                        TPM2B_ECC_POINT *K,
                        TPM2B_ECC_POINT *L,
                        TPM2B_ECC_POINT *E,
                        UINT16 *counter,
                        TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_EC_Ephemeral_Prepare(TSS2_SYS_CONTEXT *sysContext, TPMI_ECC_CURVE curveID);

TSS2_RC
Tss2_Sys_EC_Ephemeral_Complete(TSS2_SYS_CONTEXT *sysContext, TPM2B_ECC_POINT *Q, UINT16 *counter);

TSS2_RC Tss2_Sys_EC_Ephemeral(TSS2_SYS_CONTEXT *sysContext,
                              TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                              TPMI_ECC_CURVE curveID,
                              TPM2B_ECC_POINT *Q,
                              UINT16 *counter,
                              TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_VerifySignature_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                         TPMI_DH_OBJECT keyHandle,
                                         const TPM2B_DIGEST *digest,
                                         const TPMT_SIGNATURE *signature);

TSS2_RC Tss2_Sys_VerifySignature_Complete(TSS2_SYS_CONTEXT *sysContext,
                                          TPMT_TK_VERIFIED *validation);

TSS2_RC Tss2_Sys_VerifySignature(TSS2_SYS_CONTEXT *sysContext,
                                 TPMI_DH_OBJECT keyHandle,
                                 TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                 const TPM2B_DIGEST *digest,
                                 const TPMT_SIGNATURE *signature,
                                 TPMT_TK_VERIFIED *validation,
                                 TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_Sign_Prepare(TSS2_SYS_CONTEXT *sysContext,
                              TPMI_DH_OBJECT keyHandle,
                              const TPM2B_DIGEST *digest,
                              const TPMT_SIG_SCHEME *inScheme,
                              const TPMT_TK_HASHCHECK *validation);

TSS2_RC Tss2_Sys_Sign_Complete(TSS2_SYS_CONTEXT *sysContext, TPMT_SIGNATURE *signature);

TSS2_RC Tss2_Sys_Sign(TSS2_SYS_CONTEXT *sysContext,
                      TPMI_DH_OBJECT keyHandle,
                      TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                      const TPM2B_DIGEST *digest,
                      const TPMT_SIG_SCHEME *inScheme,
                      const TPMT_TK_HASHCHECK *validation,
                      TPMT_SIGNATURE *signature,
                      TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_SetCommandCodeAuditStatus_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                                   TPMI_RH_PROVISION auth,
                                                   TPMI_ALG_HASH auditAlg,
                                                   const TPML_CC *setList,
                                                   const TPML_CC *clearList);

TSS2_RC Tss2_Sys_SetCommandCodeAuditStatus_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_SetCommandCodeAuditStatus(TSS2_SYS_CONTEXT *sysContext,
                                           TPMI_RH_PROVISION auth,
                                           TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                           TPMI_ALG_HASH auditAlg,
                                           const TPML_CC *setList,
                                           const TPML_CC *clearList,
                                           TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_PCR_Extend_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                    TPMI_DH_PCR pcrHandle,
                                    const TPML_DIGEST_VALUES *digests);

TSS2_RC Tss2_Sys_PCR_Extend_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_PCR_Extend(TSS2_SYS_CONTEXT *sysContext,
                            TPMI_DH_PCR pcrHandle,
                            TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                            const TPML_DIGEST_VALUES *digests,
                            TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_PCR_Event_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                   TPMI_DH_PCR pcrHandle,
                                   const TPM2B_EVENT *eventData);

TSS2_RC Tss2_Sys_PCR_Event_Complete(TSS2_SYS_CONTEXT *sysContext, TPML_DIGEST_VALUES *digests);

TSS2_RC Tss2_Sys_PCR_Event(TSS2_SYS_CONTEXT *sysContext,
                           TPMI_DH_PCR pcrHandle,
                           TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                           const TPM2B_EVENT *eventData,
                           TPML_DIGEST_VALUES *digests,
                           TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_PCR_Read_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                  const TPML_PCR_SELECTION *pcrSelectionIn);

TSS2_RC Tss2_Sys_PCR_Read_Complete(TSS2_SYS_CONTEXT *sysContext,
                                   UINT32 *pcrUpdateCounter,
                                   TPML_PCR_SELECTION *pcrSelectionOut,
                                   TPML_DIGEST *pcrValues);

TSS2_RC Tss2_Sys_PCR_Read(TSS2_SYS_CONTEXT *sysContext,
                          TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                          const TPML_PCR_SELECTION *pcrSelectionIn,
                          UINT32 *pcrUpdateCounter,
                          TPML_PCR_SELECTION *pcrSelectionOut,
                          TPML_DIGEST *pcrValues,
                          TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_PCR_Allocate_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                      TPMI_RH_PLATFORM authHandle,
                                      const TPML_PCR_SELECTION *pcrAllocation);

TSS2_RC Tss2_Sys_PCR_Allocate_Complete(TSS2_SYS_CONTEXT *sysContext,
                                       TPMI_YES_NO *allocationSuccess,
                                       UINT32 *maxPCR,
                                       UINT32 *sizeNeeded,
                                       UINT32 *sizeAvailable);

TSS2_RC Tss2_Sys_PCR_Allocate(TSS2_SYS_CONTEXT *sysContext,
                              TPMI_RH_PLATFORM authHandle,
                              TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                              const TPML_PCR_SELECTION *pcrAllocation,
                              TPMI_YES_NO *allocationSuccess,
                              UINT32 *maxPCR,
                              UINT32 *sizeNeeded,
                              UINT32 *sizeAvailable,
                              TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_PCR_SetAuthPolicy_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                           TPMI_RH_PLATFORM authHandle,
                                           const TPM2B_DIGEST *authPolicy,
                                           TPMI_ALG_HASH hashAlg,
                                           TPMI_DH_PCR pcrNum);

TSS2_RC Tss2_Sys_PCR_SetAuthPolicy_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_PCR_SetAuthPolicy(TSS2_SYS_CONTEXT *sysContext,
                                   TPMI_RH_PLATFORM authHandle,
                                   TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                   const TPM2B_DIGEST *authPolicy,
                                   TPMI_ALG_HASH hashAlg,
                                   TPMI_DH_PCR pcrNum,
                                   TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_PCR_SetAuthValue_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                          TPMI_DH_PCR pcrHandle,
                                          const TPM2B_DIGEST *auth);

TSS2_RC Tss2_Sys_PCR_SetAuthValue_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_PCR_SetAuthValue(TSS2_SYS_CONTEXT *sysContext,
                                  TPMI_DH_PCR pcrHandle,
                                  TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                  const TPM2B_DIGEST *auth,
                                  TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_PCR_Reset_Prepare(TSS2_SYS_CONTEXT *sysContext, TPMI_DH_PCR pcrHandle);

TSS2_RC Tss2_Sys_PCR_Reset_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_PCR_Reset(TSS2_SYS_CONTEXT *sysContext,
                           TPMI_DH_PCR pcrHandle,
                           TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                           TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_PolicySigned_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                      TPMI_DH_OBJECT authObject,
                                      TPMI_SH_POLICY policySession,
                                      const TPM2B_NONCE *nonceTPM,
                                      const TPM2B_DIGEST *cpHashA,
                                      const TPM2B_NONCE *policyRef,
                                      INT32 expiration,
                                      const TPMT_SIGNATURE *auth);

TSS2_RC Tss2_Sys_PolicySigned_Complete(TSS2_SYS_CONTEXT *sysContext,
                                       TPM2B_TIMEOUT *timeout,
                                       TPMT_TK_AUTH *policyTicket);

TSS2_RC Tss2_Sys_PolicySigned(TSS2_SYS_CONTEXT *sysContext,
                              TPMI_DH_OBJECT authObject,
                              TPMI_SH_POLICY policySession,
                              TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                              const TPM2B_NONCE *nonceTPM,
                              const TPM2B_DIGEST *cpHashA,
                              const TPM2B_NONCE *policyRef,
                              INT32 expiration,
                              const TPMT_SIGNATURE *auth,
                              TPM2B_TIMEOUT *timeout,
                              TPMT_TK_AUTH *policyTicket,
                              TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_PolicySecret_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                      TPMI_DH_ENTITY authHandle,
                                      TPMI_SH_POLICY policySession,
                                      const TPM2B_NONCE *nonceTPM,
                                      const TPM2B_DIGEST *cpHashA,
                                      const TPM2B_NONCE *policyRef,
                                      INT32 expiration);

TSS2_RC Tss2_Sys_PolicySecret_Complete(TSS2_SYS_CONTEXT *sysContext,
                                       TPM2B_TIMEOUT *timeout,
                                       TPMT_TK_AUTH *policyTicket);

TSS2_RC Tss2_Sys_PolicySecret(TSS2_SYS_CONTEXT *sysContext,
                              TPMI_DH_ENTITY authHandle,
                              TPMI_SH_POLICY policySession,
                              TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                              const TPM2B_NONCE *nonceTPM,
                              const TPM2B_DIGEST *cpHashA,
                              const TPM2B_NONCE *policyRef,
                              INT32 expiration,
                              TPM2B_TIMEOUT *timeout,
                              TPMT_TK_AUTH *policyTicket,
                              TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_PolicyTicket_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                      TPMI_SH_POLICY policySession,
                                      const TPM2B_TIMEOUT *timeout,
                                      const TPM2B_DIGEST *cpHashA,
                                      const TPM2B_NONCE *policyRef,
                                      const TPM2B_NAME *authName,
                                      const TPMT_TK_AUTH *ticket);

TSS2_RC Tss2_Sys_PolicyTicket_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_PolicyTicket(TSS2_SYS_CONTEXT *sysContext,
                              TPMI_SH_POLICY policySession,
                              TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                              const TPM2B_TIMEOUT *timeout,
                              const TPM2B_DIGEST *cpHashA,
                              const TPM2B_NONCE *policyRef,
                              const TPM2B_NAME *authName,
                              const TPMT_TK_AUTH *ticket,
                              TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_PolicyOR_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                  TPMI_SH_POLICY policySession,
                                  const TPML_DIGEST *pHashList);

TSS2_RC Tss2_Sys_PolicyOR_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_PolicyOR(TSS2_SYS_CONTEXT *sysContext,
                          TPMI_SH_POLICY policySession,
                          TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                          const TPML_DIGEST *pHashList,
                          TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_PolicyPCR_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                   TPMI_SH_POLICY policySession,
                                   const TPM2B_DIGEST *pcrDigest,
                                   const TPML_PCR_SELECTION *pcrs);

TSS2_RC Tss2_Sys_PolicyPCR_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_PolicyPCR(TSS2_SYS_CONTEXT *sysContext,
                           TPMI_SH_POLICY policySession,
                           TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                           const TPM2B_DIGEST *pcrDigest,
                           const TPML_PCR_SELECTION *pcrs,
                           TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_PolicyLocality_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                        TPMI_SH_POLICY policySession,
                                        TPMA_LOCALITY locality);

TSS2_RC Tss2_Sys_PolicyLocality_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_PolicyLocality(TSS2_SYS_CONTEXT *sysContext,
                                TPMI_SH_POLICY policySession,
                                TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                TPMA_LOCALITY locality,
                                TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_PolicyNV_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                  TPMI_RH_NV_AUTH authHandle,
                                  TPMI_RH_NV_INDEX nvIndex,
                                  TPMI_SH_POLICY policySession,
                                  const TPM2B_OPERAND *operandB,
                                  UINT16 offset,
                                  TPM2_EO operation);

TSS2_RC Tss2_Sys_PolicyNV_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_PolicyNV(TSS2_SYS_CONTEXT *sysContext,
                          TPMI_RH_NV_AUTH authHandle,
                          TPMI_RH_NV_INDEX nvIndex,
                          TPMI_SH_POLICY policySession,
                          TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                          const TPM2B_OPERAND *operandB,
                          UINT16 offset,
                          TPM2_EO operation,
                          TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_PolicyCounterTimer_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                            TPMI_SH_POLICY policySession,
                                            const TPM2B_OPERAND *operandB,
                                            UINT16 offset,
                                            TPM2_EO operation);

TSS2_RC Tss2_Sys_PolicyCounterTimer_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_PolicyCounterTimer(TSS2_SYS_CONTEXT *sysContext,
                                    TPMI_SH_POLICY policySession,
                                    TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                    const TPM2B_OPERAND *operandB,
                                    UINT16 offset,
                                    TPM2_EO operation,
                                    TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_PolicyCommandCode_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                           TPMI_SH_POLICY policySession,
                                           TPM2_CC code);

TSS2_RC Tss2_Sys_PolicyCommandCode_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_PolicyCommandCode(TSS2_SYS_CONTEXT *sysContext,
                                   TPMI_SH_POLICY policySession,
                                   TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                   TPM2_CC code,
                                   TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_PolicyPhysicalPresence_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                                TPMI_SH_POLICY policySession);

TSS2_RC Tss2_Sys_PolicyPhysicalPresence_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_PolicyPhysicalPresence(TSS2_SYS_CONTEXT *sysContext,
                                        TPMI_SH_POLICY policySession,
                                        TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                        TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_PolicyCpHash_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                      TPMI_SH_POLICY policySession,
                                      const TPM2B_DIGEST *cpHashA);

TSS2_RC Tss2_Sys_PolicyCpHash_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_PolicyCpHash(TSS2_SYS_CONTEXT *sysContext,
                              TPMI_SH_POLICY policySession,
                              TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                              const TPM2B_DIGEST *cpHashA,
                              TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_PolicyNameHash_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                        TPMI_SH_POLICY policySession,
                                        const TPM2B_DIGEST *nameHash);

TSS2_RC Tss2_Sys_PolicyNameHash_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_PolicyNameHash(TSS2_SYS_CONTEXT *sysContext,
                                TPMI_SH_POLICY policySession,
                                TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                const TPM2B_DIGEST *nameHash,
                                TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_PolicyDuplicationSelect_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                                 TPMI_SH_POLICY policySession,
                                                 const TPM2B_NAME *objectName,
                                                 const TPM2B_NAME *newParentName,
                                                 TPMI_YES_NO includeObject);

TSS2_RC Tss2_Sys_PolicyDuplicationSelect_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_PolicyDuplicationSelect(TSS2_SYS_CONTEXT *sysContext,
                                         TPMI_SH_POLICY policySession,
                                         TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                         const TPM2B_NAME *objectName,
                                         const TPM2B_NAME *newParentName,
                                         TPMI_YES_NO includeObject,
                                         TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_PolicyAuthorize_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                         TPMI_SH_POLICY policySession,
                                         const TPM2B_DIGEST *approvedPolicy,
                                         const TPM2B_NONCE *policyRef,
                                         const TPM2B_NAME *keySign,
                                         const TPMT_TK_VERIFIED *checkTicket);

TSS2_RC Tss2_Sys_PolicyAuthorize_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_PolicyAuthorize(TSS2_SYS_CONTEXT *sysContext,
                                 TPMI_SH_POLICY policySession,
                                 TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                 const TPM2B_DIGEST *approvedPolicy,
                                 const TPM2B_NONCE *policyRef,
                                 const TPM2B_NAME *keySign,
                                 const TPMT_TK_VERIFIED *checkTicket,
                                 TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_PolicyAuthValue_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                         TPMI_SH_POLICY policySession);

TSS2_RC Tss2_Sys_PolicyAuthValue_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_PolicyAuthValue(TSS2_SYS_CONTEXT *sysContext,
                                 TPMI_SH_POLICY policySession,
                                 TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                 TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_PolicyPassword_Prepare(TSS2_SYS_CONTEXT *sysContext, TPMI_SH_POLICY policySession);

TSS2_RC Tss2_Sys_PolicyPassword_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_PolicyPassword(TSS2_SYS_CONTEXT *sysContext,
                                TPMI_SH_POLICY policySession,
                                TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_PolicyGetDigest_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                         TPMI_SH_POLICY policySession);

TSS2_RC Tss2_Sys_PolicyGetDigest_Complete(TSS2_SYS_CONTEXT *sysContext, TPM2B_DIGEST *policyDigest);

TSS2_RC Tss2_Sys_PolicyGetDigest(TSS2_SYS_CONTEXT *sysContext,
                                 TPMI_SH_POLICY policySession,
                                 TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                 TPM2B_DIGEST *policyDigest,
                                 TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_PolicyNvWritten_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                         TPMI_SH_POLICY policySession,
                                         TPMI_YES_NO writtenSet);

TSS2_RC Tss2_Sys_PolicyNvWritten_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_PolicyNvWritten(TSS2_SYS_CONTEXT *sysContext,
                                 TPMI_SH_POLICY policySession,
                                 TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                 TPMI_YES_NO writtenSet,
                                 TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_CreatePrimary_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                       TPMI_RH_HIERARCHY primaryHandle,
                                       const TPM2B_SENSITIVE_CREATE *inSensitive,
                                       const TPM2B_PUBLIC *inPublic,
                                       const TPM2B_DATA *outsideInfo,
                                       const TPML_PCR_SELECTION *creationPCR);

TSS2_RC Tss2_Sys_CreatePrimary_Complete(TSS2_SYS_CONTEXT *sysContext,
                                        TPM2_HANDLE *objectHandle,
                                        TPM2B_PUBLIC *outPublic,
                                        TPM2B_CREATION_DATA *creationData,
                                        TPM2B_DIGEST *creationHash,
                                        TPMT_TK_CREATION *creationTicket,
                                        TPM2B_NAME *name);

TSS2_RC Tss2_Sys_CreatePrimary(TSS2_SYS_CONTEXT *sysContext,
                               TPMI_RH_HIERARCHY primaryHandle,
                               TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                               const TPM2B_SENSITIVE_CREATE *inSensitive,
                               const TPM2B_PUBLIC *inPublic,
                               const TPM2B_DATA *outsideInfo,
                               const TPML_PCR_SELECTION *creationPCR,
                               TPM2_HANDLE *objectHandle,
                               TPM2B_PUBLIC *outPublic,
                               TPM2B_CREATION_DATA *creationData,
                               TPM2B_DIGEST *creationHash,
                               TPMT_TK_CREATION *creationTicket,
                               TPM2B_NAME *name,
                               TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_HierarchyControl_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                          TPMI_RH_HIERARCHY authHandle,
                                          TPMI_RH_ENABLES enable,
                                          TPMI_YES_NO state);

TSS2_RC Tss2_Sys_HierarchyControl_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_HierarchyControl(TSS2_SYS_CONTEXT *sysContext,
                                  TPMI_RH_HIERARCHY authHandle,
                                  TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                  TPMI_RH_ENABLES enable,
                                  TPMI_YES_NO state,
                                  TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_SetPrimaryPolicy_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                          TPMI_RH_HIERARCHY_AUTH authHandle,
                                          const TPM2B_DIGEST *authPolicy,
                                          TPMI_ALG_HASH hashAlg);

TSS2_RC Tss2_Sys_SetPrimaryPolicy_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_SetPrimaryPolicy(TSS2_SYS_CONTEXT *sysContext,
                                  TPMI_RH_HIERARCHY_AUTH authHandle,
                                  TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                  const TPM2B_DIGEST *authPolicy,
                                  TPMI_ALG_HASH hashAlg,
                                  TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_ChangePPS_Prepare(TSS2_SYS_CONTEXT *sysContext, TPMI_RH_PLATFORM authHandle);

TSS2_RC Tss2_Sys_ChangePPS_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_ChangePPS(TSS2_SYS_CONTEXT *sysContext,
                           TPMI_RH_PLATFORM authHandle,
                           TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                           TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_ChangeEPS_Prepare(TSS2_SYS_CONTEXT *sysContext, TPMI_RH_PLATFORM authHandle);

TSS2_RC Tss2_Sys_ChangeEPS_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_ChangeEPS(TSS2_SYS_CONTEXT *sysContext,
                           TPMI_RH_PLATFORM authHandle,
                           TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                           TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_Clear_Prepare(TSS2_SYS_CONTEXT *sysContext, TPMI_RH_CLEAR authHandle);

TSS2_RC Tss2_Sys_Clear_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_Clear(TSS2_SYS_CONTEXT *sysContext,
                       TPMI_RH_CLEAR authHandle,
                       TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                       TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_ClearControl_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                      TPMI_RH_CLEAR auth,
                                      TPMI_YES_NO disable);

TSS2_RC Tss2_Sys_ClearControl_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_ClearControl(TSS2_SYS_CONTEXT *sysContext,
                              TPMI_RH_CLEAR auth,
                              TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                              TPMI_YES_NO disable,
                              TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_HierarchyChangeAuth_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                             TPMI_RH_HIERARCHY_AUTH authHandle,
                                             const TPM2B_AUTH *newAuth);

TSS2_RC Tss2_Sys_HierarchyChangeAuth_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_HierarchyChangeAuth(TSS2_SYS_CONTEXT *sysContext,
                                     TPMI_RH_HIERARCHY_AUTH authHandle,
                                     TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                     const TPM2B_AUTH *newAuth,
                                     TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_DictionaryAttackLockReset_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                                   TPMI_RH_LOCKOUT lockHandle);

TSS2_RC Tss2_Sys_DictionaryAttackLockReset_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_DictionaryAttackLockReset(TSS2_SYS_CONTEXT *sysContext,
                                           TPMI_RH_LOCKOUT lockHandle,
                                           TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                           TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_DictionaryAttackParameters_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                                    TPMI_RH_LOCKOUT lockHandle,
                                                    UINT32 newMaxTries,
                                                    UINT32 newRecoveryTime,
                                                    UINT32 lockoutRecovery);

TSS2_RC Tss2_Sys_DictionaryAttackParameters_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_DictionaryAttackParameters(TSS2_SYS_CONTEXT *sysContext,
                                            TPMI_RH_LOCKOUT lockHandle,
                                            TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                            UINT32 newMaxTries,
                                            UINT32 newRecoveryTime,
                                            UINT32 lockoutRecovery,
                                            TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_PP_Commands_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                     TPMI_RH_PLATFORM auth,
                                     const TPML_CC *setList,
                                     const TPML_CC *clearList);

TSS2_RC Tss2_Sys_PP_Commands_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_PP_Commands(TSS2_SYS_CONTEXT *sysContext,
                             TPMI_RH_PLATFORM auth,
                             TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                             const TPML_CC *setList,
                             const TPML_CC *clearList,
                             TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_SetAlgorithmSet_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                         TPMI_RH_PLATFORM authHandle,
                                         UINT32 algorithmSet);

TSS2_RC Tss2_Sys_SetAlgorithmSet_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_SetAlgorithmSet(TSS2_SYS_CONTEXT *sysContext,
                                 TPMI_RH_PLATFORM authHandle,
                                 TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                 UINT32 algorithmSet,
                                 TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_FieldUpgradeStart_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                           TPMI_RH_PLATFORM authorization,
                                           TPMI_DH_OBJECT keyHandle,
                                           TPM2B_DIGEST const *fuDigest,
                                           TPMT_SIGNATURE const *manifestSignature);

TSS2_RC Tss2_Sys_FieldUpgradeStart_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_FieldUpgradeStart(TSS2_SYS_CONTEXT *sysContext,
                                   TPMI_RH_PLATFORM authorization,
                                   TPMI_DH_OBJECT keyHandle,
                                   TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                   TPM2B_DIGEST const *fuDigest,
                                   TPMT_SIGNATURE const *manifestSignature,
                                   TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_FieldUpgradeData_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                          TPM2B_MAX_BUFFER const *fuData);

TSS2_RC Tss2_Sys_FieldUpgradeData_Complete(TSS2_SYS_CONTEXT *sysContext,
                                           TPMT_HA *nextDigest,
                                           TPMT_HA *firstDigest);

TSS2_RC Tss2_Sys_FieldUpgradeData(TSS2_SYS_CONTEXT *sysContext,
                                  TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                  TPM2B_MAX_BUFFER const *fuData,
                                  TPMT_HA *nextDigest,
                                  TPMT_HA *firstDigest,
                                  TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_FirmwareRead_Prepare(TSS2_SYS_CONTEXT *sysContext, UINT32 sequenceNumber);

TSS2_RC Tss2_Sys_FirmwareRead_Complete(TSS2_SYS_CONTEXT *sysContext, TPM2B_MAX_BUFFER *fuData);

TSS2_RC Tss2_Sys_FirmwareRead(TSS2_SYS_CONTEXT *sysContext,
                              TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                              UINT32 sequenceNumber,
                              TPM2B_MAX_BUFFER *fuData,
                              TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_ContextSave_Prepare(TSS2_SYS_CONTEXT *sysContext, TPMI_DH_CONTEXT saveHandle);

TSS2_RC Tss2_Sys_ContextSave_Complete(TSS2_SYS_CONTEXT *sysContext, TPMS_CONTEXT *context);

TSS2_RC Tss2_Sys_ContextSave(TSS2_SYS_CONTEXT *sysContext,
                             TPMI_DH_CONTEXT saveHandle,
                             TPMS_CONTEXT *context);

TSS2_RC Tss2_Sys_ContextLoad_Prepare(TSS2_SYS_CONTEXT *sysContext, const TPMS_CONTEXT *context);

TSS2_RC Tss2_Sys_ContextLoad_Complete(TSS2_SYS_CONTEXT *sysContext, TPMI_DH_CONTEXT *loadedHandle);

TSS2_RC Tss2_Sys_ContextLoad(TSS2_SYS_CONTEXT *sysContext,
                             const TPMS_CONTEXT *context,
                             TPMI_DH_CONTEXT *loadedHandle);

TSS2_RC Tss2_Sys_FlushContext_Prepare(TSS2_SYS_CONTEXT *sysContext, TPMI_DH_CONTEXT flushHandle);

TSS2_RC Tss2_Sys_FlushContext_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_FlushContext(TSS2_SYS_CONTEXT *sysContext, TPMI_DH_CONTEXT flushHandle);

TSS2_RC Tss2_Sys_EvictControl_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                      TPMI_RH_PROVISION auth,
                                      TPMI_DH_OBJECT objectHandle,
                                      TPMI_DH_PERSISTENT persistentHandle);

TSS2_RC Tss2_Sys_EvictControl_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_EvictControl(TSS2_SYS_CONTEXT *sysContext,
                              TPMI_RH_PROVISION auth,
                              TPMI_DH_OBJECT objectHandle,
                              TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                              TPMI_DH_PERSISTENT persistentHandle,
                              TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_ReadClock_Prepare(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_ReadClock_Complete(TSS2_SYS_CONTEXT *sysContext, TPMS_TIME_INFO *currentTime);

TSS2_RC Tss2_Sys_ReadClock(TSS2_SYS_CONTEXT *sysContext,
                           TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                           TPMS_TIME_INFO *currentTime,
                           TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC
Tss2_Sys_ClockSet_Prepare(TSS2_SYS_CONTEXT *sysContext, TPMI_RH_PROVISION auth, UINT64 newTime);

TSS2_RC Tss2_Sys_ClockSet_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_ClockSet(TSS2_SYS_CONTEXT *sysContext,
                          TPMI_RH_PROVISION auth,
                          TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                          UINT64 newTime,
                          TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_ClockRateAdjust_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                         TPMI_RH_PROVISION auth,
                                         TPM2_CLOCK_ADJUST rateAdjust);

TSS2_RC Tss2_Sys_ClockRateAdjust_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_ClockRateAdjust(TSS2_SYS_CONTEXT *sysContext,
                                 TPMI_RH_PROVISION auth,
                                 TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                 TPM2_CLOCK_ADJUST rateAdjust,
                                 TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_GetCapability_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                       TPM2_CAP capability,
                                       UINT32 property,
                                       UINT32 propertyCount);

TSS2_RC Tss2_Sys_GetCapability_Complete(TSS2_SYS_CONTEXT *sysContext,
                                        TPMI_YES_NO *moreData,
                                        TPMS_CAPABILITY_DATA *capabilityData);

TSS2_RC Tss2_Sys_GetCapability(TSS2_SYS_CONTEXT *sysContext,
                               TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                               TPM2_CAP capability,
                               UINT32 property,
                               UINT32 propertyCount,
                               TPMI_YES_NO *moreData,
                               TPMS_CAPABILITY_DATA *capabilityData,
                               TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_TestParms_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                   const TPMT_PUBLIC_PARMS *parameters);

TSS2_RC Tss2_Sys_TestParms_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_TestParms(TSS2_SYS_CONTEXT *sysContext,
                           TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                           const TPMT_PUBLIC_PARMS *parameters,
                           TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_NV_DefineSpace_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                        TPMI_RH_PROVISION authHandle,
                                        const TPM2B_AUTH *auth,
                                        const TPM2B_NV_PUBLIC *publicInfo);

TSS2_RC Tss2_Sys_NV_DefineSpace_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_NV_DefineSpace(TSS2_SYS_CONTEXT *sysContext,
                                TPMI_RH_PROVISION authHandle,
                                TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                const TPM2B_AUTH *auth,
                                const TPM2B_NV_PUBLIC *publicInfo,
                                TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_NV_UndefineSpace_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                          TPMI_RH_PROVISION authHandle,
                                          TPMI_RH_NV_INDEX nvIndex);

TSS2_RC Tss2_Sys_NV_UndefineSpace_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_NV_UndefineSpace(TSS2_SYS_CONTEXT *sysContext,
                                  TPMI_RH_PROVISION authHandle,
                                  TPMI_RH_NV_INDEX nvIndex,
                                  TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                  TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_NV_UndefineSpaceSpecial_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                                 TPMI_RH_NV_INDEX nvIndex,
                                                 TPMI_RH_PLATFORM platform);

TSS2_RC Tss2_Sys_NV_UndefineSpaceSpecial_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_NV_UndefineSpaceSpecial(TSS2_SYS_CONTEXT *sysContext,
                                         TPMI_RH_NV_INDEX nvIndex,
                                         TPMI_RH_PLATFORM platform,
                                         TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                         TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_NV_ReadPublic_Prepare(TSS2_SYS_CONTEXT *sysContext, TPMI_RH_NV_INDEX nvIndex);

TSS2_RC Tss2_Sys_NV_ReadPublic_Complete(TSS2_SYS_CONTEXT *sysContext,
                                        TPM2B_NV_PUBLIC *nvPublic,
                                        TPM2B_NAME *nvName);

TSS2_RC Tss2_Sys_NV_ReadPublic(TSS2_SYS_CONTEXT *sysContext,
                               TPMI_RH_NV_INDEX nvIndex,
                               TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                               TPM2B_NV_PUBLIC *nvPublic,
                               TPM2B_NAME *nvName,
                               TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_NV_Write_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                  TPMI_RH_NV_AUTH authHandle,
                                  TPMI_RH_NV_INDEX nvIndex,
                                  const TPM2B_MAX_NV_BUFFER *data,
                                  UINT16 offset);

TSS2_RC Tss2_Sys_NV_Write_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_NV_Write(TSS2_SYS_CONTEXT *sysContext,
                          TPMI_RH_NV_AUTH authHandle,
                          TPMI_RH_NV_INDEX nvIndex,
                          TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                          const TPM2B_MAX_NV_BUFFER *data,
                          UINT16 offset,
                          TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_NV_Increment_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                      TPMI_RH_NV_AUTH authHandle,
                                      TPMI_RH_NV_INDEX nvIndex);

TSS2_RC Tss2_Sys_NV_Increment_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_NV_Increment(TSS2_SYS_CONTEXT *sysContext,
                              TPMI_RH_NV_AUTH authHandle,
                              TPMI_RH_NV_INDEX nvIndex,
                              TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                              TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_NV_Extend_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                   TPMI_RH_NV_AUTH authHandle,
                                   TPMI_RH_NV_INDEX nvIndex,
                                   const TPM2B_MAX_NV_BUFFER *data);

TSS2_RC Tss2_Sys_NV_Extend_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_NV_Extend(TSS2_SYS_CONTEXT *sysContext,
                           TPMI_RH_NV_AUTH authHandle,
                           TPMI_RH_NV_INDEX nvIndex,
                           TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                           const TPM2B_MAX_NV_BUFFER *data,
                           TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_NV_SetBits_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                    TPMI_RH_NV_AUTH authHandle,
                                    TPMI_RH_NV_INDEX nvIndex,
                                    UINT64 bits);

TSS2_RC Tss2_Sys_NV_SetBits_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_NV_SetBits(TSS2_SYS_CONTEXT *sysContext,
                            TPMI_RH_NV_AUTH authHandle,
                            TPMI_RH_NV_INDEX nvIndex,
                            TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                            UINT64 bits,
                            TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_NV_WriteLock_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                      TPMI_RH_NV_AUTH authHandle,
                                      TPMI_RH_NV_INDEX nvIndex);

TSS2_RC Tss2_Sys_NV_WriteLock_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_NV_WriteLock(TSS2_SYS_CONTEXT *sysContext,
                              TPMI_RH_NV_AUTH authHandle,
                              TPMI_RH_NV_INDEX nvIndex,
                              TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                              TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_NV_GlobalWriteLock_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                            TPMI_RH_PROVISION authHandle);

TSS2_RC Tss2_Sys_NV_GlobalWriteLock_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_NV_GlobalWriteLock(TSS2_SYS_CONTEXT *sysContext,
                                    TPMI_RH_PROVISION authHandle,
                                    TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                    TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_NV_Read_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                 TPMI_RH_NV_AUTH authHandle,
                                 TPMI_RH_NV_INDEX nvIndex,
                                 UINT16 size,
                                 UINT16 offset);

TSS2_RC Tss2_Sys_NV_Read_Complete(TSS2_SYS_CONTEXT *sysContext, TPM2B_MAX_NV_BUFFER *data);

TSS2_RC Tss2_Sys_NV_Read(TSS2_SYS_CONTEXT *sysContext,
                         TPMI_RH_NV_AUTH authHandle,
                         TPMI_RH_NV_INDEX nvIndex,
                         TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                         UINT16 size,
                         UINT16 offset,
                         TPM2B_MAX_NV_BUFFER *data,
                         TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_NV_ReadLock_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                     TPMI_RH_NV_AUTH authHandle,
                                     TPMI_RH_NV_INDEX nvIndex);

TSS2_RC Tss2_Sys_NV_ReadLock_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_NV_ReadLock(TSS2_SYS_CONTEXT *sysContext,
                             TPMI_RH_NV_AUTH authHandle,
                             TPMI_RH_NV_INDEX nvIndex,
                             TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                             TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_NV_ChangeAuth_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                       TPMI_RH_NV_INDEX nvIndex,
                                       const TPM2B_AUTH *newAuth);

TSS2_RC Tss2_Sys_NV_ChangeAuth_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_NV_ChangeAuth(TSS2_SYS_CONTEXT *sysContext,
                               TPMI_RH_NV_INDEX nvIndex,
                               TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                               const TPM2B_AUTH *newAuth,
                               TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_NV_Certify_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                    TPMI_DH_OBJECT signHandle,
                                    TPMI_RH_NV_AUTH authHandle,
                                    TPMI_RH_NV_INDEX nvIndex,
                                    const TPM2B_DATA *qualifyingData,
                                    const TPMT_SIG_SCHEME *inScheme,
                                    UINT16 size,
                                    UINT16 offset);

TSS2_RC Tss2_Sys_NV_Certify_Complete(TSS2_SYS_CONTEXT *sysContext,
                                     TPM2B_ATTEST *certifyInfo,
                                     TPMT_SIGNATURE *signature);

TSS2_RC Tss2_Sys_NV_Certify(TSS2_SYS_CONTEXT *sysContext,
                            TPMI_DH_OBJECT signHandle,
                            TPMI_RH_NV_AUTH authHandle,
                            TPMI_RH_NV_INDEX nvIndex,
                            TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                            const TPM2B_DATA *qualifyingData,
                            const TPMT_SIG_SCHEME *inScheme,
                            UINT16 size,
                            UINT16 offset,
                            TPM2B_ATTEST *certifyInfo,
                            TPMT_SIGNATURE *signature,
                            TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_Vendor_TCG_Test_Prepare(TSS2_SYS_CONTEXT *sysContext, const TPM2B_DATA *inputData);

TSS2_RC Tss2_Sys_Vendor_TCG_Test_Complete(TSS2_SYS_CONTEXT *sysContext, TPM2B_DATA *outputData);

TSS2_RC Tss2_Sys_Vendor_TCG_Test(TSS2_SYS_CONTEXT *sysContext,
                                 TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                 const TPM2B_DATA *inputData,
                                 TPM2B_DATA *outputData,
                                 TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_AC_GetCapability_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                          TPMI_RH_AC ac,
                                          TPM_AT capability,
                                          UINT32 count);

TSS2_RC Tss2_Sys_AC_GetCapability_Complete(TSS2_SYS_CONTEXT *sysContext,
                                           TPMI_YES_NO *moreData,
                                           TPML_AC_CAPABILITIES *capabilityData);

TSS2_RC Tss2_Sys_AC_GetCapability(TSS2_SYS_CONTEXT *sysContext,
                                  TPMI_RH_AC ac,
                                  TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                  TPM_AT capability,
                                  UINT32 count,
                                  TPMI_YES_NO *moreData,
                                  TPML_AC_CAPABILITIES *capabilityData,
                                  TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_AC_Send_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                 TPMI_DH_OBJECT sendObject,
                                 TPMI_RH_NV_AUTH authHandle,
                                 TPMI_RH_AC ac,
                                 TPM2B_MAX_BUFFER *acDataIn);

TSS2_RC Tss2_Sys_AC_Send_Complete(TSS2_SYS_CONTEXT *sysContext, TPMS_AC_OUTPUT *acDataOut);

TSS2_RC Tss2_Sys_AC_Send(TSS2_SYS_CONTEXT *sysContext,
                         TPMI_DH_OBJECT sendObject,
                         TPMI_RH_NV_AUTH authHandle,
                         TPMI_RH_AC ac,
                         TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                         TPM2B_MAX_BUFFER *acDataIn,
                         TPMS_AC_OUTPUT *acDataOut,
                         TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_Policy_AC_SendSelect_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                              TPMI_SH_POLICY policySession,
                                              TPM2B_NAME *objectName,
                                              TPM2B_NAME *authHandleName,
                                              TPM2B_NAME *acName,
                                              TPMI_YES_NO includeObject);

TSS2_RC Tss2_Sys_Policy_AC_SendSelect_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_Policy_AC_SendSelect(TSS2_SYS_CONTEXT *sysContext,
                                      TPMI_SH_POLICY policySession,
                                      TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                      TPM2B_NAME *objectName,
                                      TPM2B_NAME *authHandleName,
                                      TPM2B_NAME *acName,
                                      TPMI_YES_NO includeObject,
                                      TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_ACT_SetTimeout_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                        TPMI_RH_ACT actHandle,
                                        UINT32 startTimeout);

TSS2_RC Tss2_Sys_ACT_SetTimeout_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_ACT_SetTimeout(TSS2_SYS_CONTEXT *sysContext,
                                TPMI_RH_ACT actHandle,
                                TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                UINT32 startTimeout,
                                TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_PolicyTemplate_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                        TPMI_SH_POLICY policySession,
                                        const TPM2B_DIGEST *templateHash);

TSS2_RC Tss2_Sys_PolicyTemplate_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_PolicyTemplate(TSS2_SYS_CONTEXT *sysContext,
                                TPMI_SH_POLICY policySession,
                                TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                const TPM2B_DIGEST *templateHash,
                                TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_CreateLoaded_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                      TPMI_RH_HIERARCHY parentHandle,
                                      const TPM2B_SENSITIVE_CREATE *inSensitive,
                                      const TPM2B_TEMPLATE *inPublic);

TSS2_RC Tss2_Sys_CreateLoaded_Complete(TSS2_SYS_CONTEXT *sysContext,
                                       TPM2_HANDLE *objectHandle,
                                       TPM2B_PRIVATE *outPrivate,
                                       TPM2B_PUBLIC *outPublic,
                                       TPM2B_NAME *name);

TSS2_RC Tss2_Sys_CreateLoaded(TSS2_SYS_CONTEXT *sysContext,
                              TPMI_RH_HIERARCHY parentHandle,
                              TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                              const TPM2B_SENSITIVE_CREATE *inSensitive,
                              const TPM2B_TEMPLATE *inPublic,
                              TPM2_HANDLE *objectHandle,
                              TPM2B_PRIVATE *outPrivate,
                              TPM2B_PUBLIC *outPublic,
                              TPM2B_NAME *name,
                              TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_PolicyAuthorizeNV_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                           TPMI_RH_NV_AUTH authHandle,
                                           TPMI_RH_NV_INDEX nvIndex,
                                           TPMI_SH_POLICY policySession);

TSS2_RC Tss2_Sys_PolicyAuthorizeNV_Complete(TSS2_SYS_CONTEXT *sysContext);

TSS2_RC Tss2_Sys_PolicyAuthorizeNV(TSS2_SYS_CONTEXT *sysContext,
                                   TPMI_RH_NV_AUTH authHandle,
                                   TPMI_RH_NV_INDEX nvIndex,
                                   TPMI_SH_POLICY policySession,
                                   TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                                   TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_ECC_Encrypt_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                     TPMI_DH_OBJECT keyHandle,
                                     const TPM2B_MAX_BUFFER *platinText,
                                     const TPMT_KDF_SCHEME *inScheme);

TSS2_RC Tss2_Sys_ECC_Encrypt_Complete(TSS2_SYS_CONTEXT *sysContext,
                                      TPM2B_ECC_POINT *c1,
                                      TPM2B_MAX_BUFFER *c2,
                                      TPM2B_DIGEST *c3);

TSS2_RC Tss2_Sys_ECC_Encrypt(TSS2_SYS_CONTEXT *sysContext,
                             TPMI_DH_OBJECT keyHandle,
                             const TSS2L_SYS_AUTH_COMMAND *cmdAuthsArray,
                             const TPM2B_MAX_BUFFER *plainText,
                             const TPMT_KDF_SCHEME *inScheme,
                             TPM2B_ECC_POINT *c1,
                             TPM2B_MAX_BUFFER *c2,
                             TPM2B_DIGEST *c3,
                             TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_ECC_Decrypt_Prepare(TSS2_SYS_CONTEXT *sysContext,
                                     TPMI_DH_OBJECT keyHandle,
                                     const TPM2B_ECC_POINT *c1,
                                     const TPM2B_MAX_BUFFER *c2,
                                     const TPM2B_DIGEST *c3,
                                     const TPMT_KDF_SCHEME *inScheme);

TSS2_RC Tss2_Sys_ECC_Decrypt_Complete(TSS2_SYS_CONTEXT *sysContext, TPM2B_MAX_BUFFER *plaintText);

TSS2_RC Tss2_Sys_ECC_Decrypt(TSS2_SYS_CONTEXT *sysContext,
                             TPMI_DH_OBJECT keyHandle,
                             TSS2L_SYS_AUTH_COMMAND const *cmdAuthsArray,
                             const TPM2B_ECC_POINT *c1,
                             const TPM2B_MAX_BUFFER *c2,
                             const TPM2B_DIGEST *c3,
                             const TPMT_KDF_SCHEME *inScheme,
                             TPM2B_MAX_BUFFER *plaintText,
                             TSS2L_SYS_AUTH_RESPONSE *rspAuthsArray);

TSS2_RC Tss2_Sys_Abort(TSS2_SYS_CONTEXT *sysContext);
# 10 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_esys.h" 2






typedef uint32_t ESYS_TR;
# 94 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_esys.h"
typedef struct ESYS_CONTEXT ESYS_CONTEXT;

typedef struct ESYS_CRYPTO_CONTEXT_BLOB ESYS_CRYPTO_CONTEXT_BLOB;
# 111 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_esys.h"
typedef TSS2_RC (*ESYS_CRYPTO_HASH_START_FNP)(ESYS_CRYPTO_CONTEXT_BLOB **context,
                                              TPM2_ALG_ID hashAlg,
                                              void *userdata);
# 126 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_esys.h"
typedef TSS2_RC (*ESYS_CRYPTO_HASH_UPDATE_FNP)(ESYS_CRYPTO_CONTEXT_BLOB *context,
                                               const uint8_t *buffer,
                                               size_t size,
                                               void *userdata);
# 142 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_esys.h"
typedef TSS2_RC (*ESYS_CRYPTO_HASH_FINISH_FNP)(ESYS_CRYPTO_CONTEXT_BLOB **context,
                                               uint8_t *buffer,
                                               size_t *size,
                                               void *userdata);







typedef void (*ESYS_CRYPTO_HASH_ABORT_FNP)(ESYS_CRYPTO_CONTEXT_BLOB **context, void *userdata);
# 167 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_esys.h"
typedef TSS2_RC (*ESYS_CRYPTO_HMAC_START_FNP)(ESYS_CRYPTO_CONTEXT_BLOB **context,
                                              TPM2_ALG_ID hashAlg,
                                              const uint8_t *key,
                                              size_t size,
                                              void *userdata);
# 184 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_esys.h"
typedef TSS2_RC (*ESYS_CRYPTO_HMAC_UPDATE_FNP)(ESYS_CRYPTO_CONTEXT_BLOB *context,
                                               const uint8_t *buffer,
                                               size_t size,
                                               void *userdata);
# 200 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_esys.h"
typedef TSS2_RC (*ESYS_CRYPTO_HMAC_FINISH_FNP)(ESYS_CRYPTO_CONTEXT_BLOB **context,
                                               uint8_t *buffer,
                                               size_t *size,
                                               void *userdata);







typedef void (*ESYS_CRYPTO_HMAC_ABORT_FNP)(ESYS_CRYPTO_CONTEXT_BLOB **context, void *userdata);
# 223 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_esys.h"
typedef TSS2_RC (*ESYS_CRYPTO_GET_RANDOM2B_FNP)(TPM2B_NONCE *nonce,
                                                size_t num_bytes,
                                                void *userdata);
# 244 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_esys.h"
typedef TSS2_RC (*ESYS_CRYPTO_GET_ECDH_POINT_FNP)(TPM2B_PUBLIC *key,
                                                  size_t max_out_size,
                                                  TPM2B_ECC_PARAMETER *Z,
                                                  TPMS_ECC_POINT *Q,
                                                  BYTE *out_buffer,
                                                  size_t *out_size,
                                                  void *userdata);
# 267 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_esys.h"
typedef TSS2_RC (*ESYS_CRYPTO_AES_ENCRYPT_FNP)(uint8_t *key,
                                               TPM2_ALG_ID tpm_sym_alg,
                                               TPMI_AES_KEY_BITS key_bits,
                                               TPM2_ALG_ID tpm_mode,
                                               uint8_t *buffer,
                                               size_t buffer_size,
                                               uint8_t *iv,
                                               void *userdata);
# 291 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_esys.h"
typedef TSS2_RC (*ESYS_CRYPTO_AES_DECRYPT_FNP)(uint8_t *key,
                                               TPM2_ALG_ID tpm_sym_alg,
                                               TPMI_AES_KEY_BITS key_bits,
                                               TPM2_ALG_ID tpm_mode,
                                               uint8_t *buffer,
                                               size_t buffer_size,
                                               uint8_t *iv,
                                               void *userdata);
# 315 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_esys.h"
typedef TSS2_RC (*ESYS_CRYPTO_SM4_ENCRYPT_FNP)(uint8_t *key,
                                               TPM2_ALG_ID tpm_sym_alg,
                                               TPMI_SM4_KEY_BITS key_bits,
                                               TPM2_ALG_ID tpm_mode,
                                               uint8_t *buffer,
                                               size_t buffer_size,
                                               uint8_t *iv,
                                               void *userdata);
# 339 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_esys.h"
typedef TSS2_RC (*ESYS_CRYPTO_SM4_DECRYPT_FNP)(uint8_t *key,
                                               TPM2_ALG_ID tpm_sym_alg,
                                               TPMI_SM4_KEY_BITS key_bits,
                                               TPM2_ALG_ID tpm_mode,
                                               uint8_t *buffer,
                                               size_t buffer_size,
                                               uint8_t *iv,
                                               void *userdata);
# 363 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_esys.h"
typedef TSS2_RC (*ESYS_CRYPTO_PK_RSA_ENCRYPT_FNP)(TPM2B_PUBLIC *pub_tpm_key,
                                                  size_t in_size,
                                                  BYTE *in_buffer,
                                                  size_t max_out_size,
                                                  BYTE *out_buffer,
                                                  size_t *out_size,
                                                  const char *label,
                                                  void *userdata);
# 381 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_esys.h"
typedef TSS2_RC (*ESYS_CRYPTO_INIT_FNP)(void *userdata);

typedef struct ESYS_CRYPTO_CALLBACKS ESYS_CRYPTO_CALLBACKS;
struct ESYS_CRYPTO_CALLBACKS {
    ESYS_CRYPTO_PK_RSA_ENCRYPT_FNP rsa_pk_encrypt;
    ESYS_CRYPTO_HASH_START_FNP hash_start;
    ESYS_CRYPTO_HASH_UPDATE_FNP hash_update;
    ESYS_CRYPTO_HASH_FINISH_FNP hash_finish;
    ESYS_CRYPTO_HASH_ABORT_FNP hash_abort;
    ESYS_CRYPTO_HMAC_START_FNP hmac_start;
    ESYS_CRYPTO_HMAC_UPDATE_FNP hmac_update;
    ESYS_CRYPTO_HMAC_FINISH_FNP hmac_finish;
    ESYS_CRYPTO_HMAC_ABORT_FNP hmac_abort;
    ESYS_CRYPTO_GET_RANDOM2B_FNP get_random2b;
    ESYS_CRYPTO_GET_ECDH_POINT_FNP get_ecdh_point;
    ESYS_CRYPTO_AES_ENCRYPT_FNP aes_encrypt;
    ESYS_CRYPTO_AES_DECRYPT_FNP aes_decrypt;
    ESYS_CRYPTO_SM4_ENCRYPT_FNP sm4_encrypt;
    ESYS_CRYPTO_SM4_DECRYPT_FNP sm4_decrypt;
    ESYS_CRYPTO_INIT_FNP init;
    void *userdata;
};





TSS2_RC
Esys_Initialize(ESYS_CONTEXT **esys_context, TSS2_TCTI_CONTEXT *tcti, TSS2_ABI_VERSION *abiVersion);

void Esys_Finalize(ESYS_CONTEXT **context);

TSS2_RC
Esys_GetTcti(ESYS_CONTEXT *esys_context, TSS2_TCTI_CONTEXT **tcti);

TSS2_RC
Esys_GetPollHandles(ESYS_CONTEXT *esys_context, TSS2_TCTI_POLL_HANDLE **handles, size_t *count);

TSS2_RC
Esys_SetTimeout(ESYS_CONTEXT *esys_context, int32_t timeout);

TSS2_RC
Esys_TR_Serialize(ESYS_CONTEXT *esys_context,
                  ESYS_TR object,
                  uint8_t **buffer,
                  size_t *buffer_size);

TSS2_RC
Esys_TR_Deserialize(ESYS_CONTEXT *esys_context,
                    uint8_t const *buffer,
                    size_t buffer_size,
                    ESYS_TR *esys_handle);

TSS2_RC
Esys_TR_FromTPMPublic_Async(ESYS_CONTEXT *esysContext,
                            TPM2_HANDLE tpm_handle,
                            ESYS_TR optionalSession1,
                            ESYS_TR optionalSession2,
                            ESYS_TR optionalSession3);

TSS2_RC
Esys_TR_FromTPMPublic_Finish(ESYS_CONTEXT *esysContext, ESYS_TR *object);

TSS2_RC
Esys_TR_FromTPMPublic(ESYS_CONTEXT *esysContext,
                      TPM2_HANDLE tpm_handle,
                      ESYS_TR optionalSession1,
                      ESYS_TR optionalSession2,
                      ESYS_TR optionalSession3,
                      ESYS_TR *object);

TSS2_RC
Esys_TR_Close(ESYS_CONTEXT *esys_context, ESYS_TR *rsrc_handle);

TSS2_RC
Esys_TR_SetAuth(ESYS_CONTEXT *esysContext, ESYS_TR handle, TPM2B_AUTH const *authValue);

TSS2_RC
Esys_TR_GetName(ESYS_CONTEXT *esysContext, ESYS_TR handle, TPM2B_NAME **name);

TSS2_RC
Esys_TRSess_GetAttributes(ESYS_CONTEXT *esysContext, ESYS_TR session, TPMA_SESSION *flags);

TSS2_RC
Esys_TRSess_SetAttributes(ESYS_CONTEXT *esysContext,
                          ESYS_TR session,
                          TPMA_SESSION flags,
                          TPMA_SESSION mask);

TSS2_RC
Esys_TRSess_GetNonceTPM(ESYS_CONTEXT *esysContext, ESYS_TR session, TPM2B_NONCE **nonceTPM);

TSS2_RC
Esys_TR_GetTpmHandle(ESYS_CONTEXT *esys_context, ESYS_TR esys_handle, TPM2_HANDLE *tpm_handle);

TSS2_RC
Esys_TRSess_GetAuthRequired(ESYS_CONTEXT *esys_context,
                            ESYS_TR esys_handle,
                            TPMI_YES_NO *auth_needed);



TSS2_RC
Esys_Startup(ESYS_CONTEXT *esysContext, TPM2_SU startupType);

TSS2_RC
Esys_Startup_Async(ESYS_CONTEXT *esysContext, TPM2_SU startupType);

TSS2_RC
Esys_Startup_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_Shutdown(ESYS_CONTEXT *esysContext,
              ESYS_TR shandle1,
              ESYS_TR shandle2,
              ESYS_TR shandle3,
              TPM2_SU shutdownType);

TSS2_RC
Esys_Shutdown_Async(ESYS_CONTEXT *esysContext,
                    ESYS_TR shandle1,
                    ESYS_TR shandle2,
                    ESYS_TR shandle3,
                    TPM2_SU shutdownType);

TSS2_RC
Esys_Shutdown_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_SelfTest(ESYS_CONTEXT *esysContext,
              ESYS_TR shandle1,
              ESYS_TR shandle2,
              ESYS_TR shandle3,
              TPMI_YES_NO fullTest);

TSS2_RC
Esys_SelfTest_Async(ESYS_CONTEXT *esysContext,
                    ESYS_TR shandle1,
                    ESYS_TR shandle2,
                    ESYS_TR shandle3,
                    TPMI_YES_NO fullTest);

TSS2_RC
Esys_SelfTest_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_IncrementalSelfTest(ESYS_CONTEXT *esysContext,
                         ESYS_TR shandle1,
                         ESYS_TR shandle2,
                         ESYS_TR shandle3,
                         const TPML_ALG *toTest,
                         TPML_ALG **toDoList);

TSS2_RC
Esys_IncrementalSelfTest_Async(ESYS_CONTEXT *esysContext,
                               ESYS_TR shandle1,
                               ESYS_TR shandle2,
                               ESYS_TR shandle3,
                               const TPML_ALG *toTest);

TSS2_RC
Esys_IncrementalSelfTest_Finish(ESYS_CONTEXT *esysContext, TPML_ALG **toDoList);



TSS2_RC
Esys_GetTestResult(ESYS_CONTEXT *esysContext,
                   ESYS_TR shandle1,
                   ESYS_TR shandle2,
                   ESYS_TR shandle3,
                   TPM2B_MAX_BUFFER **outData,
                   TPM2_RC *testResult);

TSS2_RC
Esys_GetTestResult_Async(ESYS_CONTEXT *esysContext,
                         ESYS_TR shandle1,
                         ESYS_TR shandle2,
                         ESYS_TR shandle3);

TSS2_RC
Esys_GetTestResult_Finish(ESYS_CONTEXT *esysContext,
                          TPM2B_MAX_BUFFER **outData,
                          TPM2_RC *testResult);



TSS2_RC
Esys_StartAuthSession(ESYS_CONTEXT *esysContext,
                      ESYS_TR tpmKey,
                      ESYS_TR bind,
                      ESYS_TR shandle1,
                      ESYS_TR shandle2,
                      ESYS_TR shandle3,
                      const TPM2B_NONCE *nonceCaller,
                      TPM2_SE sessionType,
                      const TPMT_SYM_DEF *symmetric,
                      TPMI_ALG_HASH authHash,
                      ESYS_TR *sessionHandle);

TSS2_RC
Esys_StartAuthSession_Async(ESYS_CONTEXT *esysContext,
                            ESYS_TR tpmKey,
                            ESYS_TR bind,
                            ESYS_TR shandle1,
                            ESYS_TR shandle2,
                            ESYS_TR shandle3,
                            const TPM2B_NONCE *nonceCaller,
                            TPM2_SE sessionType,
                            const TPMT_SYM_DEF *symmetric,
                            TPMI_ALG_HASH authHash);

TSS2_RC
Esys_StartAuthSession_Finish(ESYS_CONTEXT *esysContext, ESYS_TR *sessionHandle);



TSS2_RC
Esys_PolicyRestart(ESYS_CONTEXT *esysContext,
                   ESYS_TR sessionHandle,
                   ESYS_TR shandle1,
                   ESYS_TR shandle2,
                   ESYS_TR shandle3);

TSS2_RC
Esys_PolicyRestart_Async(ESYS_CONTEXT *esysContext,
                         ESYS_TR sessionHandle,
                         ESYS_TR shandle1,
                         ESYS_TR shandle2,
                         ESYS_TR shandle3);

TSS2_RC
Esys_PolicyRestart_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_Create(ESYS_CONTEXT *esysContext,
            ESYS_TR parentHandle,
            ESYS_TR shandle1,
            ESYS_TR shandle2,
            ESYS_TR shandle3,
            const TPM2B_SENSITIVE_CREATE *inSensitive,
            const TPM2B_PUBLIC *inPublic,
            const TPM2B_DATA *outsideInfo,
            const TPML_PCR_SELECTION *creationPCR,
            TPM2B_PRIVATE **outPrivate,
            TPM2B_PUBLIC **outPublic,
            TPM2B_CREATION_DATA **creationData,
            TPM2B_DIGEST **creationHash,
            TPMT_TK_CREATION **creationTicket);

TSS2_RC
Esys_Create_Async(ESYS_CONTEXT *esysContext,
                  ESYS_TR parentHandle,
                  ESYS_TR shandle1,
                  ESYS_TR shandle2,
                  ESYS_TR shandle3,
                  const TPM2B_SENSITIVE_CREATE *inSensitive,
                  const TPM2B_PUBLIC *inPublic,
                  const TPM2B_DATA *outsideInfo,
                  const TPML_PCR_SELECTION *creationPCR);

TSS2_RC
Esys_Create_Finish(ESYS_CONTEXT *esysContext,
                   TPM2B_PRIVATE **outPrivate,
                   TPM2B_PUBLIC **outPublic,
                   TPM2B_CREATION_DATA **creationData,
                   TPM2B_DIGEST **creationHash,
                   TPMT_TK_CREATION **creationTicket);



TSS2_RC
Esys_Load(ESYS_CONTEXT *esysContext,
          ESYS_TR parentHandle,
          ESYS_TR shandle1,
          ESYS_TR shandle2,
          ESYS_TR shandle3,
          const TPM2B_PRIVATE *inPrivate,
          const TPM2B_PUBLIC *inPublic,
          ESYS_TR *objectHandle);

TSS2_RC
Esys_Load_Async(ESYS_CONTEXT *esysContext,
                ESYS_TR parentHandle,
                ESYS_TR shandle1,
                ESYS_TR shandle2,
                ESYS_TR shandle3,
                const TPM2B_PRIVATE *inPrivate,
                const TPM2B_PUBLIC *inPublic);

TSS2_RC
Esys_Load_Finish(ESYS_CONTEXT *esysContext, ESYS_TR *objectHandle);



TSS2_RC
Esys_LoadExternal(ESYS_CONTEXT *esysContext,
                  ESYS_TR shandle1,
                  ESYS_TR shandle2,
                  ESYS_TR shandle3,
                  const TPM2B_SENSITIVE *inPrivate,
                  const TPM2B_PUBLIC *inPublic,
                  ESYS_TR hierarchy,
                  ESYS_TR *objectHandle);

TSS2_RC
Esys_LoadExternal_Async(ESYS_CONTEXT *esysContext,
                        ESYS_TR shandle1,
                        ESYS_TR shandle2,
                        ESYS_TR shandle3,
                        const TPM2B_SENSITIVE *inPrivate,
                        const TPM2B_PUBLIC *inPublic,
                        ESYS_TR hierarchy);

TSS2_RC
Esys_LoadExternal_Finish(ESYS_CONTEXT *esysContext, ESYS_TR *objectHandle);



TSS2_RC
Esys_ReadPublic(ESYS_CONTEXT *esysContext,
                ESYS_TR objectHandle,
                ESYS_TR shandle1,
                ESYS_TR shandle2,
                ESYS_TR shandle3,
                TPM2B_PUBLIC **outPublic,
                TPM2B_NAME **name,
                TPM2B_NAME **qualifiedName);

TSS2_RC
Esys_ReadPublic_Async(ESYS_CONTEXT *esysContext,
                      ESYS_TR objectHandle,
                      ESYS_TR shandle1,
                      ESYS_TR shandle2,
                      ESYS_TR shandle3);

TSS2_RC
Esys_ReadPublic_Finish(ESYS_CONTEXT *esysContext,
                       TPM2B_PUBLIC **outPublic,
                       TPM2B_NAME **name,
                       TPM2B_NAME **qualifiedName);



TSS2_RC
Esys_ActivateCredential(ESYS_CONTEXT *esysContext,
                        ESYS_TR activateHandle,
                        ESYS_TR keyHandle,
                        ESYS_TR shandle1,
                        ESYS_TR shandle2,
                        ESYS_TR shandle3,
                        const TPM2B_ID_OBJECT *credentialBlob,
                        const TPM2B_ENCRYPTED_SECRET *secret,
                        TPM2B_DIGEST **certInfo);

TSS2_RC
Esys_ActivateCredential_Async(ESYS_CONTEXT *esysContext,
                              ESYS_TR activateHandle,
                              ESYS_TR keyHandle,
                              ESYS_TR shandle1,
                              ESYS_TR shandle2,
                              ESYS_TR shandle3,
                              const TPM2B_ID_OBJECT *credentialBlob,
                              const TPM2B_ENCRYPTED_SECRET *secret);

TSS2_RC
Esys_ActivateCredential_Finish(ESYS_CONTEXT *esysContext, TPM2B_DIGEST **certInfo);

TSS2_RC
Esys_ACT_SetTimeout(ESYS_CONTEXT *esysContext,
                    ESYS_TR actHandle,
                    ESYS_TR shandle1,
                    ESYS_TR shandle2,
                    ESYS_TR shandle3,
                    UINT32 startTimeout);

TSS2_RC
Esys_ACT_SetTimeout_Async(ESYS_CONTEXT *esysContext,
                          ESYS_TR actHandle,
                          ESYS_TR shandle1,
                          ESYS_TR shandle2,
                          ESYS_TR shandle3,
                          UINT32 startTimeout);

TSS2_RC
Esys_ACT_SetTimeout_Finish(ESYS_CONTEXT *esysContext);

TSS2_RC
Esys_AC_GetCapability_Async(ESYS_CONTEXT *esysContext,
                            ESYS_TR optionalSession1,
                            ESYS_TR optionalSession2,
                            ESYS_TR optionalSession3,
                            ESYS_TR ac,
                            TPM_AT capability,
                            UINT32 count);

TSS2_RC
Esys_AC_GetCapability_Finish(ESYS_CONTEXT *esysContext,
                             TPMI_YES_NO *moreData,
                             TPML_AC_CAPABILITIES **capabilityData);

TSS2_RC
Esys_AC_GetCapability(ESYS_CONTEXT *esysContext,
                      ESYS_TR optionalSession1,
                      ESYS_TR optionalSession2,
                      ESYS_TR optionalSession3,
                      ESYS_TR ac,
                      TPM_AT capability,
                      UINT32 count,
                      TPMI_YES_NO *moreData,
                      TPML_AC_CAPABILITIES **capabilityData);

TSS2_RC
Esys_AC_Send_Async(ESYS_CONTEXT *esysContext,
                   ESYS_TR sendObject,
                   ESYS_TR nvAuthHandle,
                   ESYS_TR ac,
                   ESYS_TR optionalSession1,
                   ESYS_TR optionalSession2,
                   ESYS_TR optionalSession3,
                   TPM2B_MAX_BUFFER *acDataIn);

TSS2_RC
Esys_AC_Send_Finish(ESYS_CONTEXT *esysContext, TPMS_AC_OUTPUT **acDataOut);

TSS2_RC
Esys_AC_Send(ESYS_CONTEXT *esysContext,
             ESYS_TR sendObject,
             ESYS_TR nvAuthHandle,
             ESYS_TR optionalSession1,
             ESYS_TR optionalSession2,
             ESYS_TR optionalSession3,
             ESYS_TR ac,
             TPM2B_MAX_BUFFER *acDataIn,
             TPMS_AC_OUTPUT **acDataOut);

TSS2_RC
Esys_Policy_AC_SendSelect_Async(ESYS_CONTEXT *esysContext,
                                ESYS_TR policySession1,
                                ESYS_TR optionalSession2,
                                ESYS_TR optionalSession3,
                                TPM2B_NAME *objectName,
                                TPM2B_NAME *authHandleName,
                                TPM2B_NAME *acName,
                                const TPMI_YES_NO includeObject);

TSS2_RC
Esys_Policy_AC_SendSelect_Finish(ESYS_CONTEXT *esysContext);

TSS2_RC
Esys_Policy_AC_SendSelect(ESYS_CONTEXT *esysContext,
                          ESYS_TR policySession1,
                          ESYS_TR optionalSession2,
                          ESYS_TR optionalSession3,
                          TPM2B_NAME *objectName,
                          TPM2B_NAME *authHandleName,
                          TPM2B_NAME *acName,
                          TPMI_YES_NO includeObject);



TSS2_RC
Esys_MakeCredential(ESYS_CONTEXT *esysContext,
                    ESYS_TR handle,
                    ESYS_TR shandle1,
                    ESYS_TR shandle2,
                    ESYS_TR shandle3,
                    const TPM2B_DIGEST *credential,
                    const TPM2B_NAME *objectName,
                    TPM2B_ID_OBJECT **credentialBlob,
                    TPM2B_ENCRYPTED_SECRET **secret);

TSS2_RC
Esys_MakeCredential_Async(ESYS_CONTEXT *esysContext,
                          ESYS_TR handle,
                          ESYS_TR shandle1,
                          ESYS_TR shandle2,
                          ESYS_TR shandle3,
                          const TPM2B_DIGEST *credential,
                          const TPM2B_NAME *objectName);

TSS2_RC
Esys_MakeCredential_Finish(ESYS_CONTEXT *esysContext,
                           TPM2B_ID_OBJECT **credentialBlob,
                           TPM2B_ENCRYPTED_SECRET **secret);



TSS2_RC
Esys_Unseal(ESYS_CONTEXT *esysContext,
            ESYS_TR itemHandle,
            ESYS_TR shandle1,
            ESYS_TR shandle2,
            ESYS_TR shandle3,
            TPM2B_SENSITIVE_DATA **outData);

TSS2_RC
Esys_Unseal_Async(ESYS_CONTEXT *esysContext,
                  ESYS_TR itemHandle,
                  ESYS_TR shandle1,
                  ESYS_TR shandle2,
                  ESYS_TR shandle3);

TSS2_RC
Esys_Unseal_Finish(ESYS_CONTEXT *esysContext, TPM2B_SENSITIVE_DATA **outData);



TSS2_RC
Esys_ObjectChangeAuth(ESYS_CONTEXT *esysContext,
                      ESYS_TR objectHandle,
                      ESYS_TR parentHandle,
                      ESYS_TR shandle1,
                      ESYS_TR shandle2,
                      ESYS_TR shandle3,
                      const TPM2B_AUTH *newAuth,
                      TPM2B_PRIVATE **outPrivate);

TSS2_RC
Esys_ObjectChangeAuth_Async(ESYS_CONTEXT *esysContext,
                            ESYS_TR objectHandle,
                            ESYS_TR parentHandle,
                            ESYS_TR shandle1,
                            ESYS_TR shandle2,
                            ESYS_TR shandle3,
                            const TPM2B_AUTH *newAuth);

TSS2_RC
Esys_ObjectChangeAuth_Finish(ESYS_CONTEXT *esysContext, TPM2B_PRIVATE **outPrivate);



TSS2_RC
Esys_CreateLoaded(ESYS_CONTEXT *esysContext,
                  ESYS_TR parentHandle,
                  ESYS_TR shandle1,
                  ESYS_TR shandle2,
                  ESYS_TR shandle3,
                  const TPM2B_SENSITIVE_CREATE *inSensitive,
                  const TPM2B_TEMPLATE *inPublic,
                  ESYS_TR *objectHandle,
                  TPM2B_PRIVATE **outPrivate,
                  TPM2B_PUBLIC **outPublic);

TSS2_RC
Esys_CreateLoaded_Async(ESYS_CONTEXT *esysContext,
                        ESYS_TR parentHandle,
                        ESYS_TR shandle1,
                        ESYS_TR shandle2,
                        ESYS_TR shandle3,
                        const TPM2B_SENSITIVE_CREATE *inSensitive,
                        const TPM2B_TEMPLATE *inPublic);

TSS2_RC
Esys_CreateLoaded_Finish(ESYS_CONTEXT *esysContext,
                         ESYS_TR *objectHandle,
                         TPM2B_PRIVATE **outPrivate,
                         TPM2B_PUBLIC **outPublic);



TSS2_RC
Esys_Duplicate(ESYS_CONTEXT *esysContext,
               ESYS_TR objectHandle,
               ESYS_TR newParentHandle,
               ESYS_TR shandle1,
               ESYS_TR shandle2,
               ESYS_TR shandle3,
               const TPM2B_DATA *encryptionKeyIn,
               const TPMT_SYM_DEF_OBJECT *symmetricAlg,
               TPM2B_DATA **encryptionKeyOut,
               TPM2B_PRIVATE **duplicate,
               TPM2B_ENCRYPTED_SECRET **outSymSeed);

TSS2_RC
Esys_Duplicate_Async(ESYS_CONTEXT *esysContext,
                     ESYS_TR objectHandle,
                     ESYS_TR newParentHandle,
                     ESYS_TR shandle1,
                     ESYS_TR shandle2,
                     ESYS_TR shandle3,
                     const TPM2B_DATA *encryptionKeyIn,
                     const TPMT_SYM_DEF_OBJECT *symmetricAlg);

TSS2_RC
Esys_Duplicate_Finish(ESYS_CONTEXT *esysContext,
                      TPM2B_DATA **encryptionKeyOut,
                      TPM2B_PRIVATE **duplicate,
                      TPM2B_ENCRYPTED_SECRET **outSymSeed);



TSS2_RC
Esys_Rewrap(ESYS_CONTEXT *esysContext,
            ESYS_TR oldParent,
            ESYS_TR newParent,
            ESYS_TR shandle1,
            ESYS_TR shandle2,
            ESYS_TR shandle3,
            const TPM2B_PRIVATE *inDuplicate,
            const TPM2B_NAME *name,
            const TPM2B_ENCRYPTED_SECRET *inSymSeed,
            TPM2B_PRIVATE **outDuplicate,
            TPM2B_ENCRYPTED_SECRET **outSymSeed);

TSS2_RC
Esys_Rewrap_Async(ESYS_CONTEXT *esysContext,
                  ESYS_TR oldParent,
                  ESYS_TR newParent,
                  ESYS_TR shandle1,
                  ESYS_TR shandle2,
                  ESYS_TR shandle3,
                  const TPM2B_PRIVATE *inDuplicate,
                  const TPM2B_NAME *name,
                  const TPM2B_ENCRYPTED_SECRET *inSymSeed);

TSS2_RC
Esys_Rewrap_Finish(ESYS_CONTEXT *esysContext,
                   TPM2B_PRIVATE **outDuplicate,
                   TPM2B_ENCRYPTED_SECRET **outSymSeed);



TSS2_RC
Esys_Import(ESYS_CONTEXT *esysContext,
            ESYS_TR parentHandle,
            ESYS_TR shandle1,
            ESYS_TR shandle2,
            ESYS_TR shandle3,
            const TPM2B_DATA *encryptionKey,
            const TPM2B_PUBLIC *objectPublic,
            const TPM2B_PRIVATE *duplicate,
            const TPM2B_ENCRYPTED_SECRET *inSymSeed,
            const TPMT_SYM_DEF_OBJECT *symmetricAlg,
            TPM2B_PRIVATE **outPrivate);

TSS2_RC
Esys_Import_Async(ESYS_CONTEXT *esysContext,
                  ESYS_TR parentHandle,
                  ESYS_TR shandle1,
                  ESYS_TR shandle2,
                  ESYS_TR shandle3,
                  const TPM2B_DATA *encryptionKey,
                  const TPM2B_PUBLIC *objectPublic,
                  const TPM2B_PRIVATE *duplicate,
                  const TPM2B_ENCRYPTED_SECRET *inSymSeed,
                  const TPMT_SYM_DEF_OBJECT *symmetricAlg);

TSS2_RC
Esys_Import_Finish(ESYS_CONTEXT *esysContext, TPM2B_PRIVATE **outPrivate);



TSS2_RC
Esys_RSA_Encrypt(ESYS_CONTEXT *esysContext,
                 ESYS_TR keyHandle,
                 ESYS_TR shandle1,
                 ESYS_TR shandle2,
                 ESYS_TR shandle3,
                 const TPM2B_PUBLIC_KEY_RSA *message,
                 const TPMT_RSA_DECRYPT *inScheme,
                 const TPM2B_DATA *label,
                 TPM2B_PUBLIC_KEY_RSA **outData);

TSS2_RC
Esys_RSA_Encrypt_Async(ESYS_CONTEXT *esysContext,
                       ESYS_TR keyHandle,
                       ESYS_TR shandle1,
                       ESYS_TR shandle2,
                       ESYS_TR shandle3,
                       const TPM2B_PUBLIC_KEY_RSA *message,
                       const TPMT_RSA_DECRYPT *inScheme,
                       const TPM2B_DATA *label);

TSS2_RC
Esys_RSA_Encrypt_Finish(ESYS_CONTEXT *esysContext, TPM2B_PUBLIC_KEY_RSA **outData);



TSS2_RC
Esys_RSA_Decrypt(ESYS_CONTEXT *esysContext,
                 ESYS_TR keyHandle,
                 ESYS_TR shandle1,
                 ESYS_TR shandle2,
                 ESYS_TR shandle3,
                 const TPM2B_PUBLIC_KEY_RSA *cipherText,
                 const TPMT_RSA_DECRYPT *inScheme,
                 const TPM2B_DATA *label,
                 TPM2B_PUBLIC_KEY_RSA **message);

TSS2_RC
Esys_RSA_Decrypt_Async(ESYS_CONTEXT *esysContext,
                       ESYS_TR keyHandle,
                       ESYS_TR shandle1,
                       ESYS_TR shandle2,
                       ESYS_TR shandle3,
                       const TPM2B_PUBLIC_KEY_RSA *cipherText,
                       const TPMT_RSA_DECRYPT *inScheme,
                       const TPM2B_DATA *label);

TSS2_RC
Esys_RSA_Decrypt_Finish(ESYS_CONTEXT *esysContext, TPM2B_PUBLIC_KEY_RSA **message);



TSS2_RC
Esys_ECDH_KeyGen(ESYS_CONTEXT *esysContext,
                 ESYS_TR keyHandle,
                 ESYS_TR shandle1,
                 ESYS_TR shandle2,
                 ESYS_TR shandle3,
                 TPM2B_ECC_POINT **zPoint,
                 TPM2B_ECC_POINT **pubPoint);

TSS2_RC
Esys_ECDH_KeyGen_Async(ESYS_CONTEXT *esysContext,
                       ESYS_TR keyHandle,
                       ESYS_TR shandle1,
                       ESYS_TR shandle2,
                       ESYS_TR shandle3);

TSS2_RC
Esys_ECDH_KeyGen_Finish(ESYS_CONTEXT *esysContext,
                        TPM2B_ECC_POINT **zPoint,
                        TPM2B_ECC_POINT **pubPoint);



TSS2_RC
Esys_ECDH_ZGen(ESYS_CONTEXT *esysContext,
               ESYS_TR keyHandle,
               ESYS_TR shandle1,
               ESYS_TR shandle2,
               ESYS_TR shandle3,
               const TPM2B_ECC_POINT *inPoint,
               TPM2B_ECC_POINT **outPoint);

TSS2_RC
Esys_ECDH_ZGen_Async(ESYS_CONTEXT *esysContext,
                     ESYS_TR keyHandle,
                     ESYS_TR shandle1,
                     ESYS_TR shandle2,
                     ESYS_TR shandle3,
                     const TPM2B_ECC_POINT *inPoint);

TSS2_RC
Esys_ECDH_ZGen_Finish(ESYS_CONTEXT *esysContext, TPM2B_ECC_POINT **outPoint);



TSS2_RC
Esys_ECC_Parameters(ESYS_CONTEXT *esysContext,
                    ESYS_TR shandle1,
                    ESYS_TR shandle2,
                    ESYS_TR shandle3,
                    TPMI_ECC_CURVE curveID,
                    TPMS_ALGORITHM_DETAIL_ECC **parameters);

TSS2_RC
Esys_ECC_Parameters_Async(ESYS_CONTEXT *esysContext,
                          ESYS_TR shandle1,
                          ESYS_TR shandle2,
                          ESYS_TR shandle3,
                          TPMI_ECC_CURVE curveID);

TSS2_RC
Esys_ECC_Parameters_Finish(ESYS_CONTEXT *esysContext, TPMS_ALGORITHM_DETAIL_ECC **parameters);



TSS2_RC
Esys_ZGen_2Phase(ESYS_CONTEXT *esysContext,
                 ESYS_TR keyA,
                 ESYS_TR shandle1,
                 ESYS_TR shandle2,
                 ESYS_TR shandle3,
                 const TPM2B_ECC_POINT *inQsB,
                 const TPM2B_ECC_POINT *inQeB,
                 TPMI_ECC_KEY_EXCHANGE inScheme,
                 UINT16 counter,
                 TPM2B_ECC_POINT **outZ1,
                 TPM2B_ECC_POINT **outZ2);

TSS2_RC
Esys_ZGen_2Phase_Async(ESYS_CONTEXT *esysContext,
                       ESYS_TR keyA,
                       ESYS_TR shandle1,
                       ESYS_TR shandle2,
                       ESYS_TR shandle3,
                       const TPM2B_ECC_POINT *inQsB,
                       const TPM2B_ECC_POINT *inQeB,
                       TPMI_ECC_KEY_EXCHANGE inScheme,
                       UINT16 counter);

TSS2_RC
Esys_ZGen_2Phase_Finish(ESYS_CONTEXT *esysContext,
                        TPM2B_ECC_POINT **outZ1,
                        TPM2B_ECC_POINT **outZ2);



TSS2_RC
Esys_EncryptDecrypt(ESYS_CONTEXT *esysContext,
                    ESYS_TR keyHandle,
                    ESYS_TR shandle1,
                    ESYS_TR shandle2,
                    ESYS_TR shandle3,
                    TPMI_YES_NO decrypt,
                    TPMI_ALG_CIPHER_MODE mode,
                    const TPM2B_IV *ivIn,
                    const TPM2B_MAX_BUFFER *inData,
                    TPM2B_MAX_BUFFER **outData,
                    TPM2B_IV **ivOut);

TSS2_RC
Esys_EncryptDecrypt_Async(ESYS_CONTEXT *esysContext,
                          ESYS_TR keyHandle,
                          ESYS_TR shandle1,
                          ESYS_TR shandle2,
                          ESYS_TR shandle3,
                          TPMI_YES_NO decrypt,
                          TPMI_ALG_CIPHER_MODE mode,
                          const TPM2B_IV *ivIn,
                          const TPM2B_MAX_BUFFER *inData);

TSS2_RC
Esys_EncryptDecrypt_Finish(ESYS_CONTEXT *esysContext, TPM2B_MAX_BUFFER **outData, TPM2B_IV **ivOut);



TSS2_RC
Esys_EncryptDecrypt2(ESYS_CONTEXT *esysContext,
                     ESYS_TR keyHandle,
                     ESYS_TR shandle1,
                     ESYS_TR shandle2,
                     ESYS_TR shandle3,
                     const TPM2B_MAX_BUFFER *inData,
                     TPMI_YES_NO decrypt,
                     TPMI_ALG_CIPHER_MODE mode,
                     const TPM2B_IV *ivIn,
                     TPM2B_MAX_BUFFER **outData,
                     TPM2B_IV **ivOut);

TSS2_RC
Esys_EncryptDecrypt2_Async(ESYS_CONTEXT *esysContext,
                           ESYS_TR keyHandle,
                           ESYS_TR shandle1,
                           ESYS_TR shandle2,
                           ESYS_TR shandle3,
                           const TPM2B_MAX_BUFFER *inData,
                           TPMI_YES_NO decrypt,
                           TPMI_ALG_CIPHER_MODE mode,
                           const TPM2B_IV *ivIn);

TSS2_RC
Esys_EncryptDecrypt2_Finish(ESYS_CONTEXT *esysContext,
                            TPM2B_MAX_BUFFER **outData,
                            TPM2B_IV **ivOut);



TSS2_RC
Esys_Hash(ESYS_CONTEXT *esysContext,
          ESYS_TR shandle1,
          ESYS_TR shandle2,
          ESYS_TR shandle3,
          const TPM2B_MAX_BUFFER *data,
          TPMI_ALG_HASH hashAlg,
          ESYS_TR hierarchy,
          TPM2B_DIGEST **outHash,
          TPMT_TK_HASHCHECK **validation);

TSS2_RC
Esys_Hash_Async(ESYS_CONTEXT *esysContext,
                ESYS_TR shandle1,
                ESYS_TR shandle2,
                ESYS_TR shandle3,
                const TPM2B_MAX_BUFFER *data,
                TPMI_ALG_HASH hashAlg,
                ESYS_TR hierarchy);

TSS2_RC
Esys_Hash_Finish(ESYS_CONTEXT *esysContext, TPM2B_DIGEST **outHash, TPMT_TK_HASHCHECK **validation);



TSS2_RC
Esys_HMAC(ESYS_CONTEXT *esysContext,
          ESYS_TR handle,
          ESYS_TR shandle1,
          ESYS_TR shandle2,
          ESYS_TR shandle3,
          const TPM2B_MAX_BUFFER *buffer,
          TPMI_ALG_HASH hashAlg,
          TPM2B_DIGEST **outHMAC);

TSS2_RC
Esys_HMAC_Async(ESYS_CONTEXT *esysContext,
                ESYS_TR handle,
                ESYS_TR shandle1,
                ESYS_TR shandle2,
                ESYS_TR shandle3,
                const TPM2B_MAX_BUFFER *buffer,
                TPMI_ALG_HASH hashAlg);

TSS2_RC
Esys_HMAC_Finish(ESYS_CONTEXT *esysContext, TPM2B_DIGEST **outHMAC);

TSS2_RC
Esys_MAC_Async(ESYS_CONTEXT *esysContext,
               ESYS_TR handle,
               ESYS_TR handleSession1,
               ESYS_TR optionalSession2,
               ESYS_TR optionalSession3,
               const TPM2B_MAX_BUFFER *buffer,
               TPMI_ALG_MAC_SCHEME inScheme);

TSS2_RC
Esys_MAC_Finish(ESYS_CONTEXT *esysContext, TPM2B_DIGEST **outMAC);

TSS2_RC
Esys_MAC(ESYS_CONTEXT *esysContext,
         ESYS_TR handle,
         ESYS_TR handleSession1,
         ESYS_TR optionalSession2,
         ESYS_TR optionalSession3,
         const TPM2B_MAX_BUFFER *buffer,
         TPMI_ALG_MAC_SCHEME inScheme,
         TPM2B_DIGEST **outMAC);



TSS2_RC
Esys_GetRandom(ESYS_CONTEXT *esysContext,
               ESYS_TR shandle1,
               ESYS_TR shandle2,
               ESYS_TR shandle3,
               UINT16 bytesRequested,
               TPM2B_DIGEST **randomBytes);

TSS2_RC
Esys_GetRandom_Async(ESYS_CONTEXT *esysContext,
                     ESYS_TR shandle1,
                     ESYS_TR shandle2,
                     ESYS_TR shandle3,
                     UINT16 bytesRequested);

TSS2_RC
Esys_GetRandom_Finish(ESYS_CONTEXT *esysContext, TPM2B_DIGEST **randomBytes);



TSS2_RC
Esys_StirRandom(ESYS_CONTEXT *esysContext,
                ESYS_TR shandle1,
                ESYS_TR shandle2,
                ESYS_TR shandle3,
                const TPM2B_SENSITIVE_DATA *inData);

TSS2_RC
Esys_StirRandom_Async(ESYS_CONTEXT *esysContext,
                      ESYS_TR shandle1,
                      ESYS_TR shandle2,
                      ESYS_TR shandle3,
                      const TPM2B_SENSITIVE_DATA *inData);

TSS2_RC
Esys_StirRandom_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_HMAC_Start(ESYS_CONTEXT *esysContext,
                ESYS_TR handle,
                ESYS_TR shandle1,
                ESYS_TR shandle2,
                ESYS_TR shandle3,
                const TPM2B_AUTH *auth,
                TPMI_ALG_HASH hashAlg,
                ESYS_TR *sequenceHandle);

TSS2_RC
Esys_HMAC_Start_Async(ESYS_CONTEXT *esysContext,
                      ESYS_TR handle,
                      ESYS_TR shandle1,
                      ESYS_TR shandle2,
                      ESYS_TR shandle3,
                      const TPM2B_AUTH *auth,
                      TPMI_ALG_HASH hashAlg);

TSS2_RC
Esys_HMAC_Start_Finish(ESYS_CONTEXT *esysContext, ESYS_TR *sequenceHandle);

TSS2_RC
Esys_MAC_Start(ESYS_CONTEXT *esysContext,
               ESYS_TR handle,
               ESYS_TR handleSession1,
               ESYS_TR optionalSession2,
               ESYS_TR optionalSession3,
               const TPM2B_AUTH *auth,
               TPMI_ALG_MAC_SCHEME inScheme,
               ESYS_TR *sequenceHandle);

TSS2_RC
Esys_MAC_Start_Async(ESYS_CONTEXT *esysContext,
                     ESYS_TR handle,
                     ESYS_TR handleSession1,
                     ESYS_TR optionalSession2,
                     ESYS_TR optionalSession3,
                     const TPM2B_AUTH *auth,
                     TPMI_ALG_MAC_SCHEME inScheme);

TSS2_RC
Esys_MAC_Start_Finish(ESYS_CONTEXT *esysContext, ESYS_TR *sequenceHandle);



TSS2_RC
Esys_HashSequenceStart(ESYS_CONTEXT *esysContext,
                       ESYS_TR shandle1,
                       ESYS_TR shandle2,
                       ESYS_TR shandle3,
                       const TPM2B_AUTH *auth,
                       TPMI_ALG_HASH hashAlg,
                       ESYS_TR *sequenceHandle);

TSS2_RC
Esys_HashSequenceStart_Async(ESYS_CONTEXT *esysContext,
                             ESYS_TR shandle1,
                             ESYS_TR shandle2,
                             ESYS_TR shandle3,
                             const TPM2B_AUTH *auth,
                             TPMI_ALG_HASH hashAlg);

TSS2_RC
Esys_HashSequenceStart_Finish(ESYS_CONTEXT *esysContext, ESYS_TR *sequenceHandle);



TSS2_RC
Esys_SequenceUpdate(ESYS_CONTEXT *esysContext,
                    ESYS_TR sequenceHandle,
                    ESYS_TR shandle1,
                    ESYS_TR shandle2,
                    ESYS_TR shandle3,
                    const TPM2B_MAX_BUFFER *buffer);

TSS2_RC
Esys_SequenceUpdate_Async(ESYS_CONTEXT *esysContext,
                          ESYS_TR sequenceHandle,
                          ESYS_TR shandle1,
                          ESYS_TR shandle2,
                          ESYS_TR shandle3,
                          const TPM2B_MAX_BUFFER *buffer);

TSS2_RC
Esys_SequenceUpdate_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_SequenceComplete(ESYS_CONTEXT *esysContext,
                      ESYS_TR sequenceHandle,
                      ESYS_TR shandle1,
                      ESYS_TR shandle2,
                      ESYS_TR shandle3,
                      const TPM2B_MAX_BUFFER *buffer,
                      ESYS_TR hierarchy,
                      TPM2B_DIGEST **result,
                      TPMT_TK_HASHCHECK **validation);

TSS2_RC
Esys_SequenceComplete_Async(ESYS_CONTEXT *esysContext,
                            ESYS_TR sequenceHandle,
                            ESYS_TR shandle1,
                            ESYS_TR shandle2,
                            ESYS_TR shandle3,
                            const TPM2B_MAX_BUFFER *buffer,
                            ESYS_TR hierarchy);

TSS2_RC
Esys_SequenceComplete_Finish(ESYS_CONTEXT *esysContext,
                             TPM2B_DIGEST **result,
                             TPMT_TK_HASHCHECK **validation);



TSS2_RC
Esys_EventSequenceComplete(ESYS_CONTEXT *esysContext,
                           ESYS_TR pcrHandle,
                           ESYS_TR sequenceHandle,
                           ESYS_TR shandle1,
                           ESYS_TR shandle2,
                           ESYS_TR shandle3,
                           const TPM2B_MAX_BUFFER *buffer,
                           TPML_DIGEST_VALUES **results);

TSS2_RC
Esys_EventSequenceComplete_Async(ESYS_CONTEXT *esysContext,
                                 ESYS_TR pcrHandle,
                                 ESYS_TR sequenceHandle,
                                 ESYS_TR shandle1,
                                 ESYS_TR shandle2,
                                 ESYS_TR shandle3,
                                 const TPM2B_MAX_BUFFER *buffer);

TSS2_RC
Esys_EventSequenceComplete_Finish(ESYS_CONTEXT *esysContext, TPML_DIGEST_VALUES **results);



TSS2_RC
Esys_Certify(ESYS_CONTEXT *esysContext,
             ESYS_TR objectHandle,
             ESYS_TR signHandle,
             ESYS_TR shandle1,
             ESYS_TR shandle2,
             ESYS_TR shandle3,
             const TPM2B_DATA *qualifyingData,
             const TPMT_SIG_SCHEME *inScheme,
             TPM2B_ATTEST **certifyInfo,
             TPMT_SIGNATURE **signature);

TSS2_RC
Esys_Certify_Async(ESYS_CONTEXT *esysContext,
                   ESYS_TR objectHandle,
                   ESYS_TR signHandle,
                   ESYS_TR shandle1,
                   ESYS_TR shandle2,
                   ESYS_TR shandle3,
                   const TPM2B_DATA *qualifyingData,
                   const TPMT_SIG_SCHEME *inScheme);

TSS2_RC
Esys_Certify_Finish(ESYS_CONTEXT *esysContext,
                    TPM2B_ATTEST **certifyInfo,
                    TPMT_SIGNATURE **signature);



TSS2_RC
Esys_CertifyCreation(ESYS_CONTEXT *esysContext,
                     ESYS_TR signHandle,
                     ESYS_TR objectHandle,
                     ESYS_TR shandle1,
                     ESYS_TR shandle2,
                     ESYS_TR shandle3,
                     const TPM2B_DATA *qualifyingData,
                     const TPM2B_DIGEST *creationHash,
                     const TPMT_SIG_SCHEME *inScheme,
                     const TPMT_TK_CREATION *creationTicket,
                     TPM2B_ATTEST **certifyInfo,
                     TPMT_SIGNATURE **signature);

TSS2_RC
Esys_CertifyCreation_Async(ESYS_CONTEXT *esysContext,
                           ESYS_TR signHandle,
                           ESYS_TR objectHandle,
                           ESYS_TR shandle1,
                           ESYS_TR shandle2,
                           ESYS_TR shandle3,
                           const TPM2B_DATA *qualifyingData,
                           const TPM2B_DIGEST *creationHash,
                           const TPMT_SIG_SCHEME *inScheme,
                           const TPMT_TK_CREATION *creationTicket);

TSS2_RC
Esys_CertifyCreation_Finish(ESYS_CONTEXT *esysContext,
                            TPM2B_ATTEST **certifyInfo,
                            TPMT_SIGNATURE **signature);

TSS2_RC
Esys_CertifyX509(ESYS_CONTEXT *esysContext,
                 ESYS_TR objectHandle,
                 ESYS_TR signHandle,
                 ESYS_TR shandle1,
                 ESYS_TR shandle2,
                 ESYS_TR shandle3,
                 const TPM2B_DATA *reserved,
                 const TPMT_SIG_SCHEME *inScheme,
                 const TPM2B_MAX_BUFFER *partialCertificate,
                 TPM2B_MAX_BUFFER **addedToCertificate,
                 TPM2B_DIGEST **tbsDigest,
                 TPMT_SIGNATURE **signature);

TSS2_RC
Esys_CertifyX509_Async(ESYS_CONTEXT *esysContext,
                       ESYS_TR objectHandle,
                       ESYS_TR signHandle,
                       ESYS_TR shandle1,
                       ESYS_TR shandle2,
                       ESYS_TR shandle3,
                       const TPM2B_DATA *reserved,
                       const TPMT_SIG_SCHEME *inScheme,
                       const TPM2B_MAX_BUFFER *partialCertificate);

TSS2_RC
Esys_CertifyX509_Finish(ESYS_CONTEXT *esysContext,
                        TPM2B_MAX_BUFFER **addedToCertificate,
                        TPM2B_DIGEST **tbsDigest,
                        TPMT_SIGNATURE **signature);



TSS2_RC
Esys_Quote(ESYS_CONTEXT *esysContext,
           ESYS_TR signHandle,
           ESYS_TR shandle1,
           ESYS_TR shandle2,
           ESYS_TR shandle3,
           const TPM2B_DATA *qualifyingData,
           const TPMT_SIG_SCHEME *inScheme,
           const TPML_PCR_SELECTION *PCRselect,
           TPM2B_ATTEST **quoted,
           TPMT_SIGNATURE **signature);

TSS2_RC
Esys_Quote_Async(ESYS_CONTEXT *esysContext,
                 ESYS_TR signHandle,
                 ESYS_TR shandle1,
                 ESYS_TR shandle2,
                 ESYS_TR shandle3,
                 const TPM2B_DATA *qualifyingData,
                 const TPMT_SIG_SCHEME *inScheme,
                 const TPML_PCR_SELECTION *PCRselect);

TSS2_RC
Esys_Quote_Finish(ESYS_CONTEXT *esysContext, TPM2B_ATTEST **quoted, TPMT_SIGNATURE **signature);



TSS2_RC
Esys_GetSessionAuditDigest(ESYS_CONTEXT *esysContext,
                           ESYS_TR privacyAdminHandle,
                           ESYS_TR signHandle,
                           ESYS_TR sessionHandle,
                           ESYS_TR shandle1,
                           ESYS_TR shandle2,
                           ESYS_TR shandle3,
                           const TPM2B_DATA *qualifyingData,
                           const TPMT_SIG_SCHEME *inScheme,
                           TPM2B_ATTEST **auditInfo,
                           TPMT_SIGNATURE **signature);

TSS2_RC
Esys_GetSessionAuditDigest_Async(ESYS_CONTEXT *esysContext,
                                 ESYS_TR privacyAdminHandle,
                                 ESYS_TR signHandle,
                                 ESYS_TR sessionHandle,
                                 ESYS_TR shandle1,
                                 ESYS_TR shandle2,
                                 ESYS_TR shandle3,
                                 const TPM2B_DATA *qualifyingData,
                                 const TPMT_SIG_SCHEME *inScheme);

TSS2_RC
Esys_GetSessionAuditDigest_Finish(ESYS_CONTEXT *esysContext,
                                  TPM2B_ATTEST **auditInfo,
                                  TPMT_SIGNATURE **signature);



TSS2_RC
Esys_GetCommandAuditDigest(ESYS_CONTEXT *esysContext,
                           ESYS_TR privacyHandle,
                           ESYS_TR signHandle,
                           ESYS_TR shandle1,
                           ESYS_TR shandle2,
                           ESYS_TR shandle3,
                           const TPM2B_DATA *qualifyingData,
                           const TPMT_SIG_SCHEME *inScheme,
                           TPM2B_ATTEST **auditInfo,
                           TPMT_SIGNATURE **signature);

TSS2_RC
Esys_GetCommandAuditDigest_Async(ESYS_CONTEXT *esysContext,
                                 ESYS_TR privacyHandle,
                                 ESYS_TR signHandle,
                                 ESYS_TR shandle1,
                                 ESYS_TR shandle2,
                                 ESYS_TR shandle3,
                                 const TPM2B_DATA *qualifyingData,
                                 const TPMT_SIG_SCHEME *inScheme);

TSS2_RC
Esys_GetCommandAuditDigest_Finish(ESYS_CONTEXT *esysContext,
                                  TPM2B_ATTEST **auditInfo,
                                  TPMT_SIGNATURE **signature);



TSS2_RC
Esys_GetTime(ESYS_CONTEXT *esysContext,
             ESYS_TR privacyAdminHandle,
             ESYS_TR signHandle,
             ESYS_TR shandle1,
             ESYS_TR shandle2,
             ESYS_TR shandle3,
             const TPM2B_DATA *qualifyingData,
             const TPMT_SIG_SCHEME *inScheme,
             TPM2B_ATTEST **timeInfo,
             TPMT_SIGNATURE **signature);

TSS2_RC
Esys_GetTime_Async(ESYS_CONTEXT *esysContext,
                   ESYS_TR privacyAdminHandle,
                   ESYS_TR signHandle,
                   ESYS_TR shandle1,
                   ESYS_TR shandle2,
                   ESYS_TR shandle3,
                   const TPM2B_DATA *qualifyingData,
                   const TPMT_SIG_SCHEME *inScheme);

TSS2_RC
Esys_GetTime_Finish(ESYS_CONTEXT *esysContext, TPM2B_ATTEST **timeInfo, TPMT_SIGNATURE **signature);



TSS2_RC
Esys_Commit(ESYS_CONTEXT *esysContext,
            ESYS_TR signHandle,
            ESYS_TR shandle1,
            ESYS_TR shandle2,
            ESYS_TR shandle3,
            const TPM2B_ECC_POINT *P1,
            const TPM2B_SENSITIVE_DATA *s2,
            const TPM2B_ECC_PARAMETER *y2,
            TPM2B_ECC_POINT **K,
            TPM2B_ECC_POINT **L,
            TPM2B_ECC_POINT **E,
            UINT16 *counter);

TSS2_RC
Esys_Commit_Async(ESYS_CONTEXT *esysContext,
                  ESYS_TR signHandle,
                  ESYS_TR shandle1,
                  ESYS_TR shandle2,
                  ESYS_TR shandle3,
                  const TPM2B_ECC_POINT *P1,
                  const TPM2B_SENSITIVE_DATA *s2,
                  const TPM2B_ECC_PARAMETER *y2);

TSS2_RC
Esys_Commit_Finish(ESYS_CONTEXT *esysContext,
                   TPM2B_ECC_POINT **K,
                   TPM2B_ECC_POINT **L,
                   TPM2B_ECC_POINT **E,
                   UINT16 *counter);



TSS2_RC
Esys_EC_Ephemeral(ESYS_CONTEXT *esysContext,
                  ESYS_TR shandle1,
                  ESYS_TR shandle2,
                  ESYS_TR shandle3,
                  TPMI_ECC_CURVE curveID,
                  TPM2B_ECC_POINT **Q,
                  UINT16 *counter);

TSS2_RC
Esys_EC_Ephemeral_Async(ESYS_CONTEXT *esysContext,
                        ESYS_TR shandle1,
                        ESYS_TR shandle2,
                        ESYS_TR shandle3,
                        TPMI_ECC_CURVE curveID);

TSS2_RC
Esys_EC_Ephemeral_Finish(ESYS_CONTEXT *esysContext, TPM2B_ECC_POINT **Q, UINT16 *counter);



TSS2_RC
Esys_VerifySignature(ESYS_CONTEXT *esysContext,
                     ESYS_TR keyHandle,
                     ESYS_TR shandle1,
                     ESYS_TR shandle2,
                     ESYS_TR shandle3,
                     const TPM2B_DIGEST *digest,
                     const TPMT_SIGNATURE *signature,
                     TPMT_TK_VERIFIED **validation);

TSS2_RC
Esys_VerifySignature_Async(ESYS_CONTEXT *esysContext,
                           ESYS_TR keyHandle,
                           ESYS_TR shandle1,
                           ESYS_TR shandle2,
                           ESYS_TR shandle3,
                           const TPM2B_DIGEST *digest,
                           const TPMT_SIGNATURE *signature);

TSS2_RC
Esys_VerifySignature_Finish(ESYS_CONTEXT *esysContext, TPMT_TK_VERIFIED **validation);



TSS2_RC
Esys_Sign(ESYS_CONTEXT *esysContext,
          ESYS_TR keyHandle,
          ESYS_TR shandle1,
          ESYS_TR shandle2,
          ESYS_TR shandle3,
          const TPM2B_DIGEST *digest,
          const TPMT_SIG_SCHEME *inScheme,
          const TPMT_TK_HASHCHECK *validation,
          TPMT_SIGNATURE **signature);

TSS2_RC
Esys_Sign_Async(ESYS_CONTEXT *esysContext,
                ESYS_TR keyHandle,
                ESYS_TR shandle1,
                ESYS_TR shandle2,
                ESYS_TR shandle3,
                const TPM2B_DIGEST *digest,
                const TPMT_SIG_SCHEME *inScheme,
                const TPMT_TK_HASHCHECK *validation);

TSS2_RC
Esys_Sign_Finish(ESYS_CONTEXT *esysContext, TPMT_SIGNATURE **signature);



TSS2_RC
Esys_SetCommandCodeAuditStatus(ESYS_CONTEXT *esysContext,
                               ESYS_TR auth,
                               ESYS_TR shandle1,
                               ESYS_TR shandle2,
                               ESYS_TR shandle3,
                               TPMI_ALG_HASH auditAlg,
                               const TPML_CC *setList,
                               const TPML_CC *clearList);

TSS2_RC
Esys_SetCommandCodeAuditStatus_Async(ESYS_CONTEXT *esysContext,
                                     ESYS_TR auth,
                                     ESYS_TR shandle1,
                                     ESYS_TR shandle2,
                                     ESYS_TR shandle3,
                                     TPMI_ALG_HASH auditAlg,
                                     const TPML_CC *setList,
                                     const TPML_CC *clearList);

TSS2_RC
Esys_SetCommandCodeAuditStatus_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_PCR_Extend(ESYS_CONTEXT *esysContext,
                ESYS_TR pcrHandle,
                ESYS_TR shandle1,
                ESYS_TR shandle2,
                ESYS_TR shandle3,
                const TPML_DIGEST_VALUES *digests);

TSS2_RC
Esys_PCR_Extend_Async(ESYS_CONTEXT *esysContext,
                      ESYS_TR pcrHandle,
                      ESYS_TR shandle1,
                      ESYS_TR shandle2,
                      ESYS_TR shandle3,
                      const TPML_DIGEST_VALUES *digests);

TSS2_RC
Esys_PCR_Extend_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_PCR_Event(ESYS_CONTEXT *esysContext,
               ESYS_TR pcrHandle,
               ESYS_TR shandle1,
               ESYS_TR shandle2,
               ESYS_TR shandle3,
               const TPM2B_EVENT *eventData,
               TPML_DIGEST_VALUES **digests);

TSS2_RC
Esys_PCR_Event_Async(ESYS_CONTEXT *esysContext,
                     ESYS_TR pcrHandle,
                     ESYS_TR shandle1,
                     ESYS_TR shandle2,
                     ESYS_TR shandle3,
                     const TPM2B_EVENT *eventData);

TSS2_RC
Esys_PCR_Event_Finish(ESYS_CONTEXT *esysContext, TPML_DIGEST_VALUES **digests);



TSS2_RC
Esys_PCR_Read(ESYS_CONTEXT *esysContext,
              ESYS_TR shandle1,
              ESYS_TR shandle2,
              ESYS_TR shandle3,
              const TPML_PCR_SELECTION *pcrSelectionIn,
              UINT32 *pcrUpdateCounter,
              TPML_PCR_SELECTION **pcrSelectionOut,
              TPML_DIGEST **pcrValues);

TSS2_RC
Esys_PCR_Read_Async(ESYS_CONTEXT *esysContext,
                    ESYS_TR shandle1,
                    ESYS_TR shandle2,
                    ESYS_TR shandle3,
                    const TPML_PCR_SELECTION *pcrSelectionIn);

TSS2_RC
Esys_PCR_Read_Finish(ESYS_CONTEXT *esysContext,
                     UINT32 *pcrUpdateCounter,
                     TPML_PCR_SELECTION **pcrSelectionOut,
                     TPML_DIGEST **pcrValues);



TSS2_RC
Esys_PCR_Allocate(ESYS_CONTEXT *esysContext,
                  ESYS_TR authHandle,
                  ESYS_TR shandle1,
                  ESYS_TR shandle2,
                  ESYS_TR shandle3,
                  const TPML_PCR_SELECTION *pcrAllocation,
                  TPMI_YES_NO *allocationSuccess,
                  UINT32 *maxPCR,
                  UINT32 *sizeNeeded,
                  UINT32 *sizeAvailable);

TSS2_RC
Esys_PCR_Allocate_Async(ESYS_CONTEXT *esysContext,
                        ESYS_TR authHandle,
                        ESYS_TR shandle1,
                        ESYS_TR shandle2,
                        ESYS_TR shandle3,
                        const TPML_PCR_SELECTION *pcrAllocation);

TSS2_RC
Esys_PCR_Allocate_Finish(ESYS_CONTEXT *esysContext,
                         TPMI_YES_NO *allocationSuccess,
                         UINT32 *maxPCR,
                         UINT32 *sizeNeeded,
                         UINT32 *sizeAvailable);



TSS2_RC
Esys_PCR_SetAuthPolicy(ESYS_CONTEXT *esysContext,
                       ESYS_TR authHandle,
                       ESYS_TR shandle1,
                       ESYS_TR shandle2,
                       ESYS_TR shandle3,
                       const TPM2B_DIGEST *authPolicy,
                       TPMI_ALG_HASH hashAlg,
                       TPMI_DH_PCR pcrNum);

TSS2_RC
Esys_PCR_SetAuthPolicy_Async(ESYS_CONTEXT *esysContext,
                             ESYS_TR authHandle,
                             ESYS_TR shandle1,
                             ESYS_TR shandle2,
                             ESYS_TR shandle3,
                             const TPM2B_DIGEST *authPolicy,
                             TPMI_ALG_HASH hashAlg,
                             TPMI_DH_PCR pcrNum);

TSS2_RC
Esys_PCR_SetAuthPolicy_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_PCR_SetAuthValue(ESYS_CONTEXT *esysContext,
                      ESYS_TR pcrHandle,
                      ESYS_TR shandle1,
                      ESYS_TR shandle2,
                      ESYS_TR shandle3,
                      const TPM2B_DIGEST *auth);

TSS2_RC
Esys_PCR_SetAuthValue_Async(ESYS_CONTEXT *esysContext,
                            ESYS_TR pcrHandle,
                            ESYS_TR shandle1,
                            ESYS_TR shandle2,
                            ESYS_TR shandle3,
                            const TPM2B_DIGEST *auth);

TSS2_RC
Esys_PCR_SetAuthValue_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_PCR_Reset(ESYS_CONTEXT *esysContext,
               ESYS_TR pcrHandle,
               ESYS_TR shandle1,
               ESYS_TR shandle2,
               ESYS_TR shandle3);

TSS2_RC
Esys_PCR_Reset_Async(ESYS_CONTEXT *esysContext,
                     ESYS_TR pcrHandle,
                     ESYS_TR shandle1,
                     ESYS_TR shandle2,
                     ESYS_TR shandle3);

TSS2_RC
Esys_PCR_Reset_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_PolicySigned(ESYS_CONTEXT *esysContext,
                  ESYS_TR authObject,
                  ESYS_TR policySession,
                  ESYS_TR shandle1,
                  ESYS_TR shandle2,
                  ESYS_TR shandle3,
                  const TPM2B_NONCE *nonceTPM,
                  const TPM2B_DIGEST *cpHashA,
                  const TPM2B_NONCE *policyRef,
                  INT32 expiration,
                  const TPMT_SIGNATURE *auth,
                  TPM2B_TIMEOUT **timeout,
                  TPMT_TK_AUTH **policyTicket);

TSS2_RC
Esys_PolicySigned_Async(ESYS_CONTEXT *esysContext,
                        ESYS_TR authObject,
                        ESYS_TR policySession,
                        ESYS_TR shandle1,
                        ESYS_TR shandle2,
                        ESYS_TR shandle3,
                        const TPM2B_NONCE *nonceTPM,
                        const TPM2B_DIGEST *cpHashA,
                        const TPM2B_NONCE *policyRef,
                        INT32 expiration,
                        const TPMT_SIGNATURE *auth);

TSS2_RC
Esys_PolicySigned_Finish(ESYS_CONTEXT *esysContext,
                         TPM2B_TIMEOUT **timeout,
                         TPMT_TK_AUTH **policyTicket);



TSS2_RC
Esys_PolicySecret(ESYS_CONTEXT *esysContext,
                  ESYS_TR authHandle,
                  ESYS_TR policySession,
                  ESYS_TR shandle1,
                  ESYS_TR shandle2,
                  ESYS_TR shandle3,
                  const TPM2B_NONCE *nonceTPM,
                  const TPM2B_DIGEST *cpHashA,
                  const TPM2B_NONCE *policyRef,
                  INT32 expiration,
                  TPM2B_TIMEOUT **timeout,
                  TPMT_TK_AUTH **policyTicket);

TSS2_RC
Esys_PolicySecret_Async(ESYS_CONTEXT *esysContext,
                        ESYS_TR authHandle,
                        ESYS_TR policySession,
                        ESYS_TR shandle1,
                        ESYS_TR shandle2,
                        ESYS_TR shandle3,
                        const TPM2B_NONCE *nonceTPM,
                        const TPM2B_DIGEST *cpHashA,
                        const TPM2B_NONCE *policyRef,
                        INT32 expiration);

TSS2_RC
Esys_PolicySecret_Finish(ESYS_CONTEXT *esysContext,
                         TPM2B_TIMEOUT **timeout,
                         TPMT_TK_AUTH **policyTicket);



TSS2_RC
Esys_PolicyTicket(ESYS_CONTEXT *esysContext,
                  ESYS_TR policySession,
                  ESYS_TR shandle1,
                  ESYS_TR shandle2,
                  ESYS_TR shandle3,
                  const TPM2B_TIMEOUT *timeout,
                  const TPM2B_DIGEST *cpHashA,
                  const TPM2B_NONCE *policyRef,
                  const TPM2B_NAME *authName,
                  const TPMT_TK_AUTH *ticket);

TSS2_RC
Esys_PolicyTicket_Async(ESYS_CONTEXT *esysContext,
                        ESYS_TR policySession,
                        ESYS_TR shandle1,
                        ESYS_TR shandle2,
                        ESYS_TR shandle3,
                        const TPM2B_TIMEOUT *timeout,
                        const TPM2B_DIGEST *cpHashA,
                        const TPM2B_NONCE *policyRef,
                        const TPM2B_NAME *authName,
                        const TPMT_TK_AUTH *ticket);

TSS2_RC
Esys_PolicyTicket_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_PolicyOR(ESYS_CONTEXT *esysContext,
              ESYS_TR policySession,
              ESYS_TR shandle1,
              ESYS_TR shandle2,
              ESYS_TR shandle3,
              const TPML_DIGEST *pHashList);

TSS2_RC
Esys_PolicyOR_Async(ESYS_CONTEXT *esysContext,
                    ESYS_TR policySession,
                    ESYS_TR shandle1,
                    ESYS_TR shandle2,
                    ESYS_TR shandle3,
                    const TPML_DIGEST *pHashList);

TSS2_RC
Esys_PolicyOR_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_PolicyPCR(ESYS_CONTEXT *esysContext,
               ESYS_TR policySession,
               ESYS_TR shandle1,
               ESYS_TR shandle2,
               ESYS_TR shandle3,
               const TPM2B_DIGEST *pcrDigest,
               const TPML_PCR_SELECTION *pcrs);

TSS2_RC
Esys_PolicyPCR_Async(ESYS_CONTEXT *esysContext,
                     ESYS_TR policySession,
                     ESYS_TR shandle1,
                     ESYS_TR shandle2,
                     ESYS_TR shandle3,
                     const TPM2B_DIGEST *pcrDigest,
                     const TPML_PCR_SELECTION *pcrs);

TSS2_RC
Esys_PolicyPCR_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_PolicyLocality(ESYS_CONTEXT *esysContext,
                    ESYS_TR policySession,
                    ESYS_TR shandle1,
                    ESYS_TR shandle2,
                    ESYS_TR shandle3,
                    TPMA_LOCALITY locality);

TSS2_RC
Esys_PolicyLocality_Async(ESYS_CONTEXT *esysContext,
                          ESYS_TR policySession,
                          ESYS_TR shandle1,
                          ESYS_TR shandle2,
                          ESYS_TR shandle3,
                          TPMA_LOCALITY locality);

TSS2_RC
Esys_PolicyLocality_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_PolicyNV(ESYS_CONTEXT *esysContext,
              ESYS_TR authHandle,
              ESYS_TR nvIndex,
              ESYS_TR policySession,
              ESYS_TR shandle1,
              ESYS_TR shandle2,
              ESYS_TR shandle3,
              const TPM2B_OPERAND *operandB,
              UINT16 offset,
              TPM2_EO operation);

TSS2_RC
Esys_PolicyNV_Async(ESYS_CONTEXT *esysContext,
                    ESYS_TR authHandle,
                    ESYS_TR nvIndex,
                    ESYS_TR policySession,
                    ESYS_TR shandle1,
                    ESYS_TR shandle2,
                    ESYS_TR shandle3,
                    const TPM2B_OPERAND *operandB,
                    UINT16 offset,
                    TPM2_EO operation);

TSS2_RC
Esys_PolicyNV_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_PolicyCounterTimer(ESYS_CONTEXT *esysContext,
                        ESYS_TR policySession,
                        ESYS_TR shandle1,
                        ESYS_TR shandle2,
                        ESYS_TR shandle3,
                        const TPM2B_OPERAND *operandB,
                        UINT16 offset,
                        TPM2_EO operation);

TSS2_RC
Esys_PolicyCounterTimer_Async(ESYS_CONTEXT *esysContext,
                              ESYS_TR policySession,
                              ESYS_TR shandle1,
                              ESYS_TR shandle2,
                              ESYS_TR shandle3,
                              const TPM2B_OPERAND *operandB,
                              UINT16 offset,
                              TPM2_EO operation);

TSS2_RC
Esys_PolicyCounterTimer_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_PolicyCommandCode(ESYS_CONTEXT *esysContext,
                       ESYS_TR policySession,
                       ESYS_TR shandle1,
                       ESYS_TR shandle2,
                       ESYS_TR shandle3,
                       TPM2_CC code);

TSS2_RC
Esys_PolicyCommandCode_Async(ESYS_CONTEXT *esysContext,
                             ESYS_TR policySession,
                             ESYS_TR shandle1,
                             ESYS_TR shandle2,
                             ESYS_TR shandle3,
                             TPM2_CC code);

TSS2_RC
Esys_PolicyCommandCode_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_PolicyPhysicalPresence(ESYS_CONTEXT *esysContext,
                            ESYS_TR policySession,
                            ESYS_TR shandle1,
                            ESYS_TR shandle2,
                            ESYS_TR shandle3);

TSS2_RC
Esys_PolicyPhysicalPresence_Async(ESYS_CONTEXT *esysContext,
                                  ESYS_TR policySession,
                                  ESYS_TR shandle1,
                                  ESYS_TR shandle2,
                                  ESYS_TR shandle3);

TSS2_RC
Esys_PolicyPhysicalPresence_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_PolicyCpHash(ESYS_CONTEXT *esysContext,
                  ESYS_TR policySession,
                  ESYS_TR shandle1,
                  ESYS_TR shandle2,
                  ESYS_TR shandle3,
                  const TPM2B_DIGEST *cpHashA);

TSS2_RC
Esys_PolicyCpHash_Async(ESYS_CONTEXT *esysContext,
                        ESYS_TR policySession,
                        ESYS_TR shandle1,
                        ESYS_TR shandle2,
                        ESYS_TR shandle3,
                        const TPM2B_DIGEST *cpHashA);

TSS2_RC
Esys_PolicyCpHash_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_PolicyNameHash(ESYS_CONTEXT *esysContext,
                    ESYS_TR policySession,
                    ESYS_TR shandle1,
                    ESYS_TR shandle2,
                    ESYS_TR shandle3,
                    const TPM2B_DIGEST *nameHash);

TSS2_RC
Esys_PolicyNameHash_Async(ESYS_CONTEXT *esysContext,
                          ESYS_TR policySession,
                          ESYS_TR shandle1,
                          ESYS_TR shandle2,
                          ESYS_TR shandle3,
                          const TPM2B_DIGEST *nameHash);

TSS2_RC
Esys_PolicyNameHash_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_PolicyDuplicationSelect(ESYS_CONTEXT *esysContext,
                             ESYS_TR policySession,
                             ESYS_TR shandle1,
                             ESYS_TR shandle2,
                             ESYS_TR shandle3,
                             const TPM2B_NAME *objectName,
                             const TPM2B_NAME *newParentName,
                             TPMI_YES_NO includeObject);

TSS2_RC
Esys_PolicyDuplicationSelect_Async(ESYS_CONTEXT *esysContext,
                                   ESYS_TR policySession,
                                   ESYS_TR shandle1,
                                   ESYS_TR shandle2,
                                   ESYS_TR shandle3,
                                   const TPM2B_NAME *objectName,
                                   const TPM2B_NAME *newParentName,
                                   TPMI_YES_NO includeObject);

TSS2_RC
Esys_PolicyDuplicationSelect_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_PolicyAuthorize(ESYS_CONTEXT *esysContext,
                     ESYS_TR policySession,
                     ESYS_TR shandle1,
                     ESYS_TR shandle2,
                     ESYS_TR shandle3,
                     const TPM2B_DIGEST *approvedPolicy,
                     const TPM2B_NONCE *policyRef,
                     const TPM2B_NAME *keySign,
                     const TPMT_TK_VERIFIED *checkTicket);

TSS2_RC
Esys_PolicyAuthorize_Async(ESYS_CONTEXT *esysContext,
                           ESYS_TR policySession,
                           ESYS_TR shandle1,
                           ESYS_TR shandle2,
                           ESYS_TR shandle3,
                           const TPM2B_DIGEST *approvedPolicy,
                           const TPM2B_NONCE *policyRef,
                           const TPM2B_NAME *keySign,
                           const TPMT_TK_VERIFIED *checkTicket);

TSS2_RC
Esys_PolicyAuthorize_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_PolicyAuthValue(ESYS_CONTEXT *esysContext,
                     ESYS_TR policySession,
                     ESYS_TR shandle1,
                     ESYS_TR shandle2,
                     ESYS_TR shandle3);

TSS2_RC
Esys_PolicyAuthValue_Async(ESYS_CONTEXT *esysContext,
                           ESYS_TR policySession,
                           ESYS_TR shandle1,
                           ESYS_TR shandle2,
                           ESYS_TR shandle3);

TSS2_RC
Esys_PolicyAuthValue_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_PolicyPassword(ESYS_CONTEXT *esysContext,
                    ESYS_TR policySession,
                    ESYS_TR shandle1,
                    ESYS_TR shandle2,
                    ESYS_TR shandle3);

TSS2_RC
Esys_PolicyPassword_Async(ESYS_CONTEXT *esysContext,
                          ESYS_TR policySession,
                          ESYS_TR shandle1,
                          ESYS_TR shandle2,
                          ESYS_TR shandle3);

TSS2_RC
Esys_PolicyPassword_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_PolicyGetDigest(ESYS_CONTEXT *esysContext,
                     ESYS_TR policySession,
                     ESYS_TR shandle1,
                     ESYS_TR shandle2,
                     ESYS_TR shandle3,
                     TPM2B_DIGEST **policyDigest);

TSS2_RC
Esys_PolicyGetDigest_Async(ESYS_CONTEXT *esysContext,
                           ESYS_TR policySession,
                           ESYS_TR shandle1,
                           ESYS_TR shandle2,
                           ESYS_TR shandle3);

TSS2_RC
Esys_PolicyGetDigest_Finish(ESYS_CONTEXT *esysContext, TPM2B_DIGEST **policyDigest);



TSS2_RC
Esys_PolicyNvWritten(ESYS_CONTEXT *esysContext,
                     ESYS_TR policySession,
                     ESYS_TR shandle1,
                     ESYS_TR shandle2,
                     ESYS_TR shandle3,
                     TPMI_YES_NO writtenSet);

TSS2_RC
Esys_PolicyNvWritten_Async(ESYS_CONTEXT *esysContext,
                           ESYS_TR policySession,
                           ESYS_TR shandle1,
                           ESYS_TR shandle2,
                           ESYS_TR shandle3,
                           TPMI_YES_NO writtenSet);

TSS2_RC
Esys_PolicyNvWritten_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_PolicyTemplate(ESYS_CONTEXT *esysContext,
                    ESYS_TR policySession,
                    ESYS_TR shandle1,
                    ESYS_TR shandle2,
                    ESYS_TR shandle3,
                    const TPM2B_DIGEST *templateHash);

TSS2_RC
Esys_PolicyTemplate_Async(ESYS_CONTEXT *esysContext,
                          ESYS_TR policySession,
                          ESYS_TR shandle1,
                          ESYS_TR shandle2,
                          ESYS_TR shandle3,
                          const TPM2B_DIGEST *templateHash);

TSS2_RC
Esys_PolicyTemplate_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_PolicyAuthorizeNV(ESYS_CONTEXT *esysContext,
                       ESYS_TR authHandle,
                       ESYS_TR nvIndex,
                       ESYS_TR policySession,
                       ESYS_TR shandle1,
                       ESYS_TR shandle2,
                       ESYS_TR shandle3);

TSS2_RC
Esys_PolicyAuthorizeNV_Async(ESYS_CONTEXT *esysContext,
                             ESYS_TR authHandle,
                             ESYS_TR nvIndex,
                             ESYS_TR policySession,
                             ESYS_TR shandle1,
                             ESYS_TR shandle2,
                             ESYS_TR shandle3);

TSS2_RC
Esys_PolicyAuthorizeNV_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_CreatePrimary(ESYS_CONTEXT *esysContext,
                   ESYS_TR primaryHandle,
                   ESYS_TR shandle1,
                   ESYS_TR shandle2,
                   ESYS_TR shandle3,
                   const TPM2B_SENSITIVE_CREATE *inSensitive,
                   const TPM2B_PUBLIC *inPublic,
                   const TPM2B_DATA *outsideInfo,
                   const TPML_PCR_SELECTION *creationPCR,
                   ESYS_TR *objectHandle,
                   TPM2B_PUBLIC **outPublic,
                   TPM2B_CREATION_DATA **creationData,
                   TPM2B_DIGEST **creationHash,
                   TPMT_TK_CREATION **creationTicket);

TSS2_RC
Esys_CreatePrimary_Async(ESYS_CONTEXT *esysContext,
                         ESYS_TR primaryHandle,
                         ESYS_TR shandle1,
                         ESYS_TR shandle2,
                         ESYS_TR shandle3,
                         const TPM2B_SENSITIVE_CREATE *inSensitive,
                         const TPM2B_PUBLIC *inPublic,
                         const TPM2B_DATA *outsideInfo,
                         const TPML_PCR_SELECTION *creationPCR);

TSS2_RC
Esys_CreatePrimary_Finish(ESYS_CONTEXT *esysContext,
                          ESYS_TR *objectHandle,
                          TPM2B_PUBLIC **outPublic,
                          TPM2B_CREATION_DATA **creationData,
                          TPM2B_DIGEST **creationHash,
                          TPMT_TK_CREATION **creationTicket);



TSS2_RC
Esys_HierarchyControl(ESYS_CONTEXT *esysContext,
                      ESYS_TR authHandle,
                      ESYS_TR shandle1,
                      ESYS_TR shandle2,
                      ESYS_TR shandle3,
                      ESYS_TR enable,
                      TPMI_YES_NO state);

TSS2_RC
Esys_HierarchyControl_Async(ESYS_CONTEXT *esysContext,
                            ESYS_TR authHandle,
                            ESYS_TR shandle1,
                            ESYS_TR shandle2,
                            ESYS_TR shandle3,
                            ESYS_TR enable,
                            TPMI_YES_NO state);

TSS2_RC
Esys_HierarchyControl_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_SetPrimaryPolicy(ESYS_CONTEXT *esysContext,
                      ESYS_TR authHandle,
                      ESYS_TR shandle1,
                      ESYS_TR shandle2,
                      ESYS_TR shandle3,
                      const TPM2B_DIGEST *authPolicy,
                      TPMI_ALG_HASH hashAlg);

TSS2_RC
Esys_SetPrimaryPolicy_Async(ESYS_CONTEXT *esysContext,
                            ESYS_TR authHandle,
                            ESYS_TR shandle1,
                            ESYS_TR shandle2,
                            ESYS_TR shandle3,
                            const TPM2B_DIGEST *authPolicy,
                            TPMI_ALG_HASH hashAlg);

TSS2_RC
Esys_SetPrimaryPolicy_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_ChangePPS(ESYS_CONTEXT *esysContext,
               ESYS_TR authHandle,
               ESYS_TR shandle1,
               ESYS_TR shandle2,
               ESYS_TR shandle3);

TSS2_RC
Esys_ChangePPS_Async(ESYS_CONTEXT *esysContext,
                     ESYS_TR authHandle,
                     ESYS_TR shandle1,
                     ESYS_TR shandle2,
                     ESYS_TR shandle3);

TSS2_RC
Esys_ChangePPS_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_ChangeEPS(ESYS_CONTEXT *esysContext,
               ESYS_TR authHandle,
               ESYS_TR shandle1,
               ESYS_TR shandle2,
               ESYS_TR shandle3);

TSS2_RC
Esys_ChangeEPS_Async(ESYS_CONTEXT *esysContext,
                     ESYS_TR authHandle,
                     ESYS_TR shandle1,
                     ESYS_TR shandle2,
                     ESYS_TR shandle3);

TSS2_RC
Esys_ChangeEPS_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_Clear(ESYS_CONTEXT *esysContext,
           ESYS_TR authHandle,
           ESYS_TR shandle1,
           ESYS_TR shandle2,
           ESYS_TR shandle3);

TSS2_RC
Esys_Clear_Async(ESYS_CONTEXT *esysContext,
                 ESYS_TR authHandle,
                 ESYS_TR shandle1,
                 ESYS_TR shandle2,
                 ESYS_TR shandle3);

TSS2_RC
Esys_Clear_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_ClearControl(ESYS_CONTEXT *esysContext,
                  ESYS_TR auth,
                  ESYS_TR shandle1,
                  ESYS_TR shandle2,
                  ESYS_TR shandle3,
                  TPMI_YES_NO disable);

TSS2_RC
Esys_ClearControl_Async(ESYS_CONTEXT *esysContext,
                        ESYS_TR auth,
                        ESYS_TR shandle1,
                        ESYS_TR shandle2,
                        ESYS_TR shandle3,
                        TPMI_YES_NO disable);

TSS2_RC
Esys_ClearControl_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_HierarchyChangeAuth(ESYS_CONTEXT *esysContext,
                         ESYS_TR authHandle,
                         ESYS_TR shandle1,
                         ESYS_TR shandle2,
                         ESYS_TR shandle3,
                         const TPM2B_AUTH *newAuth);

TSS2_RC
Esys_HierarchyChangeAuth_Async(ESYS_CONTEXT *esysContext,
                               ESYS_TR authHandle,
                               ESYS_TR shandle1,
                               ESYS_TR shandle2,
                               ESYS_TR shandle3,
                               const TPM2B_AUTH *newAuth);

TSS2_RC
Esys_HierarchyChangeAuth_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_DictionaryAttackLockReset(ESYS_CONTEXT *esysContext,
                               ESYS_TR lockHandle,
                               ESYS_TR shandle1,
                               ESYS_TR shandle2,
                               ESYS_TR shandle3);

TSS2_RC
Esys_DictionaryAttackLockReset_Async(ESYS_CONTEXT *esysContext,
                                     ESYS_TR lockHandle,
                                     ESYS_TR shandle1,
                                     ESYS_TR shandle2,
                                     ESYS_TR shandle3);

TSS2_RC
Esys_DictionaryAttackLockReset_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_DictionaryAttackParameters(ESYS_CONTEXT *esysContext,
                                ESYS_TR lockHandle,
                                ESYS_TR shandle1,
                                ESYS_TR shandle2,
                                ESYS_TR shandle3,
                                UINT32 newMaxTries,
                                UINT32 newRecoveryTime,
                                UINT32 lockoutRecovery);

TSS2_RC
Esys_DictionaryAttackParameters_Async(ESYS_CONTEXT *esysContext,
                                      ESYS_TR lockHandle,
                                      ESYS_TR shandle1,
                                      ESYS_TR shandle2,
                                      ESYS_TR shandle3,
                                      UINT32 newMaxTries,
                                      UINT32 newRecoveryTime,
                                      UINT32 lockoutRecovery);

TSS2_RC
Esys_DictionaryAttackParameters_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_PP_Commands(ESYS_CONTEXT *esysContext,
                 ESYS_TR auth,
                 ESYS_TR shandle1,
                 ESYS_TR shandle2,
                 ESYS_TR shandle3,
                 const TPML_CC *setList,
                 const TPML_CC *clearList);

TSS2_RC
Esys_PP_Commands_Async(ESYS_CONTEXT *esysContext,
                       ESYS_TR auth,
                       ESYS_TR shandle1,
                       ESYS_TR shandle2,
                       ESYS_TR shandle3,
                       const TPML_CC *setList,
                       const TPML_CC *clearList);

TSS2_RC
Esys_PP_Commands_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_SetAlgorithmSet(ESYS_CONTEXT *esysContext,
                     ESYS_TR authHandle,
                     ESYS_TR shandle1,
                     ESYS_TR shandle2,
                     ESYS_TR shandle3,
                     UINT32 algorithmSet);

TSS2_RC
Esys_SetAlgorithmSet_Async(ESYS_CONTEXT *esysContext,
                           ESYS_TR authHandle,
                           ESYS_TR shandle1,
                           ESYS_TR shandle2,
                           ESYS_TR shandle3,
                           UINT32 algorithmSet);

TSS2_RC
Esys_SetAlgorithmSet_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_FieldUpgradeStart(ESYS_CONTEXT *esysContext,
                       ESYS_TR authorization,
                       ESYS_TR keyHandle,
                       ESYS_TR shandle1,
                       ESYS_TR shandle2,
                       ESYS_TR shandle3,
                       const TPM2B_DIGEST *fuDigest,
                       const TPMT_SIGNATURE *manifestSignature);

TSS2_RC
Esys_FieldUpgradeStart_Async(ESYS_CONTEXT *esysContext,
                             ESYS_TR authorization,
                             ESYS_TR keyHandle,
                             ESYS_TR shandle1,
                             ESYS_TR shandle2,
                             ESYS_TR shandle3,
                             const TPM2B_DIGEST *fuDigest,
                             const TPMT_SIGNATURE *manifestSignature);

TSS2_RC
Esys_FieldUpgradeStart_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_FieldUpgradeData(ESYS_CONTEXT *esysContext,
                      ESYS_TR shandle1,
                      ESYS_TR shandle2,
                      ESYS_TR shandle3,
                      const TPM2B_MAX_BUFFER *fuData,
                      TPMT_HA **nextDigest,
                      TPMT_HA **firstDigest);

TSS2_RC
Esys_FieldUpgradeData_Async(ESYS_CONTEXT *esysContext,
                            ESYS_TR shandle1,
                            ESYS_TR shandle2,
                            ESYS_TR shandle3,
                            const TPM2B_MAX_BUFFER *fuData);

TSS2_RC
Esys_FieldUpgradeData_Finish(ESYS_CONTEXT *esysContext,
                             TPMT_HA **nextDigest,
                             TPMT_HA **firstDigest);



TSS2_RC
Esys_FirmwareRead(ESYS_CONTEXT *esysContext,
                  ESYS_TR shandle1,
                  ESYS_TR shandle2,
                  ESYS_TR shandle3,
                  UINT32 sequenceNumber,
                  TPM2B_MAX_BUFFER **fuData);

TSS2_RC
Esys_FirmwareRead_Async(ESYS_CONTEXT *esysContext,
                        ESYS_TR shandle1,
                        ESYS_TR shandle2,
                        ESYS_TR shandle3,
                        UINT32 sequenceNumber);

TSS2_RC
Esys_FirmwareRead_Finish(ESYS_CONTEXT *esysContext, TPM2B_MAX_BUFFER **fuData);



TSS2_RC
Esys_ContextSave(ESYS_CONTEXT *esysContext, ESYS_TR saveHandle, TPMS_CONTEXT **context);

TSS2_RC
Esys_ContextSave_Async(ESYS_CONTEXT *esysContext, ESYS_TR saveHandle);

TSS2_RC
Esys_ContextSave_Finish(ESYS_CONTEXT *esysContext, TPMS_CONTEXT **context);



TSS2_RC
Esys_ContextLoad(ESYS_CONTEXT *esysContext, const TPMS_CONTEXT *context, ESYS_TR *loadedHandle);

TSS2_RC
Esys_ContextLoad_Async(ESYS_CONTEXT *esysContext, const TPMS_CONTEXT *context);

TSS2_RC
Esys_ContextLoad_Finish(ESYS_CONTEXT *esysContext, ESYS_TR *loadedHandle);



TSS2_RC
Esys_FlushContext(ESYS_CONTEXT *esysContext, ESYS_TR flushHandle);

TSS2_RC
Esys_FlushContext_Async(ESYS_CONTEXT *esysContext, ESYS_TR flushHandle);

TSS2_RC
Esys_FlushContext_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_EvictControl(ESYS_CONTEXT *esysContext,
                  ESYS_TR auth,
                  ESYS_TR objectHandle,
                  ESYS_TR shandle1,
                  ESYS_TR shandle2,
                  ESYS_TR shandle3,
                  TPMI_DH_PERSISTENT persistentHandle,
                  ESYS_TR *newObjectHandle);

TSS2_RC
Esys_EvictControl_Async(ESYS_CONTEXT *esysContext,
                        ESYS_TR auth,
                        ESYS_TR objectHandle,
                        ESYS_TR shandle1,
                        ESYS_TR shandle2,
                        ESYS_TR shandle3,
                        TPMI_DH_PERSISTENT persistentHandle);

TSS2_RC
Esys_EvictControl_Finish(ESYS_CONTEXT *esysContext, ESYS_TR *newObjectHandle);



TSS2_RC
Esys_ReadClock(ESYS_CONTEXT *esysContext,
               ESYS_TR shandle1,
               ESYS_TR shandle2,
               ESYS_TR shandle3,
               TPMS_TIME_INFO **currentTime);

TSS2_RC
Esys_ReadClock_Async(ESYS_CONTEXT *esysContext,
                     ESYS_TR shandle1,
                     ESYS_TR shandle2,
                     ESYS_TR shandle3);

TSS2_RC
Esys_ReadClock_Finish(ESYS_CONTEXT *esysContext, TPMS_TIME_INFO **currentTime);



TSS2_RC
Esys_ClockSet(ESYS_CONTEXT *esysContext,
              ESYS_TR auth,
              ESYS_TR shandle1,
              ESYS_TR shandle2,
              ESYS_TR shandle3,
              UINT64 newTime);

TSS2_RC
Esys_ClockSet_Async(ESYS_CONTEXT *esysContext,
                    ESYS_TR auth,
                    ESYS_TR shandle1,
                    ESYS_TR shandle2,
                    ESYS_TR shandle3,
                    UINT64 newTime);

TSS2_RC
Esys_ClockSet_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_ClockRateAdjust(ESYS_CONTEXT *esysContext,
                     ESYS_TR auth,
                     ESYS_TR shandle1,
                     ESYS_TR shandle2,
                     ESYS_TR shandle3,
                     TPM2_CLOCK_ADJUST rateAdjust);

TSS2_RC
Esys_ClockRateAdjust_Async(ESYS_CONTEXT *esysContext,
                           ESYS_TR auth,
                           ESYS_TR shandle1,
                           ESYS_TR shandle2,
                           ESYS_TR shandle3,
                           TPM2_CLOCK_ADJUST rateAdjust);

TSS2_RC
Esys_ClockRateAdjust_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_GetCapability(ESYS_CONTEXT *esysContext,
                   ESYS_TR shandle1,
                   ESYS_TR shandle2,
                   ESYS_TR shandle3,
                   TPM2_CAP capability,
                   UINT32 property,
                   UINT32 propertyCount,
                   TPMI_YES_NO *moreData,
                   TPMS_CAPABILITY_DATA **capabilityData);

TSS2_RC
Esys_GetCapability_Async(ESYS_CONTEXT *esysContext,
                         ESYS_TR shandle1,
                         ESYS_TR shandle2,
                         ESYS_TR shandle3,
                         TPM2_CAP capability,
                         UINT32 property,
                         UINT32 propertyCount);

TSS2_RC
Esys_GetCapability_Finish(ESYS_CONTEXT *esysContext,
                          TPMI_YES_NO *moreData,
                          TPMS_CAPABILITY_DATA **capabilityData);



TSS2_RC
Esys_TestParms(ESYS_CONTEXT *esysContext,
               ESYS_TR shandle1,
               ESYS_TR shandle2,
               ESYS_TR shandle3,
               const TPMT_PUBLIC_PARMS *parameters);

TSS2_RC
Esys_TestParms_Async(ESYS_CONTEXT *esysContext,
                     ESYS_TR shandle1,
                     ESYS_TR shandle2,
                     ESYS_TR shandle3,
                     const TPMT_PUBLIC_PARMS *parameters);

TSS2_RC
Esys_TestParms_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_NV_DefineSpace(ESYS_CONTEXT *esysContext,
                    ESYS_TR authHandle,
                    ESYS_TR shandle1,
                    ESYS_TR shandle2,
                    ESYS_TR shandle3,
                    const TPM2B_AUTH *auth,
                    const TPM2B_NV_PUBLIC *publicInfo,
                    ESYS_TR *nvHandle);

TSS2_RC
Esys_NV_DefineSpace_Async(ESYS_CONTEXT *esysContext,
                          ESYS_TR authHandle,
                          ESYS_TR shandle1,
                          ESYS_TR shandle2,
                          ESYS_TR shandle3,
                          const TPM2B_AUTH *auth,
                          const TPM2B_NV_PUBLIC *publicInfo);

TSS2_RC
Esys_NV_DefineSpace_Finish(ESYS_CONTEXT *esysContext, ESYS_TR *nvHandle);



TSS2_RC
Esys_NV_UndefineSpace(ESYS_CONTEXT *esysContext,
                      ESYS_TR authHandle,
                      ESYS_TR nvIndex,
                      ESYS_TR shandle1,
                      ESYS_TR shandle2,
                      ESYS_TR shandle3);

TSS2_RC
Esys_NV_UndefineSpace_Async(ESYS_CONTEXT *esysContext,
                            ESYS_TR authHandle,
                            ESYS_TR nvIndex,
                            ESYS_TR shandle1,
                            ESYS_TR shandle2,
                            ESYS_TR shandle3);

TSS2_RC
Esys_NV_UndefineSpace_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_NV_UndefineSpaceSpecial(ESYS_CONTEXT *esysContext,
                             ESYS_TR nvIndex,
                             ESYS_TR platform,
                             ESYS_TR shandle1,
                             ESYS_TR shandle2,
                             ESYS_TR shandle3);

TSS2_RC
Esys_NV_UndefineSpaceSpecial_Async(ESYS_CONTEXT *esysContext,
                                   ESYS_TR nvIndex,
                                   ESYS_TR platform,
                                   ESYS_TR shandle1,
                                   ESYS_TR shandle2,
                                   ESYS_TR shandle3);

TSS2_RC
Esys_NV_UndefineSpaceSpecial_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_NV_ReadPublic(ESYS_CONTEXT *esysContext,
                   ESYS_TR nvIndex,
                   ESYS_TR shandle1,
                   ESYS_TR shandle2,
                   ESYS_TR shandle3,
                   TPM2B_NV_PUBLIC **nvPublic,
                   TPM2B_NAME **nvName);

TSS2_RC
Esys_NV_ReadPublic_Async(ESYS_CONTEXT *esysContext,
                         ESYS_TR nvIndex,
                         ESYS_TR shandle1,
                         ESYS_TR shandle2,
                         ESYS_TR shandle3);

TSS2_RC
Esys_NV_ReadPublic_Finish(ESYS_CONTEXT *esysContext,
                          TPM2B_NV_PUBLIC **nvPublic,
                          TPM2B_NAME **nvName);



TSS2_RC
Esys_NV_Write(ESYS_CONTEXT *esysContext,
              ESYS_TR authHandle,
              ESYS_TR nvIndex,
              ESYS_TR shandle1,
              ESYS_TR shandle2,
              ESYS_TR shandle3,
              const TPM2B_MAX_NV_BUFFER *data,
              UINT16 offset);

TSS2_RC
Esys_NV_Write_Async(ESYS_CONTEXT *esysContext,
                    ESYS_TR authHandle,
                    ESYS_TR nvIndex,
                    ESYS_TR shandle1,
                    ESYS_TR shandle2,
                    ESYS_TR shandle3,
                    const TPM2B_MAX_NV_BUFFER *data,
                    UINT16 offset);

TSS2_RC
Esys_NV_Write_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_NV_Increment(ESYS_CONTEXT *esysContext,
                  ESYS_TR authHandle,
                  ESYS_TR nvIndex,
                  ESYS_TR shandle1,
                  ESYS_TR shandle2,
                  ESYS_TR shandle3);

TSS2_RC
Esys_NV_Increment_Async(ESYS_CONTEXT *esysContext,
                        ESYS_TR authHandle,
                        ESYS_TR nvIndex,
                        ESYS_TR shandle1,
                        ESYS_TR shandle2,
                        ESYS_TR shandle3);

TSS2_RC
Esys_NV_Increment_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_NV_Extend(ESYS_CONTEXT *esysContext,
               ESYS_TR authHandle,
               ESYS_TR nvIndex,
               ESYS_TR shandle1,
               ESYS_TR shandle2,
               ESYS_TR shandle3,
               const TPM2B_MAX_NV_BUFFER *data);

TSS2_RC
Esys_NV_Extend_Async(ESYS_CONTEXT *esysContext,
                     ESYS_TR authHandle,
                     ESYS_TR nvIndex,
                     ESYS_TR shandle1,
                     ESYS_TR shandle2,
                     ESYS_TR shandle3,
                     const TPM2B_MAX_NV_BUFFER *data);

TSS2_RC
Esys_NV_Extend_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_NV_SetBits(ESYS_CONTEXT *esysContext,
                ESYS_TR authHandle,
                ESYS_TR nvIndex,
                ESYS_TR shandle1,
                ESYS_TR shandle2,
                ESYS_TR shandle3,
                UINT64 bits);

TSS2_RC
Esys_NV_SetBits_Async(ESYS_CONTEXT *esysContext,
                      ESYS_TR authHandle,
                      ESYS_TR nvIndex,
                      ESYS_TR shandle1,
                      ESYS_TR shandle2,
                      ESYS_TR shandle3,
                      UINT64 bits);

TSS2_RC
Esys_NV_SetBits_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_NV_WriteLock(ESYS_CONTEXT *esysContext,
                  ESYS_TR authHandle,
                  ESYS_TR nvIndex,
                  ESYS_TR shandle1,
                  ESYS_TR shandle2,
                  ESYS_TR shandle3);

TSS2_RC
Esys_NV_WriteLock_Async(ESYS_CONTEXT *esysContext,
                        ESYS_TR authHandle,
                        ESYS_TR nvIndex,
                        ESYS_TR shandle1,
                        ESYS_TR shandle2,
                        ESYS_TR shandle3);

TSS2_RC
Esys_NV_WriteLock_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_NV_GlobalWriteLock(ESYS_CONTEXT *esysContext,
                        ESYS_TR authHandle,
                        ESYS_TR shandle1,
                        ESYS_TR shandle2,
                        ESYS_TR shandle3);

TSS2_RC
Esys_NV_GlobalWriteLock_Async(ESYS_CONTEXT *esysContext,
                              ESYS_TR authHandle,
                              ESYS_TR shandle1,
                              ESYS_TR shandle2,
                              ESYS_TR shandle3);

TSS2_RC
Esys_NV_GlobalWriteLock_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_NV_Read(ESYS_CONTEXT *esysContext,
             ESYS_TR authHandle,
             ESYS_TR nvIndex,
             ESYS_TR shandle1,
             ESYS_TR shandle2,
             ESYS_TR shandle3,
             UINT16 size,
             UINT16 offset,
             TPM2B_MAX_NV_BUFFER **data);

TSS2_RC
Esys_NV_Read_Async(ESYS_CONTEXT *esysContext,
                   ESYS_TR authHandle,
                   ESYS_TR nvIndex,
                   ESYS_TR shandle1,
                   ESYS_TR shandle2,
                   ESYS_TR shandle3,
                   UINT16 size,
                   UINT16 offset);

TSS2_RC
Esys_NV_Read_Finish(ESYS_CONTEXT *esysContext, TPM2B_MAX_NV_BUFFER **data);



TSS2_RC
Esys_NV_ReadLock(ESYS_CONTEXT *esysContext,
                 ESYS_TR authHandle,
                 ESYS_TR nvIndex,
                 ESYS_TR shandle1,
                 ESYS_TR shandle2,
                 ESYS_TR shandle3);

TSS2_RC
Esys_NV_ReadLock_Async(ESYS_CONTEXT *esysContext,
                       ESYS_TR authHandle,
                       ESYS_TR nvIndex,
                       ESYS_TR shandle1,
                       ESYS_TR shandle2,
                       ESYS_TR shandle3);

TSS2_RC
Esys_NV_ReadLock_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_NV_ChangeAuth(ESYS_CONTEXT *esysContext,
                   ESYS_TR nvIndex,
                   ESYS_TR shandle1,
                   ESYS_TR shandle2,
                   ESYS_TR shandle3,
                   const TPM2B_AUTH *newAuth);

TSS2_RC
Esys_NV_ChangeAuth_Async(ESYS_CONTEXT *esysContext,
                         ESYS_TR nvIndex,
                         ESYS_TR shandle1,
                         ESYS_TR shandle2,
                         ESYS_TR shandle3,
                         const TPM2B_AUTH *newAuth);

TSS2_RC
Esys_NV_ChangeAuth_Finish(ESYS_CONTEXT *esysContext);



TSS2_RC
Esys_NV_Certify(ESYS_CONTEXT *esysContext,
                ESYS_TR signHandle,
                ESYS_TR authHandle,
                ESYS_TR nvIndex,
                ESYS_TR shandle1,
                ESYS_TR shandle2,
                ESYS_TR shandle3,
                const TPM2B_DATA *qualifyingData,
                const TPMT_SIG_SCHEME *inScheme,
                UINT16 size,
                UINT16 offset,
                TPM2B_ATTEST **certifyInfo,
                TPMT_SIGNATURE **signature);

TSS2_RC
Esys_NV_Certify_Async(ESYS_CONTEXT *esysContext,
                      ESYS_TR signHandle,
                      ESYS_TR authHandle,
                      ESYS_TR nvIndex,
                      ESYS_TR shandle1,
                      ESYS_TR shandle2,
                      ESYS_TR shandle3,
                      const TPM2B_DATA *qualifyingData,
                      const TPMT_SIG_SCHEME *inScheme,
                      UINT16 size,
                      UINT16 offset);

TSS2_RC
Esys_NV_Certify_Finish(ESYS_CONTEXT *esysContext,
                       TPM2B_ATTEST **certifyInfo,
                       TPMT_SIGNATURE **signature);



TSS2_RC
Esys_Vendor_TCG_Test(ESYS_CONTEXT *esysContext,
                     ESYS_TR shandle1,
                     ESYS_TR shandle2,
                     ESYS_TR shandle3,
                     const TPM2B_DATA *inputData,
                     TPM2B_DATA **outputData);

TSS2_RC
Esys_Vendor_TCG_Test_Async(ESYS_CONTEXT *esysContext,
                           ESYS_TR shandle1,
                           ESYS_TR shandle2,
                           ESYS_TR shandle3,
                           const TPM2B_DATA *inputData);

TSS2_RC
Esys_Vendor_TCG_Test_Finish(ESYS_CONTEXT *esysContext, TPM2B_DATA **outputData);




void Esys_Free(void *ptr);

TSS2_RC
Esys_GetSysContext(ESYS_CONTEXT *esys_context, TSS2_SYS_CONTEXT **sys_context);

TSS2_RC
Esys_SetCryptoCallbacks(ESYS_CONTEXT *esysContext, ESYS_CRYPTO_CALLBACKS *callbacks);

TSS2_RC
Esys_GetCpHash(ESYS_CONTEXT *esysContext,
               TPMI_ALG_HASH hashAlg,
               uint8_t **cpHash,
               size_t *cpHash_size);

TSS2_RC
Esys_GetRpHash(ESYS_CONTEXT *esysContext,
               TPMI_ALG_HASH hashAlg,
               uint8_t **cpHash,
               size_t *cpHash_size);



TSS2_RC
Esys_ECC_Encrypt(ESYS_CONTEXT *esysContext,
                 ESYS_TR keyHandle,
                 ESYS_TR shandle1,
                 ESYS_TR shandle2,
                 ESYS_TR shandle3,
                 const TPM2B_MAX_BUFFER *plainText,
                 const TPMT_KDF_SCHEME *inScheme,
                 TPM2B_ECC_POINT **c1,
                 TPM2B_MAX_BUFFER **c2,
                 TPM2B_DIGEST **c3);

TSS2_RC
Esys_ECC_Encrypt_Async(ESYS_CONTEXT *esysContext,
                       ESYS_TR keyHandle,
                       ESYS_TR shandle1,
                       ESYS_TR shandle2,
                       ESYS_TR shandle3,
                       const TPM2B_MAX_BUFFER *plainText,
                       const TPMT_KDF_SCHEME *inScheme);

TSS2_RC
Esys_ECC_Encrypt_Finish(ESYS_CONTEXT *esysContext,
                        TPM2B_ECC_POINT **c1,
                        TPM2B_MAX_BUFFER **c2,
                        TPM2B_DIGEST **c3);



TSS2_RC
Esys_ECC_Decrypt(ESYS_CONTEXT *esysContext,
                 ESYS_TR keyHandle,
                 ESYS_TR shandle1,
                 ESYS_TR shandle2,
                 ESYS_TR shandle3,
                 const TPM2B_ECC_POINT *c1,
                 const TPM2B_MAX_BUFFER *c2,
                 const TPM2B_DIGEST *c3,
                 const TPMT_KDF_SCHEME *inScheme,
                 TPM2B_MAX_BUFFER **plainText);

TSS2_RC
Esys_ECC_Decrypt_Async(ESYS_CONTEXT *esysContext,
                       ESYS_TR keyHandle,
                       ESYS_TR shandle1,
                       ESYS_TR shandle2,
                       ESYS_TR shandle3,
                       const TPM2B_ECC_POINT *c1,
                       const TPM2B_MAX_BUFFER *c2,
                       const TPM2B_DIGEST *c3,
                       const TPMT_KDF_SCHEME *inScheme);

TSS2_RC
Esys_ECC_Decrypt_Finish(ESYS_CONTEXT *esysContext, TPM2B_MAX_BUFFER **plainText);

TSS2_RC
Esys_Abort(ESYS_CONTEXT *esysContext);
# 10 "lib/files.h" 2

# 1 "lib/tool_rc.h" 1






typedef enum tool_rc tool_rc;
enum tool_rc {


    tool_rc_success = 0,
    tool_rc_general_error,
    tool_rc_option_error,
    tool_rc_auth_error,
    tool_rc_tcti_error,
    tool_rc_unsupported
};
# 29 "lib/tool_rc.h"
tool_rc tool_rc_from_tpm(TSS2_RC rc);
# 12 "lib/files.h" 2
# 28 "lib/files.h"

# 28 "lib/files.h" 3 4
_Bool 
# 28 "lib/files.h"
    files_load_bytes_from_path(const char *path, UINT8 *buf, UINT32 *size);
# 43 "lib/files.h"

# 43 "lib/files.h" 3 4
_Bool 
# 43 "lib/files.h"
    file_read_bytes_from_file(FILE *f, UINT8 *buf, UINT32 *size,
        const char *path);
# 59 "lib/files.h"

# 59 "lib/files.h" 3 4
_Bool 
# 59 "lib/files.h"
    files_load_bytes_from_buffer_or_file_or_stdin(const char *input_buffer,
        const char *path, UINT32 *size, BYTE *buf);
# 75 "lib/files.h"

# 75 "lib/files.h" 3 4
_Bool 
# 75 "lib/files.h"
    files_save_bytes_to_file(const char *path, UINT8 *buf, UINT16 size);
# 93 "lib/files.h"
tool_rc files_save_tpm_context_to_path(ESYS_CONTEXT *context, ESYS_TR handle,
        const char *pathm, 
# 94 "lib/files.h" 3 4
                          _Bool 
# 94 "lib/files.h"
                               autoflush);
# 109 "lib/files.h"
tool_rc files_save_tpm_context_to_file(ESYS_CONTEXT *context, ESYS_TR handle,
        FILE *stream, 
# 110 "lib/files.h" 3 4
                     _Bool 
# 110 "lib/files.h"
                          autoflush);
# 123 "lib/files.h"
tool_rc files_load_tpm_context_from_path(ESYS_CONTEXT *context,
        ESYS_TR *tr_handle, const char *path);
# 137 "lib/files.h"
tool_rc files_load_tpm_context_from_file(ESYS_CONTEXT *context,
        ESYS_TR *tr_handle, FILE *stream);
# 151 "lib/files.h"
tool_rc files_save_ESYS_TR(ESYS_CONTEXT *ectx, ESYS_TR handle, const char *path);
# 162 "lib/files.h"

# 162 "lib/files.h" 3 4
_Bool 
# 162 "lib/files.h"
    files_save_public(TPM2B_PUBLIC *public, const char *path);
# 173 "lib/files.h"

# 173 "lib/files.h" 3 4
_Bool 
# 173 "lib/files.h"
    files_save_template(TPMT_PUBLIC *template, const char *path);
# 184 "lib/files.h"

# 184 "lib/files.h" 3 4
_Bool 
# 184 "lib/files.h"
    files_load_template_silent(const char *path, TPMT_PUBLIC *public);
# 195 "lib/files.h"

# 195 "lib/files.h" 3 4
_Bool 
# 195 "lib/files.h"
    files_load_public(const char *path, TPM2B_PUBLIC *public);
# 206 "lib/files.h"

# 206 "lib/files.h" 3 4
_Bool 
# 206 "lib/files.h"
    files_load_public_file(FILE *f, const char *path, TPM2B_PUBLIC *public);


# 208 "lib/files.h" 3 4
_Bool 
# 208 "lib/files.h"
    files_load_template(const char *path, TPMT_PUBLIC *public);


# 210 "lib/files.h" 3 4
_Bool 
# 210 "lib/files.h"
    files_load_template_file(FILE *f, const char *path, TPMT_PUBLIC *public);
# 221 "lib/files.h"

# 221 "lib/files.h" 3 4
_Bool 
# 221 "lib/files.h"
    files_load_public_silent(const char *path, TPM2B_PUBLIC *public);
# 232 "lib/files.h"

# 232 "lib/files.h" 3 4
_Bool 
# 232 "lib/files.h"
    files_save_signature(TPMT_SIGNATURE *signature, const char *path);
# 243 "lib/files.h"

# 243 "lib/files.h" 3 4
_Bool 
# 243 "lib/files.h"
    files_load_signature(const char *path, TPMT_SIGNATURE *signature);
# 255 "lib/files.h"

# 255 "lib/files.h" 3 4
_Bool 
# 255 "lib/files.h"
    files_load_signature_silent(const char *path, TPMT_SIGNATURE *signature);
# 266 "lib/files.h"

# 266 "lib/files.h" 3 4
_Bool 
# 266 "lib/files.h"
    files_save_ticket(TPMT_TK_VERIFIED *ticket, const char *path);
# 277 "lib/files.h"

# 277 "lib/files.h" 3 4
_Bool 
# 277 "lib/files.h"
    files_load_ticket(const char *path, TPMT_TK_VERIFIED *ticket);
# 288 "lib/files.h"

# 288 "lib/files.h" 3 4
_Bool 
# 288 "lib/files.h"
    files_save_authorization_ticket(TPMT_TK_AUTH *authorization_ticket,
    const char *path);
# 301 "lib/files.h"

# 301 "lib/files.h" 3 4
_Bool 
# 301 "lib/files.h"
    files_load_authorization_ticket(const char *path,
    TPMT_TK_AUTH *authorization_ticket);


# 304 "lib/files.h" 3 4
_Bool 
# 304 "lib/files.h"
    files_load_creation_data(const char *path,
    TPM2B_CREATION_DATA *creation_data);


# 307 "lib/files.h" 3 4
_Bool 
# 307 "lib/files.h"
    files_save_creation_data(TPM2B_CREATION_DATA *creation_data,
    const char *path);


# 310 "lib/files.h" 3 4
_Bool 
# 310 "lib/files.h"
    files_load_creation_ticket(const char *path,
    TPMT_TK_CREATION *creation_ticket);


# 313 "lib/files.h" 3 4
_Bool 
# 313 "lib/files.h"
    files_save_creation_ticket(TPMT_TK_CREATION *creation_ticket,
    const char *path);


# 316 "lib/files.h" 3 4
_Bool 
# 316 "lib/files.h"
    files_load_digest(const char *path, TPM2B_DIGEST *digest);


# 318 "lib/files.h" 3 4
_Bool 
# 318 "lib/files.h"
    files_save_digest(TPM2B_DIGEST *digest, const char *path);
# 329 "lib/files.h"

# 329 "lib/files.h" 3 4
_Bool 
# 329 "lib/files.h"
    files_load_sensitive(const char *path, TPM2B_SENSITIVE *sensitive);
# 340 "lib/files.h"

# 340 "lib/files.h" 3 4
_Bool 
# 340 "lib/files.h"
    files_save_sensitive(TPM2B_SENSITIVE *sensitive, const char *path);
# 350 "lib/files.h"

# 350 "lib/files.h" 3 4
_Bool 
# 350 "lib/files.h"
    files_save_validation(TPMT_TK_HASHCHECK *validation, const char *path);
# 361 "lib/files.h"

# 361 "lib/files.h" 3 4
_Bool 
# 361 "lib/files.h"
    files_load_validation(const char *path, TPMT_TK_HASHCHECK *validation);
# 372 "lib/files.h"

# 372 "lib/files.h" 3 4
_Bool 
# 372 "lib/files.h"
    files_save_private(TPM2B_PRIVATE *private, const char *path);
# 383 "lib/files.h"

# 383 "lib/files.h" 3 4
_Bool 
# 383 "lib/files.h"
    files_load_private(const char *path, TPM2B_PRIVATE *private);
# 394 "lib/files.h"

# 394 "lib/files.h" 3 4
_Bool 
# 394 "lib/files.h"
    files_save_encrypted_seed(TPM2B_ENCRYPTED_SECRET *encrypted_seed,
        const char *path);
# 406 "lib/files.h"

# 406 "lib/files.h" 3 4
_Bool 
# 406 "lib/files.h"
    files_save_ecc_point(TPM2B_ECC_POINT *Q, const char *path);
# 415 "lib/files.h"

# 415 "lib/files.h" 3 4
_Bool 
# 415 "lib/files.h"
    files_load_ecc_point(const char *path, TPM2B_ECC_POINT *Q);
# 424 "lib/files.h"

# 424 "lib/files.h" 3 4
_Bool 
# 424 "lib/files.h"
    files_load_ecc_parameter(const char *path, TPM2B_ECC_PARAMETER *parameter);
# 435 "lib/files.h"

# 435 "lib/files.h" 3 4
_Bool 
# 435 "lib/files.h"
    files_load_encrypted_seed(const char *path,
        TPM2B_ENCRYPTED_SECRET *encrypted_seed);
# 447 "lib/files.h"

# 447 "lib/files.h" 3 4
_Bool 
# 447 "lib/files.h"
    files_save_ecc_details(TPMS_ALGORITHM_DETAIL_ECC *parameters,
    const char *path);
# 458 "lib/files.h"

# 458 "lib/files.h" 3 4
_Bool 
# 458 "lib/files.h"
    files_does_file_exist(const char *path);
# 471 "lib/files.h"

# 471 "lib/files.h" 3 4
_Bool 
# 471 "lib/files.h"
    files_get_file_size_path(const char *path, unsigned long *file_size);
# 484 "lib/files.h"

# 484 "lib/files.h" 3 4
_Bool 
# 484 "lib/files.h"
    files_get_file_size(FILE *fp, unsigned long *file_size, const char *path);
# 495 "lib/files.h"

# 495 "lib/files.h" 3 4
_Bool 
# 495 "lib/files.h"
    files_write_header(FILE *f, UINT32 version);
# 506 "lib/files.h"

# 506 "lib/files.h" 3 4
_Bool 
# 506 "lib/files.h"
    files_read_header(FILE *f, UINT32 *version);
# 518 "lib/files.h"

# 518 "lib/files.h" 3 4
_Bool 
# 518 "lib/files.h"
    files_write_16(FILE *out, UINT16 data);





# 523 "lib/files.h" 3 4
_Bool 
# 523 "lib/files.h"
    files_write_32(FILE *out, UINT32 data);





# 528 "lib/files.h" 3 4
_Bool 
# 528 "lib/files.h"
    files_write_64(FILE *out, UINT64 data);
# 541 "lib/files.h"

# 541 "lib/files.h" 3 4
_Bool 
# 541 "lib/files.h"
    files_write_bytes(FILE *out, const UINT8 *data, size_t size);
# 553 "lib/files.h"

# 553 "lib/files.h" 3 4
_Bool 
# 553 "lib/files.h"
    files_read_16(FILE *out, UINT16 *data);





# 558 "lib/files.h" 3 4
_Bool 
# 558 "lib/files.h"
    files_read_32(FILE *out, UINT32 *data);





# 563 "lib/files.h" 3 4
_Bool 
# 563 "lib/files.h"
    files_read_64(FILE *out, UINT64 *data);
# 576 "lib/files.h"

# 576 "lib/files.h" 3 4
_Bool 
# 576 "lib/files.h"
    files_read_bytes(FILE *out, UINT8 data[], size_t size);
# 591 "lib/files.h"

# 591 "lib/files.h" 3 4
_Bool 
# 591 "lib/files.h"
    files_read_bytes_chunk(FILE *out, UINT8 data[], size_t size, size_t *read_size);
# 602 "lib/files.h"
tool_rc files_tpm2b_attest_to_tpms_attest(TPM2B_ATTEST *quoted, TPMS_ATTEST *attest);
# 615 "lib/files.h"

# 615 "lib/files.h" 3 4
_Bool 
# 615 "lib/files.h"
    files_load_attest_file(FILE *f, const char *path, TPMS_ATTEST *attest);
# 632 "lib/files.h"
tool_rc files_load_unique_data(const char *file_path,
TPM2B_PUBLIC *public_data);
# 16 "lib/files.c" 2
# 1 "lib/log.h" 1
# 9 "lib/log.h"
# 1 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_sys.h" 1
# 10 "lib/log.h" 2

# 1 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_rc.h" 1
# 16 "/home/pwq/TPM/third_party/local_install/include/tss2/tss2_rc.h"
typedef const char *(*TSS2_RC_HANDLER)(TSS2_RC rc);

const char *Tss2_RC_Decode(TSS2_RC rc);

TSS2_RC_HANDLER Tss2_RC_SetHandler(uint8_t layer, const char *name, TSS2_RC_HANDLER handler);

typedef struct TSS2_RC_INFO TSS2_RC_INFO;
struct TSS2_RC_INFO {
    UINT8 layer;
    UINT8 format;
    TSS2_RC error;
    UINT8 parameter;
    UINT8 session;
    UINT8 handle;
};

TSS2_RC Tss2_RC_DecodeInfo(TSS2_RC, TSS2_RC_INFO *info);

const char *Tss2_RC_DecodeInfoError(TSS2_RC_INFO *info);
# 12 "lib/log.h" 2
# 1 "lib/tpm2_util.h" 1
# 13 "lib/tpm2_util.h"
# 1 "lib/config.h" 1
# 14 "lib/tpm2_util.h" 2
# 1 "lib/tpm2_session.h" 1
# 12 "lib/tpm2_session.h"
typedef struct tpm2_session_data tpm2_session_data;
typedef struct tpm2_session tpm2_session;
# 35 "lib/tpm2_session.h"
tpm2_session_data *tpm2_session_data_new(TPM2_SE type);
# 44 "lib/tpm2_session.h"
void tpm2_session_set_key(tpm2_session_data *data, TPMI_DH_OBJECT key);
# 53 "lib/tpm2_session.h"
void tpm2_session_set_nonce_caller(tpm2_session_data *data, TPM2B_NONCE *nonce);
# 66 "lib/tpm2_session.h"
tool_rc tpm2_session_get_noncetpm(ESYS_CONTEXT *ectx, tpm2_session *session,
    TPM2B_NONCE **nonce_tpm);
# 76 "lib/tpm2_session.h"
void tpm2_session_set_bind(tpm2_session_data *data, TPMI_DH_ENTITY bind);
# 85 "lib/tpm2_session.h"
void tpm2_session_set_symmetric(tpm2_session_data *data,
        TPMT_SYM_DEF *symmetric);
# 95 "lib/tpm2_session.h"
void tpm2_session_set_authhash(tpm2_session_data *data, TPMI_ALG_HASH auth_hash);

void tpm2_session_set_path(tpm2_session_data *data, const char *path);
# 106 "lib/tpm2_session.h"
void tpm2_session_set_attrs(tpm2_session_data *data, TPMA_SESSION attrs);
# 115 "lib/tpm2_session.h"
TPMI_ALG_HASH tpm2_session_data_get_authhash(tpm2_session_data *data);
# 124 "lib/tpm2_session.h"
TPMI_ALG_HASH tpm2_session_get_authhash(tpm2_session *session);
# 134 "lib/tpm2_session.h"
ESYS_TR tpm2_session_get_handle(tpm2_session *session);
# 143 "lib/tpm2_session.h"
TPM2_SE tpm2_session_get_type(tpm2_session *session);
# 152 "lib/tpm2_session.h"
static inline 
# 152 "lib/tpm2_session.h" 3 4
             _Bool 
# 152 "lib/tpm2_session.h"
                  tpm2_session_is_trial(tpm2_session *session) {
    return tpm2_session_get_type(session) == ((TPM2_SE)0x03);
}
# 170 "lib/tpm2_session.h"
tool_rc tpm2_session_open(ESYS_CONTEXT *context, tpm2_session_data *data,
        tpm2_session **session);
# 188 "lib/tpm2_session.h"
tool_rc tpm2_session_close(tpm2_session **session);
# 203 "lib/tpm2_session.h"
tool_rc tpm2_session_restore(ESYS_CONTEXT *ctx, const char *path, 
# 203 "lib/tpm2_session.h" 3 4
                                                                 _Bool 
# 203 "lib/tpm2_session.h"
                                                                      is_final,
        tpm2_session **session);
# 216 "lib/tpm2_session.h"
tool_rc tpm2_session_restart(ESYS_CONTEXT *context, tpm2_session *s,
    TPM2B_DIGEST *cp_hash, TPMI_ALG_HASH parameter_hash_algorithm);

tpm2_session_data *tpm2_hmac_session_data_new(TPM2B_AUTH *auth_value);

void tpm2_session_set_auth_value(tpm2_session *session, TPM2B_AUTH *auth_value);

const TPM2B_AUTH *tpm2_session_get_auth_value(tpm2_session *session);

void tpm2_session_free(tpm2_session **session);
# 15 "lib/tpm2_util.h" 2
# 93 "lib/tpm2_util.h"
typedef struct {
    UINT16 size;
    BYTE buffer[0];
} TPM2B;






int tpm2_util_hex_to_byte_structure(const char *in_str, UINT16 *byte_length,
        BYTE *byte_buffer);
# 115 "lib/tpm2_util.h"

# 115 "lib/tpm2_util.h" 3 4
_Bool 
# 115 "lib/tpm2_util.h"
    tpm2_util_verify_digests(TPM2B_DIGEST *quote_digest,
        TPM2B_DIGEST *pcr_digest);
# 127 "lib/tpm2_util.h"

# 127 "lib/tpm2_util.h" 3 4
_Bool 
# 127 "lib/tpm2_util.h"
    tpm2_util_concat_buffer(TPM2B_MAX_BUFFER *result, TPM2B *append);
# 138 "lib/tpm2_util.h"

# 138 "lib/tpm2_util.h" 3 4
_Bool 
# 138 "lib/tpm2_util.h"
    tpm2_util_string_to_int32(const char *str, int32_t *value);
# 149 "lib/tpm2_util.h"

# 149 "lib/tpm2_util.h" 3 4
_Bool 
# 149 "lib/tpm2_util.h"
    tpm2_util_string_to_uint32(const char *str, uint32_t *value);
# 160 "lib/tpm2_util.h"

# 160 "lib/tpm2_util.h" 3 4
_Bool 
# 160 "lib/tpm2_util.h"
    tpm2_util_string_to_uint64(const char *str, uint64_t *value);
# 171 "lib/tpm2_util.h"

# 171 "lib/tpm2_util.h" 3 4
_Bool 
# 171 "lib/tpm2_util.h"
    tpm2_util_string_to_uint16(const char *str, uint16_t *value);
# 182 "lib/tpm2_util.h"

# 182 "lib/tpm2_util.h" 3 4
_Bool 
# 182 "lib/tpm2_util.h"
    tpm2_util_string_to_uint8(const char *str, uint8_t *value);
# 193 "lib/tpm2_util.h"
void tpm2_util_hexdump(const BYTE *data, size_t len);
# 206 "lib/tpm2_util.h"
void tpm2_util_hexdump2(FILE *f, const BYTE *data, size_t len);
# 220 "lib/tpm2_util.h"

# 220 "lib/tpm2_util.h" 3 4
_Bool 
# 220 "lib/tpm2_util.h"
    tpm2_util_bin_from_hex_or_file(const char *input, UINT16 *len, BYTE *buffer);
# 229 "lib/tpm2_util.h"
static inline void _tpm2_util_print_tpm2b(TPM2B *buffer) {

    return tpm2_util_hexdump(buffer->buffer, buffer->size);
}

static inline 
# 234 "lib/tpm2_util.h" 3 4
             _Bool 
# 234 "lib/tpm2_util.h"
                  _cmp_tpm2b(UINT16 size_a, const BYTE *buf_a, UINT16 size_b, const BYTE *buf_b,
        size_t max_a, size_t max_b) {





    return max_a == max_b &&

            size_a == size_b &&

            !memcmp(buf_a, buf_b, size_a);
}
# 277 "lib/tpm2_util.h"
static inline void _tpm2_util_print_tpm2b2(FILE *out, const TPM2B *buffer) {

    return tpm2_util_hexdump2(out, buffer->buffer, buffer->size);
}






static inline 
# 287 "lib/tpm2_util.h" 3 4
             _Bool 
# 287 "lib/tpm2_util.h"
                  tpm2_util_is_pcr_select_bit_set(
        const TPMS_PCR_SELECTION *pcr_selection, UINT32 pcr) {
    return (pcr_selection->pcrSelect[((pcr) / 8)] & (1 << ((pcr) % 8)));
}







# 297 "lib/tpm2_util.h" 3 4
_Bool 
# 297 "lib/tpm2_util.h"
    tpm2_util_is_big_endian(void);
# 306 "lib/tpm2_util.h"
UINT16 tpm2_util_endian_swap_16(UINT16 data);




UINT32 tpm2_util_endian_swap_32(UINT32 data);




UINT64 tpm2_util_endian_swap_64(UINT64 data);
# 325 "lib/tpm2_util.h"
UINT16 tpm2_util_hton_16(UINT16 data);




UINT32 tpm2_util_hton_32(UINT32 data);




UINT64 tpm2_util_hton_64(UINT64 data);
# 344 "lib/tpm2_util.h"
UINT16 tpm2_util_ntoh_16(UINT16 data);




UINT32 tpm2_util_ntoh_32(UINT32 data);




UINT64 tpm2_util_ntoh_64(UINT64 data);
# 363 "lib/tpm2_util.h"
UINT32 tpm2_util_pop_count(UINT32 data);






void print_yaml_indent(size_t indent_count);
# 379 "lib/tpm2_util.h"
void tpm2_util_public_to_yaml(TPM2B_PUBLIC *public, char *indent);

void tpm2_util_tpmt_public_to_yaml(TPMT_PUBLIC *public, char *indent);
# 390 "lib/tpm2_util.h"
void tpm2_util_tpma_object_to_yaml(TPMA_OBJECT obj, char *indent);
# 408 "lib/tpm2_util.h"

# 408 "lib/tpm2_util.h" 3 4
_Bool 
# 408 "lib/tpm2_util.h"
    tpm2_util_calc_unique(TPMI_ALG_HASH name_alg,
        TPM2B_PRIVATE_VENDOR_SPECIFIC *key, TPM2B_DIGEST *seed,
        TPM2B_DIGEST *unique);
# 424 "lib/tpm2_util.h"
tool_rc tpm2_util_sys_handle_to_esys_handle(ESYS_CONTEXT *context,
        TPM2_HANDLE sys_handle, ESYS_TR *esys_handle);






ESYS_TR tpm2_tpmi_hierarchy_to_esys_tr(TPMI_RH_PROVISION inh);

char *tpm2_util_getenv(const char *name);


# 436 "lib/tpm2_util.h" 3 4
_Bool 
# 436 "lib/tpm2_util.h"
    tpm2_util_env_yes(const char *name);

typedef enum tpm2_handle_flags_enum tpm2_handle_flags_enum;
enum tpm2_handle_flags_enum {
    TPM2_HANDLE_FLAGS_NONE = 0,
    TPM2_HANDLE_FLAGS_O = 1 << 0,
    TPM2_HANDLE_FLAGS_P = 1 << 1,
    TPM2_HANDLE_FLAGS_E = 1 << 2,
    TPM2_HANDLE_FLAGS_N = 1 << 3,
    TPM2_HANDLE_FLAGS_L = 1 << 4,
    TPM2_HANDLE_FLAGS_ALL_HIERACHIES = 0x1F,
    TPM2_HANDLES_FLAGS_TRANSIENT = 1 << 5,
    TPM2_HANDLES_FLAGS_PERSISTENT = 1 << 6,

    TPM2_HANDLE_FLAGS_NV = 1 << 7,
    TPM2_HANDLE_ALL_W_NV = 0xFF,
    TPM2_HANDLE_FLAGS_PCR = 1 << 8,
    TPM2_HANDLE_ALL_W_PCR = 0x17F,
};

typedef unsigned int tpm2_handle_flags;
# 470 "lib/tpm2_util.h"

# 470 "lib/tpm2_util.h" 3 4
_Bool 
# 470 "lib/tpm2_util.h"
    tpm2_util_handle_from_optarg(const char *value,
        TPMI_RH_PROVISION *hierarchy, tpm2_handle_flags flags);


# 473 "lib/tpm2_util.h" 3 4
_Bool 
# 473 "lib/tpm2_util.h"
    tpm2_util_get_label(const char *value, TPM2B_DATA *label);






void tpm2_util_print_time(const TPMS_TIME_INFO *current_time);
# 506 "lib/tpm2_util.h"

# 506 "lib/tpm2_util.h" 3 4
_Bool 
# 506 "lib/tpm2_util.h"
    tpm2_calq_qname(TPM2B_NAME *pqname,
        TPMI_ALG_HASH halg, TPM2B_NAME *name, TPM2B_NAME *qname);
# 519 "lib/tpm2_util.h"

# 519 "lib/tpm2_util.h" 3 4
_Bool 
# 519 "lib/tpm2_util.h"
    tpm2_safe_read_from_stdin(int length, char *data);
# 537 "lib/tpm2_util.h"

# 537 "lib/tpm2_util.h" 3 4
_Bool 
# 537 "lib/tpm2_util.h"
    tpm2_pem_encoded_key_to_fingerprint(const char* pem_encoded_key, char*
    fingerprint);
# 557 "lib/tpm2_util.h"
tool_rc tpm2_util_aux_sessions_setup( ESYS_CONTEXT *ectx,
    uint8_t session_cnt, const char **session_path, ESYS_TR *session_handle,
    tpm2_session **session);

TPMI_ALG_HASH tpm2_util_calculate_phash_algorithm(ESYS_CONTEXT *ectx,
    const char **cphash_path, TPM2B_DIGEST *cp_hash, const char **rphash_path,
    TPM2B_DIGEST *rp_hash, tpm2_session **sessions);

void tpm2_util_tpm2_nv_to_yaml(TPM2B_NV_PUBLIC *, UINT8 *, UINT16, int);
# 13 "lib/log.h" 2

typedef enum log_level log_level;
enum log_level {
    log_level_error,
    log_level_warning,
    log_level_verbose
};

void _log (log_level level, const char *file, unsigned lineno, const char *fmt, ...)
    __attribute__((format (printf, 4, 5)));
# 51 "lib/log.h"
static inline void _LOG_PERR(const char *func, TSS2_RC rc) {

    _log(log_level_error, "lib/log.h", 53, "%s(0x%X) - %s", func, rc, Tss2_RC_Decode(rc));
}
# 77 "lib/log.h"
void log_set_level(log_level level);
# 17 "lib/files.c" 2
# 1 "lib/tpm2.h" 1







# 1 "lib/object.h" 1







# 1 "/usr/include/openssl/pem.h" 1 3 4
# 13 "/usr/include/openssl/pem.h" 3 4
# 1 "/usr/include/openssl/e_os2.h" 1 3 4
# 13 "/usr/include/openssl/e_os2.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 13 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 3 4
# 1 "/usr/include/openssl/opensslv.h" 1 3 4
# 14 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 2 3 4
# 14 "/usr/include/openssl/e_os2.h" 2 3 4
# 14 "/usr/include/openssl/pem.h" 2 3 4
# 1 "/usr/include/openssl/bio.h" 1 3 4
# 18 "/usr/include/openssl/bio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdarg.h" 1 3 4
# 19 "/usr/include/openssl/bio.h" 2 3 4

# 1 "/usr/include/openssl/crypto.h" 1 3 4
# 15 "/usr/include/openssl/crypto.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 30 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 73 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timex.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3 4

# 26 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3 4
struct timex
{
  unsigned int modes;
  __syscall_slong_t offset;
  __syscall_slong_t freq;
  __syscall_slong_t maxerror;
  __syscall_slong_t esterror;
  int status;
  __syscall_slong_t constant;
  __syscall_slong_t precision;
  __syscall_slong_t tolerance;
  struct timeval time;
  __syscall_slong_t tick;
  __syscall_slong_t ppsfreq;
  __syscall_slong_t jitter;
  int shift;
  __syscall_slong_t stabil;
  __syscall_slong_t jitcnt;
  __syscall_slong_t calcnt;
  __syscall_slong_t errcnt;
  __syscall_slong_t stbcnt;

  int tai;


  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32;
};
# 74 "/usr/include/x86_64-linux-gnu/bits/time.h" 2 3 4




extern int clock_adjtime (__clockid_t __clock_id, struct timex *__utx) __attribute__ ((__nothrow__ , __leaf__));


# 34 "/usr/include/time.h" 2 3 4





# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_tm.h" 1 3 4






struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;




};
# 40 "/usr/include/time.h" 2 3 4
# 48 "/usr/include/time.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h" 1 3 4







struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };
# 49 "/usr/include/time.h" 2 3 4
struct sigevent;
# 68 "/usr/include/time.h" 3 4




extern clock_t clock (void) __attribute__ ((__nothrow__ , __leaf__));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));




extern char *strptime (const char *__restrict __s,
         const char *__restrict __fmt, struct tm *__tp)
     __attribute__ ((__nothrow__ , __leaf__));






extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));



extern char *strptime_l (const char *__restrict __s,
    const char *__restrict __fmt, struct tm *__tp,
    locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));





extern struct tm *gmtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));




extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));




extern char *asctime (const struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern char *ctime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));






extern char *asctime_r (const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));


extern char *ctime_r (const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__ , __leaf__));



extern int daylight;
extern long int timezone;
# 190 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int dysize (int __year) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 205 "/usr/include/time.h" 3 4
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     __attribute__ ((__nothrow__ , __leaf__));






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__ , __leaf__));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__ , __leaf__));


extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));





extern int timespec_get (struct timespec *__ts, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 274 "/usr/include/time.h" 3 4
extern int getdate_err;
# 283 "/usr/include/time.h" 3 4
extern struct tm *getdate (const char *__string);
# 297 "/usr/include/time.h" 3 4
extern int getdate_r (const char *__restrict __string,
        struct tm *__restrict __resbufp);



# 16 "/usr/include/openssl/crypto.h" 2 3 4







# 1 "/usr/include/openssl/safestack.h" 1 3 4
# 13 "/usr/include/openssl/safestack.h" 3 4
# 1 "/usr/include/openssl/stack.h" 1 3 4
# 17 "/usr/include/openssl/stack.h" 3 4
typedef struct stack_st OPENSSL_STACK;

typedef int (*OPENSSL_sk_compfunc)(const void *, const void *);
typedef void (*OPENSSL_sk_freefunc)(void *);
typedef void *(*OPENSSL_sk_copyfunc)(const void *);

int OPENSSL_sk_num(const OPENSSL_STACK *);
void *OPENSSL_sk_value(const OPENSSL_STACK *, int);

void *OPENSSL_sk_set(OPENSSL_STACK *st, int i, const void *data);

OPENSSL_STACK *OPENSSL_sk_new(OPENSSL_sk_compfunc cmp);
OPENSSL_STACK *OPENSSL_sk_new_null(void);
OPENSSL_STACK *OPENSSL_sk_new_reserve(OPENSSL_sk_compfunc c, int n);
int OPENSSL_sk_reserve(OPENSSL_STACK *st, int n);
void OPENSSL_sk_free(OPENSSL_STACK *);
void OPENSSL_sk_pop_free(OPENSSL_STACK *st, void (*func) (void *));
OPENSSL_STACK *OPENSSL_sk_deep_copy(const OPENSSL_STACK *,
                                    OPENSSL_sk_copyfunc c,
                                    OPENSSL_sk_freefunc f);
int OPENSSL_sk_insert(OPENSSL_STACK *sk, const void *data, int where);
void *OPENSSL_sk_delete(OPENSSL_STACK *st, int loc);
void *OPENSSL_sk_delete_ptr(OPENSSL_STACK *st, const void *p);
int OPENSSL_sk_find(OPENSSL_STACK *st, const void *data);
int OPENSSL_sk_find_ex(OPENSSL_STACK *st, const void *data);
int OPENSSL_sk_push(OPENSSL_STACK *st, const void *data);
int OPENSSL_sk_unshift(OPENSSL_STACK *st, const void *data);
void *OPENSSL_sk_shift(OPENSSL_STACK *st);
void *OPENSSL_sk_pop(OPENSSL_STACK *st);
void OPENSSL_sk_zero(OPENSSL_STACK *st);
OPENSSL_sk_compfunc OPENSSL_sk_set_cmp_func(OPENSSL_STACK *sk,
                                            OPENSSL_sk_compfunc cmp);
OPENSSL_STACK *OPENSSL_sk_dup(const OPENSSL_STACK *st);
void OPENSSL_sk_sort(OPENSSL_STACK *st);
int OPENSSL_sk_is_sorted(const OPENSSL_STACK *st);
# 14 "/usr/include/openssl/safestack.h" 2 3 4
# 149 "/usr/include/openssl/safestack.h" 3 4
typedef char *OPENSSL_STRING;
typedef const char *OPENSSL_CSTRING;
# 159 "/usr/include/openssl/safestack.h" 3 4
struct stack_st_OPENSSL_STRING; typedef int (*sk_OPENSSL_STRING_compfunc)(const char * const *a, const char *const *b); typedef void (*sk_OPENSSL_STRING_freefunc)(char *a); typedef char * (*sk_OPENSSL_STRING_copyfunc)(const char *a); static __attribute__((unused)) inline int sk_OPENSSL_STRING_num(const struct stack_st_OPENSSL_STRING *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline char *sk_OPENSSL_STRING_value(const struct stack_st_OPENSSL_STRING *sk, int idx) { return (char *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_OPENSSL_STRING *sk_OPENSSL_STRING_new(sk_OPENSSL_STRING_compfunc compare) { return (struct stack_st_OPENSSL_STRING *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_OPENSSL_STRING *sk_OPENSSL_STRING_new_null(void) { return (struct stack_st_OPENSSL_STRING *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_OPENSSL_STRING *sk_OPENSSL_STRING_new_reserve(sk_OPENSSL_STRING_compfunc compare, int n) { return (struct stack_st_OPENSSL_STRING *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_OPENSSL_STRING_reserve(struct stack_st_OPENSSL_STRING *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_OPENSSL_STRING_free(struct stack_st_OPENSSL_STRING *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_OPENSSL_STRING_zero(struct stack_st_OPENSSL_STRING *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline char *sk_OPENSSL_STRING_delete(struct stack_st_OPENSSL_STRING *sk, int i) { return (char *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline char *sk_OPENSSL_STRING_delete_ptr(struct stack_st_OPENSSL_STRING *sk, char *ptr) { return (char *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_OPENSSL_STRING_push(struct stack_st_OPENSSL_STRING *sk, char *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_OPENSSL_STRING_unshift(struct stack_st_OPENSSL_STRING *sk, char *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline char *sk_OPENSSL_STRING_pop(struct stack_st_OPENSSL_STRING *sk) { return (char *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline char *sk_OPENSSL_STRING_shift(struct stack_st_OPENSSL_STRING *sk) { return (char *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_OPENSSL_STRING_pop_free(struct stack_st_OPENSSL_STRING *sk, sk_OPENSSL_STRING_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_OPENSSL_STRING_insert(struct stack_st_OPENSSL_STRING *sk, char *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline char *sk_OPENSSL_STRING_set(struct stack_st_OPENSSL_STRING *sk, int idx, char *ptr) { return (char *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_OPENSSL_STRING_find(struct stack_st_OPENSSL_STRING *sk, char *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_OPENSSL_STRING_find_ex(struct stack_st_OPENSSL_STRING *sk, char *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_OPENSSL_STRING_sort(struct stack_st_OPENSSL_STRING *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_OPENSSL_STRING_is_sorted(const struct stack_st_OPENSSL_STRING *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_OPENSSL_STRING * sk_OPENSSL_STRING_dup(const struct stack_st_OPENSSL_STRING *sk) { return (struct stack_st_OPENSSL_STRING *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_OPENSSL_STRING *sk_OPENSSL_STRING_deep_copy(const struct stack_st_OPENSSL_STRING *sk, sk_OPENSSL_STRING_copyfunc copyfunc, sk_OPENSSL_STRING_freefunc freefunc) { return (struct stack_st_OPENSSL_STRING *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_OPENSSL_STRING_compfunc sk_OPENSSL_STRING_set_cmp_func(struct stack_st_OPENSSL_STRING *sk, sk_OPENSSL_STRING_compfunc compare) { return (sk_OPENSSL_STRING_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }
struct stack_st_OPENSSL_CSTRING; typedef int (*sk_OPENSSL_CSTRING_compfunc)(const char * const *a, const char *const *b); typedef void (*sk_OPENSSL_CSTRING_freefunc)(char *a); typedef char * (*sk_OPENSSL_CSTRING_copyfunc)(const char *a); static __attribute__((unused)) inline int sk_OPENSSL_CSTRING_num(const struct stack_st_OPENSSL_CSTRING *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline const char *sk_OPENSSL_CSTRING_value(const struct stack_st_OPENSSL_CSTRING *sk, int idx) { return (const char *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_OPENSSL_CSTRING *sk_OPENSSL_CSTRING_new(sk_OPENSSL_CSTRING_compfunc compare) { return (struct stack_st_OPENSSL_CSTRING *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_OPENSSL_CSTRING *sk_OPENSSL_CSTRING_new_null(void) { return (struct stack_st_OPENSSL_CSTRING *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_OPENSSL_CSTRING *sk_OPENSSL_CSTRING_new_reserve(sk_OPENSSL_CSTRING_compfunc compare, int n) { return (struct stack_st_OPENSSL_CSTRING *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_OPENSSL_CSTRING_reserve(struct stack_st_OPENSSL_CSTRING *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_OPENSSL_CSTRING_free(struct stack_st_OPENSSL_CSTRING *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_OPENSSL_CSTRING_zero(struct stack_st_OPENSSL_CSTRING *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline const char *sk_OPENSSL_CSTRING_delete(struct stack_st_OPENSSL_CSTRING *sk, int i) { return (const char *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline const char *sk_OPENSSL_CSTRING_delete_ptr(struct stack_st_OPENSSL_CSTRING *sk, const char *ptr) { return (const char *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_OPENSSL_CSTRING_push(struct stack_st_OPENSSL_CSTRING *sk, const char *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_OPENSSL_CSTRING_unshift(struct stack_st_OPENSSL_CSTRING *sk, const char *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline const char *sk_OPENSSL_CSTRING_pop(struct stack_st_OPENSSL_CSTRING *sk) { return (const char *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline const char *sk_OPENSSL_CSTRING_shift(struct stack_st_OPENSSL_CSTRING *sk) { return (const char *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_OPENSSL_CSTRING_pop_free(struct stack_st_OPENSSL_CSTRING *sk, sk_OPENSSL_CSTRING_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_OPENSSL_CSTRING_insert(struct stack_st_OPENSSL_CSTRING *sk, const char *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline const char *sk_OPENSSL_CSTRING_set(struct stack_st_OPENSSL_CSTRING *sk, int idx, const char *ptr) { return (const char *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_OPENSSL_CSTRING_find(struct stack_st_OPENSSL_CSTRING *sk, const char *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_OPENSSL_CSTRING_find_ex(struct stack_st_OPENSSL_CSTRING *sk, const char *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_OPENSSL_CSTRING_sort(struct stack_st_OPENSSL_CSTRING *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_OPENSSL_CSTRING_is_sorted(const struct stack_st_OPENSSL_CSTRING *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_OPENSSL_CSTRING * sk_OPENSSL_CSTRING_dup(const struct stack_st_OPENSSL_CSTRING *sk) { return (struct stack_st_OPENSSL_CSTRING *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_OPENSSL_CSTRING *sk_OPENSSL_CSTRING_deep_copy(const struct stack_st_OPENSSL_CSTRING *sk, sk_OPENSSL_CSTRING_copyfunc copyfunc, sk_OPENSSL_CSTRING_freefunc freefunc) { return (struct stack_st_OPENSSL_CSTRING *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_OPENSSL_CSTRING_compfunc sk_OPENSSL_CSTRING_set_cmp_func(struct stack_st_OPENSSL_CSTRING *sk, sk_OPENSSL_CSTRING_compfunc compare) { return (sk_OPENSSL_CSTRING_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }





typedef void *OPENSSL_BLOCK;
struct stack_st_OPENSSL_BLOCK; typedef int (*sk_OPENSSL_BLOCK_compfunc)(const void * const *a, const void *const *b); typedef void (*sk_OPENSSL_BLOCK_freefunc)(void *a); typedef void * (*sk_OPENSSL_BLOCK_copyfunc)(const void *a); static __attribute__((unused)) inline int sk_OPENSSL_BLOCK_num(const struct stack_st_OPENSSL_BLOCK *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void *sk_OPENSSL_BLOCK_value(const struct stack_st_OPENSSL_BLOCK *sk, int idx) { return (void *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_OPENSSL_BLOCK *sk_OPENSSL_BLOCK_new(sk_OPENSSL_BLOCK_compfunc compare) { return (struct stack_st_OPENSSL_BLOCK *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_OPENSSL_BLOCK *sk_OPENSSL_BLOCK_new_null(void) { return (struct stack_st_OPENSSL_BLOCK *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_OPENSSL_BLOCK *sk_OPENSSL_BLOCK_new_reserve(sk_OPENSSL_BLOCK_compfunc compare, int n) { return (struct stack_st_OPENSSL_BLOCK *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_OPENSSL_BLOCK_reserve(struct stack_st_OPENSSL_BLOCK *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_OPENSSL_BLOCK_free(struct stack_st_OPENSSL_BLOCK *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_OPENSSL_BLOCK_zero(struct stack_st_OPENSSL_BLOCK *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void *sk_OPENSSL_BLOCK_delete(struct stack_st_OPENSSL_BLOCK *sk, int i) { return (void *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline void *sk_OPENSSL_BLOCK_delete_ptr(struct stack_st_OPENSSL_BLOCK *sk, void *ptr) { return (void *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_OPENSSL_BLOCK_push(struct stack_st_OPENSSL_BLOCK *sk, void *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_OPENSSL_BLOCK_unshift(struct stack_st_OPENSSL_BLOCK *sk, void *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void *sk_OPENSSL_BLOCK_pop(struct stack_st_OPENSSL_BLOCK *sk) { return (void *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void *sk_OPENSSL_BLOCK_shift(struct stack_st_OPENSSL_BLOCK *sk) { return (void *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_OPENSSL_BLOCK_pop_free(struct stack_st_OPENSSL_BLOCK *sk, sk_OPENSSL_BLOCK_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_OPENSSL_BLOCK_insert(struct stack_st_OPENSSL_BLOCK *sk, void *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline void *sk_OPENSSL_BLOCK_set(struct stack_st_OPENSSL_BLOCK *sk, int idx, void *ptr) { return (void *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_OPENSSL_BLOCK_find(struct stack_st_OPENSSL_BLOCK *sk, void *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_OPENSSL_BLOCK_find_ex(struct stack_st_OPENSSL_BLOCK *sk, void *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_OPENSSL_BLOCK_sort(struct stack_st_OPENSSL_BLOCK *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_OPENSSL_BLOCK_is_sorted(const struct stack_st_OPENSSL_BLOCK *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_OPENSSL_BLOCK * sk_OPENSSL_BLOCK_dup(const struct stack_st_OPENSSL_BLOCK *sk) { return (struct stack_st_OPENSSL_BLOCK *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_OPENSSL_BLOCK *sk_OPENSSL_BLOCK_deep_copy(const struct stack_st_OPENSSL_BLOCK *sk, sk_OPENSSL_BLOCK_copyfunc copyfunc, sk_OPENSSL_BLOCK_freefunc freefunc) { return (struct stack_st_OPENSSL_BLOCK *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_OPENSSL_BLOCK_compfunc sk_OPENSSL_BLOCK_set_cmp_func(struct stack_st_OPENSSL_BLOCK *sk, sk_OPENSSL_BLOCK_compfunc compare) { return (sk_OPENSSL_BLOCK_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }
# 24 "/usr/include/openssl/crypto.h" 2 3 4

# 1 "/usr/include/openssl/ossl_typ.h" 1 3 4
# 13 "/usr/include/openssl/ossl_typ.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/limits.h" 1 3 4
# 14 "/usr/include/openssl/ossl_typ.h" 2 3 4
# 40 "/usr/include/openssl/ossl_typ.h" 3 4
typedef struct asn1_string_st ASN1_INTEGER;
typedef struct asn1_string_st ASN1_ENUMERATED;
typedef struct asn1_string_st ASN1_BIT_STRING;
typedef struct asn1_string_st ASN1_OCTET_STRING;
typedef struct asn1_string_st ASN1_PRINTABLESTRING;
typedef struct asn1_string_st ASN1_T61STRING;
typedef struct asn1_string_st ASN1_IA5STRING;
typedef struct asn1_string_st ASN1_GENERALSTRING;
typedef struct asn1_string_st ASN1_UNIVERSALSTRING;
typedef struct asn1_string_st ASN1_BMPSTRING;
typedef struct asn1_string_st ASN1_UTCTIME;
typedef struct asn1_string_st ASN1_TIME;
typedef struct asn1_string_st ASN1_GENERALIZEDTIME;
typedef struct asn1_string_st ASN1_VISIBLESTRING;
typedef struct asn1_string_st ASN1_UTF8STRING;
typedef struct asn1_string_st ASN1_STRING;
typedef int ASN1_BOOLEAN;
typedef int ASN1_NULL;


typedef struct asn1_object_st ASN1_OBJECT;

typedef struct ASN1_ITEM_st ASN1_ITEM;
typedef struct asn1_pctx_st ASN1_PCTX;
typedef struct asn1_sctx_st ASN1_SCTX;
# 78 "/usr/include/openssl/ossl_typ.h" 3 4
struct dane_st;
typedef struct bio_st BIO;
typedef struct bignum_st BIGNUM;
typedef struct bignum_ctx BN_CTX;
typedef struct bn_blinding_st BN_BLINDING;
typedef struct bn_mont_ctx_st BN_MONT_CTX;
typedef struct bn_recp_ctx_st BN_RECP_CTX;
typedef struct bn_gencb_st BN_GENCB;

typedef struct buf_mem_st BUF_MEM;

typedef struct evp_cipher_st EVP_CIPHER;
typedef struct evp_cipher_ctx_st EVP_CIPHER_CTX;
typedef struct evp_md_st EVP_MD;
typedef struct evp_md_ctx_st EVP_MD_CTX;
typedef struct evp_pkey_st EVP_PKEY;

typedef struct evp_pkey_asn1_method_st EVP_PKEY_ASN1_METHOD;

typedef struct evp_pkey_method_st EVP_PKEY_METHOD;
typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef struct evp_Encode_Ctx_st EVP_ENCODE_CTX;

typedef struct hmac_ctx_st HMAC_CTX;

typedef struct dh_st DH;
typedef struct dh_method DH_METHOD;

typedef struct dsa_st DSA;
typedef struct dsa_method DSA_METHOD;

typedef struct rsa_st RSA;
typedef struct rsa_meth_st RSA_METHOD;
typedef struct rsa_pss_params_st RSA_PSS_PARAMS;

typedef struct ec_key_st EC_KEY;
typedef struct ec_key_method_st EC_KEY_METHOD;

typedef struct rand_meth_st RAND_METHOD;
typedef struct rand_drbg_st RAND_DRBG;

typedef struct ssl_dane_st SSL_DANE;
typedef struct x509_st X509;
typedef struct X509_algor_st X509_ALGOR;
typedef struct X509_crl_st X509_CRL;
typedef struct x509_crl_method_st X509_CRL_METHOD;
typedef struct x509_revoked_st X509_REVOKED;
typedef struct X509_name_st X509_NAME;
typedef struct X509_pubkey_st X509_PUBKEY;
typedef struct x509_store_st X509_STORE;
typedef struct x509_store_ctx_st X509_STORE_CTX;

typedef struct x509_object_st X509_OBJECT;
typedef struct x509_lookup_st X509_LOOKUP;
typedef struct x509_lookup_method_st X509_LOOKUP_METHOD;
typedef struct X509_VERIFY_PARAM_st X509_VERIFY_PARAM;

typedef struct x509_sig_info_st X509_SIG_INFO;

typedef struct pkcs8_priv_key_info_st PKCS8_PRIV_KEY_INFO;

typedef struct v3_ext_ctx X509V3_CTX;
typedef struct conf_st CONF;
typedef struct ossl_init_settings_st OPENSSL_INIT_SETTINGS;

typedef struct ui_st UI;
typedef struct ui_method_st UI_METHOD;

typedef struct engine_st ENGINE;
typedef struct ssl_st SSL;
typedef struct ssl_ctx_st SSL_CTX;

typedef struct comp_ctx_st COMP_CTX;
typedef struct comp_method_st COMP_METHOD;

typedef struct X509_POLICY_NODE_st X509_POLICY_NODE;
typedef struct X509_POLICY_LEVEL_st X509_POLICY_LEVEL;
typedef struct X509_POLICY_TREE_st X509_POLICY_TREE;
typedef struct X509_POLICY_CACHE_st X509_POLICY_CACHE;

typedef struct AUTHORITY_KEYID_st AUTHORITY_KEYID;
typedef struct DIST_POINT_st DIST_POINT;
typedef struct ISSUING_DIST_POINT_st ISSUING_DIST_POINT;
typedef struct NAME_CONSTRAINTS_st NAME_CONSTRAINTS;

typedef struct crypto_ex_data_st CRYPTO_EX_DATA;

typedef struct ocsp_req_ctx_st OCSP_REQ_CTX;
typedef struct ocsp_response_st OCSP_RESPONSE;
typedef struct ocsp_responder_id_st OCSP_RESPID;

typedef struct sct_st SCT;
typedef struct sct_ctx_st SCT_CTX;
typedef struct ctlog_st CTLOG;
typedef struct ctlog_store_st CTLOG_STORE;
typedef struct ct_policy_eval_ctx_st CT_POLICY_EVAL_CTX;

typedef struct ossl_store_info_st OSSL_STORE_INFO;
typedef struct ossl_store_search_st OSSL_STORE_SEARCH;



typedef intmax_t ossl_intmax_t;
typedef uintmax_t ossl_uintmax_t;
# 26 "/usr/include/openssl/crypto.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 27 "/usr/include/openssl/crypto.h" 2 3 4
# 1 "/usr/include/openssl/cryptoerr.h" 1 3 4
# 15 "/usr/include/openssl/cryptoerr.h" 3 4
# 1 "/usr/include/openssl/symhacks.h" 1 3 4
# 16 "/usr/include/openssl/cryptoerr.h" 2 3 4





int ERR_load_CRYPTO_strings(void);
# 28 "/usr/include/openssl/crypto.h" 2 3 4
# 61 "/usr/include/openssl/crypto.h" 3 4
typedef struct {
    int dummy;
} CRYPTO_dynlock;



typedef void CRYPTO_RWLOCK;

CRYPTO_RWLOCK *CRYPTO_THREAD_lock_new(void);
int CRYPTO_THREAD_read_lock(CRYPTO_RWLOCK *lock);
int CRYPTO_THREAD_write_lock(CRYPTO_RWLOCK *lock);
int CRYPTO_THREAD_unlock(CRYPTO_RWLOCK *lock);
void CRYPTO_THREAD_lock_free(CRYPTO_RWLOCK *lock);

int CRYPTO_atomic_add(int *val, int amount, int *ret, CRYPTO_RWLOCK *lock);
# 86 "/usr/include/openssl/crypto.h" 3 4
struct crypto_ex_data_st {
    struct stack_st_void *sk;
};
struct stack_st_void; typedef int (*sk_void_compfunc)(const void * const *a, const void *const *b); typedef void (*sk_void_freefunc)(void *a); typedef void * (*sk_void_copyfunc)(const void *a); static __attribute__((unused)) inline int sk_void_num(const struct stack_st_void *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void *sk_void_value(const struct stack_st_void *sk, int idx) { return (void *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_void *sk_void_new(sk_void_compfunc compare) { return (struct stack_st_void *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_void *sk_void_new_null(void) { return (struct stack_st_void *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_void *sk_void_new_reserve(sk_void_compfunc compare, int n) { return (struct stack_st_void *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_void_reserve(struct stack_st_void *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_void_free(struct stack_st_void *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_void_zero(struct stack_st_void *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void *sk_void_delete(struct stack_st_void *sk, int i) { return (void *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline void *sk_void_delete_ptr(struct stack_st_void *sk, void *ptr) { return (void *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_void_push(struct stack_st_void *sk, void *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_void_unshift(struct stack_st_void *sk, void *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void *sk_void_pop(struct stack_st_void *sk) { return (void *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void *sk_void_shift(struct stack_st_void *sk) { return (void *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_void_pop_free(struct stack_st_void *sk, sk_void_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_void_insert(struct stack_st_void *sk, void *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline void *sk_void_set(struct stack_st_void *sk, int idx, void *ptr) { return (void *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_void_find(struct stack_st_void *sk, void *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_void_find_ex(struct stack_st_void *sk, void *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_void_sort(struct stack_st_void *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_void_is_sorted(const struct stack_st_void *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_void * sk_void_dup(const struct stack_st_void *sk) { return (struct stack_st_void *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_void *sk_void_deep_copy(const struct stack_st_void *sk, sk_void_copyfunc copyfunc, sk_void_freefunc freefunc) { return (struct stack_st_void *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_void_compfunc sk_void_set_cmp_func(struct stack_st_void *sk, sk_void_compfunc compare) { return (sk_void_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }
# 115 "/usr/include/openssl/crypto.h" 3 4
int CRYPTO_mem_ctrl(int mode);
# 146 "/usr/include/openssl/crypto.h" 3 4
size_t OPENSSL_strlcpy(char *dst, const char *src, size_t siz);
size_t OPENSSL_strlcat(char *dst, const char *src, size_t siz);
size_t OPENSSL_strnlen(const char *str, size_t maxlen);
char *OPENSSL_buf2hexstr(const unsigned char *buffer, long len);
unsigned char *OPENSSL_hexstr2buf(const char *str, long *len);
int OPENSSL_hexchar2int(unsigned char c);



unsigned long OpenSSL_version_num(void);
const char *OpenSSL_version(int type);







int OPENSSL_issetugid(void);

typedef void CRYPTO_EX_new (void *parent, void *ptr, CRYPTO_EX_DATA *ad,
                           int idx, long argl, void *argp);
typedef void CRYPTO_EX_free (void *parent, void *ptr, CRYPTO_EX_DATA *ad,
                             int idx, long argl, void *argp);
typedef int CRYPTO_EX_dup (CRYPTO_EX_DATA *to, const CRYPTO_EX_DATA *from,
                           void *from_d, int idx, long argl, void *argp);
 int CRYPTO_get_ex_new_index(int class_index, long argl, void *argp,
                            CRYPTO_EX_new *new_func, CRYPTO_EX_dup *dup_func,
                            CRYPTO_EX_free *free_func);

int CRYPTO_free_ex_index(int class_index, int idx);





int CRYPTO_new_ex_data(int class_index, void *obj, CRYPTO_EX_DATA *ad);
int CRYPTO_dup_ex_data(int class_index, CRYPTO_EX_DATA *to,
                       const CRYPTO_EX_DATA *from);

void CRYPTO_free_ex_data(int class_index, void *obj, CRYPTO_EX_DATA *ad);





int CRYPTO_set_ex_data(CRYPTO_EX_DATA *ad, int idx, void *val);
void *CRYPTO_get_ex_data(const CRYPTO_EX_DATA *ad, int idx);
# 229 "/usr/include/openssl/crypto.h" 3 4
typedef struct crypto_threadid_st {
    int dummy;
} CRYPTO_THREADID;
# 256 "/usr/include/openssl/crypto.h" 3 4
int CRYPTO_set_mem_functions(
        void *(*m) (size_t, const char *, int),
        void *(*r) (void *, size_t, const char *, int),
        void (*f) (void *, const char *, int));
int CRYPTO_set_mem_debug(int flag);
void CRYPTO_get_mem_functions(
        void *(**m) (size_t, const char *, int),
        void *(**r) (void *, size_t, const char *, int),
        void (**f) (void *, const char *, int));

void *CRYPTO_malloc(size_t num, const char *file, int line);
void *CRYPTO_zalloc(size_t num, const char *file, int line);
void *CRYPTO_memdup(const void *str, size_t siz, const char *file, int line);
char *CRYPTO_strdup(const char *str, const char *file, int line);
char *CRYPTO_strndup(const char *str, size_t s, const char *file, int line);
void CRYPTO_free(void *ptr, const char *file, int line);
void CRYPTO_clear_free(void *ptr, size_t num, const char *file, int line);
void *CRYPTO_realloc(void *addr, size_t num, const char *file, int line);
void *CRYPTO_clear_realloc(void *addr, size_t old_num, size_t num,
                           const char *file, int line);

int CRYPTO_secure_malloc_init(size_t sz, int minsize);
int CRYPTO_secure_malloc_done(void);
void *CRYPTO_secure_malloc(size_t num, const char *file, int line);
void *CRYPTO_secure_zalloc(size_t num, const char *file, int line);
void CRYPTO_secure_free(void *ptr, const char *file, int line);
void CRYPTO_secure_clear_free(void *ptr, size_t num,
                              const char *file, int line);
int CRYPTO_secure_allocated(const void *ptr);
int CRYPTO_secure_malloc_initialized(void);
size_t CRYPTO_secure_actual_size(void *ptr);
size_t CRYPTO_secure_used(void);

void OPENSSL_cleanse(void *ptr, size_t len);
# 322 "/usr/include/openssl/crypto.h" 3 4
__attribute__((noreturn)) void OPENSSL_die(const char *assertion, const char *file, int line);






int OPENSSL_isservice(void);

int FIPS_mode(void);
int FIPS_mode_set(int r);

void OPENSSL_init(void);

void OPENSSL_fork_prepare(void);
void OPENSSL_fork_parent(void);
void OPENSSL_fork_child(void);


struct tm *OPENSSL_gmtime(const time_t *timer, struct tm *result);
int OPENSSL_gmtime_adj(struct tm *tm, int offset_day, long offset_sec);
int OPENSSL_gmtime_diff(int *pday, int *psec,
                        const struct tm *from, const struct tm *to);
# 353 "/usr/include/openssl/crypto.h" 3 4
int CRYPTO_memcmp(const void * in_a, const void * in_b, size_t len);
# 387 "/usr/include/openssl/crypto.h" 3 4
void OPENSSL_cleanup(void);
int OPENSSL_init_crypto(uint64_t opts, const OPENSSL_INIT_SETTINGS *settings);
int OPENSSL_atexit(void (*handler)(void));
void OPENSSL_thread_stop(void);


OPENSSL_INIT_SETTINGS *OPENSSL_INIT_new(void);

int OPENSSL_INIT_set_config_filename(OPENSSL_INIT_SETTINGS *settings,
                                     const char *config_filename);
void OPENSSL_INIT_set_config_file_flags(OPENSSL_INIT_SETTINGS *settings,
                                        unsigned long flags);
int OPENSSL_INIT_set_config_appname(OPENSSL_INIT_SETTINGS *settings,
                                    const char *config_appname);

void OPENSSL_INIT_free(OPENSSL_INIT_SETTINGS *settings);
# 415 "/usr/include/openssl/crypto.h" 3 4
# 1 "/usr/include/pthread.h" 1 3 4
# 22 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/sched.h" 1 3 4
# 29 "/usr/include/sched.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 30 "/usr/include/sched.h" 2 3 4
# 43 "/usr/include/sched.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sched.h" 1 3 4
# 76 "/usr/include/x86_64-linux-gnu/bits/sched.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h" 3 4
struct sched_param
{
  int sched_priority;
};
# 77 "/usr/include/x86_64-linux-gnu/bits/sched.h" 2 3 4





extern int clone (int (*__fn) (void *__arg), void *__child_stack,
    int __flags, void *__arg, ...) __attribute__ ((__nothrow__ , __leaf__));


extern int unshare (int __flags) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_getcpu (void) __attribute__ ((__nothrow__ , __leaf__));


extern int getcpu (unsigned int *, unsigned int *) __attribute__ ((__nothrow__ , __leaf__));


extern int setns (int __fd, int __nstype) __attribute__ ((__nothrow__ , __leaf__));



# 44 "/usr/include/sched.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/cpu-set.h" 1 3 4
# 32 "/usr/include/x86_64-linux-gnu/bits/cpu-set.h" 3 4
typedef unsigned long int __cpu_mask;






typedef struct
{
  __cpu_mask __bits[1024 / (8 * sizeof (__cpu_mask))];
} cpu_set_t;
# 115 "/usr/include/x86_64-linux-gnu/bits/cpu-set.h" 3 4


extern int __sched_cpucount (size_t __setsize, const cpu_set_t *__setp)
     __attribute__ ((__nothrow__ , __leaf__));
extern cpu_set_t *__sched_cpualloc (size_t __count) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern void __sched_cpufree (cpu_set_t *__set) __attribute__ ((__nothrow__ , __leaf__));


# 45 "/usr/include/sched.h" 2 3 4









extern int sched_setparam (__pid_t __pid, const struct sched_param *__param)
     __attribute__ ((__nothrow__ , __leaf__));


extern int sched_getparam (__pid_t __pid, struct sched_param *__param) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_setscheduler (__pid_t __pid, int __policy,
          const struct sched_param *__param) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_getscheduler (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_yield (void) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_get_priority_max (int __algorithm) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_get_priority_min (int __algorithm) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_rr_get_interval (__pid_t __pid, struct timespec *__t) __attribute__ ((__nothrow__ , __leaf__));
# 121 "/usr/include/sched.h" 3 4
extern int sched_setaffinity (__pid_t __pid, size_t __cpusetsize,
         const cpu_set_t *__cpuset) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_getaffinity (__pid_t __pid, size_t __cpusetsize,
         cpu_set_t *__cpuset) __attribute__ ((__nothrow__ , __leaf__));



# 23 "/usr/include/pthread.h" 2 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 2 3 4




typedef long int __jmp_buf[8];
# 28 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/pthread.h" 2 3 4




enum
{
  PTHREAD_CREATE_JOINABLE,

  PTHREAD_CREATE_DETACHED

};



enum
{
  PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_ADAPTIVE_NP

  ,
  PTHREAD_MUTEX_NORMAL = PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE = PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK = PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_DEFAULT = PTHREAD_MUTEX_NORMAL



  , PTHREAD_MUTEX_FAST_NP = PTHREAD_MUTEX_TIMED_NP

};




enum
{
  PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_STALLED_NP = PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_ROBUST,
  PTHREAD_MUTEX_ROBUST_NP = PTHREAD_MUTEX_ROBUST
};





enum
{
  PTHREAD_PRIO_NONE,
  PTHREAD_PRIO_INHERIT,
  PTHREAD_PRIO_PROTECT
};
# 100 "/usr/include/pthread.h" 3 4
enum
{
  PTHREAD_RWLOCK_PREFER_READER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP,
  PTHREAD_RWLOCK_DEFAULT_NP = PTHREAD_RWLOCK_PREFER_READER_NP
};
# 120 "/usr/include/pthread.h" 3 4
enum
{
  PTHREAD_INHERIT_SCHED,

  PTHREAD_EXPLICIT_SCHED

};



enum
{
  PTHREAD_SCOPE_SYSTEM,

  PTHREAD_SCOPE_PROCESS

};



enum
{
  PTHREAD_PROCESS_PRIVATE,

  PTHREAD_PROCESS_SHARED

};
# 155 "/usr/include/pthread.h" 3 4
struct _pthread_cleanup_buffer
{
  void (*__routine) (void *);
  void *__arg;
  int __canceltype;
  struct _pthread_cleanup_buffer *__prev;
};


enum
{
  PTHREAD_CANCEL_ENABLE,

  PTHREAD_CANCEL_DISABLE

};
enum
{
  PTHREAD_CANCEL_DEFERRED,

  PTHREAD_CANCEL_ASYNCHRONOUS

};
# 193 "/usr/include/pthread.h" 3 4





extern int pthread_create (pthread_t *__restrict __newthread,
      const pthread_attr_t *__restrict __attr,
      void *(*__start_routine) (void *),
      void *__restrict __arg) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3)));





extern void pthread_exit (void *__retval) __attribute__ ((__noreturn__));







extern int pthread_join (pthread_t __th, void **__thread_return);




extern int pthread_tryjoin_np (pthread_t __th, void **__thread_return) __attribute__ ((__nothrow__ , __leaf__));







extern int pthread_timedjoin_np (pthread_t __th, void **__thread_return,
     const struct timespec *__abstime);
# 238 "/usr/include/pthread.h" 3 4
extern int pthread_clockjoin_np (pthread_t __th, void **__thread_return,
                                 clockid_t __clockid,
     const struct timespec *__abstime);






extern int pthread_detach (pthread_t __th) __attribute__ ((__nothrow__ , __leaf__));



extern pthread_t pthread_self (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int pthread_equal (pthread_t __thread1, pthread_t __thread2)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));







extern int pthread_attr_init (pthread_attr_t *__attr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_destroy (pthread_attr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getdetachstate (const pthread_attr_t *__attr,
     int *__detachstate)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setdetachstate (pthread_attr_t *__attr,
     int __detachstate)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getguardsize (const pthread_attr_t *__attr,
          size_t *__guardsize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setguardsize (pthread_attr_t *__attr,
          size_t __guardsize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getschedparam (const pthread_attr_t *__restrict __attr,
           struct sched_param *__restrict __param)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setschedparam (pthread_attr_t *__restrict __attr,
           const struct sched_param *__restrict
           __param) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_getschedpolicy (const pthread_attr_t *__restrict
     __attr, int *__restrict __policy)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setschedpolicy (pthread_attr_t *__attr, int __policy)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getinheritsched (const pthread_attr_t *__restrict
      __attr, int *__restrict __inherit)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setinheritsched (pthread_attr_t *__attr,
      int __inherit)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getscope (const pthread_attr_t *__restrict __attr,
      int *__restrict __scope)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setscope (pthread_attr_t *__attr, int __scope)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getstackaddr (const pthread_attr_t *__restrict
          __attr, void **__restrict __stackaddr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__deprecated__));





extern int pthread_attr_setstackaddr (pthread_attr_t *__attr,
          void *__stackaddr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__));


extern int pthread_attr_getstacksize (const pthread_attr_t *__restrict
          __attr, size_t *__restrict __stacksize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int pthread_attr_setstacksize (pthread_attr_t *__attr,
          size_t __stacksize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getstack (const pthread_attr_t *__restrict __attr,
      void **__restrict __stackaddr,
      size_t *__restrict __stacksize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3)));




extern int pthread_attr_setstack (pthread_attr_t *__attr, void *__stackaddr,
      size_t __stacksize) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int pthread_attr_setaffinity_np (pthread_attr_t *__attr,
     size_t __cpusetsize,
     const cpu_set_t *__cpuset)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));



extern int pthread_attr_getaffinity_np (const pthread_attr_t *__attr,
     size_t __cpusetsize,
     cpu_set_t *__cpuset)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));


extern int pthread_getattr_default_np (pthread_attr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_setattr_default_np (const pthread_attr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int pthread_getattr_np (pthread_t __th, pthread_attr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));







extern int pthread_setschedparam (pthread_t __target_thread, int __policy,
      const struct sched_param *__param)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));


extern int pthread_getschedparam (pthread_t __target_thread,
      int *__restrict __policy,
      struct sched_param *__restrict __param)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));


extern int pthread_setschedprio (pthread_t __target_thread, int __prio)
     __attribute__ ((__nothrow__ , __leaf__));




extern int pthread_getname_np (pthread_t __target_thread, char *__buf,
          size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int pthread_setname_np (pthread_t __target_thread, const char *__name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int pthread_getconcurrency (void) __attribute__ ((__nothrow__ , __leaf__));


extern int pthread_setconcurrency (int __level) __attribute__ ((__nothrow__ , __leaf__));







extern int pthread_yield (void) __attribute__ ((__nothrow__ , __leaf__));




extern int pthread_setaffinity_np (pthread_t __th, size_t __cpusetsize,
       const cpu_set_t *__cpuset)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));


extern int pthread_getaffinity_np (pthread_t __th, size_t __cpusetsize,
       cpu_set_t *__cpuset)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
# 470 "/usr/include/pthread.h" 3 4
extern int pthread_once (pthread_once_t *__once_control,
    void (*__init_routine) (void)) __attribute__ ((__nonnull__ (1, 2)));
# 482 "/usr/include/pthread.h" 3 4
extern int pthread_setcancelstate (int __state, int *__oldstate);



extern int pthread_setcanceltype (int __type, int *__oldtype);


extern int pthread_cancel (pthread_t __th);




extern void pthread_testcancel (void);




typedef struct
{
  struct
  {
    __jmp_buf __cancel_jmp_buf;
    int __mask_was_saved;
  } __cancel_jmp_buf[1];
  void *__pad[4];
} __pthread_unwind_buf_t __attribute__ ((__aligned__));
# 516 "/usr/include/pthread.h" 3 4
struct __pthread_cleanup_frame
{
  void (*__cancel_routine) (void *);
  void *__cancel_arg;
  int __do_it;
  int __cancel_type;
};
# 656 "/usr/include/pthread.h" 3 4
extern void __pthread_register_cancel (__pthread_unwind_buf_t *__buf)
     ;
# 668 "/usr/include/pthread.h" 3 4
extern void __pthread_unregister_cancel (__pthread_unwind_buf_t *__buf)
  ;
# 691 "/usr/include/pthread.h" 3 4
extern void __pthread_register_cancel_defer (__pthread_unwind_buf_t *__buf)
     ;
# 704 "/usr/include/pthread.h" 3 4
extern void __pthread_unregister_cancel_restore (__pthread_unwind_buf_t *__buf)
  ;



extern void __pthread_unwind_next (__pthread_unwind_buf_t *__buf)
     __attribute__ ((__noreturn__))

     __attribute__ ((__weak__))

     ;



struct __jmp_buf_tag;
extern int __sigsetjmp (struct __jmp_buf_tag *__env, int __savemask) __attribute__ ((__nothrow__));





extern int pthread_mutex_init (pthread_mutex_t *__mutex,
          const pthread_mutexattr_t *__mutexattr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_destroy (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_trylock (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_lock (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutex_timedlock (pthread_mutex_t *__restrict __mutex,
        const struct timespec *__restrict
        __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutex_clocklock (pthread_mutex_t *__restrict __mutex,
        clockid_t __clockid,
        const struct timespec *__restrict
        __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3)));



extern int pthread_mutex_unlock (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutex_getprioceiling (const pthread_mutex_t *
      __restrict __mutex,
      int *__restrict __prioceiling)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutex_setprioceiling (pthread_mutex_t *__restrict __mutex,
      int __prioceiling,
      int *__restrict __old_ceiling)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));




extern int pthread_mutex_consistent (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern int pthread_mutex_consistent_np (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 789 "/usr/include/pthread.h" 3 4
extern int pthread_mutexattr_init (pthread_mutexattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_destroy (pthread_mutexattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_getpshared (const pthread_mutexattr_t *
      __restrict __attr,
      int *__restrict __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_mutexattr_setpshared (pthread_mutexattr_t *__attr,
      int __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_gettype (const pthread_mutexattr_t *__restrict
          __attr, int *__restrict __kind)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int pthread_mutexattr_settype (pthread_mutexattr_t *__attr, int __kind)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_getprotocol (const pthread_mutexattr_t *
       __restrict __attr,
       int *__restrict __protocol)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutexattr_setprotocol (pthread_mutexattr_t *__attr,
       int __protocol)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_getprioceiling (const pthread_mutexattr_t *
          __restrict __attr,
          int *__restrict __prioceiling)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_mutexattr_setprioceiling (pthread_mutexattr_t *__attr,
          int __prioceiling)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_getrobust (const pthread_mutexattr_t *__attr,
     int *__robustness)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int pthread_mutexattr_getrobust_np (const pthread_mutexattr_t *__attr,
        int *__robustness)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutexattr_setrobust (pthread_mutexattr_t *__attr,
     int __robustness)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern int pthread_mutexattr_setrobust_np (pthread_mutexattr_t *__attr,
        int __robustness)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 871 "/usr/include/pthread.h" 3 4
extern int pthread_rwlock_init (pthread_rwlock_t *__restrict __rwlock,
    const pthread_rwlockattr_t *__restrict
    __attr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_destroy (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_rdlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_tryrdlock (pthread_rwlock_t *__rwlock)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_rwlock_timedrdlock (pthread_rwlock_t *__restrict __rwlock,
           const struct timespec *__restrict
           __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_rwlock_clockrdlock (pthread_rwlock_t *__restrict __rwlock,
           clockid_t __clockid,
           const struct timespec *__restrict
           __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3)));



extern int pthread_rwlock_wrlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_trywrlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_rwlock_timedwrlock (pthread_rwlock_t *__restrict __rwlock,
           const struct timespec *__restrict
           __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_rwlock_clockwrlock (pthread_rwlock_t *__restrict __rwlock,
           clockid_t __clockid,
           const struct timespec *__restrict
           __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3)));



extern int pthread_rwlock_unlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int pthread_rwlockattr_init (pthread_rwlockattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_destroy (pthread_rwlockattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_getpshared (const pthread_rwlockattr_t *
       __restrict __attr,
       int *__restrict __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_rwlockattr_setpshared (pthread_rwlockattr_t *__attr,
       int __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_getkind_np (const pthread_rwlockattr_t *
       __restrict __attr,
       int *__restrict __pref)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_rwlockattr_setkind_np (pthread_rwlockattr_t *__attr,
       int __pref) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int pthread_cond_init (pthread_cond_t *__restrict __cond,
         const pthread_condattr_t *__restrict __cond_attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_destroy (pthread_cond_t *__cond)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_signal (pthread_cond_t *__cond)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_broadcast (pthread_cond_t *__cond)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int pthread_cond_wait (pthread_cond_t *__restrict __cond,
         pthread_mutex_t *__restrict __mutex)
     __attribute__ ((__nonnull__ (1, 2)));
# 997 "/usr/include/pthread.h" 3 4
extern int pthread_cond_timedwait (pthread_cond_t *__restrict __cond,
       pthread_mutex_t *__restrict __mutex,
       const struct timespec *__restrict __abstime)
     __attribute__ ((__nonnull__ (1, 2, 3)));
# 1010 "/usr/include/pthread.h" 3 4
extern int pthread_cond_clockwait (pthread_cond_t *__restrict __cond,
       pthread_mutex_t *__restrict __mutex,
       __clockid_t __clock_id,
       const struct timespec *__restrict __abstime)
     __attribute__ ((__nonnull__ (1, 2, 4)));





extern int pthread_condattr_init (pthread_condattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_condattr_destroy (pthread_condattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_condattr_getpshared (const pthread_condattr_t *
     __restrict __attr,
     int *__restrict __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_condattr_setpshared (pthread_condattr_t *__attr,
     int __pshared) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_condattr_getclock (const pthread_condattr_t *
          __restrict __attr,
          __clockid_t *__restrict __clock_id)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_condattr_setclock (pthread_condattr_t *__attr,
          __clockid_t __clock_id)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 1056 "/usr/include/pthread.h" 3 4
extern int pthread_spin_init (pthread_spinlock_t *__lock, int __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_destroy (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_lock (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_trylock (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_unlock (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int pthread_barrier_init (pthread_barrier_t *__restrict __barrier,
     const pthread_barrierattr_t *__restrict
     __attr, unsigned int __count)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_barrier_destroy (pthread_barrier_t *__barrier)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_barrier_wait (pthread_barrier_t *__barrier)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_barrierattr_init (pthread_barrierattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_barrierattr_destroy (pthread_barrierattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_barrierattr_getpshared (const pthread_barrierattr_t *
        __restrict __attr,
        int *__restrict __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_barrierattr_setpshared (pthread_barrierattr_t *__attr,
        int __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 1123 "/usr/include/pthread.h" 3 4
extern int pthread_key_create (pthread_key_t *__key,
          void (*__destr_function) (void *))
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_key_delete (pthread_key_t __key) __attribute__ ((__nothrow__ , __leaf__));


extern void *pthread_getspecific (pthread_key_t __key) __attribute__ ((__nothrow__ , __leaf__));


extern int pthread_setspecific (pthread_key_t __key,
    const void *__pointer) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int pthread_getcpuclockid (pthread_t __thread_id,
      __clockid_t *__clock_id)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 1157 "/usr/include/pthread.h" 3 4
extern int pthread_atfork (void (*__prepare) (void),
      void (*__parent) (void),
      void (*__child) (void)) __attribute__ ((__nothrow__ , __leaf__));




extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) pthread_equal (pthread_t __thread1, pthread_t __thread2)
{
  return __thread1 == __thread2;
}



# 416 "/usr/include/openssl/crypto.h" 2 3 4
typedef pthread_once_t CRYPTO_ONCE;
typedef pthread_key_t CRYPTO_THREAD_LOCAL;
typedef pthread_t CRYPTO_THREAD_ID;
# 431 "/usr/include/openssl/crypto.h" 3 4
int CRYPTO_THREAD_run_once(CRYPTO_ONCE *once, void (*init)(void));

int CRYPTO_THREAD_init_local(CRYPTO_THREAD_LOCAL *key, void (*cleanup)(void *));
void *CRYPTO_THREAD_get_local(CRYPTO_THREAD_LOCAL *key);
int CRYPTO_THREAD_set_local(CRYPTO_THREAD_LOCAL *key, void *val);
int CRYPTO_THREAD_cleanup_local(CRYPTO_THREAD_LOCAL *key);

CRYPTO_THREAD_ID CRYPTO_THREAD_get_current_id(void);
int CRYPTO_THREAD_compare_id(CRYPTO_THREAD_ID a, CRYPTO_THREAD_ID b);
# 21 "/usr/include/openssl/bio.h" 2 3 4
# 1 "/usr/include/openssl/bioerr.h" 1 3 4
# 21 "/usr/include/openssl/bioerr.h" 3 4
int ERR_load_BIO_strings(void);
# 22 "/usr/include/openssl/bio.h" 2 3 4
# 174 "/usr/include/openssl/bio.h" 3 4
typedef union bio_addr_st BIO_ADDR;
typedef struct bio_addrinfo_st BIO_ADDRINFO;

int BIO_get_new_index(void);
void BIO_set_flags(BIO *b, int flags);
int BIO_test_flags(const BIO *b, int flags);
void BIO_clear_flags(BIO *b, int flags);
# 236 "/usr/include/openssl/bio.h" 3 4
typedef long (*BIO_callback_fn)(BIO *b, int oper, const char *argp, int argi,
                                long argl, long ret);
typedef long (*BIO_callback_fn_ex)(BIO *b, int oper, const char *argp,
                                   size_t len, int argi,
                                   long argl, int ret, size_t *processed);
BIO_callback_fn BIO_get_callback(const BIO *b);
void BIO_set_callback(BIO *b, BIO_callback_fn callback);

BIO_callback_fn_ex BIO_get_callback_ex(const BIO *b);
void BIO_set_callback_ex(BIO *b, BIO_callback_fn_ex callback);

char *BIO_get_callback_arg(const BIO *b);
void BIO_set_callback_arg(BIO *b, char *arg);

typedef struct bio_method_st BIO_METHOD;

const char *BIO_method_name(const BIO *b);
int BIO_method_type(const BIO *b);

typedef int BIO_info_cb(BIO *, int, int);
typedef BIO_info_cb bio_info_cb;

struct stack_st_BIO; typedef int (*sk_BIO_compfunc)(const BIO * const *a, const BIO *const *b); typedef void (*sk_BIO_freefunc)(BIO *a); typedef BIO * (*sk_BIO_copyfunc)(const BIO *a); static __attribute__((unused)) inline int sk_BIO_num(const struct stack_st_BIO *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline BIO *sk_BIO_value(const struct stack_st_BIO *sk, int idx) { return (BIO *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_BIO *sk_BIO_new(sk_BIO_compfunc compare) { return (struct stack_st_BIO *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_BIO *sk_BIO_new_null(void) { return (struct stack_st_BIO *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_BIO *sk_BIO_new_reserve(sk_BIO_compfunc compare, int n) { return (struct stack_st_BIO *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_BIO_reserve(struct stack_st_BIO *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_BIO_free(struct stack_st_BIO *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_BIO_zero(struct stack_st_BIO *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline BIO *sk_BIO_delete(struct stack_st_BIO *sk, int i) { return (BIO *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline BIO *sk_BIO_delete_ptr(struct stack_st_BIO *sk, BIO *ptr) { return (BIO *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_BIO_push(struct stack_st_BIO *sk, BIO *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_BIO_unshift(struct stack_st_BIO *sk, BIO *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline BIO *sk_BIO_pop(struct stack_st_BIO *sk) { return (BIO *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline BIO *sk_BIO_shift(struct stack_st_BIO *sk) { return (BIO *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_BIO_pop_free(struct stack_st_BIO *sk, sk_BIO_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_BIO_insert(struct stack_st_BIO *sk, BIO *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline BIO *sk_BIO_set(struct stack_st_BIO *sk, int idx, BIO *ptr) { return (BIO *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_BIO_find(struct stack_st_BIO *sk, BIO *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_BIO_find_ex(struct stack_st_BIO *sk, BIO *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_BIO_sort(struct stack_st_BIO *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_BIO_is_sorted(const struct stack_st_BIO *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_BIO * sk_BIO_dup(const struct stack_st_BIO *sk) { return (struct stack_st_BIO *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_BIO *sk_BIO_deep_copy(const struct stack_st_BIO *sk, sk_BIO_copyfunc copyfunc, sk_BIO_freefunc freefunc) { return (struct stack_st_BIO *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_BIO_compfunc sk_BIO_set_cmp_func(struct stack_st_BIO *sk, sk_BIO_compfunc compare) { return (sk_BIO_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }


typedef int asn1_ps_func (BIO *b, unsigned char **pbuf, int *plen,
                          void *parg);
# 487 "/usr/include/openssl/bio.h" 3 4
size_t BIO_ctrl_pending(BIO *b);
size_t BIO_ctrl_wpending(BIO *b);
# 507 "/usr/include/openssl/bio.h" 3 4
size_t BIO_ctrl_get_write_guarantee(BIO *b);
size_t BIO_ctrl_get_read_request(BIO *b);
int BIO_ctrl_reset_read_request(BIO *b);
# 529 "/usr/include/openssl/bio.h" 3 4
int BIO_set_ex_data(BIO *bio, int idx, void *data);
void *BIO_get_ex_data(BIO *bio, int idx);
uint64_t BIO_number_read(BIO *bio);
uint64_t BIO_number_written(BIO *bio);


int BIO_asn1_set_prefix(BIO *b, asn1_ps_func *prefix,
                        asn1_ps_func *prefix_free);
int BIO_asn1_get_prefix(BIO *b, asn1_ps_func **pprefix,
                        asn1_ps_func **pprefix_free);
int BIO_asn1_set_suffix(BIO *b, asn1_ps_func *suffix,
                        asn1_ps_func *suffix_free);
int BIO_asn1_get_suffix(BIO *b, asn1_ps_func **psuffix,
                        asn1_ps_func **psuffix_free);

const BIO_METHOD *BIO_s_file(void);
BIO *BIO_new_file(const char *filename, const char *mode);

BIO *BIO_new_fp(FILE *stream, int close_flag);

BIO *BIO_new(const BIO_METHOD *type);
int BIO_free(BIO *a);
void BIO_set_data(BIO *a, void *ptr);
void *BIO_get_data(BIO *a);
void BIO_set_init(BIO *a, int init);
int BIO_get_init(BIO *a);
void BIO_set_shutdown(BIO *a, int shut);
int BIO_get_shutdown(BIO *a);
void BIO_vfree(BIO *a);
int BIO_up_ref(BIO *a);
int BIO_read(BIO *b, void *data, int dlen);
int BIO_read_ex(BIO *b, void *data, size_t dlen, size_t *readbytes);
int BIO_gets(BIO *bp, char *buf, int size);
int BIO_write(BIO *b, const void *data, int dlen);
int BIO_write_ex(BIO *b, const void *data, size_t dlen, size_t *written);
int BIO_puts(BIO *bp, const char *buf);
int BIO_indent(BIO *b, int indent, int max);
long BIO_ctrl(BIO *bp, int cmd, long larg, void *parg);
long BIO_callback_ctrl(BIO *b, int cmd, BIO_info_cb *fp);
void *BIO_ptr_ctrl(BIO *bp, int cmd, long larg);
long BIO_int_ctrl(BIO *bp, int cmd, long larg, int iarg);
BIO *BIO_push(BIO *b, BIO *append);
BIO *BIO_pop(BIO *b);
void BIO_free_all(BIO *a);
BIO *BIO_find_type(BIO *b, int bio_type);
BIO *BIO_next(BIO *b);
void BIO_set_next(BIO *b, BIO *next);
BIO *BIO_get_retry_BIO(BIO *bio, int *reason);
int BIO_get_retry_reason(BIO *bio);
void BIO_set_retry_reason(BIO *bio, int reason);
BIO *BIO_dup_chain(BIO *in);

int BIO_nread0(BIO *bio, char **buf);
int BIO_nread(BIO *bio, char **buf, int num);
int BIO_nwrite0(BIO *bio, char **buf);
int BIO_nwrite(BIO *bio, char **buf, int num);

long BIO_debug_callback(BIO *bio, int cmd, const char *argp, int argi,
                        long argl, long ret);

const BIO_METHOD *BIO_s_mem(void);
const BIO_METHOD *BIO_s_secmem(void);
BIO *BIO_new_mem_buf(const void *buf, int len);

const BIO_METHOD *BIO_s_socket(void);
const BIO_METHOD *BIO_s_connect(void);
const BIO_METHOD *BIO_s_accept(void);

const BIO_METHOD *BIO_s_fd(void);
const BIO_METHOD *BIO_s_log(void);
const BIO_METHOD *BIO_s_bio(void);
const BIO_METHOD *BIO_s_null(void);
const BIO_METHOD *BIO_f_null(void);
const BIO_METHOD *BIO_f_buffer(void);
const BIO_METHOD *BIO_f_linebuffer(void);
const BIO_METHOD *BIO_f_nbio_test(void);

const BIO_METHOD *BIO_s_datagram(void);
int BIO_dgram_non_fatal_error(int error);
BIO *BIO_new_dgram(int fd, int close_flag);
# 624 "/usr/include/openssl/bio.h" 3 4
int BIO_sock_should_retry(int i);
int BIO_sock_non_fatal_error(int error);


int BIO_fd_should_retry(int i);
int BIO_fd_non_fatal_error(int error);
int BIO_dump_cb(int (*cb) (const void *data, size_t len, void *u),
                void *u, const char *s, int len);
int BIO_dump_indent_cb(int (*cb) (const void *data, size_t len, void *u),
                       void *u, const char *s, int len, int indent);
int BIO_dump(BIO *b, const char *bytes, int len);
int BIO_dump_indent(BIO *b, const char *bytes, int len, int indent);

int BIO_dump_fp(FILE *fp, const char *s, int len);
int BIO_dump_indent_fp(FILE *fp, const char *s, int len, int indent);

int BIO_hex_string(BIO *out, int indent, int width, unsigned char *data,
                   int datalen);


BIO_ADDR *BIO_ADDR_new(void);
int BIO_ADDR_rawmake(BIO_ADDR *ap, int family,
                     const void *where, size_t wherelen, unsigned short port);
void BIO_ADDR_free(BIO_ADDR *);
void BIO_ADDR_clear(BIO_ADDR *ap);
int BIO_ADDR_family(const BIO_ADDR *ap);
int BIO_ADDR_rawaddress(const BIO_ADDR *ap, void *p, size_t *l);
unsigned short BIO_ADDR_rawport(const BIO_ADDR *ap);
char *BIO_ADDR_hostname_string(const BIO_ADDR *ap, int numeric);
char *BIO_ADDR_service_string(const BIO_ADDR *ap, int numeric);
char *BIO_ADDR_path_string(const BIO_ADDR *ap);

const BIO_ADDRINFO *BIO_ADDRINFO_next(const BIO_ADDRINFO *bai);
int BIO_ADDRINFO_family(const BIO_ADDRINFO *bai);
int BIO_ADDRINFO_socktype(const BIO_ADDRINFO *bai);
int BIO_ADDRINFO_protocol(const BIO_ADDRINFO *bai);
const BIO_ADDR *BIO_ADDRINFO_address(const BIO_ADDRINFO *bai);
void BIO_ADDRINFO_free(BIO_ADDRINFO *bai);

enum BIO_hostserv_priorities {
    BIO_PARSE_PRIO_HOST, BIO_PARSE_PRIO_SERV
};
int BIO_parse_hostserv(const char *hostserv, char **host, char **service,
                       enum BIO_hostserv_priorities hostserv_prio);
enum BIO_lookup_type {
    BIO_LOOKUP_CLIENT, BIO_LOOKUP_SERVER
};
int BIO_lookup(const char *host, const char *service,
               enum BIO_lookup_type lookup_type,
               int family, int socktype, BIO_ADDRINFO **res);
int BIO_lookup_ex(const char *host, const char *service,
                  int lookup_type, int family, int socktype, int protocol,
                  BIO_ADDRINFO **res);
int BIO_sock_error(int sock);
int BIO_socket_ioctl(int fd, long type, void *arg);
int BIO_socket_nbio(int fd, int mode);
int BIO_sock_init(void);



int BIO_set_tcp_ndelay(int sock, int turn_on);

struct hostent *BIO_gethostbyname(const char *name) __attribute__ ((deprecated));
int BIO_get_port(const char *str, unsigned short *port_ptr) __attribute__ ((deprecated));
int BIO_get_host_ip(const char *str, unsigned char *ip) __attribute__ ((deprecated));
int BIO_get_accept_socket(char *host_port, int mode) __attribute__ ((deprecated));
int BIO_accept(int sock, char **ip_port) __attribute__ ((deprecated));

union BIO_sock_info_u {
    BIO_ADDR *addr;
};
enum BIO_sock_info_type {
    BIO_SOCK_INFO_ADDRESS
};
int BIO_sock_info(int sock,
                  enum BIO_sock_info_type type, union BIO_sock_info_u *info);







int BIO_socket(int domain, int socktype, int protocol, int options);
int BIO_connect(int sock, const BIO_ADDR *addr, int options);
int BIO_bind(int sock, const BIO_ADDR *addr, int options);
int BIO_listen(int sock, const BIO_ADDR *addr, int options);
int BIO_accept_ex(int accept_sock, BIO_ADDR *addr, int options);
int BIO_closesocket(int sock);

BIO *BIO_new_socket(int sock, int close_flag);
BIO *BIO_new_connect(const char *host_port);
BIO *BIO_new_accept(const char *host_port);


BIO *BIO_new_fd(int fd, int close_flag);

int BIO_new_bio_pair(BIO **bio1, size_t writebuf1,
                     BIO **bio2, size_t writebuf2);






void BIO_copy_next_retry(BIO *b);
# 752 "/usr/include/openssl/bio.h" 3 4
int BIO_printf(BIO *bio, const char *format, ...)
__attribute__((__format__(__gnu_printf__, 2, 3)));
int BIO_vprintf(BIO *bio, const char *format, va_list args)
__attribute__((__format__(__gnu_printf__, 2, 0)));
int BIO_snprintf(char *buf, size_t n, const char *format, ...)
__attribute__((__format__(__gnu_printf__, 3, 4)));
int BIO_vsnprintf(char *buf, size_t n, const char *format, va_list args)
__attribute__((__format__(__gnu_printf__, 3, 0)));




BIO_METHOD *BIO_meth_new(int type, const char *name);
void BIO_meth_free(BIO_METHOD *biom);
int (*BIO_meth_get_write(const BIO_METHOD *biom)) (BIO *, const char *, int);
int (*BIO_meth_get_write_ex(const BIO_METHOD *biom)) (BIO *, const char *, size_t,
                                                size_t *);
int BIO_meth_set_write(BIO_METHOD *biom,
                       int (*write) (BIO *, const char *, int));
int BIO_meth_set_write_ex(BIO_METHOD *biom,
                       int (*bwrite) (BIO *, const char *, size_t, size_t *));
int (*BIO_meth_get_read(const BIO_METHOD *biom)) (BIO *, char *, int);
int (*BIO_meth_get_read_ex(const BIO_METHOD *biom)) (BIO *, char *, size_t, size_t *);
int BIO_meth_set_read(BIO_METHOD *biom,
                      int (*read) (BIO *, char *, int));
int BIO_meth_set_read_ex(BIO_METHOD *biom,
                         int (*bread) (BIO *, char *, size_t, size_t *));
int (*BIO_meth_get_puts(const BIO_METHOD *biom)) (BIO *, const char *);
int BIO_meth_set_puts(BIO_METHOD *biom,
                      int (*puts) (BIO *, const char *));
int (*BIO_meth_get_gets(const BIO_METHOD *biom)) (BIO *, char *, int);
int BIO_meth_set_gets(BIO_METHOD *biom,
                      int (*gets) (BIO *, char *, int));
long (*BIO_meth_get_ctrl(const BIO_METHOD *biom)) (BIO *, int, long, void *);
int BIO_meth_set_ctrl(BIO_METHOD *biom,
                      long (*ctrl) (BIO *, int, long, void *));
int (*BIO_meth_get_create(const BIO_METHOD *bion)) (BIO *);
int BIO_meth_set_create(BIO_METHOD *biom, int (*create) (BIO *));
int (*BIO_meth_get_destroy(const BIO_METHOD *biom)) (BIO *);
int BIO_meth_set_destroy(BIO_METHOD *biom, int (*destroy) (BIO *));
long (*BIO_meth_get_callback_ctrl(const BIO_METHOD *biom))
                                 (BIO *, int, BIO_info_cb *);
int BIO_meth_set_callback_ctrl(BIO_METHOD *biom,
                               long (*callback_ctrl) (BIO *, int,
                                                      BIO_info_cb *));
# 15 "/usr/include/openssl/pem.h" 2 3 4

# 1 "/usr/include/openssl/evp.h" 1 3 4
# 13 "/usr/include/openssl/evp.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 14 "/usr/include/openssl/evp.h" 2 3 4



# 1 "/usr/include/openssl/evperr.h" 1 3 4
# 19 "/usr/include/openssl/evperr.h" 3 4
int ERR_load_EVP_strings(void);
# 18 "/usr/include/openssl/evp.h" 2 3 4
# 28 "/usr/include/openssl/evp.h" 3 4
# 1 "/usr/include/openssl/objects.h" 1 3 4
# 13 "/usr/include/openssl/objects.h" 3 4
# 1 "/usr/include/openssl/obj_mac.h" 1 3 4
# 14 "/usr/include/openssl/objects.h" 2 3 4

# 1 "/usr/include/openssl/asn1.h" 1 3 4
# 15 "/usr/include/openssl/asn1.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 16 "/usr/include/openssl/asn1.h" 2 3 4


# 1 "/usr/include/openssl/asn1err.h" 1 3 4
# 19 "/usr/include/openssl/asn1err.h" 3 4
int ERR_load_ASN1_strings(void);
# 19 "/usr/include/openssl/asn1.h" 2 3 4




# 1 "/usr/include/openssl/bn.h" 1 3 4
# 18 "/usr/include/openssl/bn.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 19 "/usr/include/openssl/bn.h" 2 3 4


# 1 "/usr/include/openssl/bnerr.h" 1 3 4
# 21 "/usr/include/openssl/bnerr.h" 3 4
int ERR_load_BN_strings(void);
# 22 "/usr/include/openssl/bn.h" 2 3 4
# 70 "/usr/include/openssl/bn.h" 3 4
void BN_set_flags(BIGNUM *b, int n);
int BN_get_flags(const BIGNUM *b, int n);
# 88 "/usr/include/openssl/bn.h" 3 4
void BN_with_flags(BIGNUM *dest, const BIGNUM *b, int flags);


int BN_GENCB_call(BN_GENCB *cb, int a, int b);

BN_GENCB *BN_GENCB_new(void);
void BN_GENCB_free(BN_GENCB *cb);


void BN_GENCB_set_old(BN_GENCB *gencb, void (*callback) (int, int, void *),
                      void *cb_arg);


void BN_GENCB_set(BN_GENCB *gencb, int (*callback) (int, int, BN_GENCB *),
                  void *cb_arg);

void *BN_GENCB_get_arg(BN_GENCB *cb);
# 183 "/usr/include/openssl/bn.h" 3 4
int BN_abs_is_word(const BIGNUM *a, const unsigned long w);
int BN_is_zero(const BIGNUM *a);
int BN_is_one(const BIGNUM *a);
int BN_is_word(const BIGNUM *a, const unsigned long w);
int BN_is_odd(const BIGNUM *a);



void BN_zero_ex(BIGNUM *a);







const BIGNUM *BN_value_one(void);
char *BN_options(void);
BN_CTX *BN_CTX_new(void);
BN_CTX *BN_CTX_secure_new(void);
void BN_CTX_free(BN_CTX *c);
void BN_CTX_start(BN_CTX *ctx);
BIGNUM *BN_CTX_get(BN_CTX *ctx);
void BN_CTX_end(BN_CTX *ctx);
int BN_rand(BIGNUM *rnd, int bits, int top, int bottom);
int BN_priv_rand(BIGNUM *rnd, int bits, int top, int bottom);
int BN_rand_range(BIGNUM *rnd, const BIGNUM *range);
int BN_priv_rand_range(BIGNUM *rnd, const BIGNUM *range);
int BN_pseudo_rand(BIGNUM *rnd, int bits, int top, int bottom);
int BN_pseudo_rand_range(BIGNUM *rnd, const BIGNUM *range);
int BN_num_bits(const BIGNUM *a);
int BN_num_bits_word(unsigned long l);
int BN_security_bits(int L, int N);
BIGNUM *BN_new(void);
BIGNUM *BN_secure_new(void);
void BN_clear_free(BIGNUM *a);
BIGNUM *BN_copy(BIGNUM *a, const BIGNUM *b);
void BN_swap(BIGNUM *a, BIGNUM *b);
BIGNUM *BN_bin2bn(const unsigned char *s, int len, BIGNUM *ret);
int BN_bn2bin(const BIGNUM *a, unsigned char *to);
int BN_bn2binpad(const BIGNUM *a, unsigned char *to, int tolen);
BIGNUM *BN_lebin2bn(const unsigned char *s, int len, BIGNUM *ret);
int BN_bn2lebinpad(const BIGNUM *a, unsigned char *to, int tolen);
BIGNUM *BN_mpi2bn(const unsigned char *s, int len, BIGNUM *ret);
int BN_bn2mpi(const BIGNUM *a, unsigned char *to);
int BN_sub(BIGNUM *r, const BIGNUM *a, const BIGNUM *b);
int BN_usub(BIGNUM *r, const BIGNUM *a, const BIGNUM *b);
int BN_uadd(BIGNUM *r, const BIGNUM *a, const BIGNUM *b);
int BN_add(BIGNUM *r, const BIGNUM *a, const BIGNUM *b);
int BN_mul(BIGNUM *r, const BIGNUM *a, const BIGNUM *b, BN_CTX *ctx);
int BN_sqr(BIGNUM *r, const BIGNUM *a, BN_CTX *ctx);




void BN_set_negative(BIGNUM *b, int n);




int BN_is_negative(const BIGNUM *b);

int BN_div(BIGNUM *dv, BIGNUM *rem, const BIGNUM *m, const BIGNUM *d,
           BN_CTX *ctx);

int BN_nnmod(BIGNUM *r, const BIGNUM *m, const BIGNUM *d, BN_CTX *ctx);
int BN_mod_add(BIGNUM *r, const BIGNUM *a, const BIGNUM *b, const BIGNUM *m,
               BN_CTX *ctx);
int BN_mod_add_quick(BIGNUM *r, const BIGNUM *a, const BIGNUM *b,
                     const BIGNUM *m);
int BN_mod_sub(BIGNUM *r, const BIGNUM *a, const BIGNUM *b, const BIGNUM *m,
               BN_CTX *ctx);
int BN_mod_sub_quick(BIGNUM *r, const BIGNUM *a, const BIGNUM *b,
                     const BIGNUM *m);
int BN_mod_mul(BIGNUM *r, const BIGNUM *a, const BIGNUM *b, const BIGNUM *m,
               BN_CTX *ctx);
int BN_mod_sqr(BIGNUM *r, const BIGNUM *a, const BIGNUM *m, BN_CTX *ctx);
int BN_mod_lshift1(BIGNUM *r, const BIGNUM *a, const BIGNUM *m, BN_CTX *ctx);
int BN_mod_lshift1_quick(BIGNUM *r, const BIGNUM *a, const BIGNUM *m);
int BN_mod_lshift(BIGNUM *r, const BIGNUM *a, int n, const BIGNUM *m,
                  BN_CTX *ctx);
int BN_mod_lshift_quick(BIGNUM *r, const BIGNUM *a, int n, const BIGNUM *m);

unsigned long BN_mod_word(const BIGNUM *a, unsigned long w);
unsigned long BN_div_word(BIGNUM *a, unsigned long w);
int BN_mul_word(BIGNUM *a, unsigned long w);
int BN_add_word(BIGNUM *a, unsigned long w);
int BN_sub_word(BIGNUM *a, unsigned long w);
int BN_set_word(BIGNUM *a, unsigned long w);
unsigned long BN_get_word(const BIGNUM *a);

int BN_cmp(const BIGNUM *a, const BIGNUM *b);
void BN_free(BIGNUM *a);
int BN_is_bit_set(const BIGNUM *a, int n);
int BN_lshift(BIGNUM *r, const BIGNUM *a, int n);
int BN_lshift1(BIGNUM *r, const BIGNUM *a);
int BN_exp(BIGNUM *r, const BIGNUM *a, const BIGNUM *p, BN_CTX *ctx);

int BN_mod_exp(BIGNUM *r, const BIGNUM *a, const BIGNUM *p,
               const BIGNUM *m, BN_CTX *ctx);
int BN_mod_exp_mont(BIGNUM *r, const BIGNUM *a, const BIGNUM *p,
                    const BIGNUM *m, BN_CTX *ctx, BN_MONT_CTX *m_ctx);
int BN_mod_exp_mont_consttime(BIGNUM *rr, const BIGNUM *a, const BIGNUM *p,
                              const BIGNUM *m, BN_CTX *ctx,
                              BN_MONT_CTX *in_mont);
int BN_mod_exp_mont_word(BIGNUM *r, unsigned long a, const BIGNUM *p,
                         const BIGNUM *m, BN_CTX *ctx, BN_MONT_CTX *m_ctx);
int BN_mod_exp2_mont(BIGNUM *r, const BIGNUM *a1, const BIGNUM *p1,
                     const BIGNUM *a2, const BIGNUM *p2, const BIGNUM *m,
                     BN_CTX *ctx, BN_MONT_CTX *m_ctx);
int BN_mod_exp_simple(BIGNUM *r, const BIGNUM *a, const BIGNUM *p,
                      const BIGNUM *m, BN_CTX *ctx);

int BN_mask_bits(BIGNUM *a, int n);

int BN_print_fp(FILE *fp, const BIGNUM *a);

int BN_print(BIO *bio, const BIGNUM *a);
int BN_reciprocal(BIGNUM *r, const BIGNUM *m, int len, BN_CTX *ctx);
int BN_rshift(BIGNUM *r, const BIGNUM *a, int n);
int BN_rshift1(BIGNUM *r, const BIGNUM *a);
void BN_clear(BIGNUM *a);
BIGNUM *BN_dup(const BIGNUM *a);
int BN_ucmp(const BIGNUM *a, const BIGNUM *b);
int BN_set_bit(BIGNUM *a, int n);
int BN_clear_bit(BIGNUM *a, int n);
char *BN_bn2hex(const BIGNUM *a);
char *BN_bn2dec(const BIGNUM *a);
int BN_hex2bn(BIGNUM **a, const char *str);
int BN_dec2bn(BIGNUM **a, const char *str);
int BN_asc2bn(BIGNUM **a, const char *str);
int BN_gcd(BIGNUM *r, const BIGNUM *a, const BIGNUM *b, BN_CTX *ctx);
int BN_kronecker(const BIGNUM *a, const BIGNUM *b, BN_CTX *ctx);


BIGNUM *BN_mod_inverse(BIGNUM *ret,
                       const BIGNUM *a, const BIGNUM *n, BN_CTX *ctx);
BIGNUM *BN_mod_sqrt(BIGNUM *ret,
                    const BIGNUM *a, const BIGNUM *n, BN_CTX *ctx);

void BN_consttime_swap(unsigned long swap, BIGNUM *a, BIGNUM *b, int nwords);


BIGNUM *BN_generate_prime(BIGNUM *ret, int bits, int safe, const BIGNUM *add, const BIGNUM *rem, void (*callback) (int, int, void *), void *cb_arg) __attribute__ ((deprecated));





int BN_is_prime(const BIGNUM *p, int nchecks, void (*callback) (int, int, void *), BN_CTX *ctx, void *cb_arg) __attribute__ ((deprecated));



int BN_is_prime_fasttest(const BIGNUM *p, int nchecks, void (*callback) (int, int, void *), BN_CTX *ctx, void *cb_arg, int do_trial_division) __attribute__ ((deprecated));






int BN_generate_prime_ex(BIGNUM *ret, int bits, int safe, const BIGNUM *add,
                         const BIGNUM *rem, BN_GENCB *cb);
int BN_is_prime_ex(const BIGNUM *p, int nchecks, BN_CTX *ctx, BN_GENCB *cb);
int BN_is_prime_fasttest_ex(const BIGNUM *p, int nchecks, BN_CTX *ctx,
                            int do_trial_division, BN_GENCB *cb);

int BN_X931_generate_Xpq(BIGNUM *Xp, BIGNUM *Xq, int nbits, BN_CTX *ctx);

int BN_X931_derive_prime_ex(BIGNUM *p, BIGNUM *p1, BIGNUM *p2,
                            const BIGNUM *Xp, const BIGNUM *Xp1,
                            const BIGNUM *Xp2, const BIGNUM *e, BN_CTX *ctx,
                            BN_GENCB *cb);
int BN_X931_generate_prime_ex(BIGNUM *p, BIGNUM *p1, BIGNUM *p2, BIGNUM *Xp1,
                              BIGNUM *Xp2, const BIGNUM *Xp, const BIGNUM *e,
                              BN_CTX *ctx, BN_GENCB *cb);

BN_MONT_CTX *BN_MONT_CTX_new(void);
int BN_mod_mul_montgomery(BIGNUM *r, const BIGNUM *a, const BIGNUM *b,
                          BN_MONT_CTX *mont, BN_CTX *ctx);
int BN_to_montgomery(BIGNUM *r, const BIGNUM *a, BN_MONT_CTX *mont,
                     BN_CTX *ctx);
int BN_from_montgomery(BIGNUM *r, const BIGNUM *a, BN_MONT_CTX *mont,
                       BN_CTX *ctx);
void BN_MONT_CTX_free(BN_MONT_CTX *mont);
int BN_MONT_CTX_set(BN_MONT_CTX *mont, const BIGNUM *mod, BN_CTX *ctx);
BN_MONT_CTX *BN_MONT_CTX_copy(BN_MONT_CTX *to, BN_MONT_CTX *from);
BN_MONT_CTX *BN_MONT_CTX_set_locked(BN_MONT_CTX **pmont, CRYPTO_RWLOCK *lock,
                                    const BIGNUM *mod, BN_CTX *ctx);





BN_BLINDING *BN_BLINDING_new(const BIGNUM *A, const BIGNUM *Ai, BIGNUM *mod);
void BN_BLINDING_free(BN_BLINDING *b);
int BN_BLINDING_update(BN_BLINDING *b, BN_CTX *ctx);
int BN_BLINDING_convert(BIGNUM *n, BN_BLINDING *b, BN_CTX *ctx);
int BN_BLINDING_invert(BIGNUM *n, BN_BLINDING *b, BN_CTX *ctx);
int BN_BLINDING_convert_ex(BIGNUM *n, BIGNUM *r, BN_BLINDING *b, BN_CTX *);
int BN_BLINDING_invert_ex(BIGNUM *n, const BIGNUM *r, BN_BLINDING *b,
                          BN_CTX *);

int BN_BLINDING_is_current_thread(BN_BLINDING *b);
void BN_BLINDING_set_current_thread(BN_BLINDING *b);
int BN_BLINDING_lock(BN_BLINDING *b);
int BN_BLINDING_unlock(BN_BLINDING *b);

unsigned long BN_BLINDING_get_flags(const BN_BLINDING *);
void BN_BLINDING_set_flags(BN_BLINDING *, unsigned long);
BN_BLINDING *BN_BLINDING_create_param(BN_BLINDING *b,
                                      const BIGNUM *e, BIGNUM *m, BN_CTX *ctx,
                                      int (*bn_mod_exp) (BIGNUM *r,
                                                         const BIGNUM *a,
                                                         const BIGNUM *p,
                                                         const BIGNUM *m,
                                                         BN_CTX *ctx,
                                                         BN_MONT_CTX *m_ctx),
                                      BN_MONT_CTX *m_ctx);

void BN_set_params(int mul, int high, int low, int mont) __attribute__ ((deprecated));
int BN_get_params(int which) __attribute__ ((deprecated));


BN_RECP_CTX *BN_RECP_CTX_new(void);
void BN_RECP_CTX_free(BN_RECP_CTX *recp);
int BN_RECP_CTX_set(BN_RECP_CTX *recp, const BIGNUM *rdiv, BN_CTX *ctx);
int BN_mod_mul_reciprocal(BIGNUM *r, const BIGNUM *x, const BIGNUM *y,
                          BN_RECP_CTX *recp, BN_CTX *ctx);
int BN_mod_exp_recp(BIGNUM *r, const BIGNUM *a, const BIGNUM *p,
                    const BIGNUM *m, BN_CTX *ctx);
int BN_div_recp(BIGNUM *dv, BIGNUM *rem, const BIGNUM *m,
                BN_RECP_CTX *recp, BN_CTX *ctx);
# 428 "/usr/include/openssl/bn.h" 3 4
int BN_GF2m_add(BIGNUM *r, const BIGNUM *a, const BIGNUM *b);




int BN_GF2m_mod(BIGNUM *r, const BIGNUM *a, const BIGNUM *p);

int BN_GF2m_mod_mul(BIGNUM *r, const BIGNUM *a, const BIGNUM *b,
                    const BIGNUM *p, BN_CTX *ctx);

int BN_GF2m_mod_sqr(BIGNUM *r, const BIGNUM *a, const BIGNUM *p, BN_CTX *ctx);

int BN_GF2m_mod_inv(BIGNUM *r, const BIGNUM *b, const BIGNUM *p, BN_CTX *ctx);

int BN_GF2m_mod_div(BIGNUM *r, const BIGNUM *a, const BIGNUM *b,
                    const BIGNUM *p, BN_CTX *ctx);

int BN_GF2m_mod_exp(BIGNUM *r, const BIGNUM *a, const BIGNUM *b,
                    const BIGNUM *p, BN_CTX *ctx);

int BN_GF2m_mod_sqrt(BIGNUM *r, const BIGNUM *a, const BIGNUM *p,
                     BN_CTX *ctx);

int BN_GF2m_mod_solve_quad(BIGNUM *r, const BIGNUM *a, const BIGNUM *p,
                           BN_CTX *ctx);
# 461 "/usr/include/openssl/bn.h" 3 4
int BN_GF2m_mod_arr(BIGNUM *r, const BIGNUM *a, const int p[]);

int BN_GF2m_mod_mul_arr(BIGNUM *r, const BIGNUM *a, const BIGNUM *b,
                        const int p[], BN_CTX *ctx);

int BN_GF2m_mod_sqr_arr(BIGNUM *r, const BIGNUM *a, const int p[],
                        BN_CTX *ctx);

int BN_GF2m_mod_inv_arr(BIGNUM *r, const BIGNUM *b, const int p[],
                        BN_CTX *ctx);

int BN_GF2m_mod_div_arr(BIGNUM *r, const BIGNUM *a, const BIGNUM *b,
                        const int p[], BN_CTX *ctx);

int BN_GF2m_mod_exp_arr(BIGNUM *r, const BIGNUM *a, const BIGNUM *b,
                        const int p[], BN_CTX *ctx);

int BN_GF2m_mod_sqrt_arr(BIGNUM *r, const BIGNUM *a,
                         const int p[], BN_CTX *ctx);

int BN_GF2m_mod_solve_quad_arr(BIGNUM *r, const BIGNUM *a,
                               const int p[], BN_CTX *ctx);
int BN_GF2m_poly2arr(const BIGNUM *a, int p[], int max);
int BN_GF2m_arr2poly(const int p[], BIGNUM *a);






int BN_nist_mod_192(BIGNUM *r, const BIGNUM *a, const BIGNUM *p, BN_CTX *ctx);
int BN_nist_mod_224(BIGNUM *r, const BIGNUM *a, const BIGNUM *p, BN_CTX *ctx);
int BN_nist_mod_256(BIGNUM *r, const BIGNUM *a, const BIGNUM *p, BN_CTX *ctx);
int BN_nist_mod_384(BIGNUM *r, const BIGNUM *a, const BIGNUM *p, BN_CTX *ctx);
int BN_nist_mod_521(BIGNUM *r, const BIGNUM *a, const BIGNUM *p, BN_CTX *ctx);

const BIGNUM *BN_get0_nist_prime_192(void);
const BIGNUM *BN_get0_nist_prime_224(void);
const BIGNUM *BN_get0_nist_prime_256(void);
const BIGNUM *BN_get0_nist_prime_384(void);
const BIGNUM *BN_get0_nist_prime_521(void);

int (*BN_nist_mod_func(const BIGNUM *p)) (BIGNUM *r, const BIGNUM *a,
                                          const BIGNUM *field, BN_CTX *ctx);

int BN_generate_dsa_nonce(BIGNUM *out, const BIGNUM *range,
                          const BIGNUM *priv, const unsigned char *message,
                          size_t message_len, BN_CTX *ctx);


BIGNUM *BN_get_rfc2409_prime_768(BIGNUM *bn);
BIGNUM *BN_get_rfc2409_prime_1024(BIGNUM *bn);


BIGNUM *BN_get_rfc3526_prime_1536(BIGNUM *bn);
BIGNUM *BN_get_rfc3526_prime_2048(BIGNUM *bn);
BIGNUM *BN_get_rfc3526_prime_3072(BIGNUM *bn);
BIGNUM *BN_get_rfc3526_prime_4096(BIGNUM *bn);
BIGNUM *BN_get_rfc3526_prime_6144(BIGNUM *bn);
BIGNUM *BN_get_rfc3526_prime_8192(BIGNUM *bn);
# 533 "/usr/include/openssl/bn.h" 3 4
int BN_bntest_rand(BIGNUM *rnd, int bits, int top, int bottom);
# 24 "/usr/include/openssl/asn1.h" 2 3 4
# 118 "/usr/include/openssl/asn1.h" 3 4
    struct X509_algor_st;
struct stack_st_X509_ALGOR; typedef int (*sk_X509_ALGOR_compfunc)(const X509_ALGOR * const *a, const X509_ALGOR *const *b); typedef void (*sk_X509_ALGOR_freefunc)(X509_ALGOR *a); typedef X509_ALGOR * (*sk_X509_ALGOR_copyfunc)(const X509_ALGOR *a); static __attribute__((unused)) inline int sk_X509_ALGOR_num(const struct stack_st_X509_ALGOR *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_ALGOR *sk_X509_ALGOR_value(const struct stack_st_X509_ALGOR *sk, int idx) { return (X509_ALGOR *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_X509_ALGOR *sk_X509_ALGOR_new(sk_X509_ALGOR_compfunc compare) { return (struct stack_st_X509_ALGOR *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_X509_ALGOR *sk_X509_ALGOR_new_null(void) { return (struct stack_st_X509_ALGOR *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_X509_ALGOR *sk_X509_ALGOR_new_reserve(sk_X509_ALGOR_compfunc compare, int n) { return (struct stack_st_X509_ALGOR *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_X509_ALGOR_reserve(struct stack_st_X509_ALGOR *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_X509_ALGOR_free(struct stack_st_X509_ALGOR *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_X509_ALGOR_zero(struct stack_st_X509_ALGOR *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_ALGOR *sk_X509_ALGOR_delete(struct stack_st_X509_ALGOR *sk, int i) { return (X509_ALGOR *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline X509_ALGOR *sk_X509_ALGOR_delete_ptr(struct stack_st_X509_ALGOR *sk, X509_ALGOR *ptr) { return (X509_ALGOR *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_ALGOR_push(struct stack_st_X509_ALGOR *sk, X509_ALGOR *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_ALGOR_unshift(struct stack_st_X509_ALGOR *sk, X509_ALGOR *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline X509_ALGOR *sk_X509_ALGOR_pop(struct stack_st_X509_ALGOR *sk) { return (X509_ALGOR *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_ALGOR *sk_X509_ALGOR_shift(struct stack_st_X509_ALGOR *sk) { return (X509_ALGOR *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_X509_ALGOR_pop_free(struct stack_st_X509_ALGOR *sk, sk_X509_ALGOR_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_X509_ALGOR_insert(struct stack_st_X509_ALGOR *sk, X509_ALGOR *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline X509_ALGOR *sk_X509_ALGOR_set(struct stack_st_X509_ALGOR *sk, int idx, X509_ALGOR *ptr) { return (X509_ALGOR *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_ALGOR_find(struct stack_st_X509_ALGOR *sk, X509_ALGOR *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_ALGOR_find_ex(struct stack_st_X509_ALGOR *sk, X509_ALGOR *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_X509_ALGOR_sort(struct stack_st_X509_ALGOR *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_X509_ALGOR_is_sorted(const struct stack_st_X509_ALGOR *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_X509_ALGOR * sk_X509_ALGOR_dup(const struct stack_st_X509_ALGOR *sk) { return (struct stack_st_X509_ALGOR *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_X509_ALGOR *sk_X509_ALGOR_deep_copy(const struct stack_st_X509_ALGOR *sk, sk_X509_ALGOR_copyfunc copyfunc, sk_X509_ALGOR_freefunc freefunc) { return (struct stack_st_X509_ALGOR *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_X509_ALGOR_compfunc sk_X509_ALGOR_set_cmp_func(struct stack_st_X509_ALGOR *sk, sk_X509_ALGOR_compfunc compare) { return (sk_X509_ALGOR_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }
# 146 "/usr/include/openssl/asn1.h" 3 4
struct asn1_string_st {
    int length;
    int type;
    unsigned char *data;





    long flags;
};







typedef struct ASN1_ENCODING_st {
    unsigned char *enc;
    long len;
    int modified;
} ASN1_ENCODING;
# 186 "/usr/include/openssl/asn1.h" 3 4
typedef struct asn1_string_table_st {
    int nid;
    long minsize;
    long maxsize;
    unsigned long mask;
    unsigned long flags;
} ASN1_STRING_TABLE;

struct stack_st_ASN1_STRING_TABLE; typedef int (*sk_ASN1_STRING_TABLE_compfunc)(const ASN1_STRING_TABLE * const *a, const ASN1_STRING_TABLE *const *b); typedef void (*sk_ASN1_STRING_TABLE_freefunc)(ASN1_STRING_TABLE *a); typedef ASN1_STRING_TABLE * (*sk_ASN1_STRING_TABLE_copyfunc)(const ASN1_STRING_TABLE *a); static __attribute__((unused)) inline int sk_ASN1_STRING_TABLE_num(const struct stack_st_ASN1_STRING_TABLE *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline ASN1_STRING_TABLE *sk_ASN1_STRING_TABLE_value(const struct stack_st_ASN1_STRING_TABLE *sk, int idx) { return (ASN1_STRING_TABLE *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_ASN1_STRING_TABLE *sk_ASN1_STRING_TABLE_new(sk_ASN1_STRING_TABLE_compfunc compare) { return (struct stack_st_ASN1_STRING_TABLE *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_ASN1_STRING_TABLE *sk_ASN1_STRING_TABLE_new_null(void) { return (struct stack_st_ASN1_STRING_TABLE *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_ASN1_STRING_TABLE *sk_ASN1_STRING_TABLE_new_reserve(sk_ASN1_STRING_TABLE_compfunc compare, int n) { return (struct stack_st_ASN1_STRING_TABLE *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_ASN1_STRING_TABLE_reserve(struct stack_st_ASN1_STRING_TABLE *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_ASN1_STRING_TABLE_free(struct stack_st_ASN1_STRING_TABLE *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_ASN1_STRING_TABLE_zero(struct stack_st_ASN1_STRING_TABLE *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline ASN1_STRING_TABLE *sk_ASN1_STRING_TABLE_delete(struct stack_st_ASN1_STRING_TABLE *sk, int i) { return (ASN1_STRING_TABLE *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline ASN1_STRING_TABLE *sk_ASN1_STRING_TABLE_delete_ptr(struct stack_st_ASN1_STRING_TABLE *sk, ASN1_STRING_TABLE *ptr) { return (ASN1_STRING_TABLE *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_ASN1_STRING_TABLE_push(struct stack_st_ASN1_STRING_TABLE *sk, ASN1_STRING_TABLE *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_ASN1_STRING_TABLE_unshift(struct stack_st_ASN1_STRING_TABLE *sk, ASN1_STRING_TABLE *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline ASN1_STRING_TABLE *sk_ASN1_STRING_TABLE_pop(struct stack_st_ASN1_STRING_TABLE *sk) { return (ASN1_STRING_TABLE *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline ASN1_STRING_TABLE *sk_ASN1_STRING_TABLE_shift(struct stack_st_ASN1_STRING_TABLE *sk) { return (ASN1_STRING_TABLE *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_ASN1_STRING_TABLE_pop_free(struct stack_st_ASN1_STRING_TABLE *sk, sk_ASN1_STRING_TABLE_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_ASN1_STRING_TABLE_insert(struct stack_st_ASN1_STRING_TABLE *sk, ASN1_STRING_TABLE *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline ASN1_STRING_TABLE *sk_ASN1_STRING_TABLE_set(struct stack_st_ASN1_STRING_TABLE *sk, int idx, ASN1_STRING_TABLE *ptr) { return (ASN1_STRING_TABLE *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_ASN1_STRING_TABLE_find(struct stack_st_ASN1_STRING_TABLE *sk, ASN1_STRING_TABLE *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_ASN1_STRING_TABLE_find_ex(struct stack_st_ASN1_STRING_TABLE *sk, ASN1_STRING_TABLE *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_ASN1_STRING_TABLE_sort(struct stack_st_ASN1_STRING_TABLE *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_ASN1_STRING_TABLE_is_sorted(const struct stack_st_ASN1_STRING_TABLE *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_ASN1_STRING_TABLE * sk_ASN1_STRING_TABLE_dup(const struct stack_st_ASN1_STRING_TABLE *sk) { return (struct stack_st_ASN1_STRING_TABLE *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_ASN1_STRING_TABLE *sk_ASN1_STRING_TABLE_deep_copy(const struct stack_st_ASN1_STRING_TABLE *sk, sk_ASN1_STRING_TABLE_copyfunc copyfunc, sk_ASN1_STRING_TABLE_freefunc freefunc) { return (struct stack_st_ASN1_STRING_TABLE *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_ASN1_STRING_TABLE_compfunc sk_ASN1_STRING_TABLE_set_cmp_func(struct stack_st_ASN1_STRING_TABLE *sk, sk_ASN1_STRING_TABLE_compfunc compare) { return (sk_ASN1_STRING_TABLE_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }
# 210 "/usr/include/openssl/asn1.h" 3 4
typedef struct ASN1_TEMPLATE_st ASN1_TEMPLATE;
typedef struct ASN1_TLC_st ASN1_TLC;

typedef struct ASN1_VALUE_st ASN1_VALUE;
# 277 "/usr/include/openssl/asn1.h" 3 4
typedef void *d2i_of_void(void **,const unsigned char **,long); typedef int i2d_of_void(void *,unsigned char **);
# 318 "/usr/include/openssl/asn1.h" 3 4
typedef const ASN1_ITEM ASN1_ITEM_EXP;
# 438 "/usr/include/openssl/asn1.h" 3 4
struct stack_st_ASN1_INTEGER; typedef int (*sk_ASN1_INTEGER_compfunc)(const ASN1_INTEGER * const *a, const ASN1_INTEGER *const *b); typedef void (*sk_ASN1_INTEGER_freefunc)(ASN1_INTEGER *a); typedef ASN1_INTEGER * (*sk_ASN1_INTEGER_copyfunc)(const ASN1_INTEGER *a); static __attribute__((unused)) inline int sk_ASN1_INTEGER_num(const struct stack_st_ASN1_INTEGER *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline ASN1_INTEGER *sk_ASN1_INTEGER_value(const struct stack_st_ASN1_INTEGER *sk, int idx) { return (ASN1_INTEGER *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_ASN1_INTEGER *sk_ASN1_INTEGER_new(sk_ASN1_INTEGER_compfunc compare) { return (struct stack_st_ASN1_INTEGER *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_ASN1_INTEGER *sk_ASN1_INTEGER_new_null(void) { return (struct stack_st_ASN1_INTEGER *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_ASN1_INTEGER *sk_ASN1_INTEGER_new_reserve(sk_ASN1_INTEGER_compfunc compare, int n) { return (struct stack_st_ASN1_INTEGER *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_ASN1_INTEGER_reserve(struct stack_st_ASN1_INTEGER *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_ASN1_INTEGER_free(struct stack_st_ASN1_INTEGER *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_ASN1_INTEGER_zero(struct stack_st_ASN1_INTEGER *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline ASN1_INTEGER *sk_ASN1_INTEGER_delete(struct stack_st_ASN1_INTEGER *sk, int i) { return (ASN1_INTEGER *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline ASN1_INTEGER *sk_ASN1_INTEGER_delete_ptr(struct stack_st_ASN1_INTEGER *sk, ASN1_INTEGER *ptr) { return (ASN1_INTEGER *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_ASN1_INTEGER_push(struct stack_st_ASN1_INTEGER *sk, ASN1_INTEGER *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_ASN1_INTEGER_unshift(struct stack_st_ASN1_INTEGER *sk, ASN1_INTEGER *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline ASN1_INTEGER *sk_ASN1_INTEGER_pop(struct stack_st_ASN1_INTEGER *sk) { return (ASN1_INTEGER *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline ASN1_INTEGER *sk_ASN1_INTEGER_shift(struct stack_st_ASN1_INTEGER *sk) { return (ASN1_INTEGER *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_ASN1_INTEGER_pop_free(struct stack_st_ASN1_INTEGER *sk, sk_ASN1_INTEGER_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_ASN1_INTEGER_insert(struct stack_st_ASN1_INTEGER *sk, ASN1_INTEGER *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline ASN1_INTEGER *sk_ASN1_INTEGER_set(struct stack_st_ASN1_INTEGER *sk, int idx, ASN1_INTEGER *ptr) { return (ASN1_INTEGER *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_ASN1_INTEGER_find(struct stack_st_ASN1_INTEGER *sk, ASN1_INTEGER *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_ASN1_INTEGER_find_ex(struct stack_st_ASN1_INTEGER *sk, ASN1_INTEGER *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_ASN1_INTEGER_sort(struct stack_st_ASN1_INTEGER *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_ASN1_INTEGER_is_sorted(const struct stack_st_ASN1_INTEGER *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_ASN1_INTEGER * sk_ASN1_INTEGER_dup(const struct stack_st_ASN1_INTEGER *sk) { return (struct stack_st_ASN1_INTEGER *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_ASN1_INTEGER *sk_ASN1_INTEGER_deep_copy(const struct stack_st_ASN1_INTEGER *sk, sk_ASN1_INTEGER_copyfunc copyfunc, sk_ASN1_INTEGER_freefunc freefunc) { return (struct stack_st_ASN1_INTEGER *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_ASN1_INTEGER_compfunc sk_ASN1_INTEGER_set_cmp_func(struct stack_st_ASN1_INTEGER *sk, sk_ASN1_INTEGER_compfunc compare) { return (sk_ASN1_INTEGER_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }

struct stack_st_ASN1_GENERALSTRING; typedef int (*sk_ASN1_GENERALSTRING_compfunc)(const ASN1_GENERALSTRING * const *a, const ASN1_GENERALSTRING *const *b); typedef void (*sk_ASN1_GENERALSTRING_freefunc)(ASN1_GENERALSTRING *a); typedef ASN1_GENERALSTRING * (*sk_ASN1_GENERALSTRING_copyfunc)(const ASN1_GENERALSTRING *a); static __attribute__((unused)) inline int sk_ASN1_GENERALSTRING_num(const struct stack_st_ASN1_GENERALSTRING *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline ASN1_GENERALSTRING *sk_ASN1_GENERALSTRING_value(const struct stack_st_ASN1_GENERALSTRING *sk, int idx) { return (ASN1_GENERALSTRING *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_ASN1_GENERALSTRING *sk_ASN1_GENERALSTRING_new(sk_ASN1_GENERALSTRING_compfunc compare) { return (struct stack_st_ASN1_GENERALSTRING *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_ASN1_GENERALSTRING *sk_ASN1_GENERALSTRING_new_null(void) { return (struct stack_st_ASN1_GENERALSTRING *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_ASN1_GENERALSTRING *sk_ASN1_GENERALSTRING_new_reserve(sk_ASN1_GENERALSTRING_compfunc compare, int n) { return (struct stack_st_ASN1_GENERALSTRING *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_ASN1_GENERALSTRING_reserve(struct stack_st_ASN1_GENERALSTRING *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_ASN1_GENERALSTRING_free(struct stack_st_ASN1_GENERALSTRING *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_ASN1_GENERALSTRING_zero(struct stack_st_ASN1_GENERALSTRING *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline ASN1_GENERALSTRING *sk_ASN1_GENERALSTRING_delete(struct stack_st_ASN1_GENERALSTRING *sk, int i) { return (ASN1_GENERALSTRING *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline ASN1_GENERALSTRING *sk_ASN1_GENERALSTRING_delete_ptr(struct stack_st_ASN1_GENERALSTRING *sk, ASN1_GENERALSTRING *ptr) { return (ASN1_GENERALSTRING *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_ASN1_GENERALSTRING_push(struct stack_st_ASN1_GENERALSTRING *sk, ASN1_GENERALSTRING *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_ASN1_GENERALSTRING_unshift(struct stack_st_ASN1_GENERALSTRING *sk, ASN1_GENERALSTRING *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline ASN1_GENERALSTRING *sk_ASN1_GENERALSTRING_pop(struct stack_st_ASN1_GENERALSTRING *sk) { return (ASN1_GENERALSTRING *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline ASN1_GENERALSTRING *sk_ASN1_GENERALSTRING_shift(struct stack_st_ASN1_GENERALSTRING *sk) { return (ASN1_GENERALSTRING *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_ASN1_GENERALSTRING_pop_free(struct stack_st_ASN1_GENERALSTRING *sk, sk_ASN1_GENERALSTRING_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_ASN1_GENERALSTRING_insert(struct stack_st_ASN1_GENERALSTRING *sk, ASN1_GENERALSTRING *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline ASN1_GENERALSTRING *sk_ASN1_GENERALSTRING_set(struct stack_st_ASN1_GENERALSTRING *sk, int idx, ASN1_GENERALSTRING *ptr) { return (ASN1_GENERALSTRING *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_ASN1_GENERALSTRING_find(struct stack_st_ASN1_GENERALSTRING *sk, ASN1_GENERALSTRING *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_ASN1_GENERALSTRING_find_ex(struct stack_st_ASN1_GENERALSTRING *sk, ASN1_GENERALSTRING *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_ASN1_GENERALSTRING_sort(struct stack_st_ASN1_GENERALSTRING *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_ASN1_GENERALSTRING_is_sorted(const struct stack_st_ASN1_GENERALSTRING *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_ASN1_GENERALSTRING * sk_ASN1_GENERALSTRING_dup(const struct stack_st_ASN1_GENERALSTRING *sk) { return (struct stack_st_ASN1_GENERALSTRING *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_ASN1_GENERALSTRING *sk_ASN1_GENERALSTRING_deep_copy(const struct stack_st_ASN1_GENERALSTRING *sk, sk_ASN1_GENERALSTRING_copyfunc copyfunc, sk_ASN1_GENERALSTRING_freefunc freefunc) { return (struct stack_st_ASN1_GENERALSTRING *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_ASN1_GENERALSTRING_compfunc sk_ASN1_GENERALSTRING_set_cmp_func(struct stack_st_ASN1_GENERALSTRING *sk, sk_ASN1_GENERALSTRING_compfunc compare) { return (sk_ASN1_GENERALSTRING_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }

struct stack_st_ASN1_UTF8STRING; typedef int (*sk_ASN1_UTF8STRING_compfunc)(const ASN1_UTF8STRING * const *a, const ASN1_UTF8STRING *const *b); typedef void (*sk_ASN1_UTF8STRING_freefunc)(ASN1_UTF8STRING *a); typedef ASN1_UTF8STRING * (*sk_ASN1_UTF8STRING_copyfunc)(const ASN1_UTF8STRING *a); static __attribute__((unused)) inline int sk_ASN1_UTF8STRING_num(const struct stack_st_ASN1_UTF8STRING *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline ASN1_UTF8STRING *sk_ASN1_UTF8STRING_value(const struct stack_st_ASN1_UTF8STRING *sk, int idx) { return (ASN1_UTF8STRING *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_ASN1_UTF8STRING *sk_ASN1_UTF8STRING_new(sk_ASN1_UTF8STRING_compfunc compare) { return (struct stack_st_ASN1_UTF8STRING *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_ASN1_UTF8STRING *sk_ASN1_UTF8STRING_new_null(void) { return (struct stack_st_ASN1_UTF8STRING *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_ASN1_UTF8STRING *sk_ASN1_UTF8STRING_new_reserve(sk_ASN1_UTF8STRING_compfunc compare, int n) { return (struct stack_st_ASN1_UTF8STRING *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_ASN1_UTF8STRING_reserve(struct stack_st_ASN1_UTF8STRING *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_ASN1_UTF8STRING_free(struct stack_st_ASN1_UTF8STRING *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_ASN1_UTF8STRING_zero(struct stack_st_ASN1_UTF8STRING *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline ASN1_UTF8STRING *sk_ASN1_UTF8STRING_delete(struct stack_st_ASN1_UTF8STRING *sk, int i) { return (ASN1_UTF8STRING *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline ASN1_UTF8STRING *sk_ASN1_UTF8STRING_delete_ptr(struct stack_st_ASN1_UTF8STRING *sk, ASN1_UTF8STRING *ptr) { return (ASN1_UTF8STRING *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_ASN1_UTF8STRING_push(struct stack_st_ASN1_UTF8STRING *sk, ASN1_UTF8STRING *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_ASN1_UTF8STRING_unshift(struct stack_st_ASN1_UTF8STRING *sk, ASN1_UTF8STRING *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline ASN1_UTF8STRING *sk_ASN1_UTF8STRING_pop(struct stack_st_ASN1_UTF8STRING *sk) { return (ASN1_UTF8STRING *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline ASN1_UTF8STRING *sk_ASN1_UTF8STRING_shift(struct stack_st_ASN1_UTF8STRING *sk) { return (ASN1_UTF8STRING *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_ASN1_UTF8STRING_pop_free(struct stack_st_ASN1_UTF8STRING *sk, sk_ASN1_UTF8STRING_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_ASN1_UTF8STRING_insert(struct stack_st_ASN1_UTF8STRING *sk, ASN1_UTF8STRING *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline ASN1_UTF8STRING *sk_ASN1_UTF8STRING_set(struct stack_st_ASN1_UTF8STRING *sk, int idx, ASN1_UTF8STRING *ptr) { return (ASN1_UTF8STRING *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_ASN1_UTF8STRING_find(struct stack_st_ASN1_UTF8STRING *sk, ASN1_UTF8STRING *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_ASN1_UTF8STRING_find_ex(struct stack_st_ASN1_UTF8STRING *sk, ASN1_UTF8STRING *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_ASN1_UTF8STRING_sort(struct stack_st_ASN1_UTF8STRING *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_ASN1_UTF8STRING_is_sorted(const struct stack_st_ASN1_UTF8STRING *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_ASN1_UTF8STRING * sk_ASN1_UTF8STRING_dup(const struct stack_st_ASN1_UTF8STRING *sk) { return (struct stack_st_ASN1_UTF8STRING *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_ASN1_UTF8STRING *sk_ASN1_UTF8STRING_deep_copy(const struct stack_st_ASN1_UTF8STRING *sk, sk_ASN1_UTF8STRING_copyfunc copyfunc, sk_ASN1_UTF8STRING_freefunc freefunc) { return (struct stack_st_ASN1_UTF8STRING *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_ASN1_UTF8STRING_compfunc sk_ASN1_UTF8STRING_set_cmp_func(struct stack_st_ASN1_UTF8STRING *sk, sk_ASN1_UTF8STRING_compfunc compare) { return (sk_ASN1_UTF8STRING_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }

typedef struct asn1_type_st {
    int type;
    union {
        char *ptr;
        ASN1_BOOLEAN boolean;
        ASN1_STRING *asn1_string;
        ASN1_OBJECT *object;
        ASN1_INTEGER *integer;
        ASN1_ENUMERATED *enumerated;
        ASN1_BIT_STRING *bit_string;
        ASN1_OCTET_STRING *octet_string;
        ASN1_PRINTABLESTRING *printablestring;
        ASN1_T61STRING *t61string;
        ASN1_IA5STRING *ia5string;
        ASN1_GENERALSTRING *generalstring;
        ASN1_BMPSTRING *bmpstring;
        ASN1_UNIVERSALSTRING *universalstring;
        ASN1_UTCTIME *utctime;
        ASN1_GENERALIZEDTIME *generalizedtime;
        ASN1_VISIBLESTRING *visiblestring;
        ASN1_UTF8STRING *utf8string;




        ASN1_STRING *set;
        ASN1_STRING *sequence;
        ASN1_VALUE *asn1_value;
    } value;
} ASN1_TYPE;

struct stack_st_ASN1_TYPE; typedef int (*sk_ASN1_TYPE_compfunc)(const ASN1_TYPE * const *a, const ASN1_TYPE *const *b); typedef void (*sk_ASN1_TYPE_freefunc)(ASN1_TYPE *a); typedef ASN1_TYPE * (*sk_ASN1_TYPE_copyfunc)(const ASN1_TYPE *a); static __attribute__((unused)) inline int sk_ASN1_TYPE_num(const struct stack_st_ASN1_TYPE *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline ASN1_TYPE *sk_ASN1_TYPE_value(const struct stack_st_ASN1_TYPE *sk, int idx) { return (ASN1_TYPE *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_ASN1_TYPE *sk_ASN1_TYPE_new(sk_ASN1_TYPE_compfunc compare) { return (struct stack_st_ASN1_TYPE *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_ASN1_TYPE *sk_ASN1_TYPE_new_null(void) { return (struct stack_st_ASN1_TYPE *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_ASN1_TYPE *sk_ASN1_TYPE_new_reserve(sk_ASN1_TYPE_compfunc compare, int n) { return (struct stack_st_ASN1_TYPE *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_ASN1_TYPE_reserve(struct stack_st_ASN1_TYPE *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_ASN1_TYPE_free(struct stack_st_ASN1_TYPE *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_ASN1_TYPE_zero(struct stack_st_ASN1_TYPE *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline ASN1_TYPE *sk_ASN1_TYPE_delete(struct stack_st_ASN1_TYPE *sk, int i) { return (ASN1_TYPE *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline ASN1_TYPE *sk_ASN1_TYPE_delete_ptr(struct stack_st_ASN1_TYPE *sk, ASN1_TYPE *ptr) { return (ASN1_TYPE *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_ASN1_TYPE_push(struct stack_st_ASN1_TYPE *sk, ASN1_TYPE *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_ASN1_TYPE_unshift(struct stack_st_ASN1_TYPE *sk, ASN1_TYPE *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline ASN1_TYPE *sk_ASN1_TYPE_pop(struct stack_st_ASN1_TYPE *sk) { return (ASN1_TYPE *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline ASN1_TYPE *sk_ASN1_TYPE_shift(struct stack_st_ASN1_TYPE *sk) { return (ASN1_TYPE *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_ASN1_TYPE_pop_free(struct stack_st_ASN1_TYPE *sk, sk_ASN1_TYPE_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_ASN1_TYPE_insert(struct stack_st_ASN1_TYPE *sk, ASN1_TYPE *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline ASN1_TYPE *sk_ASN1_TYPE_set(struct stack_st_ASN1_TYPE *sk, int idx, ASN1_TYPE *ptr) { return (ASN1_TYPE *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_ASN1_TYPE_find(struct stack_st_ASN1_TYPE *sk, ASN1_TYPE *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_ASN1_TYPE_find_ex(struct stack_st_ASN1_TYPE *sk, ASN1_TYPE *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_ASN1_TYPE_sort(struct stack_st_ASN1_TYPE *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_ASN1_TYPE_is_sorted(const struct stack_st_ASN1_TYPE *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_ASN1_TYPE * sk_ASN1_TYPE_dup(const struct stack_st_ASN1_TYPE *sk) { return (struct stack_st_ASN1_TYPE *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_ASN1_TYPE *sk_ASN1_TYPE_deep_copy(const struct stack_st_ASN1_TYPE *sk, sk_ASN1_TYPE_copyfunc copyfunc, sk_ASN1_TYPE_freefunc freefunc) { return (struct stack_st_ASN1_TYPE *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_ASN1_TYPE_compfunc sk_ASN1_TYPE_set_cmp_func(struct stack_st_ASN1_TYPE *sk, sk_ASN1_TYPE_compfunc compare) { return (sk_ASN1_TYPE_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }

typedef struct stack_st_ASN1_TYPE ASN1_SEQUENCE_ANY;

ASN1_SEQUENCE_ANY *d2i_ASN1_SEQUENCE_ANY(ASN1_SEQUENCE_ANY **a, const unsigned char **in, long len); int i2d_ASN1_SEQUENCE_ANY(const ASN1_SEQUENCE_ANY *a, unsigned char **out); extern const ASN1_ITEM ASN1_SEQUENCE_ANY_it;
ASN1_SEQUENCE_ANY *d2i_ASN1_SET_ANY(ASN1_SEQUENCE_ANY **a, const unsigned char **in, long len); int i2d_ASN1_SET_ANY(const ASN1_SEQUENCE_ANY *a, unsigned char **out); extern const ASN1_ITEM ASN1_SET_ANY_it;


typedef struct BIT_STRING_BITNAME_st {
    int bitnum;
    const char *lname;
    const char *sname;
} BIT_STRING_BITNAME;
# 518 "/usr/include/openssl/asn1.h" 3 4
ASN1_TYPE *ASN1_TYPE_new(void); void ASN1_TYPE_free(ASN1_TYPE *a); ASN1_TYPE *d2i_ASN1_TYPE(ASN1_TYPE **a, const unsigned char **in, long len); int i2d_ASN1_TYPE(ASN1_TYPE *a, unsigned char **out); extern const ASN1_ITEM ASN1_ANY_it;

int ASN1_TYPE_get(const ASN1_TYPE *a);
void ASN1_TYPE_set(ASN1_TYPE *a, int type, void *value);
int ASN1_TYPE_set1(ASN1_TYPE *a, int type, const void *value);
int ASN1_TYPE_cmp(const ASN1_TYPE *a, const ASN1_TYPE *b);

ASN1_TYPE *ASN1_TYPE_pack_sequence(const ASN1_ITEM *it, void *s, ASN1_TYPE **t);
void *ASN1_TYPE_unpack_sequence(const ASN1_ITEM *it, const ASN1_TYPE *t);

ASN1_OBJECT *ASN1_OBJECT_new(void);
void ASN1_OBJECT_free(ASN1_OBJECT *a);
int i2d_ASN1_OBJECT(const ASN1_OBJECT *a, unsigned char **pp);
ASN1_OBJECT *d2i_ASN1_OBJECT(ASN1_OBJECT **a, const unsigned char **pp,
                             long length);

extern const ASN1_ITEM ASN1_OBJECT_it;

struct stack_st_ASN1_OBJECT; typedef int (*sk_ASN1_OBJECT_compfunc)(const ASN1_OBJECT * const *a, const ASN1_OBJECT *const *b); typedef void (*sk_ASN1_OBJECT_freefunc)(ASN1_OBJECT *a); typedef ASN1_OBJECT * (*sk_ASN1_OBJECT_copyfunc)(const ASN1_OBJECT *a); static __attribute__((unused)) inline int sk_ASN1_OBJECT_num(const struct stack_st_ASN1_OBJECT *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline ASN1_OBJECT *sk_ASN1_OBJECT_value(const struct stack_st_ASN1_OBJECT *sk, int idx) { return (ASN1_OBJECT *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_ASN1_OBJECT *sk_ASN1_OBJECT_new(sk_ASN1_OBJECT_compfunc compare) { return (struct stack_st_ASN1_OBJECT *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_ASN1_OBJECT *sk_ASN1_OBJECT_new_null(void) { return (struct stack_st_ASN1_OBJECT *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_ASN1_OBJECT *sk_ASN1_OBJECT_new_reserve(sk_ASN1_OBJECT_compfunc compare, int n) { return (struct stack_st_ASN1_OBJECT *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_ASN1_OBJECT_reserve(struct stack_st_ASN1_OBJECT *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_ASN1_OBJECT_free(struct stack_st_ASN1_OBJECT *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_ASN1_OBJECT_zero(struct stack_st_ASN1_OBJECT *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline ASN1_OBJECT *sk_ASN1_OBJECT_delete(struct stack_st_ASN1_OBJECT *sk, int i) { return (ASN1_OBJECT *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline ASN1_OBJECT *sk_ASN1_OBJECT_delete_ptr(struct stack_st_ASN1_OBJECT *sk, ASN1_OBJECT *ptr) { return (ASN1_OBJECT *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_ASN1_OBJECT_push(struct stack_st_ASN1_OBJECT *sk, ASN1_OBJECT *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_ASN1_OBJECT_unshift(struct stack_st_ASN1_OBJECT *sk, ASN1_OBJECT *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline ASN1_OBJECT *sk_ASN1_OBJECT_pop(struct stack_st_ASN1_OBJECT *sk) { return (ASN1_OBJECT *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline ASN1_OBJECT *sk_ASN1_OBJECT_shift(struct stack_st_ASN1_OBJECT *sk) { return (ASN1_OBJECT *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_ASN1_OBJECT_pop_free(struct stack_st_ASN1_OBJECT *sk, sk_ASN1_OBJECT_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_ASN1_OBJECT_insert(struct stack_st_ASN1_OBJECT *sk, ASN1_OBJECT *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline ASN1_OBJECT *sk_ASN1_OBJECT_set(struct stack_st_ASN1_OBJECT *sk, int idx, ASN1_OBJECT *ptr) { return (ASN1_OBJECT *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_ASN1_OBJECT_find(struct stack_st_ASN1_OBJECT *sk, ASN1_OBJECT *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_ASN1_OBJECT_find_ex(struct stack_st_ASN1_OBJECT *sk, ASN1_OBJECT *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_ASN1_OBJECT_sort(struct stack_st_ASN1_OBJECT *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_ASN1_OBJECT_is_sorted(const struct stack_st_ASN1_OBJECT *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_ASN1_OBJECT * sk_ASN1_OBJECT_dup(const struct stack_st_ASN1_OBJECT *sk) { return (struct stack_st_ASN1_OBJECT *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_ASN1_OBJECT *sk_ASN1_OBJECT_deep_copy(const struct stack_st_ASN1_OBJECT *sk, sk_ASN1_OBJECT_copyfunc copyfunc, sk_ASN1_OBJECT_freefunc freefunc) { return (struct stack_st_ASN1_OBJECT *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_ASN1_OBJECT_compfunc sk_ASN1_OBJECT_set_cmp_func(struct stack_st_ASN1_OBJECT *sk, sk_ASN1_OBJECT_compfunc compare) { return (sk_ASN1_OBJECT_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }

ASN1_STRING *ASN1_STRING_new(void);
void ASN1_STRING_free(ASN1_STRING *a);
void ASN1_STRING_clear_free(ASN1_STRING *a);
int ASN1_STRING_copy(ASN1_STRING *dst, const ASN1_STRING *str);
ASN1_STRING *ASN1_STRING_dup(const ASN1_STRING *a);
ASN1_STRING *ASN1_STRING_type_new(int type);
int ASN1_STRING_cmp(const ASN1_STRING *a, const ASN1_STRING *b);




int ASN1_STRING_set(ASN1_STRING *str, const void *data, int len);
void ASN1_STRING_set0(ASN1_STRING *str, void *data, int len);
int ASN1_STRING_length(const ASN1_STRING *x);
void ASN1_STRING_length_set(ASN1_STRING *x, int n);
int ASN1_STRING_type(const ASN1_STRING *x);
unsigned char *ASN1_STRING_data(ASN1_STRING *x) __attribute__ ((deprecated));
const unsigned char *ASN1_STRING_get0_data(const ASN1_STRING *x);

ASN1_BIT_STRING *ASN1_BIT_STRING_new(void); void ASN1_BIT_STRING_free(ASN1_BIT_STRING *a); ASN1_BIT_STRING *d2i_ASN1_BIT_STRING(ASN1_BIT_STRING **a, const unsigned char **in, long len); int i2d_ASN1_BIT_STRING(ASN1_BIT_STRING *a, unsigned char **out); extern const ASN1_ITEM ASN1_BIT_STRING_it;
int ASN1_BIT_STRING_set(ASN1_BIT_STRING *a, unsigned char *d, int length);
int ASN1_BIT_STRING_set_bit(ASN1_BIT_STRING *a, int n, int value);
int ASN1_BIT_STRING_get_bit(const ASN1_BIT_STRING *a, int n);
int ASN1_BIT_STRING_check(const ASN1_BIT_STRING *a,
                          const unsigned char *flags, int flags_len);

int ASN1_BIT_STRING_name_print(BIO *out, ASN1_BIT_STRING *bs,
                               BIT_STRING_BITNAME *tbl, int indent);
int ASN1_BIT_STRING_num_asc(const char *name, BIT_STRING_BITNAME *tbl);
int ASN1_BIT_STRING_set_asc(ASN1_BIT_STRING *bs, const char *name, int value,
                            BIT_STRING_BITNAME *tbl);

ASN1_INTEGER *ASN1_INTEGER_new(void); void ASN1_INTEGER_free(ASN1_INTEGER *a); ASN1_INTEGER *d2i_ASN1_INTEGER(ASN1_INTEGER **a, const unsigned char **in, long len); int i2d_ASN1_INTEGER(ASN1_INTEGER *a, unsigned char **out); extern const ASN1_ITEM ASN1_INTEGER_it;
ASN1_INTEGER *d2i_ASN1_UINTEGER(ASN1_INTEGER **a, const unsigned char **pp,
                                long length);
ASN1_INTEGER *ASN1_INTEGER_dup(const ASN1_INTEGER *x);
int ASN1_INTEGER_cmp(const ASN1_INTEGER *x, const ASN1_INTEGER *y);

ASN1_ENUMERATED *ASN1_ENUMERATED_new(void); void ASN1_ENUMERATED_free(ASN1_ENUMERATED *a); ASN1_ENUMERATED *d2i_ASN1_ENUMERATED(ASN1_ENUMERATED **a, const unsigned char **in, long len); int i2d_ASN1_ENUMERATED(ASN1_ENUMERATED *a, unsigned char **out); extern const ASN1_ITEM ASN1_ENUMERATED_it;

int ASN1_UTCTIME_check(const ASN1_UTCTIME *a);
ASN1_UTCTIME *ASN1_UTCTIME_set(ASN1_UTCTIME *s, time_t t);
ASN1_UTCTIME *ASN1_UTCTIME_adj(ASN1_UTCTIME *s, time_t t,
                               int offset_day, long offset_sec);
int ASN1_UTCTIME_set_string(ASN1_UTCTIME *s, const char *str);
int ASN1_UTCTIME_cmp_time_t(const ASN1_UTCTIME *s, time_t t);

int ASN1_GENERALIZEDTIME_check(const ASN1_GENERALIZEDTIME *a);
ASN1_GENERALIZEDTIME *ASN1_GENERALIZEDTIME_set(ASN1_GENERALIZEDTIME *s,
                                               time_t t);
ASN1_GENERALIZEDTIME *ASN1_GENERALIZEDTIME_adj(ASN1_GENERALIZEDTIME *s,
                                               time_t t, int offset_day,
                                               long offset_sec);
int ASN1_GENERALIZEDTIME_set_string(ASN1_GENERALIZEDTIME *s, const char *str);

int ASN1_TIME_diff(int *pday, int *psec,
                   const ASN1_TIME *from, const ASN1_TIME *to);

ASN1_OCTET_STRING *ASN1_OCTET_STRING_new(void); void ASN1_OCTET_STRING_free(ASN1_OCTET_STRING *a); ASN1_OCTET_STRING *d2i_ASN1_OCTET_STRING(ASN1_OCTET_STRING **a, const unsigned char **in, long len); int i2d_ASN1_OCTET_STRING(ASN1_OCTET_STRING *a, unsigned char **out); extern const ASN1_ITEM ASN1_OCTET_STRING_it;
ASN1_OCTET_STRING *ASN1_OCTET_STRING_dup(const ASN1_OCTET_STRING *a);
int ASN1_OCTET_STRING_cmp(const ASN1_OCTET_STRING *a,
                          const ASN1_OCTET_STRING *b);
int ASN1_OCTET_STRING_set(ASN1_OCTET_STRING *str, const unsigned char *data,
                          int len);

ASN1_VISIBLESTRING *ASN1_VISIBLESTRING_new(void); void ASN1_VISIBLESTRING_free(ASN1_VISIBLESTRING *a); ASN1_VISIBLESTRING *d2i_ASN1_VISIBLESTRING(ASN1_VISIBLESTRING **a, const unsigned char **in, long len); int i2d_ASN1_VISIBLESTRING(ASN1_VISIBLESTRING *a, unsigned char **out); extern const ASN1_ITEM ASN1_VISIBLESTRING_it;
ASN1_UNIVERSALSTRING *ASN1_UNIVERSALSTRING_new(void); void ASN1_UNIVERSALSTRING_free(ASN1_UNIVERSALSTRING *a); ASN1_UNIVERSALSTRING *d2i_ASN1_UNIVERSALSTRING(ASN1_UNIVERSALSTRING **a, const unsigned char **in, long len); int i2d_ASN1_UNIVERSALSTRING(ASN1_UNIVERSALSTRING *a, unsigned char **out); extern const ASN1_ITEM ASN1_UNIVERSALSTRING_it;
ASN1_UTF8STRING *ASN1_UTF8STRING_new(void); void ASN1_UTF8STRING_free(ASN1_UTF8STRING *a); ASN1_UTF8STRING *d2i_ASN1_UTF8STRING(ASN1_UTF8STRING **a, const unsigned char **in, long len); int i2d_ASN1_UTF8STRING(ASN1_UTF8STRING *a, unsigned char **out); extern const ASN1_ITEM ASN1_UTF8STRING_it;
ASN1_NULL *ASN1_NULL_new(void); void ASN1_NULL_free(ASN1_NULL *a); ASN1_NULL *d2i_ASN1_NULL(ASN1_NULL **a, const unsigned char **in, long len); int i2d_ASN1_NULL(ASN1_NULL *a, unsigned char **out); extern const ASN1_ITEM ASN1_NULL_it;
ASN1_BMPSTRING *ASN1_BMPSTRING_new(void); void ASN1_BMPSTRING_free(ASN1_BMPSTRING *a); ASN1_BMPSTRING *d2i_ASN1_BMPSTRING(ASN1_BMPSTRING **a, const unsigned char **in, long len); int i2d_ASN1_BMPSTRING(ASN1_BMPSTRING *a, unsigned char **out); extern const ASN1_ITEM ASN1_BMPSTRING_it;

int UTF8_getc(const unsigned char *str, int len, unsigned long *val);
int UTF8_putc(unsigned char *str, int len, unsigned long value);

ASN1_STRING *ASN1_PRINTABLE_new(void); void ASN1_PRINTABLE_free(ASN1_STRING *a); ASN1_STRING *d2i_ASN1_PRINTABLE(ASN1_STRING **a, const unsigned char **in, long len); int i2d_ASN1_PRINTABLE(ASN1_STRING *a, unsigned char **out); extern const ASN1_ITEM ASN1_PRINTABLE_it;

ASN1_STRING *DIRECTORYSTRING_new(void); void DIRECTORYSTRING_free(ASN1_STRING *a); ASN1_STRING *d2i_DIRECTORYSTRING(ASN1_STRING **a, const unsigned char **in, long len); int i2d_DIRECTORYSTRING(ASN1_STRING *a, unsigned char **out); extern const ASN1_ITEM DIRECTORYSTRING_it;
ASN1_STRING *DISPLAYTEXT_new(void); void DISPLAYTEXT_free(ASN1_STRING *a); ASN1_STRING *d2i_DISPLAYTEXT(ASN1_STRING **a, const unsigned char **in, long len); int i2d_DISPLAYTEXT(ASN1_STRING *a, unsigned char **out); extern const ASN1_ITEM DISPLAYTEXT_it;
ASN1_PRINTABLESTRING *ASN1_PRINTABLESTRING_new(void); void ASN1_PRINTABLESTRING_free(ASN1_PRINTABLESTRING *a); ASN1_PRINTABLESTRING *d2i_ASN1_PRINTABLESTRING(ASN1_PRINTABLESTRING **a, const unsigned char **in, long len); int i2d_ASN1_PRINTABLESTRING(ASN1_PRINTABLESTRING *a, unsigned char **out); extern const ASN1_ITEM ASN1_PRINTABLESTRING_it;
ASN1_T61STRING *ASN1_T61STRING_new(void); void ASN1_T61STRING_free(ASN1_T61STRING *a); ASN1_T61STRING *d2i_ASN1_T61STRING(ASN1_T61STRING **a, const unsigned char **in, long len); int i2d_ASN1_T61STRING(ASN1_T61STRING *a, unsigned char **out); extern const ASN1_ITEM ASN1_T61STRING_it;
ASN1_IA5STRING *ASN1_IA5STRING_new(void); void ASN1_IA5STRING_free(ASN1_IA5STRING *a); ASN1_IA5STRING *d2i_ASN1_IA5STRING(ASN1_IA5STRING **a, const unsigned char **in, long len); int i2d_ASN1_IA5STRING(ASN1_IA5STRING *a, unsigned char **out); extern const ASN1_ITEM ASN1_IA5STRING_it;
ASN1_GENERALSTRING *ASN1_GENERALSTRING_new(void); void ASN1_GENERALSTRING_free(ASN1_GENERALSTRING *a); ASN1_GENERALSTRING *d2i_ASN1_GENERALSTRING(ASN1_GENERALSTRING **a, const unsigned char **in, long len); int i2d_ASN1_GENERALSTRING(ASN1_GENERALSTRING *a, unsigned char **out); extern const ASN1_ITEM ASN1_GENERALSTRING_it;
ASN1_UTCTIME *ASN1_UTCTIME_new(void); void ASN1_UTCTIME_free(ASN1_UTCTIME *a); ASN1_UTCTIME *d2i_ASN1_UTCTIME(ASN1_UTCTIME **a, const unsigned char **in, long len); int i2d_ASN1_UTCTIME(ASN1_UTCTIME *a, unsigned char **out); extern const ASN1_ITEM ASN1_UTCTIME_it;
ASN1_GENERALIZEDTIME *ASN1_GENERALIZEDTIME_new(void); void ASN1_GENERALIZEDTIME_free(ASN1_GENERALIZEDTIME *a); ASN1_GENERALIZEDTIME *d2i_ASN1_GENERALIZEDTIME(ASN1_GENERALIZEDTIME **a, const unsigned char **in, long len); int i2d_ASN1_GENERALIZEDTIME(ASN1_GENERALIZEDTIME *a, unsigned char **out); extern const ASN1_ITEM ASN1_GENERALIZEDTIME_it;
ASN1_TIME *ASN1_TIME_new(void); void ASN1_TIME_free(ASN1_TIME *a); ASN1_TIME *d2i_ASN1_TIME(ASN1_TIME **a, const unsigned char **in, long len); int i2d_ASN1_TIME(ASN1_TIME *a, unsigned char **out); extern const ASN1_ITEM ASN1_TIME_it;

extern const ASN1_ITEM ASN1_OCTET_STRING_NDEF_it;

ASN1_TIME *ASN1_TIME_set(ASN1_TIME *s, time_t t);
ASN1_TIME *ASN1_TIME_adj(ASN1_TIME *s, time_t t,
                         int offset_day, long offset_sec);
int ASN1_TIME_check(const ASN1_TIME *t);
ASN1_GENERALIZEDTIME *ASN1_TIME_to_generalizedtime(const ASN1_TIME *t,
                                                   ASN1_GENERALIZEDTIME **out);
int ASN1_TIME_set_string(ASN1_TIME *s, const char *str);
int ASN1_TIME_set_string_X509(ASN1_TIME *s, const char *str);
int ASN1_TIME_to_tm(const ASN1_TIME *s, struct tm *tm);
int ASN1_TIME_normalize(ASN1_TIME *s);
int ASN1_TIME_cmp_time_t(const ASN1_TIME *s, time_t t);
int ASN1_TIME_compare(const ASN1_TIME *a, const ASN1_TIME *b);

int i2a_ASN1_INTEGER(BIO *bp, const ASN1_INTEGER *a);
int a2i_ASN1_INTEGER(BIO *bp, ASN1_INTEGER *bs, char *buf, int size);
int i2a_ASN1_ENUMERATED(BIO *bp, const ASN1_ENUMERATED *a);
int a2i_ASN1_ENUMERATED(BIO *bp, ASN1_ENUMERATED *bs, char *buf, int size);
int i2a_ASN1_OBJECT(BIO *bp, const ASN1_OBJECT *a);
int a2i_ASN1_STRING(BIO *bp, ASN1_STRING *bs, char *buf, int size);
int i2a_ASN1_STRING(BIO *bp, const ASN1_STRING *a, int type);
int i2t_ASN1_OBJECT(char *buf, int buf_len, const ASN1_OBJECT *a);

int a2d_ASN1_OBJECT(unsigned char *out, int olen, const char *buf, int num);
ASN1_OBJECT *ASN1_OBJECT_create(int nid, unsigned char *data, int len,
                                const char *sn, const char *ln);

int ASN1_INTEGER_get_int64(int64_t *pr, const ASN1_INTEGER *a);
int ASN1_INTEGER_set_int64(ASN1_INTEGER *a, int64_t r);
int ASN1_INTEGER_get_uint64(uint64_t *pr, const ASN1_INTEGER *a);
int ASN1_INTEGER_set_uint64(ASN1_INTEGER *a, uint64_t r);

int ASN1_INTEGER_set(ASN1_INTEGER *a, long v);
long ASN1_INTEGER_get(const ASN1_INTEGER *a);
ASN1_INTEGER *BN_to_ASN1_INTEGER(const BIGNUM *bn, ASN1_INTEGER *ai);
BIGNUM *ASN1_INTEGER_to_BN(const ASN1_INTEGER *ai, BIGNUM *bn);

int ASN1_ENUMERATED_get_int64(int64_t *pr, const ASN1_ENUMERATED *a);
int ASN1_ENUMERATED_set_int64(ASN1_ENUMERATED *a, int64_t r);


int ASN1_ENUMERATED_set(ASN1_ENUMERATED *a, long v);
long ASN1_ENUMERATED_get(const ASN1_ENUMERATED *a);
ASN1_ENUMERATED *BN_to_ASN1_ENUMERATED(const BIGNUM *bn, ASN1_ENUMERATED *ai);
BIGNUM *ASN1_ENUMERATED_to_BN(const ASN1_ENUMERATED *ai, BIGNUM *bn);



int ASN1_PRINTABLE_type(const unsigned char *s, int max);

unsigned long ASN1_tag2bit(int tag);


int ASN1_get_object(const unsigned char **pp, long *plength, int *ptag,
                    int *pclass, long omax);
int ASN1_check_infinite_end(unsigned char **p, long len);
int ASN1_const_check_infinite_end(const unsigned char **p, long len);
void ASN1_put_object(unsigned char **pp, int constructed, int length,
                     int tag, int xclass);
int ASN1_put_eoc(unsigned char **pp);
int ASN1_object_size(int constructed, int length, int tag);


void *ASN1_dup(i2d_of_void *i2d, d2i_of_void *d2i, void *x);
# 700 "/usr/include/openssl/asn1.h" 3 4
void *ASN1_item_dup(const ASN1_ITEM *it, void *x);
# 709 "/usr/include/openssl/asn1.h" 3 4
void *ASN1_d2i_fp(void *(*xnew) (void), d2i_of_void *d2i, FILE *in, void **x);







void *ASN1_item_d2i_fp(const ASN1_ITEM *it, FILE *in, void *x);
int ASN1_i2d_fp(i2d_of_void *i2d, FILE *out, void *x);
# 730 "/usr/include/openssl/asn1.h" 3 4
int ASN1_item_i2d_fp(const ASN1_ITEM *it, FILE *out, void *x);
int ASN1_STRING_print_ex_fp(FILE *fp, const ASN1_STRING *str, unsigned long flags);


int ASN1_STRING_to_UTF8(unsigned char **out, const ASN1_STRING *in);

void *ASN1_d2i_bio(void *(*xnew) (void), d2i_of_void *d2i, BIO *in, void **x);







void *ASN1_item_d2i_bio(const ASN1_ITEM *it, BIO *in, void *x);
int ASN1_i2d_bio(i2d_of_void *i2d, BIO *out, unsigned char *x);
# 757 "/usr/include/openssl/asn1.h" 3 4
int ASN1_item_i2d_bio(const ASN1_ITEM *it, BIO *out, void *x);
int ASN1_UTCTIME_print(BIO *fp, const ASN1_UTCTIME *a);
int ASN1_GENERALIZEDTIME_print(BIO *fp, const ASN1_GENERALIZEDTIME *a);
int ASN1_TIME_print(BIO *fp, const ASN1_TIME *a);
int ASN1_STRING_print(BIO *bp, const ASN1_STRING *v);
int ASN1_STRING_print_ex(BIO *out, const ASN1_STRING *str, unsigned long flags);
int ASN1_buf_print(BIO *bp, const unsigned char *buf, size_t buflen, int off);
int ASN1_bn_print(BIO *bp, const char *number, const BIGNUM *num,
                  unsigned char *buf, int off);
int ASN1_parse(BIO *bp, const unsigned char *pp, long len, int indent);
int ASN1_parse_dump(BIO *bp, const unsigned char *pp, long len, int indent,
                    int dump);
const char *ASN1_tag2str(int tag);



int ASN1_UNIVERSALSTRING_to_string(ASN1_UNIVERSALSTRING *s);

int ASN1_TYPE_set_octetstring(ASN1_TYPE *a, unsigned char *data, int len);
int ASN1_TYPE_get_octetstring(const ASN1_TYPE *a, unsigned char *data, int max_len);
int ASN1_TYPE_set_int_octetstring(ASN1_TYPE *a, long num,
                                  unsigned char *data, int len);
int ASN1_TYPE_get_int_octetstring(const ASN1_TYPE *a, long *num,
                                  unsigned char *data, int max_len);

void *ASN1_item_unpack(const ASN1_STRING *oct, const ASN1_ITEM *it);

ASN1_STRING *ASN1_item_pack(void *obj, const ASN1_ITEM *it,
                            ASN1_OCTET_STRING **oct);

void ASN1_STRING_set_default_mask(unsigned long mask);
int ASN1_STRING_set_default_mask_asc(const char *p);
unsigned long ASN1_STRING_get_default_mask(void);
int ASN1_mbstring_copy(ASN1_STRING **out, const unsigned char *in, int len,
                       int inform, unsigned long mask);
int ASN1_mbstring_ncopy(ASN1_STRING **out, const unsigned char *in, int len,
                        int inform, unsigned long mask,
                        long minsize, long maxsize);

ASN1_STRING *ASN1_STRING_set_by_NID(ASN1_STRING **out,
                                    const unsigned char *in, int inlen,
                                    int inform, int nid);
ASN1_STRING_TABLE *ASN1_STRING_TABLE_get(int nid);
int ASN1_STRING_TABLE_add(int, long, long, unsigned long, unsigned long);
void ASN1_STRING_TABLE_cleanup(void);




ASN1_VALUE *ASN1_item_new(const ASN1_ITEM *it);
void ASN1_item_free(ASN1_VALUE *val, const ASN1_ITEM *it);
ASN1_VALUE *ASN1_item_d2i(ASN1_VALUE **val, const unsigned char **in,
                          long len, const ASN1_ITEM *it);
int ASN1_item_i2d(ASN1_VALUE *val, unsigned char **out, const ASN1_ITEM *it);
int ASN1_item_ndef_i2d(ASN1_VALUE *val, unsigned char **out,
                       const ASN1_ITEM *it);

void ASN1_add_oid_module(void);
void ASN1_add_stable_module(void);

ASN1_TYPE *ASN1_generate_nconf(const char *str, CONF *nconf);
ASN1_TYPE *ASN1_generate_v3(const char *str, X509V3_CTX *cnf);
int ASN1_str2mask(const char *str, unsigned long *pmask);
# 842 "/usr/include/openssl/asn1.h" 3 4
int ASN1_item_print(BIO *out, ASN1_VALUE *ifld, int indent,
                    const ASN1_ITEM *it, const ASN1_PCTX *pctx);
ASN1_PCTX *ASN1_PCTX_new(void);
void ASN1_PCTX_free(ASN1_PCTX *p);
unsigned long ASN1_PCTX_get_flags(const ASN1_PCTX *p);
void ASN1_PCTX_set_flags(ASN1_PCTX *p, unsigned long flags);
unsigned long ASN1_PCTX_get_nm_flags(const ASN1_PCTX *p);
void ASN1_PCTX_set_nm_flags(ASN1_PCTX *p, unsigned long flags);
unsigned long ASN1_PCTX_get_cert_flags(const ASN1_PCTX *p);
void ASN1_PCTX_set_cert_flags(ASN1_PCTX *p, unsigned long flags);
unsigned long ASN1_PCTX_get_oid_flags(const ASN1_PCTX *p);
void ASN1_PCTX_set_oid_flags(ASN1_PCTX *p, unsigned long flags);
unsigned long ASN1_PCTX_get_str_flags(const ASN1_PCTX *p);
void ASN1_PCTX_set_str_flags(ASN1_PCTX *p, unsigned long flags);

ASN1_SCTX *ASN1_SCTX_new(int (*scan_cb) (ASN1_SCTX *ctx));
void ASN1_SCTX_free(ASN1_SCTX *p);
const ASN1_ITEM *ASN1_SCTX_get_item(ASN1_SCTX *p);
const ASN1_TEMPLATE *ASN1_SCTX_get_template(ASN1_SCTX *p);
unsigned long ASN1_SCTX_get_flags(ASN1_SCTX *p);
void ASN1_SCTX_set_app_data(ASN1_SCTX *p, void *data);
void *ASN1_SCTX_get_app_data(ASN1_SCTX *p);

const BIO_METHOD *BIO_f_asn1(void);

BIO *BIO_new_NDEF(BIO *out, ASN1_VALUE *val, const ASN1_ITEM *it);

int i2d_ASN1_bio_stream(BIO *out, ASN1_VALUE *val, BIO *in, int flags,
                        const ASN1_ITEM *it);
int PEM_write_bio_ASN1_stream(BIO *out, ASN1_VALUE *val, BIO *in, int flags,
                              const char *hdr, const ASN1_ITEM *it);
int SMIME_write_ASN1(BIO *bio, ASN1_VALUE *val, BIO *data, int flags,
                     int ctype_nid, int econt_nid,
                     struct stack_st_X509_ALGOR *mdalgs, const ASN1_ITEM *it);
ASN1_VALUE *SMIME_read_ASN1(BIO *bio, BIO **bcont, const ASN1_ITEM *it);
int SMIME_crlf_copy(BIO *in, BIO *out, int flags);
int SMIME_text(BIO *in, BIO *out);

const ASN1_ITEM *ASN1_ITEM_lookup(const char *name);
const ASN1_ITEM *ASN1_ITEM_get(size_t i);
# 16 "/usr/include/openssl/objects.h" 2 3 4
# 1 "/usr/include/openssl/objectserr.h" 1 3 4
# 21 "/usr/include/openssl/objectserr.h" 3 4
int ERR_load_OBJ_strings(void);
# 17 "/usr/include/openssl/objects.h" 2 3 4
# 35 "/usr/include/openssl/objects.h" 3 4
typedef struct obj_name_st {
    int type;
    int alias;
    const char *name;
    const char *data;
} OBJ_NAME;



int OBJ_NAME_init(void);
int OBJ_NAME_new_index(unsigned long (*hash_func) (const char *),
                       int (*cmp_func) (const char *, const char *),
                       void (*free_func) (const char *, int, const char *));
const char *OBJ_NAME_get(const char *name, int type);
int OBJ_NAME_add(const char *name, int type, const char *data);
int OBJ_NAME_remove(const char *name, int type);
void OBJ_NAME_cleanup(int type);
void OBJ_NAME_do_all(int type, void (*fn) (const OBJ_NAME *, void *arg),
                     void *arg);
void OBJ_NAME_do_all_sorted(int type,
                            void (*fn) (const OBJ_NAME *, void *arg),
                            void *arg);

ASN1_OBJECT *OBJ_dup(const ASN1_OBJECT *o);
ASN1_OBJECT *OBJ_nid2obj(int n);
const char *OBJ_nid2ln(int n);
const char *OBJ_nid2sn(int n);
int OBJ_obj2nid(const ASN1_OBJECT *o);
ASN1_OBJECT *OBJ_txt2obj(const char *s, int no_name);
int OBJ_obj2txt(char *buf, int buf_len, const ASN1_OBJECT *a, int no_name);
int OBJ_txt2nid(const char *s);
int OBJ_ln2nid(const char *s);
int OBJ_sn2nid(const char *s);
int OBJ_cmp(const ASN1_OBJECT *a, const ASN1_OBJECT *b);
const void *OBJ_bsearch_(const void *key, const void *base, int num, int size,
                         int (*cmp) (const void *, const void *));
const void *OBJ_bsearch_ex_(const void *key, const void *base, int num,
                            int size,
                            int (*cmp) (const void *, const void *),
                            int flags);
# 155 "/usr/include/openssl/objects.h" 3 4
int OBJ_new_nid(int num);
int OBJ_add_object(const ASN1_OBJECT *obj);
int OBJ_create(const char *oid, const char *sn, const char *ln);



int OBJ_create_objects(BIO *in);

size_t OBJ_length(const ASN1_OBJECT *obj);
const unsigned char *OBJ_get0_data(const ASN1_OBJECT *obj);

int OBJ_find_sigid_algs(int signid, int *pdig_nid, int *ppkey_nid);
int OBJ_find_sigid_by_algs(int *psignid, int dig_nid, int pkey_nid);
int OBJ_add_sigid(int signid, int dig_id, int pkey_id);
void OBJ_sigid_free(void);
# 29 "/usr/include/openssl/evp.h" 2 3 4
# 76 "/usr/include/openssl/evp.h" 3 4
EVP_MD *EVP_MD_meth_new(int md_type, int pkey_type);
EVP_MD *EVP_MD_meth_dup(const EVP_MD *md);
void EVP_MD_meth_free(EVP_MD *md);

int EVP_MD_meth_set_input_blocksize(EVP_MD *md, int blocksize);
int EVP_MD_meth_set_result_size(EVP_MD *md, int resultsize);
int EVP_MD_meth_set_app_datasize(EVP_MD *md, int datasize);
int EVP_MD_meth_set_flags(EVP_MD *md, unsigned long flags);
int EVP_MD_meth_set_init(EVP_MD *md, int (*init)(EVP_MD_CTX *ctx));
int EVP_MD_meth_set_update(EVP_MD *md, int (*update)(EVP_MD_CTX *ctx,
                                                     const void *data,
                                                     size_t count));
int EVP_MD_meth_set_final(EVP_MD *md, int (*final)(EVP_MD_CTX *ctx,
                                                   unsigned char *md));
int EVP_MD_meth_set_copy(EVP_MD *md, int (*copy)(EVP_MD_CTX *to,
                                                 const EVP_MD_CTX *from));
int EVP_MD_meth_set_cleanup(EVP_MD *md, int (*cleanup)(EVP_MD_CTX *ctx));
int EVP_MD_meth_set_ctrl(EVP_MD *md, int (*ctrl)(EVP_MD_CTX *ctx, int cmd,
                                                 int p1, void *p2));

int EVP_MD_meth_get_input_blocksize(const EVP_MD *md);
int EVP_MD_meth_get_result_size(const EVP_MD *md);
int EVP_MD_meth_get_app_datasize(const EVP_MD *md);
unsigned long EVP_MD_meth_get_flags(const EVP_MD *md);
int (*EVP_MD_meth_get_init(const EVP_MD *md))(EVP_MD_CTX *ctx);
int (*EVP_MD_meth_get_update(const EVP_MD *md))(EVP_MD_CTX *ctx,
                                                const void *data,
                                                size_t count);
int (*EVP_MD_meth_get_final(const EVP_MD *md))(EVP_MD_CTX *ctx,
                                               unsigned char *md);
int (*EVP_MD_meth_get_copy(const EVP_MD *md))(EVP_MD_CTX *to,
                                              const EVP_MD_CTX *from);
int (*EVP_MD_meth_get_cleanup(const EVP_MD *md))(EVP_MD_CTX *ctx);
int (*EVP_MD_meth_get_ctrl(const EVP_MD *md))(EVP_MD_CTX *ctx, int cmd,
                                              int p1, void *p2);
# 185 "/usr/include/openssl/evp.h" 3 4
EVP_CIPHER *EVP_CIPHER_meth_new(int cipher_type, int block_size, int key_len);
EVP_CIPHER *EVP_CIPHER_meth_dup(const EVP_CIPHER *cipher);
void EVP_CIPHER_meth_free(EVP_CIPHER *cipher);

int EVP_CIPHER_meth_set_iv_length(EVP_CIPHER *cipher, int iv_len);
int EVP_CIPHER_meth_set_flags(EVP_CIPHER *cipher, unsigned long flags);
int EVP_CIPHER_meth_set_impl_ctx_size(EVP_CIPHER *cipher, int ctx_size);
int EVP_CIPHER_meth_set_init(EVP_CIPHER *cipher,
                             int (*init) (EVP_CIPHER_CTX *ctx,
                                          const unsigned char *key,
                                          const unsigned char *iv,
                                          int enc));
int EVP_CIPHER_meth_set_do_cipher(EVP_CIPHER *cipher,
                                  int (*do_cipher) (EVP_CIPHER_CTX *ctx,
                                                    unsigned char *out,
                                                    const unsigned char *in,
                                                    size_t inl));
int EVP_CIPHER_meth_set_cleanup(EVP_CIPHER *cipher,
                                int (*cleanup) (EVP_CIPHER_CTX *));
int EVP_CIPHER_meth_set_set_asn1_params(EVP_CIPHER *cipher,
                                        int (*set_asn1_parameters) (EVP_CIPHER_CTX *,
                                                                    ASN1_TYPE *));
int EVP_CIPHER_meth_set_get_asn1_params(EVP_CIPHER *cipher,
                                        int (*get_asn1_parameters) (EVP_CIPHER_CTX *,
                                                                    ASN1_TYPE *));
int EVP_CIPHER_meth_set_ctrl(EVP_CIPHER *cipher,
                             int (*ctrl) (EVP_CIPHER_CTX *, int type,
                                          int arg, void *ptr));

int (*EVP_CIPHER_meth_get_init(const EVP_CIPHER *cipher))(EVP_CIPHER_CTX *ctx,
                                                          const unsigned char *key,
                                                          const unsigned char *iv,
                                                          int enc);
int (*EVP_CIPHER_meth_get_do_cipher(const EVP_CIPHER *cipher))(EVP_CIPHER_CTX *ctx,
                                                               unsigned char *out,
                                                               const unsigned char *in,
                                                               size_t inl);
int (*EVP_CIPHER_meth_get_cleanup(const EVP_CIPHER *cipher))(EVP_CIPHER_CTX *);
int (*EVP_CIPHER_meth_get_set_asn1_params(const EVP_CIPHER *cipher))(EVP_CIPHER_CTX *,
                                                                     ASN1_TYPE *);
int (*EVP_CIPHER_meth_get_get_asn1_params(const EVP_CIPHER *cipher))(EVP_CIPHER_CTX *,
                                                               ASN1_TYPE *);
int (*EVP_CIPHER_meth_get_ctrl(const EVP_CIPHER *cipher))(EVP_CIPHER_CTX *,
                                                          int type, int arg,
                                                          void *ptr);
# 366 "/usr/include/openssl/evp.h" 3 4
typedef struct {
    unsigned char *out;
    const unsigned char *inp;
    size_t len;
    unsigned int interleave;
} EVP_CTRL_TLS1_1_MULTIBLOCK_PARAM;
# 396 "/usr/include/openssl/evp.h" 3 4
typedef struct evp_cipher_info_st {
    const EVP_CIPHER *cipher;
    unsigned char iv[16];
} EVP_CIPHER_INFO;



typedef int (EVP_PBE_KEYGEN) (EVP_CIPHER_CTX *ctx, const char *pass,
                              int passlen, ASN1_TYPE *param,
                              const EVP_CIPHER *cipher, const EVP_MD *md,
                              int en_de);
# 443 "/usr/include/openssl/evp.h" 3 4
int EVP_MD_type(const EVP_MD *md);


int EVP_MD_pkey_type(const EVP_MD *md);
int EVP_MD_size(const EVP_MD *md);
int EVP_MD_block_size(const EVP_MD *md);
unsigned long EVP_MD_flags(const EVP_MD *md);

const EVP_MD *EVP_MD_CTX_md(const EVP_MD_CTX *ctx);
int (*EVP_MD_CTX_update_fn(EVP_MD_CTX *ctx))(EVP_MD_CTX *ctx,
                                             const void *data, size_t count);
void EVP_MD_CTX_set_update_fn(EVP_MD_CTX *ctx,
                              int (*update) (EVP_MD_CTX *ctx,
                                             const void *data, size_t count));



EVP_PKEY_CTX *EVP_MD_CTX_pkey_ctx(const EVP_MD_CTX *ctx);
void EVP_MD_CTX_set_pkey_ctx(EVP_MD_CTX *ctx, EVP_PKEY_CTX *pctx);
void *EVP_MD_CTX_md_data(const EVP_MD_CTX *ctx);

int EVP_CIPHER_nid(const EVP_CIPHER *cipher);

int EVP_CIPHER_block_size(const EVP_CIPHER *cipher);
int EVP_CIPHER_impl_ctx_size(const EVP_CIPHER *cipher);
int EVP_CIPHER_key_length(const EVP_CIPHER *cipher);
int EVP_CIPHER_iv_length(const EVP_CIPHER *cipher);
unsigned long EVP_CIPHER_flags(const EVP_CIPHER *cipher);


const EVP_CIPHER *EVP_CIPHER_CTX_cipher(const EVP_CIPHER_CTX *ctx);
int EVP_CIPHER_CTX_encrypting(const EVP_CIPHER_CTX *ctx);
int EVP_CIPHER_CTX_nid(const EVP_CIPHER_CTX *ctx);
int EVP_CIPHER_CTX_block_size(const EVP_CIPHER_CTX *ctx);
int EVP_CIPHER_CTX_key_length(const EVP_CIPHER_CTX *ctx);
int EVP_CIPHER_CTX_iv_length(const EVP_CIPHER_CTX *ctx);
const unsigned char *EVP_CIPHER_CTX_iv(const EVP_CIPHER_CTX *ctx);
const unsigned char *EVP_CIPHER_CTX_original_iv(const EVP_CIPHER_CTX *ctx);
unsigned char *EVP_CIPHER_CTX_iv_noconst(EVP_CIPHER_CTX *ctx);
unsigned char *EVP_CIPHER_CTX_buf_noconst(EVP_CIPHER_CTX *ctx);
int EVP_CIPHER_CTX_num(const EVP_CIPHER_CTX *ctx);
void EVP_CIPHER_CTX_set_num(EVP_CIPHER_CTX *ctx, int num);
int EVP_CIPHER_CTX_copy(EVP_CIPHER_CTX *out, const EVP_CIPHER_CTX *in);
void *EVP_CIPHER_CTX_get_app_data(const EVP_CIPHER_CTX *ctx);
void EVP_CIPHER_CTX_set_app_data(EVP_CIPHER_CTX *ctx, void *data);
void *EVP_CIPHER_CTX_get_cipher_data(const EVP_CIPHER_CTX *ctx);
void *EVP_CIPHER_CTX_set_cipher_data(EVP_CIPHER_CTX *ctx, void *cipher_data);
# 524 "/usr/include/openssl/evp.h" 3 4
           int EVP_Cipher(EVP_CIPHER_CTX *c,
                          unsigned char *out,
                          const unsigned char *in, unsigned int inl);
# 537 "/usr/include/openssl/evp.h" 3 4
int EVP_MD_CTX_ctrl(EVP_MD_CTX *ctx, int cmd, int p1, void *p2);
EVP_MD_CTX *EVP_MD_CTX_new(void);
int EVP_MD_CTX_reset(EVP_MD_CTX *ctx);
void EVP_MD_CTX_free(EVP_MD_CTX *ctx);



 int EVP_MD_CTX_copy_ex(EVP_MD_CTX *out, const EVP_MD_CTX *in);
void EVP_MD_CTX_set_flags(EVP_MD_CTX *ctx, int flags);
void EVP_MD_CTX_clear_flags(EVP_MD_CTX *ctx, int flags);
int EVP_MD_CTX_test_flags(const EVP_MD_CTX *ctx, int flags);
 int EVP_DigestInit_ex(EVP_MD_CTX *ctx, const EVP_MD *type,
                                 ENGINE *impl);
 int EVP_DigestUpdate(EVP_MD_CTX *ctx, const void *d,
                                size_t cnt);
 int EVP_DigestFinal_ex(EVP_MD_CTX *ctx, unsigned char *md,
                                  unsigned int *s);
 int EVP_Digest(const void *data, size_t count,
                          unsigned char *md, unsigned int *size,
                          const EVP_MD *type, ENGINE *impl);

 int EVP_MD_CTX_copy(EVP_MD_CTX *out, const EVP_MD_CTX *in);
 int EVP_DigestInit(EVP_MD_CTX *ctx, const EVP_MD *type);
 int EVP_DigestFinal(EVP_MD_CTX *ctx, unsigned char *md,
                           unsigned int *s);
 int EVP_DigestFinalXOF(EVP_MD_CTX *ctx, unsigned char *md,
                              size_t len);

int EVP_read_pw_string(char *buf, int length, const char *prompt, int verify);
int EVP_read_pw_string_min(char *buf, int minlen, int maxlen,
                           const char *prompt, int verify);
void EVP_set_pw_prompt(const char *prompt);
char *EVP_get_pw_prompt(void);

 int EVP_BytesToKey(const EVP_CIPHER *type, const EVP_MD *md,
                          const unsigned char *salt,
                          const unsigned char *data, int datal, int count,
                          unsigned char *key, unsigned char *iv);

void EVP_CIPHER_CTX_set_flags(EVP_CIPHER_CTX *ctx, int flags);
void EVP_CIPHER_CTX_clear_flags(EVP_CIPHER_CTX *ctx, int flags);
int EVP_CIPHER_CTX_test_flags(const EVP_CIPHER_CTX *ctx, int flags);

 int EVP_EncryptInit(EVP_CIPHER_CTX *ctx, const EVP_CIPHER *cipher,
                           const unsigned char *key, const unsigned char *iv);
           int EVP_EncryptInit_ex(EVP_CIPHER_CTX *ctx,
                                  const EVP_CIPHER *cipher, ENGINE *impl,
                                  const unsigned char *key,
                                  const unsigned char *iv);
           int EVP_EncryptUpdate(EVP_CIPHER_CTX *ctx, unsigned char *out,
                                 int *outl, const unsigned char *in, int inl);
           int EVP_EncryptFinal_ex(EVP_CIPHER_CTX *ctx, unsigned char *out,
                                   int *outl);
           int EVP_EncryptFinal(EVP_CIPHER_CTX *ctx, unsigned char *out,
                                int *outl);

 int EVP_DecryptInit(EVP_CIPHER_CTX *ctx, const EVP_CIPHER *cipher,
                           const unsigned char *key, const unsigned char *iv);
           int EVP_DecryptInit_ex(EVP_CIPHER_CTX *ctx,
                                  const EVP_CIPHER *cipher, ENGINE *impl,
                                  const unsigned char *key,
                                  const unsigned char *iv);
           int EVP_DecryptUpdate(EVP_CIPHER_CTX *ctx, unsigned char *out,
                                 int *outl, const unsigned char *in, int inl);
 int EVP_DecryptFinal(EVP_CIPHER_CTX *ctx, unsigned char *outm,
                            int *outl);
           int EVP_DecryptFinal_ex(EVP_CIPHER_CTX *ctx, unsigned char *outm,
                                   int *outl);

 int EVP_CipherInit(EVP_CIPHER_CTX *ctx, const EVP_CIPHER *cipher,
                          const unsigned char *key, const unsigned char *iv,
                          int enc);
           int EVP_CipherInit_ex(EVP_CIPHER_CTX *ctx,
                                 const EVP_CIPHER *cipher, ENGINE *impl,
                                 const unsigned char *key,
                                 const unsigned char *iv, int enc);
 int EVP_CipherUpdate(EVP_CIPHER_CTX *ctx, unsigned char *out,
                            int *outl, const unsigned char *in, int inl);
 int EVP_CipherFinal(EVP_CIPHER_CTX *ctx, unsigned char *outm,
                           int *outl);
 int EVP_CipherFinal_ex(EVP_CIPHER_CTX *ctx, unsigned char *outm,
                              int *outl);

 int EVP_SignFinal(EVP_MD_CTX *ctx, unsigned char *md, unsigned int *s,
                         EVP_PKEY *pkey);

 int EVP_DigestSign(EVP_MD_CTX *ctx, unsigned char *sigret,
                          size_t *siglen, const unsigned char *tbs,
                          size_t tbslen);

 int EVP_VerifyFinal(EVP_MD_CTX *ctx, const unsigned char *sigbuf,
                           unsigned int siglen, EVP_PKEY *pkey);

 int EVP_DigestVerify(EVP_MD_CTX *ctx, const unsigned char *sigret,
                            size_t siglen, const unsigned char *tbs,
                            size_t tbslen);

           int EVP_DigestSignInit(EVP_MD_CTX *ctx, EVP_PKEY_CTX **pctx,
                                  const EVP_MD *type, ENGINE *e,
                                  EVP_PKEY *pkey);
 int EVP_DigestSignFinal(EVP_MD_CTX *ctx, unsigned char *sigret,
                               size_t *siglen);

 int EVP_DigestVerifyInit(EVP_MD_CTX *ctx, EVP_PKEY_CTX **pctx,
                                const EVP_MD *type, ENGINE *e,
                                EVP_PKEY *pkey);
 int EVP_DigestVerifyFinal(EVP_MD_CTX *ctx, const unsigned char *sig,
                                 size_t siglen);


 int EVP_OpenInit(EVP_CIPHER_CTX *ctx, const EVP_CIPHER *type,
                        const unsigned char *ek, int ekl,
                        const unsigned char *iv, EVP_PKEY *priv);
 int EVP_OpenFinal(EVP_CIPHER_CTX *ctx, unsigned char *out, int *outl);

 int EVP_SealInit(EVP_CIPHER_CTX *ctx, const EVP_CIPHER *type,
                        unsigned char **ek, int *ekl, unsigned char *iv,
                        EVP_PKEY **pubk, int npubk);
 int EVP_SealFinal(EVP_CIPHER_CTX *ctx, unsigned char *out, int *outl);


EVP_ENCODE_CTX *EVP_ENCODE_CTX_new(void);
void EVP_ENCODE_CTX_free(EVP_ENCODE_CTX *ctx);
int EVP_ENCODE_CTX_copy(EVP_ENCODE_CTX *dctx, EVP_ENCODE_CTX *sctx);
int EVP_ENCODE_CTX_num(EVP_ENCODE_CTX *ctx);
void EVP_EncodeInit(EVP_ENCODE_CTX *ctx);
int EVP_EncodeUpdate(EVP_ENCODE_CTX *ctx, unsigned char *out, int *outl,
                     const unsigned char *in, int inl);
void EVP_EncodeFinal(EVP_ENCODE_CTX *ctx, unsigned char *out, int *outl);
int EVP_EncodeBlock(unsigned char *t, const unsigned char *f, int n);

void EVP_DecodeInit(EVP_ENCODE_CTX *ctx);
int EVP_DecodeUpdate(EVP_ENCODE_CTX *ctx, unsigned char *out, int *outl,
                     const unsigned char *in, int inl);
int EVP_DecodeFinal(EVP_ENCODE_CTX *ctx, unsigned
                    char *out, int *outl);
int EVP_DecodeBlock(unsigned char *t, const unsigned char *f, int n);





EVP_CIPHER_CTX *EVP_CIPHER_CTX_new(void);
int EVP_CIPHER_CTX_reset(EVP_CIPHER_CTX *c);
void EVP_CIPHER_CTX_free(EVP_CIPHER_CTX *c);
int EVP_CIPHER_CTX_set_key_length(EVP_CIPHER_CTX *x, int keylen);
int EVP_CIPHER_CTX_set_padding(EVP_CIPHER_CTX *c, int pad);
int EVP_CIPHER_CTX_ctrl(EVP_CIPHER_CTX *ctx, int type, int arg, void *ptr);
int EVP_CIPHER_CTX_rand_key(EVP_CIPHER_CTX *ctx, unsigned char *key);

const BIO_METHOD *BIO_f_md(void);
const BIO_METHOD *BIO_f_base64(void);
const BIO_METHOD *BIO_f_cipher(void);
const BIO_METHOD *BIO_f_reliable(void);
 int BIO_set_cipher(BIO *b, const EVP_CIPHER *c, const unsigned char *k,
                          const unsigned char *i, int enc);

const EVP_MD *EVP_md_null(void);




const EVP_MD *EVP_md4(void);


const EVP_MD *EVP_md5(void);
const EVP_MD *EVP_md5_sha1(void);


const EVP_MD *EVP_blake2b512(void);
const EVP_MD *EVP_blake2s256(void);

const EVP_MD *EVP_sha1(void);
const EVP_MD *EVP_sha224(void);
const EVP_MD *EVP_sha256(void);
const EVP_MD *EVP_sha384(void);
const EVP_MD *EVP_sha512(void);
const EVP_MD *EVP_sha512_224(void);
const EVP_MD *EVP_sha512_256(void);
const EVP_MD *EVP_sha3_224(void);
const EVP_MD *EVP_sha3_256(void);
const EVP_MD *EVP_sha3_384(void);
const EVP_MD *EVP_sha3_512(void);
const EVP_MD *EVP_shake128(void);
const EVP_MD *EVP_shake256(void);




const EVP_MD *EVP_ripemd160(void);


const EVP_MD *EVP_whirlpool(void);


const EVP_MD *EVP_sm3(void);

const EVP_CIPHER *EVP_enc_null(void);

const EVP_CIPHER *EVP_des_ecb(void);
const EVP_CIPHER *EVP_des_ede(void);
const EVP_CIPHER *EVP_des_ede3(void);
const EVP_CIPHER *EVP_des_ede_ecb(void);
const EVP_CIPHER *EVP_des_ede3_ecb(void);
const EVP_CIPHER *EVP_des_cfb64(void);

const EVP_CIPHER *EVP_des_cfb1(void);
const EVP_CIPHER *EVP_des_cfb8(void);
const EVP_CIPHER *EVP_des_ede_cfb64(void);

const EVP_CIPHER *EVP_des_ede3_cfb64(void);

const EVP_CIPHER *EVP_des_ede3_cfb1(void);
const EVP_CIPHER *EVP_des_ede3_cfb8(void);
const EVP_CIPHER *EVP_des_ofb(void);
const EVP_CIPHER *EVP_des_ede_ofb(void);
const EVP_CIPHER *EVP_des_ede3_ofb(void);
const EVP_CIPHER *EVP_des_cbc(void);
const EVP_CIPHER *EVP_des_ede_cbc(void);
const EVP_CIPHER *EVP_des_ede3_cbc(void);
const EVP_CIPHER *EVP_desx_cbc(void);
const EVP_CIPHER *EVP_des_ede3_wrap(void);







const EVP_CIPHER *EVP_rc4(void);
const EVP_CIPHER *EVP_rc4_40(void);

const EVP_CIPHER *EVP_rc4_hmac_md5(void);
# 780 "/usr/include/openssl/evp.h" 3 4
const EVP_CIPHER *EVP_rc2_ecb(void);
const EVP_CIPHER *EVP_rc2_cbc(void);
const EVP_CIPHER *EVP_rc2_40_cbc(void);
const EVP_CIPHER *EVP_rc2_64_cbc(void);
const EVP_CIPHER *EVP_rc2_cfb64(void);

const EVP_CIPHER *EVP_rc2_ofb(void);


const EVP_CIPHER *EVP_bf_ecb(void);
const EVP_CIPHER *EVP_bf_cbc(void);
const EVP_CIPHER *EVP_bf_cfb64(void);

const EVP_CIPHER *EVP_bf_ofb(void);


const EVP_CIPHER *EVP_cast5_ecb(void);
const EVP_CIPHER *EVP_cast5_cbc(void);
const EVP_CIPHER *EVP_cast5_cfb64(void);

const EVP_CIPHER *EVP_cast5_ofb(void);
# 809 "/usr/include/openssl/evp.h" 3 4
const EVP_CIPHER *EVP_aes_128_ecb(void);
const EVP_CIPHER *EVP_aes_128_cbc(void);
const EVP_CIPHER *EVP_aes_128_cfb1(void);
const EVP_CIPHER *EVP_aes_128_cfb8(void);
const EVP_CIPHER *EVP_aes_128_cfb128(void);

const EVP_CIPHER *EVP_aes_128_ofb(void);
const EVP_CIPHER *EVP_aes_128_ctr(void);
const EVP_CIPHER *EVP_aes_128_ccm(void);
const EVP_CIPHER *EVP_aes_128_gcm(void);
const EVP_CIPHER *EVP_aes_128_xts(void);
const EVP_CIPHER *EVP_aes_128_wrap(void);
const EVP_CIPHER *EVP_aes_128_wrap_pad(void);

const EVP_CIPHER *EVP_aes_128_ocb(void);

const EVP_CIPHER *EVP_aes_192_ecb(void);
const EVP_CIPHER *EVP_aes_192_cbc(void);
const EVP_CIPHER *EVP_aes_192_cfb1(void);
const EVP_CIPHER *EVP_aes_192_cfb8(void);
const EVP_CIPHER *EVP_aes_192_cfb128(void);

const EVP_CIPHER *EVP_aes_192_ofb(void);
const EVP_CIPHER *EVP_aes_192_ctr(void);
const EVP_CIPHER *EVP_aes_192_ccm(void);
const EVP_CIPHER *EVP_aes_192_gcm(void);
const EVP_CIPHER *EVP_aes_192_wrap(void);
const EVP_CIPHER *EVP_aes_192_wrap_pad(void);

const EVP_CIPHER *EVP_aes_192_ocb(void);

const EVP_CIPHER *EVP_aes_256_ecb(void);
const EVP_CIPHER *EVP_aes_256_cbc(void);
const EVP_CIPHER *EVP_aes_256_cfb1(void);
const EVP_CIPHER *EVP_aes_256_cfb8(void);
const EVP_CIPHER *EVP_aes_256_cfb128(void);

const EVP_CIPHER *EVP_aes_256_ofb(void);
const EVP_CIPHER *EVP_aes_256_ctr(void);
const EVP_CIPHER *EVP_aes_256_ccm(void);
const EVP_CIPHER *EVP_aes_256_gcm(void);
const EVP_CIPHER *EVP_aes_256_xts(void);
const EVP_CIPHER *EVP_aes_256_wrap(void);
const EVP_CIPHER *EVP_aes_256_wrap_pad(void);

const EVP_CIPHER *EVP_aes_256_ocb(void);

const EVP_CIPHER *EVP_aes_128_cbc_hmac_sha1(void);
const EVP_CIPHER *EVP_aes_256_cbc_hmac_sha1(void);
const EVP_CIPHER *EVP_aes_128_cbc_hmac_sha256(void);
const EVP_CIPHER *EVP_aes_256_cbc_hmac_sha256(void);

const EVP_CIPHER *EVP_aria_128_ecb(void);
const EVP_CIPHER *EVP_aria_128_cbc(void);
const EVP_CIPHER *EVP_aria_128_cfb1(void);
const EVP_CIPHER *EVP_aria_128_cfb8(void);
const EVP_CIPHER *EVP_aria_128_cfb128(void);

const EVP_CIPHER *EVP_aria_128_ctr(void);
const EVP_CIPHER *EVP_aria_128_ofb(void);
const EVP_CIPHER *EVP_aria_128_gcm(void);
const EVP_CIPHER *EVP_aria_128_ccm(void);
const EVP_CIPHER *EVP_aria_192_ecb(void);
const EVP_CIPHER *EVP_aria_192_cbc(void);
const EVP_CIPHER *EVP_aria_192_cfb1(void);
const EVP_CIPHER *EVP_aria_192_cfb8(void);
const EVP_CIPHER *EVP_aria_192_cfb128(void);

const EVP_CIPHER *EVP_aria_192_ctr(void);
const EVP_CIPHER *EVP_aria_192_ofb(void);
const EVP_CIPHER *EVP_aria_192_gcm(void);
const EVP_CIPHER *EVP_aria_192_ccm(void);
const EVP_CIPHER *EVP_aria_256_ecb(void);
const EVP_CIPHER *EVP_aria_256_cbc(void);
const EVP_CIPHER *EVP_aria_256_cfb1(void);
const EVP_CIPHER *EVP_aria_256_cfb8(void);
const EVP_CIPHER *EVP_aria_256_cfb128(void);

const EVP_CIPHER *EVP_aria_256_ctr(void);
const EVP_CIPHER *EVP_aria_256_ofb(void);
const EVP_CIPHER *EVP_aria_256_gcm(void);
const EVP_CIPHER *EVP_aria_256_ccm(void);


const EVP_CIPHER *EVP_camellia_128_ecb(void);
const EVP_CIPHER *EVP_camellia_128_cbc(void);
const EVP_CIPHER *EVP_camellia_128_cfb1(void);
const EVP_CIPHER *EVP_camellia_128_cfb8(void);
const EVP_CIPHER *EVP_camellia_128_cfb128(void);

const EVP_CIPHER *EVP_camellia_128_ofb(void);
const EVP_CIPHER *EVP_camellia_128_ctr(void);
const EVP_CIPHER *EVP_camellia_192_ecb(void);
const EVP_CIPHER *EVP_camellia_192_cbc(void);
const EVP_CIPHER *EVP_camellia_192_cfb1(void);
const EVP_CIPHER *EVP_camellia_192_cfb8(void);
const EVP_CIPHER *EVP_camellia_192_cfb128(void);

const EVP_CIPHER *EVP_camellia_192_ofb(void);
const EVP_CIPHER *EVP_camellia_192_ctr(void);
const EVP_CIPHER *EVP_camellia_256_ecb(void);
const EVP_CIPHER *EVP_camellia_256_cbc(void);
const EVP_CIPHER *EVP_camellia_256_cfb1(void);
const EVP_CIPHER *EVP_camellia_256_cfb8(void);
const EVP_CIPHER *EVP_camellia_256_cfb128(void);

const EVP_CIPHER *EVP_camellia_256_ofb(void);
const EVP_CIPHER *EVP_camellia_256_ctr(void);


const EVP_CIPHER *EVP_chacha20(void);

const EVP_CIPHER *EVP_chacha20_poly1305(void);




const EVP_CIPHER *EVP_seed_ecb(void);
const EVP_CIPHER *EVP_seed_cbc(void);
const EVP_CIPHER *EVP_seed_cfb128(void);

const EVP_CIPHER *EVP_seed_ofb(void);



const EVP_CIPHER *EVP_sm4_ecb(void);
const EVP_CIPHER *EVP_sm4_cbc(void);
const EVP_CIPHER *EVP_sm4_cfb128(void);

const EVP_CIPHER *EVP_sm4_ofb(void);
const EVP_CIPHER *EVP_sm4_ctr(void);
# 965 "/usr/include/openssl/evp.h" 3 4
int EVP_add_cipher(const EVP_CIPHER *cipher);
int EVP_add_digest(const EVP_MD *digest);

const EVP_CIPHER *EVP_get_cipherbyname(const char *name);
const EVP_MD *EVP_get_digestbyname(const char *name);

void EVP_CIPHER_do_all(void (*fn) (const EVP_CIPHER *ciph,
                                   const char *from, const char *to, void *x),
                       void *arg);
void EVP_CIPHER_do_all_sorted(void (*fn)
                               (const EVP_CIPHER *ciph, const char *from,
                                const char *to, void *x), void *arg);

void EVP_MD_do_all(void (*fn) (const EVP_MD *ciph,
                               const char *from, const char *to, void *x),
                   void *arg);
void EVP_MD_do_all_sorted(void (*fn)
                           (const EVP_MD *ciph, const char *from,
                            const char *to, void *x), void *arg);

int EVP_PKEY_decrypt_old(unsigned char *dec_key,
                         const unsigned char *enc_key, int enc_key_len,
                         EVP_PKEY *private_key);
int EVP_PKEY_encrypt_old(unsigned char *enc_key,
                         const unsigned char *key, int key_len,
                         EVP_PKEY *pub_key);
int EVP_PKEY_type(int type);
int EVP_PKEY_id(const EVP_PKEY *pkey);
int EVP_PKEY_base_id(const EVP_PKEY *pkey);
int EVP_PKEY_bits(const EVP_PKEY *pkey);
int EVP_PKEY_security_bits(const EVP_PKEY *pkey);
int EVP_PKEY_size(const EVP_PKEY *pkey);
int EVP_PKEY_set_type(EVP_PKEY *pkey, int type);
int EVP_PKEY_set_type_str(EVP_PKEY *pkey, const char *str, int len);
int EVP_PKEY_set_alias_type(EVP_PKEY *pkey, int type);

int EVP_PKEY_set1_engine(EVP_PKEY *pkey, ENGINE *e);
ENGINE *EVP_PKEY_get0_engine(const EVP_PKEY *pkey);

int EVP_PKEY_assign(EVP_PKEY *pkey, int type, void *key);
void *EVP_PKEY_get0(const EVP_PKEY *pkey);
const unsigned char *EVP_PKEY_get0_hmac(const EVP_PKEY *pkey, size_t *len);

const unsigned char *EVP_PKEY_get0_poly1305(const EVP_PKEY *pkey, size_t *len);


const unsigned char *EVP_PKEY_get0_siphash(const EVP_PKEY *pkey, size_t *len);



struct rsa_st;
int EVP_PKEY_set1_RSA(EVP_PKEY *pkey, struct rsa_st *key);
struct rsa_st *EVP_PKEY_get0_RSA(EVP_PKEY *pkey);
struct rsa_st *EVP_PKEY_get1_RSA(EVP_PKEY *pkey);


struct dsa_st;
int EVP_PKEY_set1_DSA(EVP_PKEY *pkey, struct dsa_st *key);
struct dsa_st *EVP_PKEY_get0_DSA(EVP_PKEY *pkey);
struct dsa_st *EVP_PKEY_get1_DSA(EVP_PKEY *pkey);


struct dh_st;
int EVP_PKEY_set1_DH(EVP_PKEY *pkey, struct dh_st *key);
struct dh_st *EVP_PKEY_get0_DH(EVP_PKEY *pkey);
struct dh_st *EVP_PKEY_get1_DH(EVP_PKEY *pkey);


struct ec_key_st;
int EVP_PKEY_set1_EC_KEY(EVP_PKEY *pkey, struct ec_key_st *key);
struct ec_key_st *EVP_PKEY_get0_EC_KEY(EVP_PKEY *pkey);
struct ec_key_st *EVP_PKEY_get1_EC_KEY(EVP_PKEY *pkey);


EVP_PKEY *EVP_PKEY_new(void);
int EVP_PKEY_up_ref(EVP_PKEY *pkey);
void EVP_PKEY_free(EVP_PKEY *pkey);

EVP_PKEY *d2i_PublicKey(int type, EVP_PKEY **a, const unsigned char **pp,
                        long length);
int i2d_PublicKey(EVP_PKEY *a, unsigned char **pp);

EVP_PKEY *d2i_PrivateKey(int type, EVP_PKEY **a, const unsigned char **pp,
                         long length);
EVP_PKEY *d2i_AutoPrivateKey(EVP_PKEY **a, const unsigned char **pp,
                             long length);
int i2d_PrivateKey(EVP_PKEY *a, unsigned char **pp);

int EVP_PKEY_copy_parameters(EVP_PKEY *to, const EVP_PKEY *from);
int EVP_PKEY_missing_parameters(const EVP_PKEY *pkey);
int EVP_PKEY_save_parameters(EVP_PKEY *pkey, int mode);
int EVP_PKEY_cmp_parameters(const EVP_PKEY *a, const EVP_PKEY *b);

int EVP_PKEY_cmp(const EVP_PKEY *a, const EVP_PKEY *b);

int EVP_PKEY_print_public(BIO *out, const EVP_PKEY *pkey,
                          int indent, ASN1_PCTX *pctx);
int EVP_PKEY_print_private(BIO *out, const EVP_PKEY *pkey,
                           int indent, ASN1_PCTX *pctx);
int EVP_PKEY_print_params(BIO *out, const EVP_PKEY *pkey,
                          int indent, ASN1_PCTX *pctx);

int EVP_PKEY_get_default_digest_nid(EVP_PKEY *pkey, int *pnid);

int EVP_PKEY_set1_tls_encodedpoint(EVP_PKEY *pkey,
                                   const unsigned char *pt, size_t ptlen);
size_t EVP_PKEY_get1_tls_encodedpoint(EVP_PKEY *pkey, unsigned char **ppt);

int EVP_CIPHER_type(const EVP_CIPHER *ctx);


int EVP_CIPHER_param_to_asn1(EVP_CIPHER_CTX *c, ASN1_TYPE *type);
int EVP_CIPHER_asn1_to_param(EVP_CIPHER_CTX *c, ASN1_TYPE *type);


int EVP_CIPHER_set_asn1_iv(EVP_CIPHER_CTX *c, ASN1_TYPE *type);
int EVP_CIPHER_get_asn1_iv(EVP_CIPHER_CTX *c, ASN1_TYPE *type);


int PKCS5_PBE_keyivgen(EVP_CIPHER_CTX *ctx, const char *pass, int passlen,
                       ASN1_TYPE *param, const EVP_CIPHER *cipher,
                       const EVP_MD *md, int en_de);
int PKCS5_PBKDF2_HMAC_SHA1(const char *pass, int passlen,
                           const unsigned char *salt, int saltlen, int iter,
                           int keylen, unsigned char *out);
int PKCS5_PBKDF2_HMAC(const char *pass, int passlen,
                      const unsigned char *salt, int saltlen, int iter,
                      const EVP_MD *digest, int keylen, unsigned char *out);
int PKCS5_v2_PBE_keyivgen(EVP_CIPHER_CTX *ctx, const char *pass, int passlen,
                          ASN1_TYPE *param, const EVP_CIPHER *cipher,
                          const EVP_MD *md, int en_de);


int EVP_PBE_scrypt(const char *pass, size_t passlen,
                   const unsigned char *salt, size_t saltlen,
                   uint64_t N, uint64_t r, uint64_t p, uint64_t maxmem,
                   unsigned char *key, size_t keylen);

int PKCS5_v2_scrypt_keyivgen(EVP_CIPHER_CTX *ctx, const char *pass,
                             int passlen, ASN1_TYPE *param,
                             const EVP_CIPHER *c, const EVP_MD *md, int en_de);


void PKCS5_PBE_add(void);

int EVP_PBE_CipherInit(ASN1_OBJECT *pbe_obj, const char *pass, int passlen,
                       ASN1_TYPE *param, EVP_CIPHER_CTX *ctx, int en_de);
# 1122 "/usr/include/openssl/evp.h" 3 4
int EVP_PBE_alg_add_type(int pbe_type, int pbe_nid, int cipher_nid,
                         int md_nid, EVP_PBE_KEYGEN *keygen);
int EVP_PBE_alg_add(int nid, const EVP_CIPHER *cipher, const EVP_MD *md,
                    EVP_PBE_KEYGEN *keygen);
int EVP_PBE_find(int type, int pbe_nid, int *pcnid, int *pmnid,
                 EVP_PBE_KEYGEN **pkeygen);
void EVP_PBE_cleanup(void);
int EVP_PBE_get(int *ptype, int *ppbe_nid, size_t num);
# 1145 "/usr/include/openssl/evp.h" 3 4
int EVP_PKEY_asn1_get_count(void);
const EVP_PKEY_ASN1_METHOD *EVP_PKEY_asn1_get0(int idx);
const EVP_PKEY_ASN1_METHOD *EVP_PKEY_asn1_find(ENGINE **pe, int type);
const EVP_PKEY_ASN1_METHOD *EVP_PKEY_asn1_find_str(ENGINE **pe,
                                                   const char *str, int len);
int EVP_PKEY_asn1_add0(const EVP_PKEY_ASN1_METHOD *ameth);
int EVP_PKEY_asn1_add_alias(int to, int from);
int EVP_PKEY_asn1_get0_info(int *ppkey_id, int *pkey_base_id,
                            int *ppkey_flags, const char **pinfo,
                            const char **ppem_str,
                            const EVP_PKEY_ASN1_METHOD *ameth);

const EVP_PKEY_ASN1_METHOD *EVP_PKEY_get0_asn1(const EVP_PKEY *pkey);
EVP_PKEY_ASN1_METHOD *EVP_PKEY_asn1_new(int id, int flags,
                                        const char *pem_str,
                                        const char *info);
void EVP_PKEY_asn1_copy(EVP_PKEY_ASN1_METHOD *dst,
                        const EVP_PKEY_ASN1_METHOD *src);
void EVP_PKEY_asn1_free(EVP_PKEY_ASN1_METHOD *ameth);
void EVP_PKEY_asn1_set_public(EVP_PKEY_ASN1_METHOD *ameth,
                              int (*pub_decode) (EVP_PKEY *pk,
                                                 X509_PUBKEY *pub),
                              int (*pub_encode) (X509_PUBKEY *pub,
                                                 const EVP_PKEY *pk),
                              int (*pub_cmp) (const EVP_PKEY *a,
                                              const EVP_PKEY *b),
                              int (*pub_print) (BIO *out,
                                                const EVP_PKEY *pkey,
                                                int indent, ASN1_PCTX *pctx),
                              int (*pkey_size) (const EVP_PKEY *pk),
                              int (*pkey_bits) (const EVP_PKEY *pk));
void EVP_PKEY_asn1_set_private(EVP_PKEY_ASN1_METHOD *ameth,
                               int (*priv_decode) (EVP_PKEY *pk,
                                                   const PKCS8_PRIV_KEY_INFO
                                                   *p8inf),
                               int (*priv_encode) (PKCS8_PRIV_KEY_INFO *p8,
                                                   const EVP_PKEY *pk),
                               int (*priv_print) (BIO *out,
                                                  const EVP_PKEY *pkey,
                                                  int indent,
                                                  ASN1_PCTX *pctx));
void EVP_PKEY_asn1_set_param(EVP_PKEY_ASN1_METHOD *ameth,
                             int (*param_decode) (EVP_PKEY *pkey,
                                                  const unsigned char **pder,
                                                  int derlen),
                             int (*param_encode) (const EVP_PKEY *pkey,
                                                  unsigned char **pder),
                             int (*param_missing) (const EVP_PKEY *pk),
                             int (*param_copy) (EVP_PKEY *to,
                                                const EVP_PKEY *from),
                             int (*param_cmp) (const EVP_PKEY *a,
                                               const EVP_PKEY *b),
                             int (*param_print) (BIO *out,
                                                 const EVP_PKEY *pkey,
                                                 int indent,
                                                 ASN1_PCTX *pctx));

void EVP_PKEY_asn1_set_free(EVP_PKEY_ASN1_METHOD *ameth,
                            void (*pkey_free) (EVP_PKEY *pkey));
void EVP_PKEY_asn1_set_ctrl(EVP_PKEY_ASN1_METHOD *ameth,
                            int (*pkey_ctrl) (EVP_PKEY *pkey, int op,
                                              long arg1, void *arg2));
void EVP_PKEY_asn1_set_item(EVP_PKEY_ASN1_METHOD *ameth,
                            int (*item_verify) (EVP_MD_CTX *ctx,
                                                const ASN1_ITEM *it,
                                                void *asn,
                                                X509_ALGOR *a,
                                                ASN1_BIT_STRING *sig,
                                                EVP_PKEY *pkey),
                            int (*item_sign) (EVP_MD_CTX *ctx,
                                              const ASN1_ITEM *it,
                                              void *asn,
                                              X509_ALGOR *alg1,
                                              X509_ALGOR *alg2,
                                              ASN1_BIT_STRING *sig));

void EVP_PKEY_asn1_set_siginf(EVP_PKEY_ASN1_METHOD *ameth,
                              int (*siginf_set) (X509_SIG_INFO *siginf,
                                                 const X509_ALGOR *alg,
                                                 const ASN1_STRING *sig));

void EVP_PKEY_asn1_set_check(EVP_PKEY_ASN1_METHOD *ameth,
                             int (*pkey_check) (const EVP_PKEY *pk));

void EVP_PKEY_asn1_set_public_check(EVP_PKEY_ASN1_METHOD *ameth,
                                    int (*pkey_pub_check) (const EVP_PKEY *pk));

void EVP_PKEY_asn1_set_param_check(EVP_PKEY_ASN1_METHOD *ameth,
                                   int (*pkey_param_check) (const EVP_PKEY *pk));

void EVP_PKEY_asn1_set_set_priv_key(EVP_PKEY_ASN1_METHOD *ameth,
                                    int (*set_priv_key) (EVP_PKEY *pk,
                                                         const unsigned char
                                                            *priv,
                                                         size_t len));
void EVP_PKEY_asn1_set_set_pub_key(EVP_PKEY_ASN1_METHOD *ameth,
                                   int (*set_pub_key) (EVP_PKEY *pk,
                                                       const unsigned char *pub,
                                                       size_t len));
void EVP_PKEY_asn1_set_get_priv_key(EVP_PKEY_ASN1_METHOD *ameth,
                                    int (*get_priv_key) (const EVP_PKEY *pk,
                                                         unsigned char *priv,
                                                         size_t *len));
void EVP_PKEY_asn1_set_get_pub_key(EVP_PKEY_ASN1_METHOD *ameth,
                                   int (*get_pub_key) (const EVP_PKEY *pk,
                                                       unsigned char *pub,
                                                       size_t *len));

void EVP_PKEY_asn1_set_security_bits(EVP_PKEY_ASN1_METHOD *ameth,
                                     int (*pkey_security_bits) (const EVP_PKEY
                                                                *pk));
# 1327 "/usr/include/openssl/evp.h" 3 4
const EVP_PKEY_METHOD *EVP_PKEY_meth_find(int type);
EVP_PKEY_METHOD *EVP_PKEY_meth_new(int id, int flags);
void EVP_PKEY_meth_get0_info(int *ppkey_id, int *pflags,
                             const EVP_PKEY_METHOD *meth);
void EVP_PKEY_meth_copy(EVP_PKEY_METHOD *dst, const EVP_PKEY_METHOD *src);
void EVP_PKEY_meth_free(EVP_PKEY_METHOD *pmeth);
int EVP_PKEY_meth_add0(const EVP_PKEY_METHOD *pmeth);
int EVP_PKEY_meth_remove(const EVP_PKEY_METHOD *pmeth);
size_t EVP_PKEY_meth_get_count(void);
const EVP_PKEY_METHOD *EVP_PKEY_meth_get0(size_t idx);

EVP_PKEY_CTX *EVP_PKEY_CTX_new(EVP_PKEY *pkey, ENGINE *e);
EVP_PKEY_CTX *EVP_PKEY_CTX_new_id(int id, ENGINE *e);
EVP_PKEY_CTX *EVP_PKEY_CTX_dup(EVP_PKEY_CTX *ctx);
void EVP_PKEY_CTX_free(EVP_PKEY_CTX *ctx);

int EVP_PKEY_CTX_ctrl(EVP_PKEY_CTX *ctx, int keytype, int optype,
                      int cmd, int p1, void *p2);
int EVP_PKEY_CTX_ctrl_str(EVP_PKEY_CTX *ctx, const char *type,
                          const char *value);
int EVP_PKEY_CTX_ctrl_uint64(EVP_PKEY_CTX *ctx, int keytype, int optype,
                             int cmd, uint64_t value);

int EVP_PKEY_CTX_str2ctrl(EVP_PKEY_CTX *ctx, int cmd, const char *str);
int EVP_PKEY_CTX_hex2ctrl(EVP_PKEY_CTX *ctx, int cmd, const char *hex);

int EVP_PKEY_CTX_md(EVP_PKEY_CTX *ctx, int optype, int cmd, const char *md);

int EVP_PKEY_CTX_get_operation(EVP_PKEY_CTX *ctx);
void EVP_PKEY_CTX_set0_keygen_info(EVP_PKEY_CTX *ctx, int *dat, int datlen);

EVP_PKEY *EVP_PKEY_new_mac_key(int type, ENGINE *e,
                               const unsigned char *key, int keylen);
EVP_PKEY *EVP_PKEY_new_raw_private_key(int type, ENGINE *e,
                                       const unsigned char *priv,
                                       size_t len);
EVP_PKEY *EVP_PKEY_new_raw_public_key(int type, ENGINE *e,
                                      const unsigned char *pub,
                                      size_t len);
int EVP_PKEY_get_raw_private_key(const EVP_PKEY *pkey, unsigned char *priv,
                                 size_t *len);
int EVP_PKEY_get_raw_public_key(const EVP_PKEY *pkey, unsigned char *pub,
                                size_t *len);

EVP_PKEY *EVP_PKEY_new_CMAC_key(ENGINE *e, const unsigned char *priv,
                                size_t len, const EVP_CIPHER *cipher);

void EVP_PKEY_CTX_set_data(EVP_PKEY_CTX *ctx, void *data);
void *EVP_PKEY_CTX_get_data(EVP_PKEY_CTX *ctx);
EVP_PKEY *EVP_PKEY_CTX_get0_pkey(EVP_PKEY_CTX *ctx);

EVP_PKEY *EVP_PKEY_CTX_get0_peerkey(EVP_PKEY_CTX *ctx);

void EVP_PKEY_CTX_set_app_data(EVP_PKEY_CTX *ctx, void *data);
void *EVP_PKEY_CTX_get_app_data(EVP_PKEY_CTX *ctx);

int EVP_PKEY_sign_init(EVP_PKEY_CTX *ctx);
int EVP_PKEY_sign(EVP_PKEY_CTX *ctx,
                  unsigned char *sig, size_t *siglen,
                  const unsigned char *tbs, size_t tbslen);
int EVP_PKEY_verify_init(EVP_PKEY_CTX *ctx);
int EVP_PKEY_verify(EVP_PKEY_CTX *ctx,
                    const unsigned char *sig, size_t siglen,
                    const unsigned char *tbs, size_t tbslen);
int EVP_PKEY_verify_recover_init(EVP_PKEY_CTX *ctx);
int EVP_PKEY_verify_recover(EVP_PKEY_CTX *ctx,
                            unsigned char *rout, size_t *routlen,
                            const unsigned char *sig, size_t siglen);
int EVP_PKEY_encrypt_init(EVP_PKEY_CTX *ctx);
int EVP_PKEY_encrypt(EVP_PKEY_CTX *ctx,
                     unsigned char *out, size_t *outlen,
                     const unsigned char *in, size_t inlen);
int EVP_PKEY_decrypt_init(EVP_PKEY_CTX *ctx);
int EVP_PKEY_decrypt(EVP_PKEY_CTX *ctx,
                     unsigned char *out, size_t *outlen,
                     const unsigned char *in, size_t inlen);

int EVP_PKEY_derive_init(EVP_PKEY_CTX *ctx);
int EVP_PKEY_derive_set_peer(EVP_PKEY_CTX *ctx, EVP_PKEY *peer);
int EVP_PKEY_derive(EVP_PKEY_CTX *ctx, unsigned char *key, size_t *keylen);

typedef int EVP_PKEY_gen_cb(EVP_PKEY_CTX *ctx);

int EVP_PKEY_paramgen_init(EVP_PKEY_CTX *ctx);
int EVP_PKEY_paramgen(EVP_PKEY_CTX *ctx, EVP_PKEY **ppkey);
int EVP_PKEY_keygen_init(EVP_PKEY_CTX *ctx);
int EVP_PKEY_keygen(EVP_PKEY_CTX *ctx, EVP_PKEY **ppkey);
int EVP_PKEY_check(EVP_PKEY_CTX *ctx);
int EVP_PKEY_public_check(EVP_PKEY_CTX *ctx);
int EVP_PKEY_param_check(EVP_PKEY_CTX *ctx);

void EVP_PKEY_CTX_set_cb(EVP_PKEY_CTX *ctx, EVP_PKEY_gen_cb *cb);
EVP_PKEY_gen_cb *EVP_PKEY_CTX_get_cb(EVP_PKEY_CTX *ctx);

int EVP_PKEY_CTX_get_keygen_info(EVP_PKEY_CTX *ctx, int idx);

void EVP_PKEY_meth_set_init(EVP_PKEY_METHOD *pmeth,
                            int (*init) (EVP_PKEY_CTX *ctx));

void EVP_PKEY_meth_set_copy(EVP_PKEY_METHOD *pmeth,
                            int (*copy) (EVP_PKEY_CTX *dst,
                                         EVP_PKEY_CTX *src));

void EVP_PKEY_meth_set_cleanup(EVP_PKEY_METHOD *pmeth,
                               void (*cleanup) (EVP_PKEY_CTX *ctx));

void EVP_PKEY_meth_set_paramgen(EVP_PKEY_METHOD *pmeth,
                                int (*paramgen_init) (EVP_PKEY_CTX *ctx),
                                int (*paramgen) (EVP_PKEY_CTX *ctx,
                                                 EVP_PKEY *pkey));

void EVP_PKEY_meth_set_keygen(EVP_PKEY_METHOD *pmeth,
                              int (*keygen_init) (EVP_PKEY_CTX *ctx),
                              int (*keygen) (EVP_PKEY_CTX *ctx,
                                             EVP_PKEY *pkey));

void EVP_PKEY_meth_set_sign(EVP_PKEY_METHOD *pmeth,
                            int (*sign_init) (EVP_PKEY_CTX *ctx),
                            int (*sign) (EVP_PKEY_CTX *ctx,
                                         unsigned char *sig, size_t *siglen,
                                         const unsigned char *tbs,
                                         size_t tbslen));

void EVP_PKEY_meth_set_verify(EVP_PKEY_METHOD *pmeth,
                              int (*verify_init) (EVP_PKEY_CTX *ctx),
                              int (*verify) (EVP_PKEY_CTX *ctx,
                                             const unsigned char *sig,
                                             size_t siglen,
                                             const unsigned char *tbs,
                                             size_t tbslen));

void EVP_PKEY_meth_set_verify_recover(EVP_PKEY_METHOD *pmeth,
                                      int (*verify_recover_init) (EVP_PKEY_CTX
                                                                  *ctx),
                                      int (*verify_recover) (EVP_PKEY_CTX
                                                             *ctx,
                                                             unsigned char
                                                             *sig,
                                                             size_t *siglen,
                                                             const unsigned
                                                             char *tbs,
                                                             size_t tbslen));

void EVP_PKEY_meth_set_signctx(EVP_PKEY_METHOD *pmeth,
                               int (*signctx_init) (EVP_PKEY_CTX *ctx,
                                                    EVP_MD_CTX *mctx),
                               int (*signctx) (EVP_PKEY_CTX *ctx,
                                               unsigned char *sig,
                                               size_t *siglen,
                                               EVP_MD_CTX *mctx));

void EVP_PKEY_meth_set_verifyctx(EVP_PKEY_METHOD *pmeth,
                                 int (*verifyctx_init) (EVP_PKEY_CTX *ctx,
                                                        EVP_MD_CTX *mctx),
                                 int (*verifyctx) (EVP_PKEY_CTX *ctx,
                                                   const unsigned char *sig,
                                                   int siglen,
                                                   EVP_MD_CTX *mctx));

void EVP_PKEY_meth_set_encrypt(EVP_PKEY_METHOD *pmeth,
                               int (*encrypt_init) (EVP_PKEY_CTX *ctx),
                               int (*encryptfn) (EVP_PKEY_CTX *ctx,
                                                 unsigned char *out,
                                                 size_t *outlen,
                                                 const unsigned char *in,
                                                 size_t inlen));

void EVP_PKEY_meth_set_decrypt(EVP_PKEY_METHOD *pmeth,
                               int (*decrypt_init) (EVP_PKEY_CTX *ctx),
                               int (*decrypt) (EVP_PKEY_CTX *ctx,
                                               unsigned char *out,
                                               size_t *outlen,
                                               const unsigned char *in,
                                               size_t inlen));

void EVP_PKEY_meth_set_derive(EVP_PKEY_METHOD *pmeth,
                              int (*derive_init) (EVP_PKEY_CTX *ctx),
                              int (*derive) (EVP_PKEY_CTX *ctx,
                                             unsigned char *key,
                                             size_t *keylen));

void EVP_PKEY_meth_set_ctrl(EVP_PKEY_METHOD *pmeth,
                            int (*ctrl) (EVP_PKEY_CTX *ctx, int type, int p1,
                                         void *p2),
                            int (*ctrl_str) (EVP_PKEY_CTX *ctx,
                                             const char *type,
                                             const char *value));

void EVP_PKEY_meth_set_digestsign(EVP_PKEY_METHOD *pmeth,
                                  int (*digestsign) (EVP_MD_CTX *ctx,
                                                     unsigned char *sig,
                                                     size_t *siglen,
                                                     const unsigned char *tbs,
                                                     size_t tbslen));

void EVP_PKEY_meth_set_digestverify(EVP_PKEY_METHOD *pmeth,
                                    int (*digestverify) (EVP_MD_CTX *ctx,
                                                         const unsigned char *sig,
                                                         size_t siglen,
                                                         const unsigned char *tbs,
                                                         size_t tbslen));

void EVP_PKEY_meth_set_check(EVP_PKEY_METHOD *pmeth,
                             int (*check) (EVP_PKEY *pkey));

void EVP_PKEY_meth_set_public_check(EVP_PKEY_METHOD *pmeth,
                                    int (*check) (EVP_PKEY *pkey));

void EVP_PKEY_meth_set_param_check(EVP_PKEY_METHOD *pmeth,
                                   int (*check) (EVP_PKEY *pkey));

void EVP_PKEY_meth_set_digest_custom(EVP_PKEY_METHOD *pmeth,
                                     int (*digest_custom) (EVP_PKEY_CTX *ctx,
                                                           EVP_MD_CTX *mctx));

void EVP_PKEY_meth_get_init(const EVP_PKEY_METHOD *pmeth,
                            int (**pinit) (EVP_PKEY_CTX *ctx));

void EVP_PKEY_meth_get_copy(const EVP_PKEY_METHOD *pmeth,
                            int (**pcopy) (EVP_PKEY_CTX *dst,
                                           EVP_PKEY_CTX *src));

void EVP_PKEY_meth_get_cleanup(const EVP_PKEY_METHOD *pmeth,
                               void (**pcleanup) (EVP_PKEY_CTX *ctx));

void EVP_PKEY_meth_get_paramgen(const EVP_PKEY_METHOD *pmeth,
                                int (**pparamgen_init) (EVP_PKEY_CTX *ctx),
                                int (**pparamgen) (EVP_PKEY_CTX *ctx,
                                                   EVP_PKEY *pkey));

void EVP_PKEY_meth_get_keygen(const EVP_PKEY_METHOD *pmeth,
                              int (**pkeygen_init) (EVP_PKEY_CTX *ctx),
                              int (**pkeygen) (EVP_PKEY_CTX *ctx,
                                               EVP_PKEY *pkey));

void EVP_PKEY_meth_get_sign(const EVP_PKEY_METHOD *pmeth,
                            int (**psign_init) (EVP_PKEY_CTX *ctx),
                            int (**psign) (EVP_PKEY_CTX *ctx,
                                           unsigned char *sig, size_t *siglen,
                                           const unsigned char *tbs,
                                           size_t tbslen));

void EVP_PKEY_meth_get_verify(const EVP_PKEY_METHOD *pmeth,
                              int (**pverify_init) (EVP_PKEY_CTX *ctx),
                              int (**pverify) (EVP_PKEY_CTX *ctx,
                                               const unsigned char *sig,
                                               size_t siglen,
                                               const unsigned char *tbs,
                                               size_t tbslen));

void EVP_PKEY_meth_get_verify_recover(const EVP_PKEY_METHOD *pmeth,
                                      int (**pverify_recover_init) (EVP_PKEY_CTX
                                                                    *ctx),
                                      int (**pverify_recover) (EVP_PKEY_CTX
                                                               *ctx,
                                                               unsigned char
                                                               *sig,
                                                               size_t *siglen,
                                                               const unsigned
                                                               char *tbs,
                                                               size_t tbslen));

void EVP_PKEY_meth_get_signctx(const EVP_PKEY_METHOD *pmeth,
                               int (**psignctx_init) (EVP_PKEY_CTX *ctx,
                                                      EVP_MD_CTX *mctx),
                               int (**psignctx) (EVP_PKEY_CTX *ctx,
                                                 unsigned char *sig,
                                                 size_t *siglen,
                                                 EVP_MD_CTX *mctx));

void EVP_PKEY_meth_get_verifyctx(const EVP_PKEY_METHOD *pmeth,
                                 int (**pverifyctx_init) (EVP_PKEY_CTX *ctx,
                                                          EVP_MD_CTX *mctx),
                                 int (**pverifyctx) (EVP_PKEY_CTX *ctx,
                                                     const unsigned char *sig,
                                                     int siglen,
                                                     EVP_MD_CTX *mctx));

void EVP_PKEY_meth_get_encrypt(const EVP_PKEY_METHOD *pmeth,
                               int (**pencrypt_init) (EVP_PKEY_CTX *ctx),
                               int (**pencryptfn) (EVP_PKEY_CTX *ctx,
                                                   unsigned char *out,
                                                   size_t *outlen,
                                                   const unsigned char *in,
                                                   size_t inlen));

void EVP_PKEY_meth_get_decrypt(const EVP_PKEY_METHOD *pmeth,
                               int (**pdecrypt_init) (EVP_PKEY_CTX *ctx),
                               int (**pdecrypt) (EVP_PKEY_CTX *ctx,
                                                 unsigned char *out,
                                                 size_t *outlen,
                                                 const unsigned char *in,
                                                 size_t inlen));

void EVP_PKEY_meth_get_derive(const EVP_PKEY_METHOD *pmeth,
                              int (**pderive_init) (EVP_PKEY_CTX *ctx),
                              int (**pderive) (EVP_PKEY_CTX *ctx,
                                               unsigned char *key,
                                               size_t *keylen));

void EVP_PKEY_meth_get_ctrl(const EVP_PKEY_METHOD *pmeth,
                            int (**pctrl) (EVP_PKEY_CTX *ctx, int type, int p1,
                                           void *p2),
                            int (**pctrl_str) (EVP_PKEY_CTX *ctx,
                                               const char *type,
                                               const char *value));

void EVP_PKEY_meth_get_digestsign(EVP_PKEY_METHOD *pmeth,
                                  int (**digestsign) (EVP_MD_CTX *ctx,
                                                      unsigned char *sig,
                                                      size_t *siglen,
                                                      const unsigned char *tbs,
                                                      size_t tbslen));

void EVP_PKEY_meth_get_digestverify(EVP_PKEY_METHOD *pmeth,
                                    int (**digestverify) (EVP_MD_CTX *ctx,
                                                          const unsigned char *sig,
                                                          size_t siglen,
                                                          const unsigned char *tbs,
                                                          size_t tbslen));

void EVP_PKEY_meth_get_check(const EVP_PKEY_METHOD *pmeth,
                             int (**pcheck) (EVP_PKEY *pkey));

void EVP_PKEY_meth_get_public_check(const EVP_PKEY_METHOD *pmeth,
                                    int (**pcheck) (EVP_PKEY *pkey));

void EVP_PKEY_meth_get_param_check(const EVP_PKEY_METHOD *pmeth,
                                   int (**pcheck) (EVP_PKEY *pkey));

void EVP_PKEY_meth_get_digest_custom(EVP_PKEY_METHOD *pmeth,
                                     int (**pdigest_custom) (EVP_PKEY_CTX *ctx,
                                                             EVP_MD_CTX *mctx));
void EVP_add_alg_module(void);
# 17 "/usr/include/openssl/pem.h" 2 3 4
# 1 "/usr/include/openssl/x509.h" 1 3 4
# 17 "/usr/include/openssl/x509.h" 3 4
# 1 "/usr/include/openssl/buffer.h" 1 3 4
# 17 "/usr/include/openssl/buffer.h" 3 4
# 1 "/usr/include/openssl/buffererr.h" 1 3 4
# 21 "/usr/include/openssl/buffererr.h" 3 4
int ERR_load_BUF_strings(void);
# 18 "/usr/include/openssl/buffer.h" 2 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 25 "/usr/include/openssl/buffer.h" 2 3 4
# 38 "/usr/include/openssl/buffer.h" 3 4
struct buf_mem_st {
    size_t length;
    char *data;
    size_t max;
    unsigned long flags;
};



BUF_MEM *BUF_MEM_new(void);
BUF_MEM *BUF_MEM_new_ex(unsigned long flags);
void BUF_MEM_free(BUF_MEM *a);
size_t BUF_MEM_grow(BUF_MEM *str, size_t len);
size_t BUF_MEM_grow_clean(BUF_MEM *str, size_t len);
void BUF_reverse(unsigned char *out, const unsigned char *in, size_t siz);
# 18 "/usr/include/openssl/x509.h" 2 3 4




# 1 "/usr/include/openssl/ec.h" 1 3 4
# 14 "/usr/include/openssl/ec.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 15 "/usr/include/openssl/ec.h" 2 3 4







# 1 "/usr/include/openssl/ecerr.h" 1 3 4
# 18 "/usr/include/openssl/ecerr.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 19 "/usr/include/openssl/ecerr.h" 2 3 4






int ERR_load_EC_strings(void);
# 23 "/usr/include/openssl/ec.h" 2 3 4
# 33 "/usr/include/openssl/ec.h" 3 4
typedef enum {


    POINT_CONVERSION_COMPRESSED = 2,

    POINT_CONVERSION_UNCOMPRESSED = 4,


    POINT_CONVERSION_HYBRID = 6
} point_conversion_form_t;

typedef struct ec_method_st EC_METHOD;
typedef struct ec_group_st EC_GROUP;
typedef struct ec_point_st EC_POINT;
typedef struct ecpk_parameters_st ECPKPARAMETERS;
typedef struct ec_parameters_st ECPARAMETERS;
# 58 "/usr/include/openssl/ec.h" 3 4
const EC_METHOD *EC_GFp_simple_method(void);




const EC_METHOD *EC_GFp_mont_method(void);




const EC_METHOD *EC_GFp_nist_method(void);





const EC_METHOD *EC_GFp_nistp224_method(void);




const EC_METHOD *EC_GFp_nistp256_method(void);




const EC_METHOD *EC_GFp_nistp521_method(void);
# 95 "/usr/include/openssl/ec.h" 3 4
const EC_METHOD *EC_GF2m_simple_method(void);
# 107 "/usr/include/openssl/ec.h" 3 4
EC_GROUP *EC_GROUP_new(const EC_METHOD *meth);




void EC_GROUP_free(EC_GROUP *group);




void EC_GROUP_clear_free(EC_GROUP *group);






int EC_GROUP_copy(EC_GROUP *dst, const EC_GROUP *src);






EC_GROUP *EC_GROUP_dup(const EC_GROUP *src);





const EC_METHOD *EC_GROUP_method_of(const EC_GROUP *group);





int EC_METHOD_get_field_type(const EC_METHOD *meth);
# 153 "/usr/include/openssl/ec.h" 3 4
int EC_GROUP_set_generator(EC_GROUP *group, const EC_POINT *generator,
                           const BIGNUM *order, const BIGNUM *cofactor);





const EC_POINT *EC_GROUP_get0_generator(const EC_GROUP *group);





BN_MONT_CTX *EC_GROUP_get_mont_data(const EC_GROUP *group);







int EC_GROUP_get_order(const EC_GROUP *group, BIGNUM *order, BN_CTX *ctx);





const BIGNUM *EC_GROUP_get0_order(const EC_GROUP *group);





int EC_GROUP_order_bits(const EC_GROUP *group);







int EC_GROUP_get_cofactor(const EC_GROUP *group, BIGNUM *cofactor,
                          BN_CTX *ctx);





const BIGNUM *EC_GROUP_get0_cofactor(const EC_GROUP *group);





void EC_GROUP_set_curve_name(EC_GROUP *group, int nid);





int EC_GROUP_get_curve_name(const EC_GROUP *group);

void EC_GROUP_set_asn1_flag(EC_GROUP *group, int flag);
int EC_GROUP_get_asn1_flag(const EC_GROUP *group);

void EC_GROUP_set_point_conversion_form(EC_GROUP *group,
                                        point_conversion_form_t form);
point_conversion_form_t EC_GROUP_get_point_conversion_form(const EC_GROUP *);

unsigned char *EC_GROUP_get0_seed(const EC_GROUP *x);
size_t EC_GROUP_get_seed_len(const EC_GROUP *);
size_t EC_GROUP_set_seed(EC_GROUP *, const unsigned char *, size_t len);
# 236 "/usr/include/openssl/ec.h" 3 4
int EC_GROUP_set_curve(EC_GROUP *group, const BIGNUM *p, const BIGNUM *a,
                       const BIGNUM *b, BN_CTX *ctx);
# 249 "/usr/include/openssl/ec.h" 3 4
int EC_GROUP_get_curve(const EC_GROUP *group, BIGNUM *p, BIGNUM *a, BIGNUM *b,
                       BN_CTX *ctx);
# 261 "/usr/include/openssl/ec.h" 3 4
int EC_GROUP_set_curve_GFp(EC_GROUP *group, const BIGNUM *p, const BIGNUM *a, const BIGNUM *b, BN_CTX *ctx);
# 274 "/usr/include/openssl/ec.h" 3 4
int EC_GROUP_get_curve_GFp(const EC_GROUP *group, BIGNUM *p, BIGNUM *a, BIGNUM *b, BN_CTX *ctx);
# 288 "/usr/include/openssl/ec.h" 3 4
int EC_GROUP_set_curve_GF2m(EC_GROUP *group, const BIGNUM *p, const BIGNUM *a, const BIGNUM *b, BN_CTX *ctx);
# 301 "/usr/include/openssl/ec.h" 3 4
int EC_GROUP_get_curve_GF2m(const EC_GROUP *group, BIGNUM *p, BIGNUM *a, BIGNUM *b, BN_CTX *ctx);







int EC_GROUP_get_degree(const EC_GROUP *group);






int EC_GROUP_check(const EC_GROUP *group, BN_CTX *ctx);






int EC_GROUP_check_discriminant(const EC_GROUP *group, BN_CTX *ctx);







int EC_GROUP_cmp(const EC_GROUP *a, const EC_GROUP *b, BN_CTX *ctx);
# 346 "/usr/include/openssl/ec.h" 3 4
EC_GROUP *EC_GROUP_new_curve_GFp(const BIGNUM *p, const BIGNUM *a,
                                 const BIGNUM *b, BN_CTX *ctx);
# 357 "/usr/include/openssl/ec.h" 3 4
EC_GROUP *EC_GROUP_new_curve_GF2m(const BIGNUM *p, const BIGNUM *a,
                                  const BIGNUM *b, BN_CTX *ctx);







EC_GROUP *EC_GROUP_new_by_curve_name(int nid);






EC_GROUP *EC_GROUP_new_from_ecparameters(const ECPARAMETERS *params);







ECPARAMETERS *EC_GROUP_get_ecparameters(const EC_GROUP *group,
                                        ECPARAMETERS *params);






EC_GROUP *EC_GROUP_new_from_ecpkparameters(const ECPKPARAMETERS *params);







ECPKPARAMETERS *EC_GROUP_get_ecpkparameters(const EC_GROUP *group,
                                            ECPKPARAMETERS *params);





typedef struct {
    int nid;
    const char *comment;
} EC_builtin_curve;







size_t EC_get_builtin_curves(EC_builtin_curve *r, size_t nitems);

const char *EC_curve_nid2nist(int nid);
int EC_curve_nist2nid(const char *name);
# 428 "/usr/include/openssl/ec.h" 3 4
EC_POINT *EC_POINT_new(const EC_GROUP *group);




void EC_POINT_free(EC_POINT *point);




void EC_POINT_clear_free(EC_POINT *point);






int EC_POINT_copy(EC_POINT *dst, const EC_POINT *src);







EC_POINT *EC_POINT_dup(const EC_POINT *src, const EC_GROUP *group);





const EC_METHOD *EC_POINT_method_of(const EC_POINT *point);






int EC_POINT_set_to_infinity(const EC_GROUP *group, EC_POINT *point);
# 477 "/usr/include/openssl/ec.h" 3 4
int EC_POINT_set_Jprojective_coordinates_GFp(const EC_GROUP *group,
                                             EC_POINT *p, const BIGNUM *x,
                                             const BIGNUM *y, const BIGNUM *z,
                                             BN_CTX *ctx);
# 491 "/usr/include/openssl/ec.h" 3 4
int EC_POINT_get_Jprojective_coordinates_GFp(const EC_GROUP *group,
                                             const EC_POINT *p, BIGNUM *x,
                                             BIGNUM *y, BIGNUM *z,
                                             BN_CTX *ctx);
# 504 "/usr/include/openssl/ec.h" 3 4
int EC_POINT_set_affine_coordinates(const EC_GROUP *group, EC_POINT *p,
                                    const BIGNUM *x, const BIGNUM *y,
                                    BN_CTX *ctx);
# 516 "/usr/include/openssl/ec.h" 3 4
int EC_POINT_get_affine_coordinates(const EC_GROUP *group, const EC_POINT *p,
                                    BIGNUM *x, BIGNUM *y, BN_CTX *ctx);
# 528 "/usr/include/openssl/ec.h" 3 4
int EC_POINT_set_affine_coordinates_GFp(const EC_GROUP *group, EC_POINT *p, const BIGNUM *x, const BIGNUM *y, BN_CTX *ctx);
# 543 "/usr/include/openssl/ec.h" 3 4
int EC_POINT_get_affine_coordinates_GFp(const EC_GROUP *group, const EC_POINT *p, BIGNUM *x, BIGNUM *y, BN_CTX *ctx);
# 557 "/usr/include/openssl/ec.h" 3 4
int EC_POINT_set_compressed_coordinates(const EC_GROUP *group, EC_POINT *p,
                                        const BIGNUM *x, int y_bit,
                                        BN_CTX *ctx);
# 570 "/usr/include/openssl/ec.h" 3 4
int EC_POINT_set_compressed_coordinates_GFp(const EC_GROUP *group, EC_POINT *p, const BIGNUM *x, int y_bit, BN_CTX *ctx);
# 585 "/usr/include/openssl/ec.h" 3 4
int EC_POINT_set_affine_coordinates_GF2m(const EC_GROUP *group, EC_POINT *p, const BIGNUM *x, const BIGNUM *y, BN_CTX *ctx);
# 600 "/usr/include/openssl/ec.h" 3 4
int EC_POINT_get_affine_coordinates_GF2m(const EC_GROUP *group, const EC_POINT *p, BIGNUM *x, BIGNUM *y, BN_CTX *ctx);
# 615 "/usr/include/openssl/ec.h" 3 4
int EC_POINT_set_compressed_coordinates_GF2m(const EC_GROUP *group, EC_POINT *p, const BIGNUM *x, int y_bit, BN_CTX *ctx);
# 631 "/usr/include/openssl/ec.h" 3 4
size_t EC_POINT_point2oct(const EC_GROUP *group, const EC_POINT *p,
                          point_conversion_form_t form,
                          unsigned char *buf, size_t len, BN_CTX *ctx);
# 643 "/usr/include/openssl/ec.h" 3 4
int EC_POINT_oct2point(const EC_GROUP *group, EC_POINT *p,
                       const unsigned char *buf, size_t len, BN_CTX *ctx);
# 654 "/usr/include/openssl/ec.h" 3 4
size_t EC_POINT_point2buf(const EC_GROUP *group, const EC_POINT *point,
                          point_conversion_form_t form,
                          unsigned char **pbuf, BN_CTX *ctx);


BIGNUM *EC_POINT_point2bn(const EC_GROUP *, const EC_POINT *,
                          point_conversion_form_t form, BIGNUM *, BN_CTX *);
EC_POINT *EC_POINT_bn2point(const EC_GROUP *, const BIGNUM *,
                            EC_POINT *, BN_CTX *);
char *EC_POINT_point2hex(const EC_GROUP *, const EC_POINT *,
                         point_conversion_form_t form, BN_CTX *);
EC_POINT *EC_POINT_hex2point(const EC_GROUP *, const char *,
                             EC_POINT *, BN_CTX *);
# 680 "/usr/include/openssl/ec.h" 3 4
int EC_POINT_add(const EC_GROUP *group, EC_POINT *r, const EC_POINT *a,
                 const EC_POINT *b, BN_CTX *ctx);
# 690 "/usr/include/openssl/ec.h" 3 4
int EC_POINT_dbl(const EC_GROUP *group, EC_POINT *r, const EC_POINT *a,
                 BN_CTX *ctx);







int EC_POINT_invert(const EC_GROUP *group, EC_POINT *a, BN_CTX *ctx);






int EC_POINT_is_at_infinity(const EC_GROUP *group, const EC_POINT *p);







int EC_POINT_is_on_curve(const EC_GROUP *group, const EC_POINT *point,
                         BN_CTX *ctx);
# 724 "/usr/include/openssl/ec.h" 3 4
int EC_POINT_cmp(const EC_GROUP *group, const EC_POINT *a, const EC_POINT *b,
                 BN_CTX *ctx);

int EC_POINT_make_affine(const EC_GROUP *group, EC_POINT *point, BN_CTX *ctx);
int EC_POINTs_make_affine(const EC_GROUP *group, size_t num,
                          EC_POINT *points[], BN_CTX *ctx);
# 741 "/usr/include/openssl/ec.h" 3 4
int EC_POINTs_mul(const EC_GROUP *group, EC_POINT *r, const BIGNUM *n,
                  size_t num, const EC_POINT *p[], const BIGNUM *m[],
                  BN_CTX *ctx);
# 754 "/usr/include/openssl/ec.h" 3 4
int EC_POINT_mul(const EC_GROUP *group, EC_POINT *r, const BIGNUM *n,
                 const EC_POINT *q, const BIGNUM *m, BN_CTX *ctx);






int EC_GROUP_precompute_mult(EC_GROUP *group, BN_CTX *ctx);





int EC_GROUP_have_precompute_mult(const EC_GROUP *group);





extern const ASN1_ITEM ECPKPARAMETERS_it;
ECPKPARAMETERS *ECPKPARAMETERS_new(void); void ECPKPARAMETERS_free(ECPKPARAMETERS *a);
extern const ASN1_ITEM ECPARAMETERS_it;
ECPARAMETERS *ECPARAMETERS_new(void); void ECPARAMETERS_free(ECPARAMETERS *a);





int EC_GROUP_get_basis_type(const EC_GROUP *);

int EC_GROUP_get_trinomial_basis(const EC_GROUP *, unsigned int *k);
int EC_GROUP_get_pentanomial_basis(const EC_GROUP *, unsigned int *k1,
                                   unsigned int *k2, unsigned int *k3);





EC_GROUP *d2i_ECPKParameters(EC_GROUP **, const unsigned char **in, long len);
int i2d_ECPKParameters(const EC_GROUP *, unsigned char **out);
# 803 "/usr/include/openssl/ec.h" 3 4
int ECPKParameters_print(BIO *bp, const EC_GROUP *x, int off);

int ECPKParameters_print_fp(FILE *fp, const EC_GROUP *x, int off);
# 824 "/usr/include/openssl/ec.h" 3 4
EC_KEY *EC_KEY_new(void);

int EC_KEY_get_flags(const EC_KEY *key);

void EC_KEY_set_flags(EC_KEY *key, int flags);

void EC_KEY_clear_flags(EC_KEY *key, int flags);






EC_KEY *EC_KEY_new_by_curve_name(int nid);




void EC_KEY_free(EC_KEY *key);






EC_KEY *EC_KEY_copy(EC_KEY *dst, const EC_KEY *src);





EC_KEY *EC_KEY_dup(const EC_KEY *src);





int EC_KEY_up_ref(EC_KEY *key);





ENGINE *EC_KEY_get0_engine(const EC_KEY *eckey);





const EC_GROUP *EC_KEY_get0_group(const EC_KEY *key);







int EC_KEY_set_group(EC_KEY *key, const EC_GROUP *group);





const BIGNUM *EC_KEY_get0_private_key(const EC_KEY *key);







int EC_KEY_set_private_key(EC_KEY *key, const BIGNUM *prv);





const EC_POINT *EC_KEY_get0_public_key(const EC_KEY *key);







int EC_KEY_set_public_key(EC_KEY *key, const EC_POINT *pub);

unsigned EC_KEY_get_enc_flags(const EC_KEY *key);
void EC_KEY_set_enc_flags(EC_KEY *eckey, unsigned int flags);
point_conversion_form_t EC_KEY_get_conv_form(const EC_KEY *key);
void EC_KEY_set_conv_form(EC_KEY *eckey, point_conversion_form_t cform);



int EC_KEY_set_ex_data(EC_KEY *key, int idx, void *arg);
void *EC_KEY_get_ex_data(const EC_KEY *key, int idx);


void EC_KEY_set_asn1_flag(EC_KEY *eckey, int asn1_flag);







int EC_KEY_precompute_mult(EC_KEY *key, BN_CTX *ctx);





int EC_KEY_generate_key(EC_KEY *key);





int EC_KEY_check_key(const EC_KEY *key);





int EC_KEY_can_sign(const EC_KEY *eckey);
# 957 "/usr/include/openssl/ec.h" 3 4
int EC_KEY_set_public_key_affine_coordinates(EC_KEY *key, BIGNUM *x,
                                             BIGNUM *y);
# 967 "/usr/include/openssl/ec.h" 3 4
size_t EC_KEY_key2buf(const EC_KEY *key, point_conversion_form_t form,
                      unsigned char **pbuf, BN_CTX *ctx);
# 978 "/usr/include/openssl/ec.h" 3 4
int EC_KEY_oct2key(EC_KEY *key, const unsigned char *buf, size_t len,
                   BN_CTX *ctx);
# 988 "/usr/include/openssl/ec.h" 3 4
int EC_KEY_oct2priv(EC_KEY *key, const unsigned char *buf, size_t len);
# 998 "/usr/include/openssl/ec.h" 3 4
size_t EC_KEY_priv2oct(const EC_KEY *key, unsigned char *buf, size_t len);






size_t EC_KEY_priv2buf(const EC_KEY *eckey, unsigned char **pbuf);
# 1017 "/usr/include/openssl/ec.h" 3 4
EC_KEY *d2i_ECPrivateKey(EC_KEY **key, const unsigned char **in, long len);







int i2d_ECPrivateKey(EC_KEY *key, unsigned char **out);
# 1038 "/usr/include/openssl/ec.h" 3 4
EC_KEY *d2i_ECParameters(EC_KEY **key, const unsigned char **in, long len);







int i2d_ECParameters(EC_KEY *key, unsigned char **out);
# 1060 "/usr/include/openssl/ec.h" 3 4
EC_KEY *o2i_ECPublicKey(EC_KEY **key, const unsigned char **in, long len);







int i2o_ECPublicKey(const EC_KEY *key, unsigned char **out);






int ECParameters_print(BIO *bp, const EC_KEY *key);







int EC_KEY_print(BIO *bp, const EC_KEY *key, int off);







int ECParameters_print_fp(FILE *fp, const EC_KEY *key);







int EC_KEY_print_fp(FILE *fp, const EC_KEY *key, int off);



const EC_KEY_METHOD *EC_KEY_OpenSSL(void);
const EC_KEY_METHOD *EC_KEY_get_default_method(void);
void EC_KEY_set_default_method(const EC_KEY_METHOD *meth);
const EC_KEY_METHOD *EC_KEY_get_method(const EC_KEY *key);
int EC_KEY_set_method(EC_KEY *key, const EC_KEY_METHOD *meth);
EC_KEY *EC_KEY_new_method(ENGINE *engine);






int ECDH_KDF_X9_62(unsigned char *out, size_t outlen,
                   const unsigned char *Z, size_t Zlen,
                   const unsigned char *sinfo, size_t sinfolen,
                   const EVP_MD *md);

int ECDH_compute_key(void *out, size_t outlen, const EC_POINT *pub_key,
                     const EC_KEY *ecdh,
                     void *(*KDF) (const void *in, size_t inlen,
                                   void *out, size_t *outlen));

typedef struct ECDSA_SIG_st ECDSA_SIG;




ECDSA_SIG *ECDSA_SIG_new(void);




void ECDSA_SIG_free(ECDSA_SIG *sig);
# 1144 "/usr/include/openssl/ec.h" 3 4
int i2d_ECDSA_SIG(const ECDSA_SIG *sig, unsigned char **pp);
# 1153 "/usr/include/openssl/ec.h" 3 4
ECDSA_SIG *d2i_ECDSA_SIG(ECDSA_SIG **sig, const unsigned char **pp, long len);






void ECDSA_SIG_get0(const ECDSA_SIG *sig, const BIGNUM **pr, const BIGNUM **ps);




const BIGNUM *ECDSA_SIG_get0_r(const ECDSA_SIG *sig);




const BIGNUM *ECDSA_SIG_get0_s(const ECDSA_SIG *sig);






int ECDSA_SIG_set0(ECDSA_SIG *sig, BIGNUM *r, BIGNUM *s);
# 1186 "/usr/include/openssl/ec.h" 3 4
ECDSA_SIG *ECDSA_do_sign(const unsigned char *dgst, int dgst_len,
                         EC_KEY *eckey);
# 1199 "/usr/include/openssl/ec.h" 3 4
ECDSA_SIG *ECDSA_do_sign_ex(const unsigned char *dgst, int dgstlen,
                            const BIGNUM *kinv, const BIGNUM *rp,
                            EC_KEY *eckey);
# 1212 "/usr/include/openssl/ec.h" 3 4
int ECDSA_do_verify(const unsigned char *dgst, int dgst_len,
                    const ECDSA_SIG *sig, EC_KEY *eckey);
# 1222 "/usr/include/openssl/ec.h" 3 4
int ECDSA_sign_setup(EC_KEY *eckey, BN_CTX *ctx, BIGNUM **kinv, BIGNUM **rp);
# 1234 "/usr/include/openssl/ec.h" 3 4
int ECDSA_sign(int type, const unsigned char *dgst, int dgstlen,
               unsigned char *sig, unsigned int *siglen, EC_KEY *eckey);
# 1250 "/usr/include/openssl/ec.h" 3 4
int ECDSA_sign_ex(int type, const unsigned char *dgst, int dgstlen,
                  unsigned char *sig, unsigned int *siglen,
                  const BIGNUM *kinv, const BIGNUM *rp, EC_KEY *eckey);
# 1265 "/usr/include/openssl/ec.h" 3 4
int ECDSA_verify(int type, const unsigned char *dgst, int dgstlen,
                 const unsigned char *sig, int siglen, EC_KEY *eckey);





int ECDSA_size(const EC_KEY *eckey);





EC_KEY_METHOD *EC_KEY_METHOD_new(const EC_KEY_METHOD *meth);
void EC_KEY_METHOD_free(EC_KEY_METHOD *meth);
void EC_KEY_METHOD_set_init(EC_KEY_METHOD *meth,
                            int (*init)(EC_KEY *key),
                            void (*finish)(EC_KEY *key),
                            int (*copy)(EC_KEY *dest, const EC_KEY *src),
                            int (*set_group)(EC_KEY *key, const EC_GROUP *grp),
                            int (*set_private)(EC_KEY *key,
                                               const BIGNUM *priv_key),
                            int (*set_public)(EC_KEY *key,
                                              const EC_POINT *pub_key));

void EC_KEY_METHOD_set_keygen(EC_KEY_METHOD *meth,
                              int (*keygen)(EC_KEY *key));

void EC_KEY_METHOD_set_compute_key(EC_KEY_METHOD *meth,
                                   int (*ckey)(unsigned char **psec,
                                               size_t *pseclen,
                                               const EC_POINT *pub_key,
                                               const EC_KEY *ecdh));

void EC_KEY_METHOD_set_sign(EC_KEY_METHOD *meth,
                            int (*sign)(int type, const unsigned char *dgst,
                                        int dlen, unsigned char *sig,
                                        unsigned int *siglen,
                                        const BIGNUM *kinv, const BIGNUM *r,
                                        EC_KEY *eckey),
                            int (*sign_setup)(EC_KEY *eckey, BN_CTX *ctx_in,
                                              BIGNUM **kinvp, BIGNUM **rp),
                            ECDSA_SIG *(*sign_sig)(const unsigned char *dgst,
                                                   int dgst_len,
                                                   const BIGNUM *in_kinv,
                                                   const BIGNUM *in_r,
                                                   EC_KEY *eckey));

void EC_KEY_METHOD_set_verify(EC_KEY_METHOD *meth,
                              int (*verify)(int type, const unsigned
                                            char *dgst, int dgst_len,
                                            const unsigned char *sigbuf,
                                            int sig_len, EC_KEY *eckey),
                              int (*verify_sig)(const unsigned char *dgst,
                                                int dgst_len,
                                                const ECDSA_SIG *sig,
                                                EC_KEY *eckey));

void EC_KEY_METHOD_get_init(const EC_KEY_METHOD *meth,
                            int (**pinit)(EC_KEY *key),
                            void (**pfinish)(EC_KEY *key),
                            int (**pcopy)(EC_KEY *dest, const EC_KEY *src),
                            int (**pset_group)(EC_KEY *key,
                                               const EC_GROUP *grp),
                            int (**pset_private)(EC_KEY *key,
                                                 const BIGNUM *priv_key),
                            int (**pset_public)(EC_KEY *key,
                                                const EC_POINT *pub_key));

void EC_KEY_METHOD_get_keygen(const EC_KEY_METHOD *meth,
                              int (**pkeygen)(EC_KEY *key));

void EC_KEY_METHOD_get_compute_key(const EC_KEY_METHOD *meth,
                                   int (**pck)(unsigned char **psec,
                                               size_t *pseclen,
                                               const EC_POINT *pub_key,
                                               const EC_KEY *ecdh));

void EC_KEY_METHOD_get_sign(const EC_KEY_METHOD *meth,
                            int (**psign)(int type, const unsigned char *dgst,
                                          int dlen, unsigned char *sig,
                                          unsigned int *siglen,
                                          const BIGNUM *kinv, const BIGNUM *r,
                                          EC_KEY *eckey),
                            int (**psign_setup)(EC_KEY *eckey, BN_CTX *ctx_in,
                                                BIGNUM **kinvp, BIGNUM **rp),
                            ECDSA_SIG *(**psign_sig)(const unsigned char *dgst,
                                                     int dgst_len,
                                                     const BIGNUM *in_kinv,
                                                     const BIGNUM *in_r,
                                                     EC_KEY *eckey));

void EC_KEY_METHOD_get_verify(const EC_KEY_METHOD *meth,
                              int (**pverify)(int type, const unsigned
                                              char *dgst, int dgst_len,
                                              const unsigned char *sigbuf,
                                              int sig_len, EC_KEY *eckey),
                              int (**pverify_sig)(const unsigned char *dgst,
                                                  int dgst_len,
                                                  const ECDSA_SIG *sig,
                                                  EC_KEY *eckey));
# 23 "/usr/include/openssl/x509.h" 2 3 4


# 1 "/usr/include/openssl/rsa.h" 1 3 4
# 13 "/usr/include/openssl/rsa.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 14 "/usr/include/openssl/rsa.h" 2 3 4
# 23 "/usr/include/openssl/rsa.h" 3 4
# 1 "/usr/include/openssl/rsaerr.h" 1 3 4
# 21 "/usr/include/openssl/rsaerr.h" 3 4
int ERR_load_RSA_strings(void);
# 24 "/usr/include/openssl/rsa.h" 2 3 4
# 203 "/usr/include/openssl/rsa.h" 3 4
RSA *RSA_new(void);
RSA *RSA_new_method(ENGINE *engine);
int RSA_bits(const RSA *rsa);
int RSA_size(const RSA *rsa);
int RSA_security_bits(const RSA *rsa);

int RSA_set0_key(RSA *r, BIGNUM *n, BIGNUM *e, BIGNUM *d);
int RSA_set0_factors(RSA *r, BIGNUM *p, BIGNUM *q);
int RSA_set0_crt_params(RSA *r,BIGNUM *dmp1, BIGNUM *dmq1, BIGNUM *iqmp);
int RSA_set0_multi_prime_params(RSA *r, BIGNUM *primes[], BIGNUM *exps[],
                                BIGNUM *coeffs[], int pnum);
void RSA_get0_key(const RSA *r,
                  const BIGNUM **n, const BIGNUM **e, const BIGNUM **d);
void RSA_get0_factors(const RSA *r, const BIGNUM **p, const BIGNUM **q);
int RSA_get_multi_prime_extra_count(const RSA *r);
int RSA_get0_multi_prime_factors(const RSA *r, const BIGNUM *primes[]);
void RSA_get0_crt_params(const RSA *r,
                         const BIGNUM **dmp1, const BIGNUM **dmq1,
                         const BIGNUM **iqmp);
int RSA_get0_multi_prime_crt_params(const RSA *r, const BIGNUM *exps[],
                                    const BIGNUM *coeffs[]);
const BIGNUM *RSA_get0_n(const RSA *d);
const BIGNUM *RSA_get0_e(const RSA *d);
const BIGNUM *RSA_get0_d(const RSA *d);
const BIGNUM *RSA_get0_p(const RSA *d);
const BIGNUM *RSA_get0_q(const RSA *d);
const BIGNUM *RSA_get0_dmp1(const RSA *r);
const BIGNUM *RSA_get0_dmq1(const RSA *r);
const BIGNUM *RSA_get0_iqmp(const RSA *r);
const RSA_PSS_PARAMS *RSA_get0_pss_params(const RSA *r);
void RSA_clear_flags(RSA *r, int flags);
int RSA_test_flags(const RSA *r, int flags);
void RSA_set_flags(RSA *r, int flags);
int RSA_get_version(RSA *r);
ENGINE *RSA_get0_engine(const RSA *r);


RSA *RSA_generate_key(int bits, unsigned long e, void (*callback) (int, int, void *), void *cb_arg) __attribute__ ((deprecated));




int RSA_generate_key_ex(RSA *rsa, int bits, BIGNUM *e, BN_GENCB *cb);

int RSA_generate_multi_prime_key(RSA *rsa, int bits, int primes,
                                 BIGNUM *e, BN_GENCB *cb);

int RSA_X931_derive_ex(RSA *rsa, BIGNUM *p1, BIGNUM *p2, BIGNUM *q1,
                       BIGNUM *q2, const BIGNUM *Xp1, const BIGNUM *Xp2,
                       const BIGNUM *Xp, const BIGNUM *Xq1, const BIGNUM *Xq2,
                       const BIGNUM *Xq, const BIGNUM *e, BN_GENCB *cb);
int RSA_X931_generate_key_ex(RSA *rsa, int bits, const BIGNUM *e,
                             BN_GENCB *cb);

int RSA_check_key(const RSA *);
int RSA_check_key_ex(const RSA *, BN_GENCB *cb);

int RSA_public_encrypt(int flen, const unsigned char *from,
                       unsigned char *to, RSA *rsa, int padding);
int RSA_private_encrypt(int flen, const unsigned char *from,
                        unsigned char *to, RSA *rsa, int padding);
int RSA_public_decrypt(int flen, const unsigned char *from,
                       unsigned char *to, RSA *rsa, int padding);
int RSA_private_decrypt(int flen, const unsigned char *from,
                        unsigned char *to, RSA *rsa, int padding);
void RSA_free(RSA *r);

int RSA_up_ref(RSA *r);

int RSA_flags(const RSA *r);

void RSA_set_default_method(const RSA_METHOD *meth);
const RSA_METHOD *RSA_get_default_method(void);
const RSA_METHOD *RSA_null_method(void);
const RSA_METHOD *RSA_get_method(const RSA *rsa);
int RSA_set_method(RSA *rsa, const RSA_METHOD *meth);


const RSA_METHOD *RSA_PKCS1_OpenSSL(void);

int RSA_pkey_ctx_ctrl(EVP_PKEY_CTX *ctx, int optype, int cmd, int p1, void *p2);

RSA *d2i_RSAPublicKey(RSA **a, const unsigned char **in, long len); int i2d_RSAPublicKey(const RSA *a, unsigned char **out); extern const ASN1_ITEM RSAPublicKey_it;
RSA *d2i_RSAPrivateKey(RSA **a, const unsigned char **in, long len); int i2d_RSAPrivateKey(const RSA *a, unsigned char **out); extern const ASN1_ITEM RSAPrivateKey_it;

struct rsa_pss_params_st {
    X509_ALGOR *hashAlgorithm;
    X509_ALGOR *maskGenAlgorithm;
    ASN1_INTEGER *saltLength;
    ASN1_INTEGER *trailerField;

    X509_ALGOR *maskHash;
};

RSA_PSS_PARAMS *RSA_PSS_PARAMS_new(void); void RSA_PSS_PARAMS_free(RSA_PSS_PARAMS *a); RSA_PSS_PARAMS *d2i_RSA_PSS_PARAMS(RSA_PSS_PARAMS **a, const unsigned char **in, long len); int i2d_RSA_PSS_PARAMS(RSA_PSS_PARAMS *a, unsigned char **out); extern const ASN1_ITEM RSA_PSS_PARAMS_it;

typedef struct rsa_oaep_params_st {
    X509_ALGOR *hashFunc;
    X509_ALGOR *maskGenFunc;
    X509_ALGOR *pSourceFunc;

    X509_ALGOR *maskHash;
} RSA_OAEP_PARAMS;

RSA_OAEP_PARAMS *RSA_OAEP_PARAMS_new(void); void RSA_OAEP_PARAMS_free(RSA_OAEP_PARAMS *a); RSA_OAEP_PARAMS *d2i_RSA_OAEP_PARAMS(RSA_OAEP_PARAMS **a, const unsigned char **in, long len); int i2d_RSA_OAEP_PARAMS(RSA_OAEP_PARAMS *a, unsigned char **out); extern const ASN1_ITEM RSA_OAEP_PARAMS_it;


int RSA_print_fp(FILE *fp, const RSA *r, int offset);


int RSA_print(BIO *bp, const RSA *r, int offset);





int RSA_sign(int type, const unsigned char *m, unsigned int m_length,
             unsigned char *sigret, unsigned int *siglen, RSA *rsa);
int RSA_verify(int type, const unsigned char *m, unsigned int m_length,
               const unsigned char *sigbuf, unsigned int siglen, RSA *rsa);





int RSA_sign_ASN1_OCTET_STRING(int type,
                               const unsigned char *m, unsigned int m_length,
                               unsigned char *sigret, unsigned int *siglen,
                               RSA *rsa);
int RSA_verify_ASN1_OCTET_STRING(int type, const unsigned char *m,
                                 unsigned int m_length, unsigned char *sigbuf,
                                 unsigned int siglen, RSA *rsa);

int RSA_blinding_on(RSA *rsa, BN_CTX *ctx);
void RSA_blinding_off(RSA *rsa);
BN_BLINDING *RSA_setup_blinding(RSA *rsa, BN_CTX *ctx);

int RSA_padding_add_PKCS1_type_1(unsigned char *to, int tlen,
                                 const unsigned char *f, int fl);
int RSA_padding_check_PKCS1_type_1(unsigned char *to, int tlen,
                                   const unsigned char *f, int fl,
                                   int rsa_len);
int RSA_padding_add_PKCS1_type_2(unsigned char *to, int tlen,
                                 const unsigned char *f, int fl);
int RSA_padding_check_PKCS1_type_2(unsigned char *to, int tlen,
                                   const unsigned char *f, int fl,
                                   int rsa_len);
int PKCS1_MGF1(unsigned char *mask, long len, const unsigned char *seed,
               long seedlen, const EVP_MD *dgst);
int RSA_padding_add_PKCS1_OAEP(unsigned char *to, int tlen,
                               const unsigned char *f, int fl,
                               const unsigned char *p, int pl);
int RSA_padding_check_PKCS1_OAEP(unsigned char *to, int tlen,
                                 const unsigned char *f, int fl, int rsa_len,
                                 const unsigned char *p, int pl);
int RSA_padding_add_PKCS1_OAEP_mgf1(unsigned char *to, int tlen,
                                    const unsigned char *from, int flen,
                                    const unsigned char *param, int plen,
                                    const EVP_MD *md, const EVP_MD *mgf1md);
int RSA_padding_check_PKCS1_OAEP_mgf1(unsigned char *to, int tlen,
                                      const unsigned char *from, int flen,
                                      int num, const unsigned char *param,
                                      int plen, const EVP_MD *md,
                                      const EVP_MD *mgf1md);
int RSA_padding_add_SSLv23(unsigned char *to, int tlen,
                           const unsigned char *f, int fl);
int RSA_padding_check_SSLv23(unsigned char *to, int tlen,
                             const unsigned char *f, int fl, int rsa_len);
int RSA_padding_add_none(unsigned char *to, int tlen, const unsigned char *f,
                         int fl);
int RSA_padding_check_none(unsigned char *to, int tlen,
                           const unsigned char *f, int fl, int rsa_len);
int RSA_padding_add_X931(unsigned char *to, int tlen, const unsigned char *f,
                         int fl);
int RSA_padding_check_X931(unsigned char *to, int tlen,
                           const unsigned char *f, int fl, int rsa_len);
int RSA_X931_hash_id(int nid);

int RSA_verify_PKCS1_PSS(RSA *rsa, const unsigned char *mHash,
                         const EVP_MD *Hash, const unsigned char *EM,
                         int sLen);
int RSA_padding_add_PKCS1_PSS(RSA *rsa, unsigned char *EM,
                              const unsigned char *mHash, const EVP_MD *Hash,
                              int sLen);

int RSA_verify_PKCS1_PSS_mgf1(RSA *rsa, const unsigned char *mHash,
                              const EVP_MD *Hash, const EVP_MD *mgf1Hash,
                              const unsigned char *EM, int sLen);

int RSA_padding_add_PKCS1_PSS_mgf1(RSA *rsa, unsigned char *EM,
                                   const unsigned char *mHash,
                                   const EVP_MD *Hash, const EVP_MD *mgf1Hash,
                                   int sLen);



int RSA_set_ex_data(RSA *r, int idx, void *arg);
void *RSA_get_ex_data(const RSA *r, int idx);

RSA *RSAPublicKey_dup(RSA *rsa);
RSA *RSAPrivateKey_dup(RSA *rsa);
# 427 "/usr/include/openssl/rsa.h" 3 4
RSA_METHOD *RSA_meth_new(const char *name, int flags);
void RSA_meth_free(RSA_METHOD *meth);
RSA_METHOD *RSA_meth_dup(const RSA_METHOD *meth);
const char *RSA_meth_get0_name(const RSA_METHOD *meth);
int RSA_meth_set1_name(RSA_METHOD *meth, const char *name);
int RSA_meth_get_flags(const RSA_METHOD *meth);
int RSA_meth_set_flags(RSA_METHOD *meth, int flags);
void *RSA_meth_get0_app_data(const RSA_METHOD *meth);
int RSA_meth_set0_app_data(RSA_METHOD *meth, void *app_data);
int (*RSA_meth_get_pub_enc(const RSA_METHOD *meth))
    (int flen, const unsigned char *from,
     unsigned char *to, RSA *rsa, int padding);
int RSA_meth_set_pub_enc(RSA_METHOD *rsa,
                         int (*pub_enc) (int flen, const unsigned char *from,
                                         unsigned char *to, RSA *rsa,
                                         int padding));
int (*RSA_meth_get_pub_dec(const RSA_METHOD *meth))
    (int flen, const unsigned char *from,
     unsigned char *to, RSA *rsa, int padding);
int RSA_meth_set_pub_dec(RSA_METHOD *rsa,
                         int (*pub_dec) (int flen, const unsigned char *from,
                                         unsigned char *to, RSA *rsa,
                                         int padding));
int (*RSA_meth_get_priv_enc(const RSA_METHOD *meth))
    (int flen, const unsigned char *from,
     unsigned char *to, RSA *rsa, int padding);
int RSA_meth_set_priv_enc(RSA_METHOD *rsa,
                          int (*priv_enc) (int flen, const unsigned char *from,
                                           unsigned char *to, RSA *rsa,
                                           int padding));
int (*RSA_meth_get_priv_dec(const RSA_METHOD *meth))
    (int flen, const unsigned char *from,
     unsigned char *to, RSA *rsa, int padding);
int RSA_meth_set_priv_dec(RSA_METHOD *rsa,
                          int (*priv_dec) (int flen, const unsigned char *from,
                                           unsigned char *to, RSA *rsa,
                                           int padding));
int (*RSA_meth_get_mod_exp(const RSA_METHOD *meth))
    (BIGNUM *r0, const BIGNUM *i, RSA *rsa, BN_CTX *ctx);
int RSA_meth_set_mod_exp(RSA_METHOD *rsa,
                         int (*mod_exp) (BIGNUM *r0, const BIGNUM *i, RSA *rsa,
                                         BN_CTX *ctx));
int (*RSA_meth_get_bn_mod_exp(const RSA_METHOD *meth))
    (BIGNUM *r, const BIGNUM *a, const BIGNUM *p,
     const BIGNUM *m, BN_CTX *ctx, BN_MONT_CTX *m_ctx);
int RSA_meth_set_bn_mod_exp(RSA_METHOD *rsa,
                            int (*bn_mod_exp) (BIGNUM *r,
                                               const BIGNUM *a,
                                               const BIGNUM *p,
                                               const BIGNUM *m,
                                               BN_CTX *ctx,
                                               BN_MONT_CTX *m_ctx));
int (*RSA_meth_get_init(const RSA_METHOD *meth)) (RSA *rsa);
int RSA_meth_set_init(RSA_METHOD *rsa, int (*init) (RSA *rsa));
int (*RSA_meth_get_finish(const RSA_METHOD *meth)) (RSA *rsa);
int RSA_meth_set_finish(RSA_METHOD *rsa, int (*finish) (RSA *rsa));
int (*RSA_meth_get_sign(const RSA_METHOD *meth))
    (int type,
     const unsigned char *m, unsigned int m_length,
     unsigned char *sigret, unsigned int *siglen,
     const RSA *rsa);
int RSA_meth_set_sign(RSA_METHOD *rsa,
                      int (*sign) (int type, const unsigned char *m,
                                   unsigned int m_length,
                                   unsigned char *sigret, unsigned int *siglen,
                                   const RSA *rsa));
int (*RSA_meth_get_verify(const RSA_METHOD *meth))
    (int dtype, const unsigned char *m,
     unsigned int m_length, const unsigned char *sigbuf,
     unsigned int siglen, const RSA *rsa);
int RSA_meth_set_verify(RSA_METHOD *rsa,
                        int (*verify) (int dtype, const unsigned char *m,
                                       unsigned int m_length,
                                       const unsigned char *sigbuf,
                                       unsigned int siglen, const RSA *rsa));
int (*RSA_meth_get_keygen(const RSA_METHOD *meth))
    (RSA *rsa, int bits, BIGNUM *e, BN_GENCB *cb);
int RSA_meth_set_keygen(RSA_METHOD *rsa,
                        int (*keygen) (RSA *rsa, int bits, BIGNUM *e,
                                       BN_GENCB *cb));
int (*RSA_meth_get_multi_prime_keygen(const RSA_METHOD *meth))
    (RSA *rsa, int bits, int primes, BIGNUM *e, BN_GENCB *cb);
int RSA_meth_set_multi_prime_keygen(RSA_METHOD *meth,
                                    int (*keygen) (RSA *rsa, int bits,
                                                   int primes, BIGNUM *e,
                                                   BN_GENCB *cb));
# 26 "/usr/include/openssl/x509.h" 2 3 4
# 1 "/usr/include/openssl/dsa.h" 1 3 4
# 13 "/usr/include/openssl/dsa.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 14 "/usr/include/openssl/dsa.h" 2 3 4
# 25 "/usr/include/openssl/dsa.h" 3 4
# 1 "/usr/include/openssl/dh.h" 1 3 4
# 13 "/usr/include/openssl/dh.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 14 "/usr/include/openssl/dh.h" 2 3 4
# 23 "/usr/include/openssl/dh.h" 3 4
# 1 "/usr/include/openssl/dherr.h" 1 3 4
# 18 "/usr/include/openssl/dherr.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 19 "/usr/include/openssl/dherr.h" 2 3 4






int ERR_load_DH_strings(void);
# 24 "/usr/include/openssl/dh.h" 2 3 4
# 68 "/usr/include/openssl/dh.h" 3 4
extern const ASN1_ITEM DHparams_it;
# 120 "/usr/include/openssl/dh.h" 3 4
DH *DHparams_dup(DH *);

const DH_METHOD *DH_OpenSSL(void);

void DH_set_default_method(const DH_METHOD *meth);
const DH_METHOD *DH_get_default_method(void);
int DH_set_method(DH *dh, const DH_METHOD *meth);
DH *DH_new_method(ENGINE *engine);

DH *DH_new(void);
void DH_free(DH *dh);
int DH_up_ref(DH *dh);
int DH_bits(const DH *dh);
int DH_size(const DH *dh);
int DH_security_bits(const DH *dh);


int DH_set_ex_data(DH *d, int idx, void *arg);
void *DH_get_ex_data(DH *d, int idx);


DH *DH_generate_parameters(int prime_len, int generator, void (*callback) (int, int, void *), void *cb_arg) __attribute__ ((deprecated));





int DH_generate_parameters_ex(DH *dh, int prime_len, int generator,
                              BN_GENCB *cb);

int DH_check_params_ex(const DH *dh);
int DH_check_ex(const DH *dh);
int DH_check_pub_key_ex(const DH *dh, const BIGNUM *pub_key);
int DH_check_params(const DH *dh, int *ret);
int DH_check(const DH *dh, int *codes);
int DH_check_pub_key(const DH *dh, const BIGNUM *pub_key, int *codes);
int DH_generate_key(DH *dh);
int DH_compute_key(unsigned char *key, const BIGNUM *pub_key, DH *dh);
int DH_compute_key_padded(unsigned char *key, const BIGNUM *pub_key, DH *dh);
DH *d2i_DHparams(DH **a, const unsigned char **pp, long length);
int i2d_DHparams(const DH *a, unsigned char **pp);
DH *d2i_DHxparams(DH **a, const unsigned char **pp, long length);
int i2d_DHxparams(const DH *a, unsigned char **pp);

int DHparams_print_fp(FILE *fp, const DH *x);

int DHparams_print(BIO *bp, const DH *x);


DH *DH_get_1024_160(void);
DH *DH_get_2048_224(void);
DH *DH_get_2048_256(void);


DH *DH_new_by_nid(int nid);
int DH_get_nid(const DH *dh);



int DH_KDF_X9_42(unsigned char *out, size_t outlen,
                 const unsigned char *Z, size_t Zlen,
                 ASN1_OBJECT *key_oid,
                 const unsigned char *ukm, size_t ukmlen, const EVP_MD *md);


void DH_get0_pqg(const DH *dh,
                 const BIGNUM **p, const BIGNUM **q, const BIGNUM **g);
int DH_set0_pqg(DH *dh, BIGNUM *p, BIGNUM *q, BIGNUM *g);
void DH_get0_key(const DH *dh,
                 const BIGNUM **pub_key, const BIGNUM **priv_key);
int DH_set0_key(DH *dh, BIGNUM *pub_key, BIGNUM *priv_key);
const BIGNUM *DH_get0_p(const DH *dh);
const BIGNUM *DH_get0_q(const DH *dh);
const BIGNUM *DH_get0_g(const DH *dh);
const BIGNUM *DH_get0_priv_key(const DH *dh);
const BIGNUM *DH_get0_pub_key(const DH *dh);
void DH_clear_flags(DH *dh, int flags);
int DH_test_flags(const DH *dh, int flags);
void DH_set_flags(DH *dh, int flags);
ENGINE *DH_get0_engine(DH *d);
long DH_get_length(const DH *dh);
int DH_set_length(DH *dh, long length);

DH_METHOD *DH_meth_new(const char *name, int flags);
void DH_meth_free(DH_METHOD *dhm);
DH_METHOD *DH_meth_dup(const DH_METHOD *dhm);
const char *DH_meth_get0_name(const DH_METHOD *dhm);
int DH_meth_set1_name(DH_METHOD *dhm, const char *name);
int DH_meth_get_flags(const DH_METHOD *dhm);
int DH_meth_set_flags(DH_METHOD *dhm, int flags);
void *DH_meth_get0_app_data(const DH_METHOD *dhm);
int DH_meth_set0_app_data(DH_METHOD *dhm, void *app_data);
int (*DH_meth_get_generate_key(const DH_METHOD *dhm)) (DH *);
int DH_meth_set_generate_key(DH_METHOD *dhm, int (*generate_key) (DH *));
int (*DH_meth_get_compute_key(const DH_METHOD *dhm))
        (unsigned char *key, const BIGNUM *pub_key, DH *dh);
int DH_meth_set_compute_key(DH_METHOD *dhm,
        int (*compute_key) (unsigned char *key, const BIGNUM *pub_key, DH *dh));
int (*DH_meth_get_bn_mod_exp(const DH_METHOD *dhm))
    (const DH *, BIGNUM *, const BIGNUM *, const BIGNUM *, const BIGNUM *,
     BN_CTX *, BN_MONT_CTX *);
int DH_meth_set_bn_mod_exp(DH_METHOD *dhm,
    int (*bn_mod_exp) (const DH *, BIGNUM *, const BIGNUM *, const BIGNUM *,
                       const BIGNUM *, BN_CTX *, BN_MONT_CTX *));
int (*DH_meth_get_init(const DH_METHOD *dhm))(DH *);
int DH_meth_set_init(DH_METHOD *dhm, int (*init)(DH *));
int (*DH_meth_get_finish(const DH_METHOD *dhm)) (DH *);
int DH_meth_set_finish(DH_METHOD *dhm, int (*finish) (DH *));
int (*DH_meth_get_generate_params(const DH_METHOD *dhm))
        (DH *, int, int, BN_GENCB *);
int DH_meth_set_generate_params(DH_METHOD *dhm,
        int (*generate_params) (DH *, int, int, BN_GENCB *));
# 26 "/usr/include/openssl/dsa.h" 2 3 4

# 1 "/usr/include/openssl/dsaerr.h" 1 3 4
# 18 "/usr/include/openssl/dsaerr.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 19 "/usr/include/openssl/dsaerr.h" 2 3 4






int ERR_load_DSA_strings(void);
# 28 "/usr/include/openssl/dsa.h" 2 3 4
# 65 "/usr/include/openssl/dsa.h" 3 4
typedef struct DSA_SIG_st DSA_SIG;
# 74 "/usr/include/openssl/dsa.h" 3 4
DSA *DSAparams_dup(DSA *x);
DSA_SIG *DSA_SIG_new(void);
void DSA_SIG_free(DSA_SIG *a);
int i2d_DSA_SIG(const DSA_SIG *a, unsigned char **pp);
DSA_SIG *d2i_DSA_SIG(DSA_SIG **v, const unsigned char **pp, long length);
void DSA_SIG_get0(const DSA_SIG *sig, const BIGNUM **pr, const BIGNUM **ps);
int DSA_SIG_set0(DSA_SIG *sig, BIGNUM *r, BIGNUM *s);

DSA_SIG *DSA_do_sign(const unsigned char *dgst, int dlen, DSA *dsa);
int DSA_do_verify(const unsigned char *dgst, int dgst_len,
                  DSA_SIG *sig, DSA *dsa);

const DSA_METHOD *DSA_OpenSSL(void);

void DSA_set_default_method(const DSA_METHOD *);
const DSA_METHOD *DSA_get_default_method(void);
int DSA_set_method(DSA *dsa, const DSA_METHOD *);
const DSA_METHOD *DSA_get_method(DSA *d);

DSA *DSA_new(void);
DSA *DSA_new_method(ENGINE *engine);
void DSA_free(DSA *r);

int DSA_up_ref(DSA *r);
int DSA_size(const DSA *);
int DSA_bits(const DSA *d);
int DSA_security_bits(const DSA *d);

int DSA_sign_setup(DSA *dsa, BN_CTX *ctx_in, BIGNUM **kinvp, BIGNUM **rp);
int DSA_sign(int type, const unsigned char *dgst, int dlen,
             unsigned char *sig, unsigned int *siglen, DSA *dsa);
int DSA_verify(int type, const unsigned char *dgst, int dgst_len,
               const unsigned char *sigbuf, int siglen, DSA *dsa);


int DSA_set_ex_data(DSA *d, int idx, void *arg);
void *DSA_get_ex_data(DSA *d, int idx);

DSA *d2i_DSAPublicKey(DSA **a, const unsigned char **pp, long length);
DSA *d2i_DSAPrivateKey(DSA **a, const unsigned char **pp, long length);
DSA *d2i_DSAparams(DSA **a, const unsigned char **pp, long length);


DSA *DSA_generate_parameters(int bits, unsigned char *seed, int seed_len, int *counter_ret, unsigned long *h_ret, void (*callback) (int, int, void *), void *cb_arg) __attribute__ ((deprecated));
# 127 "/usr/include/openssl/dsa.h" 3 4
int DSA_generate_parameters_ex(DSA *dsa, int bits,
                               const unsigned char *seed, int seed_len,
                               int *counter_ret, unsigned long *h_ret,
                               BN_GENCB *cb);

int DSA_generate_key(DSA *a);
int i2d_DSAPublicKey(const DSA *a, unsigned char **pp);
int i2d_DSAPrivateKey(const DSA *a, unsigned char **pp);
int i2d_DSAparams(const DSA *a, unsigned char **pp);

int DSAparams_print(BIO *bp, const DSA *x);
int DSA_print(BIO *bp, const DSA *x, int off);

int DSAparams_print_fp(FILE *fp, const DSA *x);
int DSA_print_fp(FILE *bp, const DSA *x, int off);
# 159 "/usr/include/openssl/dsa.h" 3 4
DH *DSA_dup_DH(const DSA *r);
# 176 "/usr/include/openssl/dsa.h" 3 4
void DSA_get0_pqg(const DSA *d,
                  const BIGNUM **p, const BIGNUM **q, const BIGNUM **g);
int DSA_set0_pqg(DSA *d, BIGNUM *p, BIGNUM *q, BIGNUM *g);
void DSA_get0_key(const DSA *d,
                  const BIGNUM **pub_key, const BIGNUM **priv_key);
int DSA_set0_key(DSA *d, BIGNUM *pub_key, BIGNUM *priv_key);
const BIGNUM *DSA_get0_p(const DSA *d);
const BIGNUM *DSA_get0_q(const DSA *d);
const BIGNUM *DSA_get0_g(const DSA *d);
const BIGNUM *DSA_get0_pub_key(const DSA *d);
const BIGNUM *DSA_get0_priv_key(const DSA *d);
void DSA_clear_flags(DSA *d, int flags);
int DSA_test_flags(const DSA *d, int flags);
void DSA_set_flags(DSA *d, int flags);
ENGINE *DSA_get0_engine(DSA *d);

DSA_METHOD *DSA_meth_new(const char *name, int flags);
void DSA_meth_free(DSA_METHOD *dsam);
DSA_METHOD *DSA_meth_dup(const DSA_METHOD *dsam);
const char *DSA_meth_get0_name(const DSA_METHOD *dsam);
int DSA_meth_set1_name(DSA_METHOD *dsam, const char *name);
int DSA_meth_get_flags(const DSA_METHOD *dsam);
int DSA_meth_set_flags(DSA_METHOD *dsam, int flags);
void *DSA_meth_get0_app_data(const DSA_METHOD *dsam);
int DSA_meth_set0_app_data(DSA_METHOD *dsam, void *app_data);
DSA_SIG *(*DSA_meth_get_sign(const DSA_METHOD *dsam))
        (const unsigned char *, int, DSA *);
int DSA_meth_set_sign(DSA_METHOD *dsam,
                       DSA_SIG *(*sign) (const unsigned char *, int, DSA *));
int (*DSA_meth_get_sign_setup(const DSA_METHOD *dsam))
        (DSA *, BN_CTX *, BIGNUM **, BIGNUM **);
int DSA_meth_set_sign_setup(DSA_METHOD *dsam,
        int (*sign_setup) (DSA *, BN_CTX *, BIGNUM **, BIGNUM **));
int (*DSA_meth_get_verify(const DSA_METHOD *dsam))
        (const unsigned char *, int, DSA_SIG *, DSA *);
int DSA_meth_set_verify(DSA_METHOD *dsam,
    int (*verify) (const unsigned char *, int, DSA_SIG *, DSA *));
int (*DSA_meth_get_mod_exp(const DSA_METHOD *dsam))
        (DSA *, BIGNUM *, const BIGNUM *, const BIGNUM *, const BIGNUM *,
         const BIGNUM *, const BIGNUM *, BN_CTX *, BN_MONT_CTX *);
int DSA_meth_set_mod_exp(DSA_METHOD *dsam,
    int (*mod_exp) (DSA *, BIGNUM *, const BIGNUM *, const BIGNUM *,
                    const BIGNUM *, const BIGNUM *, const BIGNUM *, BN_CTX *,
                    BN_MONT_CTX *));
int (*DSA_meth_get_bn_mod_exp(const DSA_METHOD *dsam))
    (DSA *, BIGNUM *, const BIGNUM *, const BIGNUM *, const BIGNUM *,
     BN_CTX *, BN_MONT_CTX *);
int DSA_meth_set_bn_mod_exp(DSA_METHOD *dsam,
    int (*bn_mod_exp) (DSA *, BIGNUM *, const BIGNUM *, const BIGNUM *,
                       const BIGNUM *, BN_CTX *, BN_MONT_CTX *));
int (*DSA_meth_get_init(const DSA_METHOD *dsam))(DSA *);
int DSA_meth_set_init(DSA_METHOD *dsam, int (*init)(DSA *));
int (*DSA_meth_get_finish(const DSA_METHOD *dsam)) (DSA *);
int DSA_meth_set_finish(DSA_METHOD *dsam, int (*finish) (DSA *));
int (*DSA_meth_get_paramgen(const DSA_METHOD *dsam))
        (DSA *, int, const unsigned char *, int, int *, unsigned long *,
         BN_GENCB *);
int DSA_meth_set_paramgen(DSA_METHOD *dsam,
        int (*paramgen) (DSA *, int, const unsigned char *, int, int *,
                         unsigned long *, BN_GENCB *));
int (*DSA_meth_get_keygen(const DSA_METHOD *dsam)) (DSA *);
int DSA_meth_set_keygen(DSA_METHOD *dsam, int (*keygen) (DSA *));
# 27 "/usr/include/openssl/x509.h" 2 3 4



# 1 "/usr/include/openssl/sha.h" 1 3 4
# 14 "/usr/include/openssl/sha.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 15 "/usr/include/openssl/sha.h" 2 3 4
# 34 "/usr/include/openssl/sha.h" 3 4
typedef struct SHAstate_st {
    unsigned int h0, h1, h2, h3, h4;
    unsigned int Nl, Nh;
    unsigned int data[16];
    unsigned int num;
} SHA_CTX;

int SHA1_Init(SHA_CTX *c);
int SHA1_Update(SHA_CTX *c, const void *data, size_t len);
int SHA1_Final(unsigned char *md, SHA_CTX *c);
unsigned char *SHA1(const unsigned char *d, size_t n, unsigned char *md);
void SHA1_Transform(SHA_CTX *c, const unsigned char *data);





typedef struct SHA256state_st {
    unsigned int h[8];
    unsigned int Nl, Nh;
    unsigned int data[16];
    unsigned int num, md_len;
} SHA256_CTX;

int SHA224_Init(SHA256_CTX *c);
int SHA224_Update(SHA256_CTX *c, const void *data, size_t len);
int SHA224_Final(unsigned char *md, SHA256_CTX *c);
unsigned char *SHA224(const unsigned char *d, size_t n, unsigned char *md);
int SHA256_Init(SHA256_CTX *c);
int SHA256_Update(SHA256_CTX *c, const void *data, size_t len);
int SHA256_Final(unsigned char *md, SHA256_CTX *c);
unsigned char *SHA256(const unsigned char *d, size_t n, unsigned char *md);
void SHA256_Transform(SHA256_CTX *c, const unsigned char *data);
# 95 "/usr/include/openssl/sha.h" 3 4
typedef struct SHA512state_st {
    unsigned long long h[8];
    unsigned long long Nl, Nh;
    union {
        unsigned long long d[16];
        unsigned char p[(16*8)];
    } u;
    unsigned int num, md_len;
} SHA512_CTX;

int SHA384_Init(SHA512_CTX *c);
int SHA384_Update(SHA512_CTX *c, const void *data, size_t len);
int SHA384_Final(unsigned char *md, SHA512_CTX *c);
unsigned char *SHA384(const unsigned char *d, size_t n, unsigned char *md);
int SHA512_Init(SHA512_CTX *c);
int SHA512_Update(SHA512_CTX *c, const void *data, size_t len);
int SHA512_Final(unsigned char *md, SHA512_CTX *c);
unsigned char *SHA512(const unsigned char *d, size_t n, unsigned char *md);
void SHA512_Transform(SHA512_CTX *c, const unsigned char *data);
# 31 "/usr/include/openssl/x509.h" 2 3 4
# 1 "/usr/include/openssl/x509err.h" 1 3 4
# 21 "/usr/include/openssl/x509err.h" 3 4
int ERR_load_X509_strings(void);
# 32 "/usr/include/openssl/x509.h" 2 3 4
# 59 "/usr/include/openssl/x509.h" 3 4
struct X509_algor_st {
    ASN1_OBJECT *algorithm;
    ASN1_TYPE *parameter;
} ;

typedef struct stack_st_X509_ALGOR X509_ALGORS;

typedef struct X509_val_st {
    ASN1_TIME *notBefore;
    ASN1_TIME *notAfter;
} X509_VAL;

typedef struct X509_sig_st X509_SIG;

typedef struct X509_name_entry_st X509_NAME_ENTRY;

struct stack_st_X509_NAME_ENTRY; typedef int (*sk_X509_NAME_ENTRY_compfunc)(const X509_NAME_ENTRY * const *a, const X509_NAME_ENTRY *const *b); typedef void (*sk_X509_NAME_ENTRY_freefunc)(X509_NAME_ENTRY *a); typedef X509_NAME_ENTRY * (*sk_X509_NAME_ENTRY_copyfunc)(const X509_NAME_ENTRY *a); static __attribute__((unused)) inline int sk_X509_NAME_ENTRY_num(const struct stack_st_X509_NAME_ENTRY *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_NAME_ENTRY *sk_X509_NAME_ENTRY_value(const struct stack_st_X509_NAME_ENTRY *sk, int idx) { return (X509_NAME_ENTRY *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_X509_NAME_ENTRY *sk_X509_NAME_ENTRY_new(sk_X509_NAME_ENTRY_compfunc compare) { return (struct stack_st_X509_NAME_ENTRY *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_X509_NAME_ENTRY *sk_X509_NAME_ENTRY_new_null(void) { return (struct stack_st_X509_NAME_ENTRY *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_X509_NAME_ENTRY *sk_X509_NAME_ENTRY_new_reserve(sk_X509_NAME_ENTRY_compfunc compare, int n) { return (struct stack_st_X509_NAME_ENTRY *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_X509_NAME_ENTRY_reserve(struct stack_st_X509_NAME_ENTRY *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_X509_NAME_ENTRY_free(struct stack_st_X509_NAME_ENTRY *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_X509_NAME_ENTRY_zero(struct stack_st_X509_NAME_ENTRY *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_NAME_ENTRY *sk_X509_NAME_ENTRY_delete(struct stack_st_X509_NAME_ENTRY *sk, int i) { return (X509_NAME_ENTRY *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline X509_NAME_ENTRY *sk_X509_NAME_ENTRY_delete_ptr(struct stack_st_X509_NAME_ENTRY *sk, X509_NAME_ENTRY *ptr) { return (X509_NAME_ENTRY *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_NAME_ENTRY_push(struct stack_st_X509_NAME_ENTRY *sk, X509_NAME_ENTRY *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_NAME_ENTRY_unshift(struct stack_st_X509_NAME_ENTRY *sk, X509_NAME_ENTRY *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline X509_NAME_ENTRY *sk_X509_NAME_ENTRY_pop(struct stack_st_X509_NAME_ENTRY *sk) { return (X509_NAME_ENTRY *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_NAME_ENTRY *sk_X509_NAME_ENTRY_shift(struct stack_st_X509_NAME_ENTRY *sk) { return (X509_NAME_ENTRY *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_X509_NAME_ENTRY_pop_free(struct stack_st_X509_NAME_ENTRY *sk, sk_X509_NAME_ENTRY_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_X509_NAME_ENTRY_insert(struct stack_st_X509_NAME_ENTRY *sk, X509_NAME_ENTRY *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline X509_NAME_ENTRY *sk_X509_NAME_ENTRY_set(struct stack_st_X509_NAME_ENTRY *sk, int idx, X509_NAME_ENTRY *ptr) { return (X509_NAME_ENTRY *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_NAME_ENTRY_find(struct stack_st_X509_NAME_ENTRY *sk, X509_NAME_ENTRY *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_NAME_ENTRY_find_ex(struct stack_st_X509_NAME_ENTRY *sk, X509_NAME_ENTRY *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_X509_NAME_ENTRY_sort(struct stack_st_X509_NAME_ENTRY *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_X509_NAME_ENTRY_is_sorted(const struct stack_st_X509_NAME_ENTRY *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_X509_NAME_ENTRY * sk_X509_NAME_ENTRY_dup(const struct stack_st_X509_NAME_ENTRY *sk) { return (struct stack_st_X509_NAME_ENTRY *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_X509_NAME_ENTRY *sk_X509_NAME_ENTRY_deep_copy(const struct stack_st_X509_NAME_ENTRY *sk, sk_X509_NAME_ENTRY_copyfunc copyfunc, sk_X509_NAME_ENTRY_freefunc freefunc) { return (struct stack_st_X509_NAME_ENTRY *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_X509_NAME_ENTRY_compfunc sk_X509_NAME_ENTRY_set_cmp_func(struct stack_st_X509_NAME_ENTRY *sk, sk_X509_NAME_ENTRY_compfunc compare) { return (sk_X509_NAME_ENTRY_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }

struct stack_st_X509_NAME; typedef int (*sk_X509_NAME_compfunc)(const X509_NAME * const *a, const X509_NAME *const *b); typedef void (*sk_X509_NAME_freefunc)(X509_NAME *a); typedef X509_NAME * (*sk_X509_NAME_copyfunc)(const X509_NAME *a); static __attribute__((unused)) inline int sk_X509_NAME_num(const struct stack_st_X509_NAME *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_NAME *sk_X509_NAME_value(const struct stack_st_X509_NAME *sk, int idx) { return (X509_NAME *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_X509_NAME *sk_X509_NAME_new(sk_X509_NAME_compfunc compare) { return (struct stack_st_X509_NAME *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_X509_NAME *sk_X509_NAME_new_null(void) { return (struct stack_st_X509_NAME *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_X509_NAME *sk_X509_NAME_new_reserve(sk_X509_NAME_compfunc compare, int n) { return (struct stack_st_X509_NAME *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_X509_NAME_reserve(struct stack_st_X509_NAME *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_X509_NAME_free(struct stack_st_X509_NAME *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_X509_NAME_zero(struct stack_st_X509_NAME *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_NAME *sk_X509_NAME_delete(struct stack_st_X509_NAME *sk, int i) { return (X509_NAME *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline X509_NAME *sk_X509_NAME_delete_ptr(struct stack_st_X509_NAME *sk, X509_NAME *ptr) { return (X509_NAME *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_NAME_push(struct stack_st_X509_NAME *sk, X509_NAME *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_NAME_unshift(struct stack_st_X509_NAME *sk, X509_NAME *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline X509_NAME *sk_X509_NAME_pop(struct stack_st_X509_NAME *sk) { return (X509_NAME *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_NAME *sk_X509_NAME_shift(struct stack_st_X509_NAME *sk) { return (X509_NAME *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_X509_NAME_pop_free(struct stack_st_X509_NAME *sk, sk_X509_NAME_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_X509_NAME_insert(struct stack_st_X509_NAME *sk, X509_NAME *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline X509_NAME *sk_X509_NAME_set(struct stack_st_X509_NAME *sk, int idx, X509_NAME *ptr) { return (X509_NAME *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_NAME_find(struct stack_st_X509_NAME *sk, X509_NAME *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_NAME_find_ex(struct stack_st_X509_NAME *sk, X509_NAME *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_X509_NAME_sort(struct stack_st_X509_NAME *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_X509_NAME_is_sorted(const struct stack_st_X509_NAME *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_X509_NAME * sk_X509_NAME_dup(const struct stack_st_X509_NAME *sk) { return (struct stack_st_X509_NAME *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_X509_NAME *sk_X509_NAME_deep_copy(const struct stack_st_X509_NAME *sk, sk_X509_NAME_copyfunc copyfunc, sk_X509_NAME_freefunc freefunc) { return (struct stack_st_X509_NAME *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_X509_NAME_compfunc sk_X509_NAME_set_cmp_func(struct stack_st_X509_NAME *sk, sk_X509_NAME_compfunc compare) { return (sk_X509_NAME_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }



typedef struct X509_extension_st X509_EXTENSION;

typedef struct stack_st_X509_EXTENSION X509_EXTENSIONS;

struct stack_st_X509_EXTENSION; typedef int (*sk_X509_EXTENSION_compfunc)(const X509_EXTENSION * const *a, const X509_EXTENSION *const *b); typedef void (*sk_X509_EXTENSION_freefunc)(X509_EXTENSION *a); typedef X509_EXTENSION * (*sk_X509_EXTENSION_copyfunc)(const X509_EXTENSION *a); static __attribute__((unused)) inline int sk_X509_EXTENSION_num(const struct stack_st_X509_EXTENSION *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_EXTENSION *sk_X509_EXTENSION_value(const struct stack_st_X509_EXTENSION *sk, int idx) { return (X509_EXTENSION *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_X509_EXTENSION *sk_X509_EXTENSION_new(sk_X509_EXTENSION_compfunc compare) { return (struct stack_st_X509_EXTENSION *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_X509_EXTENSION *sk_X509_EXTENSION_new_null(void) { return (struct stack_st_X509_EXTENSION *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_X509_EXTENSION *sk_X509_EXTENSION_new_reserve(sk_X509_EXTENSION_compfunc compare, int n) { return (struct stack_st_X509_EXTENSION *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_X509_EXTENSION_reserve(struct stack_st_X509_EXTENSION *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_X509_EXTENSION_free(struct stack_st_X509_EXTENSION *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_X509_EXTENSION_zero(struct stack_st_X509_EXTENSION *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_EXTENSION *sk_X509_EXTENSION_delete(struct stack_st_X509_EXTENSION *sk, int i) { return (X509_EXTENSION *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline X509_EXTENSION *sk_X509_EXTENSION_delete_ptr(struct stack_st_X509_EXTENSION *sk, X509_EXTENSION *ptr) { return (X509_EXTENSION *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_EXTENSION_push(struct stack_st_X509_EXTENSION *sk, X509_EXTENSION *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_EXTENSION_unshift(struct stack_st_X509_EXTENSION *sk, X509_EXTENSION *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline X509_EXTENSION *sk_X509_EXTENSION_pop(struct stack_st_X509_EXTENSION *sk) { return (X509_EXTENSION *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_EXTENSION *sk_X509_EXTENSION_shift(struct stack_st_X509_EXTENSION *sk) { return (X509_EXTENSION *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_X509_EXTENSION_pop_free(struct stack_st_X509_EXTENSION *sk, sk_X509_EXTENSION_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_X509_EXTENSION_insert(struct stack_st_X509_EXTENSION *sk, X509_EXTENSION *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline X509_EXTENSION *sk_X509_EXTENSION_set(struct stack_st_X509_EXTENSION *sk, int idx, X509_EXTENSION *ptr) { return (X509_EXTENSION *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_EXTENSION_find(struct stack_st_X509_EXTENSION *sk, X509_EXTENSION *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_EXTENSION_find_ex(struct stack_st_X509_EXTENSION *sk, X509_EXTENSION *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_X509_EXTENSION_sort(struct stack_st_X509_EXTENSION *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_X509_EXTENSION_is_sorted(const struct stack_st_X509_EXTENSION *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_X509_EXTENSION * sk_X509_EXTENSION_dup(const struct stack_st_X509_EXTENSION *sk) { return (struct stack_st_X509_EXTENSION *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_X509_EXTENSION *sk_X509_EXTENSION_deep_copy(const struct stack_st_X509_EXTENSION *sk, sk_X509_EXTENSION_copyfunc copyfunc, sk_X509_EXTENSION_freefunc freefunc) { return (struct stack_st_X509_EXTENSION *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_X509_EXTENSION_compfunc sk_X509_EXTENSION_set_cmp_func(struct stack_st_X509_EXTENSION *sk, sk_X509_EXTENSION_compfunc compare) { return (sk_X509_EXTENSION_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }

typedef struct x509_attributes_st X509_ATTRIBUTE;

struct stack_st_X509_ATTRIBUTE; typedef int (*sk_X509_ATTRIBUTE_compfunc)(const X509_ATTRIBUTE * const *a, const X509_ATTRIBUTE *const *b); typedef void (*sk_X509_ATTRIBUTE_freefunc)(X509_ATTRIBUTE *a); typedef X509_ATTRIBUTE * (*sk_X509_ATTRIBUTE_copyfunc)(const X509_ATTRIBUTE *a); static __attribute__((unused)) inline int sk_X509_ATTRIBUTE_num(const struct stack_st_X509_ATTRIBUTE *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_ATTRIBUTE *sk_X509_ATTRIBUTE_value(const struct stack_st_X509_ATTRIBUTE *sk, int idx) { return (X509_ATTRIBUTE *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_X509_ATTRIBUTE *sk_X509_ATTRIBUTE_new(sk_X509_ATTRIBUTE_compfunc compare) { return (struct stack_st_X509_ATTRIBUTE *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_X509_ATTRIBUTE *sk_X509_ATTRIBUTE_new_null(void) { return (struct stack_st_X509_ATTRIBUTE *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_X509_ATTRIBUTE *sk_X509_ATTRIBUTE_new_reserve(sk_X509_ATTRIBUTE_compfunc compare, int n) { return (struct stack_st_X509_ATTRIBUTE *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_X509_ATTRIBUTE_reserve(struct stack_st_X509_ATTRIBUTE *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_X509_ATTRIBUTE_free(struct stack_st_X509_ATTRIBUTE *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_X509_ATTRIBUTE_zero(struct stack_st_X509_ATTRIBUTE *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_ATTRIBUTE *sk_X509_ATTRIBUTE_delete(struct stack_st_X509_ATTRIBUTE *sk, int i) { return (X509_ATTRIBUTE *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline X509_ATTRIBUTE *sk_X509_ATTRIBUTE_delete_ptr(struct stack_st_X509_ATTRIBUTE *sk, X509_ATTRIBUTE *ptr) { return (X509_ATTRIBUTE *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_ATTRIBUTE_push(struct stack_st_X509_ATTRIBUTE *sk, X509_ATTRIBUTE *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_ATTRIBUTE_unshift(struct stack_st_X509_ATTRIBUTE *sk, X509_ATTRIBUTE *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline X509_ATTRIBUTE *sk_X509_ATTRIBUTE_pop(struct stack_st_X509_ATTRIBUTE *sk) { return (X509_ATTRIBUTE *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_ATTRIBUTE *sk_X509_ATTRIBUTE_shift(struct stack_st_X509_ATTRIBUTE *sk) { return (X509_ATTRIBUTE *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_X509_ATTRIBUTE_pop_free(struct stack_st_X509_ATTRIBUTE *sk, sk_X509_ATTRIBUTE_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_X509_ATTRIBUTE_insert(struct stack_st_X509_ATTRIBUTE *sk, X509_ATTRIBUTE *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline X509_ATTRIBUTE *sk_X509_ATTRIBUTE_set(struct stack_st_X509_ATTRIBUTE *sk, int idx, X509_ATTRIBUTE *ptr) { return (X509_ATTRIBUTE *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_ATTRIBUTE_find(struct stack_st_X509_ATTRIBUTE *sk, X509_ATTRIBUTE *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_ATTRIBUTE_find_ex(struct stack_st_X509_ATTRIBUTE *sk, X509_ATTRIBUTE *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_X509_ATTRIBUTE_sort(struct stack_st_X509_ATTRIBUTE *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_X509_ATTRIBUTE_is_sorted(const struct stack_st_X509_ATTRIBUTE *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_X509_ATTRIBUTE * sk_X509_ATTRIBUTE_dup(const struct stack_st_X509_ATTRIBUTE *sk) { return (struct stack_st_X509_ATTRIBUTE *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_X509_ATTRIBUTE *sk_X509_ATTRIBUTE_deep_copy(const struct stack_st_X509_ATTRIBUTE *sk, sk_X509_ATTRIBUTE_copyfunc copyfunc, sk_X509_ATTRIBUTE_freefunc freefunc) { return (struct stack_st_X509_ATTRIBUTE *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_X509_ATTRIBUTE_compfunc sk_X509_ATTRIBUTE_set_cmp_func(struct stack_st_X509_ATTRIBUTE *sk, sk_X509_ATTRIBUTE_compfunc compare) { return (sk_X509_ATTRIBUTE_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }

typedef struct X509_req_info_st X509_REQ_INFO;

typedef struct X509_req_st X509_REQ;

typedef struct x509_cert_aux_st X509_CERT_AUX;

typedef struct x509_cinf_st X509_CINF;

struct stack_st_X509; typedef int (*sk_X509_compfunc)(const X509 * const *a, const X509 *const *b); typedef void (*sk_X509_freefunc)(X509 *a); typedef X509 * (*sk_X509_copyfunc)(const X509 *a); static __attribute__((unused)) inline int sk_X509_num(const struct stack_st_X509 *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509 *sk_X509_value(const struct stack_st_X509 *sk, int idx) { return (X509 *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_X509 *sk_X509_new(sk_X509_compfunc compare) { return (struct stack_st_X509 *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_X509 *sk_X509_new_null(void) { return (struct stack_st_X509 *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_X509 *sk_X509_new_reserve(sk_X509_compfunc compare, int n) { return (struct stack_st_X509 *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_X509_reserve(struct stack_st_X509 *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_X509_free(struct stack_st_X509 *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_X509_zero(struct stack_st_X509 *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509 *sk_X509_delete(struct stack_st_X509 *sk, int i) { return (X509 *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline X509 *sk_X509_delete_ptr(struct stack_st_X509 *sk, X509 *ptr) { return (X509 *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_push(struct stack_st_X509 *sk, X509 *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_unshift(struct stack_st_X509 *sk, X509 *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline X509 *sk_X509_pop(struct stack_st_X509 *sk) { return (X509 *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509 *sk_X509_shift(struct stack_st_X509 *sk) { return (X509 *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_X509_pop_free(struct stack_st_X509 *sk, sk_X509_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_X509_insert(struct stack_st_X509 *sk, X509 *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline X509 *sk_X509_set(struct stack_st_X509 *sk, int idx, X509 *ptr) { return (X509 *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_find(struct stack_st_X509 *sk, X509 *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_find_ex(struct stack_st_X509 *sk, X509 *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_X509_sort(struct stack_st_X509 *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_X509_is_sorted(const struct stack_st_X509 *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_X509 * sk_X509_dup(const struct stack_st_X509 *sk) { return (struct stack_st_X509 *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_X509 *sk_X509_deep_copy(const struct stack_st_X509 *sk, sk_X509_copyfunc copyfunc, sk_X509_freefunc freefunc) { return (struct stack_st_X509 *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_X509_compfunc sk_X509_set_cmp_func(struct stack_st_X509 *sk, sk_X509_compfunc compare) { return (sk_X509_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }



typedef struct x509_trust_st {
    int trust;
    int flags;
    int (*check_trust) (struct x509_trust_st *, X509 *, int);
    char *name;
    int arg1;
    void *arg2;
} X509_TRUST;

struct stack_st_X509_TRUST; typedef int (*sk_X509_TRUST_compfunc)(const X509_TRUST * const *a, const X509_TRUST *const *b); typedef void (*sk_X509_TRUST_freefunc)(X509_TRUST *a); typedef X509_TRUST * (*sk_X509_TRUST_copyfunc)(const X509_TRUST *a); static __attribute__((unused)) inline int sk_X509_TRUST_num(const struct stack_st_X509_TRUST *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_TRUST *sk_X509_TRUST_value(const struct stack_st_X509_TRUST *sk, int idx) { return (X509_TRUST *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_X509_TRUST *sk_X509_TRUST_new(sk_X509_TRUST_compfunc compare) { return (struct stack_st_X509_TRUST *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_X509_TRUST *sk_X509_TRUST_new_null(void) { return (struct stack_st_X509_TRUST *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_X509_TRUST *sk_X509_TRUST_new_reserve(sk_X509_TRUST_compfunc compare, int n) { return (struct stack_st_X509_TRUST *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_X509_TRUST_reserve(struct stack_st_X509_TRUST *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_X509_TRUST_free(struct stack_st_X509_TRUST *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_X509_TRUST_zero(struct stack_st_X509_TRUST *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_TRUST *sk_X509_TRUST_delete(struct stack_st_X509_TRUST *sk, int i) { return (X509_TRUST *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline X509_TRUST *sk_X509_TRUST_delete_ptr(struct stack_st_X509_TRUST *sk, X509_TRUST *ptr) { return (X509_TRUST *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_TRUST_push(struct stack_st_X509_TRUST *sk, X509_TRUST *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_TRUST_unshift(struct stack_st_X509_TRUST *sk, X509_TRUST *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline X509_TRUST *sk_X509_TRUST_pop(struct stack_st_X509_TRUST *sk) { return (X509_TRUST *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_TRUST *sk_X509_TRUST_shift(struct stack_st_X509_TRUST *sk) { return (X509_TRUST *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_X509_TRUST_pop_free(struct stack_st_X509_TRUST *sk, sk_X509_TRUST_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_X509_TRUST_insert(struct stack_st_X509_TRUST *sk, X509_TRUST *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline X509_TRUST *sk_X509_TRUST_set(struct stack_st_X509_TRUST *sk, int idx, X509_TRUST *ptr) { return (X509_TRUST *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_TRUST_find(struct stack_st_X509_TRUST *sk, X509_TRUST *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_TRUST_find_ex(struct stack_st_X509_TRUST *sk, X509_TRUST *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_X509_TRUST_sort(struct stack_st_X509_TRUST *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_X509_TRUST_is_sorted(const struct stack_st_X509_TRUST *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_X509_TRUST * sk_X509_TRUST_dup(const struct stack_st_X509_TRUST *sk) { return (struct stack_st_X509_TRUST *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_X509_TRUST *sk_X509_TRUST_deep_copy(const struct stack_st_X509_TRUST *sk, sk_X509_TRUST_copyfunc copyfunc, sk_X509_TRUST_freefunc freefunc) { return (struct stack_st_X509_TRUST *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_X509_TRUST_compfunc sk_X509_TRUST_set_cmp_func(struct stack_st_X509_TRUST *sk, sk_X509_TRUST_compfunc compare) { return (sk_X509_TRUST_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }
# 224 "/usr/include/openssl/x509.h" 3 4
struct stack_st_X509_REVOKED; typedef int (*sk_X509_REVOKED_compfunc)(const X509_REVOKED * const *a, const X509_REVOKED *const *b); typedef void (*sk_X509_REVOKED_freefunc)(X509_REVOKED *a); typedef X509_REVOKED * (*sk_X509_REVOKED_copyfunc)(const X509_REVOKED *a); static __attribute__((unused)) inline int sk_X509_REVOKED_num(const struct stack_st_X509_REVOKED *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_REVOKED *sk_X509_REVOKED_value(const struct stack_st_X509_REVOKED *sk, int idx) { return (X509_REVOKED *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_X509_REVOKED *sk_X509_REVOKED_new(sk_X509_REVOKED_compfunc compare) { return (struct stack_st_X509_REVOKED *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_X509_REVOKED *sk_X509_REVOKED_new_null(void) { return (struct stack_st_X509_REVOKED *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_X509_REVOKED *sk_X509_REVOKED_new_reserve(sk_X509_REVOKED_compfunc compare, int n) { return (struct stack_st_X509_REVOKED *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_X509_REVOKED_reserve(struct stack_st_X509_REVOKED *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_X509_REVOKED_free(struct stack_st_X509_REVOKED *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_X509_REVOKED_zero(struct stack_st_X509_REVOKED *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_REVOKED *sk_X509_REVOKED_delete(struct stack_st_X509_REVOKED *sk, int i) { return (X509_REVOKED *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline X509_REVOKED *sk_X509_REVOKED_delete_ptr(struct stack_st_X509_REVOKED *sk, X509_REVOKED *ptr) { return (X509_REVOKED *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_REVOKED_push(struct stack_st_X509_REVOKED *sk, X509_REVOKED *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_REVOKED_unshift(struct stack_st_X509_REVOKED *sk, X509_REVOKED *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline X509_REVOKED *sk_X509_REVOKED_pop(struct stack_st_X509_REVOKED *sk) { return (X509_REVOKED *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_REVOKED *sk_X509_REVOKED_shift(struct stack_st_X509_REVOKED *sk) { return (X509_REVOKED *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_X509_REVOKED_pop_free(struct stack_st_X509_REVOKED *sk, sk_X509_REVOKED_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_X509_REVOKED_insert(struct stack_st_X509_REVOKED *sk, X509_REVOKED *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline X509_REVOKED *sk_X509_REVOKED_set(struct stack_st_X509_REVOKED *sk, int idx, X509_REVOKED *ptr) { return (X509_REVOKED *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_REVOKED_find(struct stack_st_X509_REVOKED *sk, X509_REVOKED *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_REVOKED_find_ex(struct stack_st_X509_REVOKED *sk, X509_REVOKED *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_X509_REVOKED_sort(struct stack_st_X509_REVOKED *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_X509_REVOKED_is_sorted(const struct stack_st_X509_REVOKED *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_X509_REVOKED * sk_X509_REVOKED_dup(const struct stack_st_X509_REVOKED *sk) { return (struct stack_st_X509_REVOKED *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_X509_REVOKED *sk_X509_REVOKED_deep_copy(const struct stack_st_X509_REVOKED *sk, sk_X509_REVOKED_copyfunc copyfunc, sk_X509_REVOKED_freefunc freefunc) { return (struct stack_st_X509_REVOKED *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_X509_REVOKED_compfunc sk_X509_REVOKED_set_cmp_func(struct stack_st_X509_REVOKED *sk, sk_X509_REVOKED_compfunc compare) { return (sk_X509_REVOKED_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }

typedef struct X509_crl_info_st X509_CRL_INFO;

struct stack_st_X509_CRL; typedef int (*sk_X509_CRL_compfunc)(const X509_CRL * const *a, const X509_CRL *const *b); typedef void (*sk_X509_CRL_freefunc)(X509_CRL *a); typedef X509_CRL * (*sk_X509_CRL_copyfunc)(const X509_CRL *a); static __attribute__((unused)) inline int sk_X509_CRL_num(const struct stack_st_X509_CRL *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_CRL *sk_X509_CRL_value(const struct stack_st_X509_CRL *sk, int idx) { return (X509_CRL *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_X509_CRL *sk_X509_CRL_new(sk_X509_CRL_compfunc compare) { return (struct stack_st_X509_CRL *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_X509_CRL *sk_X509_CRL_new_null(void) { return (struct stack_st_X509_CRL *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_X509_CRL *sk_X509_CRL_new_reserve(sk_X509_CRL_compfunc compare, int n) { return (struct stack_st_X509_CRL *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_X509_CRL_reserve(struct stack_st_X509_CRL *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_X509_CRL_free(struct stack_st_X509_CRL *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_X509_CRL_zero(struct stack_st_X509_CRL *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_CRL *sk_X509_CRL_delete(struct stack_st_X509_CRL *sk, int i) { return (X509_CRL *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline X509_CRL *sk_X509_CRL_delete_ptr(struct stack_st_X509_CRL *sk, X509_CRL *ptr) { return (X509_CRL *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_CRL_push(struct stack_st_X509_CRL *sk, X509_CRL *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_CRL_unshift(struct stack_st_X509_CRL *sk, X509_CRL *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline X509_CRL *sk_X509_CRL_pop(struct stack_st_X509_CRL *sk) { return (X509_CRL *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_CRL *sk_X509_CRL_shift(struct stack_st_X509_CRL *sk) { return (X509_CRL *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_X509_CRL_pop_free(struct stack_st_X509_CRL *sk, sk_X509_CRL_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_X509_CRL_insert(struct stack_st_X509_CRL *sk, X509_CRL *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline X509_CRL *sk_X509_CRL_set(struct stack_st_X509_CRL *sk, int idx, X509_CRL *ptr) { return (X509_CRL *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_CRL_find(struct stack_st_X509_CRL *sk, X509_CRL *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_CRL_find_ex(struct stack_st_X509_CRL *sk, X509_CRL *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_X509_CRL_sort(struct stack_st_X509_CRL *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_X509_CRL_is_sorted(const struct stack_st_X509_CRL *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_X509_CRL * sk_X509_CRL_dup(const struct stack_st_X509_CRL *sk) { return (struct stack_st_X509_CRL *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_X509_CRL *sk_X509_CRL_deep_copy(const struct stack_st_X509_CRL *sk, sk_X509_CRL_copyfunc copyfunc, sk_X509_CRL_freefunc freefunc) { return (struct stack_st_X509_CRL *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_X509_CRL_compfunc sk_X509_CRL_set_cmp_func(struct stack_st_X509_CRL *sk, sk_X509_CRL_compfunc compare) { return (sk_X509_CRL_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }

typedef struct private_key_st {
    int version;

    X509_ALGOR *enc_algor;
    ASN1_OCTET_STRING *enc_pkey;

    EVP_PKEY *dec_pkey;

    int key_length;
    char *key_data;
    int key_free;

    EVP_CIPHER_INFO cipher;
} X509_PKEY;

typedef struct X509_info_st {
    X509 *x509;
    X509_CRL *crl;
    X509_PKEY *x_pkey;
    EVP_CIPHER_INFO enc_cipher;
    int enc_len;
    char *enc_data;
} X509_INFO;

struct stack_st_X509_INFO; typedef int (*sk_X509_INFO_compfunc)(const X509_INFO * const *a, const X509_INFO *const *b); typedef void (*sk_X509_INFO_freefunc)(X509_INFO *a); typedef X509_INFO * (*sk_X509_INFO_copyfunc)(const X509_INFO *a); static __attribute__((unused)) inline int sk_X509_INFO_num(const struct stack_st_X509_INFO *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_INFO *sk_X509_INFO_value(const struct stack_st_X509_INFO *sk, int idx) { return (X509_INFO *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_X509_INFO *sk_X509_INFO_new(sk_X509_INFO_compfunc compare) { return (struct stack_st_X509_INFO *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_X509_INFO *sk_X509_INFO_new_null(void) { return (struct stack_st_X509_INFO *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_X509_INFO *sk_X509_INFO_new_reserve(sk_X509_INFO_compfunc compare, int n) { return (struct stack_st_X509_INFO *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_X509_INFO_reserve(struct stack_st_X509_INFO *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_X509_INFO_free(struct stack_st_X509_INFO *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_X509_INFO_zero(struct stack_st_X509_INFO *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_INFO *sk_X509_INFO_delete(struct stack_st_X509_INFO *sk, int i) { return (X509_INFO *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline X509_INFO *sk_X509_INFO_delete_ptr(struct stack_st_X509_INFO *sk, X509_INFO *ptr) { return (X509_INFO *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_INFO_push(struct stack_st_X509_INFO *sk, X509_INFO *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_INFO_unshift(struct stack_st_X509_INFO *sk, X509_INFO *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline X509_INFO *sk_X509_INFO_pop(struct stack_st_X509_INFO *sk) { return (X509_INFO *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_INFO *sk_X509_INFO_shift(struct stack_st_X509_INFO *sk) { return (X509_INFO *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_X509_INFO_pop_free(struct stack_st_X509_INFO *sk, sk_X509_INFO_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_X509_INFO_insert(struct stack_st_X509_INFO *sk, X509_INFO *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline X509_INFO *sk_X509_INFO_set(struct stack_st_X509_INFO *sk, int idx, X509_INFO *ptr) { return (X509_INFO *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_INFO_find(struct stack_st_X509_INFO *sk, X509_INFO *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_INFO_find_ex(struct stack_st_X509_INFO *sk, X509_INFO *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_X509_INFO_sort(struct stack_st_X509_INFO *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_X509_INFO_is_sorted(const struct stack_st_X509_INFO *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_X509_INFO * sk_X509_INFO_dup(const struct stack_st_X509_INFO *sk) { return (struct stack_st_X509_INFO *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_X509_INFO *sk_X509_INFO_deep_copy(const struct stack_st_X509_INFO *sk, sk_X509_INFO_copyfunc copyfunc, sk_X509_INFO_freefunc freefunc) { return (struct stack_st_X509_INFO *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_X509_INFO_compfunc sk_X509_INFO_set_cmp_func(struct stack_st_X509_INFO *sk, sk_X509_INFO_compfunc compare) { return (sk_X509_INFO_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }





typedef struct Netscape_spkac_st {
    X509_PUBKEY *pubkey;
    ASN1_IA5STRING *challenge;
} NETSCAPE_SPKAC;

typedef struct Netscape_spki_st {
    NETSCAPE_SPKAC *spkac;
    X509_ALGOR sig_algor;
    ASN1_BIT_STRING *signature;
} NETSCAPE_SPKI;


typedef struct Netscape_certificate_sequence {
    ASN1_OBJECT *type;
    struct stack_st_X509 *certs;
} NETSCAPE_CERT_SEQUENCE;
# 286 "/usr/include/openssl/x509.h" 3 4
typedef struct PBEPARAM_st {
    ASN1_OCTET_STRING *salt;
    ASN1_INTEGER *iter;
} PBEPARAM;



typedef struct PBE2PARAM_st {
    X509_ALGOR *keyfunc;
    X509_ALGOR *encryption;
} PBE2PARAM;

typedef struct PBKDF2PARAM_st {

    ASN1_TYPE *salt;
    ASN1_INTEGER *iter;
    ASN1_INTEGER *keylength;
    X509_ALGOR *prf;
} PBKDF2PARAM;


typedef struct SCRYPT_PARAMS_st {
    ASN1_OCTET_STRING *salt;
    ASN1_INTEGER *costParameter;
    ASN1_INTEGER *blockSize;
    ASN1_INTEGER *parallelizationParameter;
    ASN1_INTEGER *keyLength;
} SCRYPT_PARAMS;






# 1 "/usr/include/openssl/x509_vfy.h" 1 3 4
# 20 "/usr/include/openssl/x509_vfy.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 21 "/usr/include/openssl/x509_vfy.h" 2 3 4
# 1 "/usr/include/openssl/lhash.h" 1 3 4
# 24 "/usr/include/openssl/lhash.h" 3 4
typedef struct lhash_node_st OPENSSL_LH_NODE;
typedef int (*OPENSSL_LH_COMPFUNC) (const void *, const void *);
typedef unsigned long (*OPENSSL_LH_HASHFUNC) (const void *);
typedef void (*OPENSSL_LH_DOALL_FUNC) (void *);
typedef void (*OPENSSL_LH_DOALL_FUNCARG) (void *, void *);
typedef struct lhash_st OPENSSL_LHASH;
# 72 "/usr/include/openssl/lhash.h" 3 4
int OPENSSL_LH_error(OPENSSL_LHASH *lh);
OPENSSL_LHASH *OPENSSL_LH_new(OPENSSL_LH_HASHFUNC h, OPENSSL_LH_COMPFUNC c);
void OPENSSL_LH_free(OPENSSL_LHASH *lh);
void *OPENSSL_LH_insert(OPENSSL_LHASH *lh, void *data);
void *OPENSSL_LH_delete(OPENSSL_LHASH *lh, const void *data);
void *OPENSSL_LH_retrieve(OPENSSL_LHASH *lh, const void *data);
void OPENSSL_LH_doall(OPENSSL_LHASH *lh, OPENSSL_LH_DOALL_FUNC func);
void OPENSSL_LH_doall_arg(OPENSSL_LHASH *lh, OPENSSL_LH_DOALL_FUNCARG func, void *arg);
unsigned long OPENSSL_LH_strhash(const char *c);
unsigned long OPENSSL_LH_num_items(const OPENSSL_LHASH *lh);
unsigned long OPENSSL_LH_get_down_load(const OPENSSL_LHASH *lh);
void OPENSSL_LH_set_down_load(OPENSSL_LHASH *lh, unsigned long down_load);


void OPENSSL_LH_stats(const OPENSSL_LHASH *lh, FILE *fp);
void OPENSSL_LH_node_stats(const OPENSSL_LHASH *lh, FILE *fp);
void OPENSSL_LH_node_usage_stats(const OPENSSL_LHASH *lh, FILE *fp);

void OPENSSL_LH_stats_bio(const OPENSSL_LHASH *lh, BIO *out);
void OPENSSL_LH_node_stats_bio(const OPENSSL_LHASH *lh, BIO *out);
void OPENSSL_LH_node_usage_stats_bio(const OPENSSL_LHASH *lh, BIO *out);
# 196 "/usr/include/openssl/lhash.h" 3 4
struct lhash_st_OPENSSL_STRING { union lh_OPENSSL_STRING_dummy { void* d1; unsigned long d2; int d3; } dummy; }; static __attribute__((unused)) inline struct lhash_st_OPENSSL_STRING *lh_OPENSSL_STRING_new(unsigned long (*hfn)(const OPENSSL_STRING *), int (*cfn)(const OPENSSL_STRING *, const OPENSSL_STRING *)) { return (struct lhash_st_OPENSSL_STRING *) OPENSSL_LH_new((OPENSSL_LH_HASHFUNC)hfn, (OPENSSL_LH_COMPFUNC)cfn); } static __attribute__((unused)) inline void lh_OPENSSL_STRING_free(struct lhash_st_OPENSSL_STRING *lh) { OPENSSL_LH_free((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline OPENSSL_STRING *lh_OPENSSL_STRING_insert(struct lhash_st_OPENSSL_STRING *lh, OPENSSL_STRING *d) { return (OPENSSL_STRING *)OPENSSL_LH_insert((OPENSSL_LHASH *)lh, d); } static __attribute__((unused)) inline OPENSSL_STRING *lh_OPENSSL_STRING_delete(struct lhash_st_OPENSSL_STRING *lh, const OPENSSL_STRING *d) { return (OPENSSL_STRING *)OPENSSL_LH_delete((OPENSSL_LHASH *)lh, d); } static __attribute__((unused)) inline OPENSSL_STRING *lh_OPENSSL_STRING_retrieve(struct lhash_st_OPENSSL_STRING *lh, const OPENSSL_STRING *d) { return (OPENSSL_STRING *)OPENSSL_LH_retrieve((OPENSSL_LHASH *)lh, d); } static __attribute__((unused)) inline int lh_OPENSSL_STRING_error(struct lhash_st_OPENSSL_STRING *lh) { return OPENSSL_LH_error((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline unsigned long lh_OPENSSL_STRING_num_items(struct lhash_st_OPENSSL_STRING *lh) { return OPENSSL_LH_num_items((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline void lh_OPENSSL_STRING_node_stats_bio(const struct lhash_st_OPENSSL_STRING *lh, BIO *out) { OPENSSL_LH_node_stats_bio((const OPENSSL_LHASH *)lh, out); } static __attribute__((unused)) inline void lh_OPENSSL_STRING_node_usage_stats_bio(const struct lhash_st_OPENSSL_STRING *lh, BIO *out) { OPENSSL_LH_node_usage_stats_bio((const OPENSSL_LHASH *)lh, out); } static __attribute__((unused)) inline void lh_OPENSSL_STRING_stats_bio(const struct lhash_st_OPENSSL_STRING *lh, BIO *out) { OPENSSL_LH_stats_bio((const OPENSSL_LHASH *)lh, out); } static __attribute__((unused)) inline unsigned long lh_OPENSSL_STRING_get_down_load(struct lhash_st_OPENSSL_STRING *lh) { return OPENSSL_LH_get_down_load((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline void lh_OPENSSL_STRING_set_down_load(struct lhash_st_OPENSSL_STRING *lh, unsigned long dl) { OPENSSL_LH_set_down_load((OPENSSL_LHASH *)lh, dl); } static __attribute__((unused)) inline void lh_OPENSSL_STRING_doall(struct lhash_st_OPENSSL_STRING *lh, void (*doall)(OPENSSL_STRING *)) { OPENSSL_LH_doall((OPENSSL_LHASH *)lh, (OPENSSL_LH_DOALL_FUNC)doall); } struct lhash_st_OPENSSL_STRING;
# 206 "/usr/include/openssl/lhash.h" 3 4
struct lhash_st_OPENSSL_CSTRING { union lh_OPENSSL_CSTRING_dummy { void* d1; unsigned long d2; int d3; } dummy; }; static __attribute__((unused)) inline struct lhash_st_OPENSSL_CSTRING *lh_OPENSSL_CSTRING_new(unsigned long (*hfn)(const OPENSSL_CSTRING *), int (*cfn)(const OPENSSL_CSTRING *, const OPENSSL_CSTRING *)) { return (struct lhash_st_OPENSSL_CSTRING *) OPENSSL_LH_new((OPENSSL_LH_HASHFUNC)hfn, (OPENSSL_LH_COMPFUNC)cfn); } static __attribute__((unused)) inline void lh_OPENSSL_CSTRING_free(struct lhash_st_OPENSSL_CSTRING *lh) { OPENSSL_LH_free((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline OPENSSL_CSTRING *lh_OPENSSL_CSTRING_insert(struct lhash_st_OPENSSL_CSTRING *lh, OPENSSL_CSTRING *d) { return (OPENSSL_CSTRING *)OPENSSL_LH_insert((OPENSSL_LHASH *)lh, d); } static __attribute__((unused)) inline OPENSSL_CSTRING *lh_OPENSSL_CSTRING_delete(struct lhash_st_OPENSSL_CSTRING *lh, const OPENSSL_CSTRING *d) { return (OPENSSL_CSTRING *)OPENSSL_LH_delete((OPENSSL_LHASH *)lh, d); } static __attribute__((unused)) inline OPENSSL_CSTRING *lh_OPENSSL_CSTRING_retrieve(struct lhash_st_OPENSSL_CSTRING *lh, const OPENSSL_CSTRING *d) { return (OPENSSL_CSTRING *)OPENSSL_LH_retrieve((OPENSSL_LHASH *)lh, d); } static __attribute__((unused)) inline int lh_OPENSSL_CSTRING_error(struct lhash_st_OPENSSL_CSTRING *lh) { return OPENSSL_LH_error((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline unsigned long lh_OPENSSL_CSTRING_num_items(struct lhash_st_OPENSSL_CSTRING *lh) { return OPENSSL_LH_num_items((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline void lh_OPENSSL_CSTRING_node_stats_bio(const struct lhash_st_OPENSSL_CSTRING *lh, BIO *out) { OPENSSL_LH_node_stats_bio((const OPENSSL_LHASH *)lh, out); } static __attribute__((unused)) inline void lh_OPENSSL_CSTRING_node_usage_stats_bio(const struct lhash_st_OPENSSL_CSTRING *lh, BIO *out) { OPENSSL_LH_node_usage_stats_bio((const OPENSSL_LHASH *)lh, out); } static __attribute__((unused)) inline void lh_OPENSSL_CSTRING_stats_bio(const struct lhash_st_OPENSSL_CSTRING *lh, BIO *out) { OPENSSL_LH_stats_bio((const OPENSSL_LHASH *)lh, out); } static __attribute__((unused)) inline unsigned long lh_OPENSSL_CSTRING_get_down_load(struct lhash_st_OPENSSL_CSTRING *lh) { return OPENSSL_LH_get_down_load((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline void lh_OPENSSL_CSTRING_set_down_load(struct lhash_st_OPENSSL_CSTRING *lh, unsigned long dl) { OPENSSL_LH_set_down_load((OPENSSL_LHASH *)lh, dl); } static __attribute__((unused)) inline void lh_OPENSSL_CSTRING_doall(struct lhash_st_OPENSSL_CSTRING *lh, void (*doall)(OPENSSL_CSTRING *)) { OPENSSL_LH_doall((OPENSSL_LHASH *)lh, (OPENSSL_LH_DOALL_FUNC)doall); } struct lhash_st_OPENSSL_CSTRING;
# 22 "/usr/include/openssl/x509_vfy.h" 2 3 4
# 47 "/usr/include/openssl/x509_vfy.h" 3 4
typedef enum {
    X509_LU_NONE = 0,
    X509_LU_X509, X509_LU_CRL
} X509_LOOKUP_TYPE;






struct stack_st_X509_LOOKUP; typedef int (*sk_X509_LOOKUP_compfunc)(const X509_LOOKUP * const *a, const X509_LOOKUP *const *b); typedef void (*sk_X509_LOOKUP_freefunc)(X509_LOOKUP *a); typedef X509_LOOKUP * (*sk_X509_LOOKUP_copyfunc)(const X509_LOOKUP *a); static __attribute__((unused)) inline int sk_X509_LOOKUP_num(const struct stack_st_X509_LOOKUP *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_LOOKUP *sk_X509_LOOKUP_value(const struct stack_st_X509_LOOKUP *sk, int idx) { return (X509_LOOKUP *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_X509_LOOKUP *sk_X509_LOOKUP_new(sk_X509_LOOKUP_compfunc compare) { return (struct stack_st_X509_LOOKUP *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_X509_LOOKUP *sk_X509_LOOKUP_new_null(void) { return (struct stack_st_X509_LOOKUP *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_X509_LOOKUP *sk_X509_LOOKUP_new_reserve(sk_X509_LOOKUP_compfunc compare, int n) { return (struct stack_st_X509_LOOKUP *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_X509_LOOKUP_reserve(struct stack_st_X509_LOOKUP *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_X509_LOOKUP_free(struct stack_st_X509_LOOKUP *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_X509_LOOKUP_zero(struct stack_st_X509_LOOKUP *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_LOOKUP *sk_X509_LOOKUP_delete(struct stack_st_X509_LOOKUP *sk, int i) { return (X509_LOOKUP *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline X509_LOOKUP *sk_X509_LOOKUP_delete_ptr(struct stack_st_X509_LOOKUP *sk, X509_LOOKUP *ptr) { return (X509_LOOKUP *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_LOOKUP_push(struct stack_st_X509_LOOKUP *sk, X509_LOOKUP *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_LOOKUP_unshift(struct stack_st_X509_LOOKUP *sk, X509_LOOKUP *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline X509_LOOKUP *sk_X509_LOOKUP_pop(struct stack_st_X509_LOOKUP *sk) { return (X509_LOOKUP *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_LOOKUP *sk_X509_LOOKUP_shift(struct stack_st_X509_LOOKUP *sk) { return (X509_LOOKUP *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_X509_LOOKUP_pop_free(struct stack_st_X509_LOOKUP *sk, sk_X509_LOOKUP_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_X509_LOOKUP_insert(struct stack_st_X509_LOOKUP *sk, X509_LOOKUP *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline X509_LOOKUP *sk_X509_LOOKUP_set(struct stack_st_X509_LOOKUP *sk, int idx, X509_LOOKUP *ptr) { return (X509_LOOKUP *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_LOOKUP_find(struct stack_st_X509_LOOKUP *sk, X509_LOOKUP *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_LOOKUP_find_ex(struct stack_st_X509_LOOKUP *sk, X509_LOOKUP *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_X509_LOOKUP_sort(struct stack_st_X509_LOOKUP *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_X509_LOOKUP_is_sorted(const struct stack_st_X509_LOOKUP *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_X509_LOOKUP * sk_X509_LOOKUP_dup(const struct stack_st_X509_LOOKUP *sk) { return (struct stack_st_X509_LOOKUP *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_X509_LOOKUP *sk_X509_LOOKUP_deep_copy(const struct stack_st_X509_LOOKUP *sk, sk_X509_LOOKUP_copyfunc copyfunc, sk_X509_LOOKUP_freefunc freefunc) { return (struct stack_st_X509_LOOKUP *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_X509_LOOKUP_compfunc sk_X509_LOOKUP_set_cmp_func(struct stack_st_X509_LOOKUP *sk, sk_X509_LOOKUP_compfunc compare) { return (sk_X509_LOOKUP_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }
struct stack_st_X509_OBJECT; typedef int (*sk_X509_OBJECT_compfunc)(const X509_OBJECT * const *a, const X509_OBJECT *const *b); typedef void (*sk_X509_OBJECT_freefunc)(X509_OBJECT *a); typedef X509_OBJECT * (*sk_X509_OBJECT_copyfunc)(const X509_OBJECT *a); static __attribute__((unused)) inline int sk_X509_OBJECT_num(const struct stack_st_X509_OBJECT *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_OBJECT *sk_X509_OBJECT_value(const struct stack_st_X509_OBJECT *sk, int idx) { return (X509_OBJECT *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_X509_OBJECT *sk_X509_OBJECT_new(sk_X509_OBJECT_compfunc compare) { return (struct stack_st_X509_OBJECT *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_X509_OBJECT *sk_X509_OBJECT_new_null(void) { return (struct stack_st_X509_OBJECT *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_X509_OBJECT *sk_X509_OBJECT_new_reserve(sk_X509_OBJECT_compfunc compare, int n) { return (struct stack_st_X509_OBJECT *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_X509_OBJECT_reserve(struct stack_st_X509_OBJECT *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_X509_OBJECT_free(struct stack_st_X509_OBJECT *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_X509_OBJECT_zero(struct stack_st_X509_OBJECT *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_OBJECT *sk_X509_OBJECT_delete(struct stack_st_X509_OBJECT *sk, int i) { return (X509_OBJECT *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline X509_OBJECT *sk_X509_OBJECT_delete_ptr(struct stack_st_X509_OBJECT *sk, X509_OBJECT *ptr) { return (X509_OBJECT *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_OBJECT_push(struct stack_st_X509_OBJECT *sk, X509_OBJECT *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_OBJECT_unshift(struct stack_st_X509_OBJECT *sk, X509_OBJECT *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline X509_OBJECT *sk_X509_OBJECT_pop(struct stack_st_X509_OBJECT *sk) { return (X509_OBJECT *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_OBJECT *sk_X509_OBJECT_shift(struct stack_st_X509_OBJECT *sk) { return (X509_OBJECT *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_X509_OBJECT_pop_free(struct stack_st_X509_OBJECT *sk, sk_X509_OBJECT_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_X509_OBJECT_insert(struct stack_st_X509_OBJECT *sk, X509_OBJECT *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline X509_OBJECT *sk_X509_OBJECT_set(struct stack_st_X509_OBJECT *sk, int idx, X509_OBJECT *ptr) { return (X509_OBJECT *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_OBJECT_find(struct stack_st_X509_OBJECT *sk, X509_OBJECT *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_OBJECT_find_ex(struct stack_st_X509_OBJECT *sk, X509_OBJECT *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_X509_OBJECT_sort(struct stack_st_X509_OBJECT *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_X509_OBJECT_is_sorted(const struct stack_st_X509_OBJECT *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_X509_OBJECT * sk_X509_OBJECT_dup(const struct stack_st_X509_OBJECT *sk) { return (struct stack_st_X509_OBJECT *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_X509_OBJECT *sk_X509_OBJECT_deep_copy(const struct stack_st_X509_OBJECT *sk, sk_X509_OBJECT_copyfunc copyfunc, sk_X509_OBJECT_freefunc freefunc) { return (struct stack_st_X509_OBJECT *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_X509_OBJECT_compfunc sk_X509_OBJECT_set_cmp_func(struct stack_st_X509_OBJECT *sk, sk_X509_OBJECT_compfunc compare) { return (sk_X509_OBJECT_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }
struct stack_st_X509_VERIFY_PARAM; typedef int (*sk_X509_VERIFY_PARAM_compfunc)(const X509_VERIFY_PARAM * const *a, const X509_VERIFY_PARAM *const *b); typedef void (*sk_X509_VERIFY_PARAM_freefunc)(X509_VERIFY_PARAM *a); typedef X509_VERIFY_PARAM * (*sk_X509_VERIFY_PARAM_copyfunc)(const X509_VERIFY_PARAM *a); static __attribute__((unused)) inline int sk_X509_VERIFY_PARAM_num(const struct stack_st_X509_VERIFY_PARAM *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_VERIFY_PARAM *sk_X509_VERIFY_PARAM_value(const struct stack_st_X509_VERIFY_PARAM *sk, int idx) { return (X509_VERIFY_PARAM *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_X509_VERIFY_PARAM *sk_X509_VERIFY_PARAM_new(sk_X509_VERIFY_PARAM_compfunc compare) { return (struct stack_st_X509_VERIFY_PARAM *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_X509_VERIFY_PARAM *sk_X509_VERIFY_PARAM_new_null(void) { return (struct stack_st_X509_VERIFY_PARAM *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_X509_VERIFY_PARAM *sk_X509_VERIFY_PARAM_new_reserve(sk_X509_VERIFY_PARAM_compfunc compare, int n) { return (struct stack_st_X509_VERIFY_PARAM *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_X509_VERIFY_PARAM_reserve(struct stack_st_X509_VERIFY_PARAM *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_X509_VERIFY_PARAM_free(struct stack_st_X509_VERIFY_PARAM *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_X509_VERIFY_PARAM_zero(struct stack_st_X509_VERIFY_PARAM *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_VERIFY_PARAM *sk_X509_VERIFY_PARAM_delete(struct stack_st_X509_VERIFY_PARAM *sk, int i) { return (X509_VERIFY_PARAM *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline X509_VERIFY_PARAM *sk_X509_VERIFY_PARAM_delete_ptr(struct stack_st_X509_VERIFY_PARAM *sk, X509_VERIFY_PARAM *ptr) { return (X509_VERIFY_PARAM *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_VERIFY_PARAM_push(struct stack_st_X509_VERIFY_PARAM *sk, X509_VERIFY_PARAM *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_VERIFY_PARAM_unshift(struct stack_st_X509_VERIFY_PARAM *sk, X509_VERIFY_PARAM *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline X509_VERIFY_PARAM *sk_X509_VERIFY_PARAM_pop(struct stack_st_X509_VERIFY_PARAM *sk) { return (X509_VERIFY_PARAM *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline X509_VERIFY_PARAM *sk_X509_VERIFY_PARAM_shift(struct stack_st_X509_VERIFY_PARAM *sk) { return (X509_VERIFY_PARAM *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_X509_VERIFY_PARAM_pop_free(struct stack_st_X509_VERIFY_PARAM *sk, sk_X509_VERIFY_PARAM_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_X509_VERIFY_PARAM_insert(struct stack_st_X509_VERIFY_PARAM *sk, X509_VERIFY_PARAM *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline X509_VERIFY_PARAM *sk_X509_VERIFY_PARAM_set(struct stack_st_X509_VERIFY_PARAM *sk, int idx, X509_VERIFY_PARAM *ptr) { return (X509_VERIFY_PARAM *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_VERIFY_PARAM_find(struct stack_st_X509_VERIFY_PARAM *sk, X509_VERIFY_PARAM *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_X509_VERIFY_PARAM_find_ex(struct stack_st_X509_VERIFY_PARAM *sk, X509_VERIFY_PARAM *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_X509_VERIFY_PARAM_sort(struct stack_st_X509_VERIFY_PARAM *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_X509_VERIFY_PARAM_is_sorted(const struct stack_st_X509_VERIFY_PARAM *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_X509_VERIFY_PARAM * sk_X509_VERIFY_PARAM_dup(const struct stack_st_X509_VERIFY_PARAM *sk) { return (struct stack_st_X509_VERIFY_PARAM *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_X509_VERIFY_PARAM *sk_X509_VERIFY_PARAM_deep_copy(const struct stack_st_X509_VERIFY_PARAM *sk, sk_X509_VERIFY_PARAM_copyfunc copyfunc, sk_X509_VERIFY_PARAM_freefunc freefunc) { return (struct stack_st_X509_VERIFY_PARAM *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_X509_VERIFY_PARAM_compfunc sk_X509_VERIFY_PARAM_set_cmp_func(struct stack_st_X509_VERIFY_PARAM *sk, sk_X509_VERIFY_PARAM_compfunc compare) { return (sk_X509_VERIFY_PARAM_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }

int X509_STORE_set_depth(X509_STORE *store, int depth);

typedef int (*X509_STORE_CTX_verify_cb)(int, X509_STORE_CTX *);
typedef int (*X509_STORE_CTX_verify_fn)(X509_STORE_CTX *);
typedef int (*X509_STORE_CTX_get_issuer_fn)(X509 **issuer,
                                            X509_STORE_CTX *ctx, X509 *x);
typedef int (*X509_STORE_CTX_check_issued_fn)(X509_STORE_CTX *ctx,
                                              X509 *x, X509 *issuer);
typedef int (*X509_STORE_CTX_check_revocation_fn)(X509_STORE_CTX *ctx);
typedef int (*X509_STORE_CTX_get_crl_fn)(X509_STORE_CTX *ctx,
                                         X509_CRL **crl, X509 *x);
typedef int (*X509_STORE_CTX_check_crl_fn)(X509_STORE_CTX *ctx, X509_CRL *crl);
typedef int (*X509_STORE_CTX_cert_crl_fn)(X509_STORE_CTX *ctx,
                                          X509_CRL *crl, X509 *x);
typedef int (*X509_STORE_CTX_check_policy_fn)(X509_STORE_CTX *ctx);
typedef struct stack_st_X509 *(*X509_STORE_CTX_lookup_certs_fn)(X509_STORE_CTX *ctx,
                                                          X509_NAME *nm);
typedef struct stack_st_X509_CRL *(*X509_STORE_CTX_lookup_crls_fn)(X509_STORE_CTX *ctx,
                                                             X509_NAME *nm);
typedef int (*X509_STORE_CTX_cleanup_fn)(X509_STORE_CTX *ctx);


void X509_STORE_CTX_set_depth(X509_STORE_CTX *ctx, int depth);
# 252 "/usr/include/openssl/x509_vfy.h" 3 4
int X509_OBJECT_idx_by_subject(struct stack_st_X509_OBJECT *h, X509_LOOKUP_TYPE type,
                               X509_NAME *name);
X509_OBJECT *X509_OBJECT_retrieve_by_subject(struct stack_st_X509_OBJECT *h,
                                             X509_LOOKUP_TYPE type,
                                             X509_NAME *name);
X509_OBJECT *X509_OBJECT_retrieve_match(struct stack_st_X509_OBJECT *h,
                                        X509_OBJECT *x);
int X509_OBJECT_up_ref_count(X509_OBJECT *a);
X509_OBJECT *X509_OBJECT_new(void);
void X509_OBJECT_free(X509_OBJECT *a);
X509_LOOKUP_TYPE X509_OBJECT_get_type(const X509_OBJECT *a);
X509 *X509_OBJECT_get0_X509(const X509_OBJECT *a);
int X509_OBJECT_set1_X509(X509_OBJECT *a, X509 *obj);
X509_CRL *X509_OBJECT_get0_X509_CRL(X509_OBJECT *a);
int X509_OBJECT_set1_X509_CRL(X509_OBJECT *a, X509_CRL *obj);
X509_STORE *X509_STORE_new(void);
void X509_STORE_free(X509_STORE *v);
int X509_STORE_lock(X509_STORE *ctx);
int X509_STORE_unlock(X509_STORE *ctx);
int X509_STORE_up_ref(X509_STORE *v);
struct stack_st_X509_OBJECT *X509_STORE_get0_objects(X509_STORE *v);

struct stack_st_X509 *X509_STORE_CTX_get1_certs(X509_STORE_CTX *st, X509_NAME *nm);
struct stack_st_X509_CRL *X509_STORE_CTX_get1_crls(X509_STORE_CTX *st, X509_NAME *nm);
int X509_STORE_set_flags(X509_STORE *ctx, unsigned long flags);
int X509_STORE_set_purpose(X509_STORE *ctx, int purpose);
int X509_STORE_set_trust(X509_STORE *ctx, int trust);
int X509_STORE_set1_param(X509_STORE *ctx, X509_VERIFY_PARAM *pm);
X509_VERIFY_PARAM *X509_STORE_get0_param(X509_STORE *ctx);

void X509_STORE_set_verify(X509_STORE *ctx, X509_STORE_CTX_verify_fn verify);


void X509_STORE_CTX_set_verify(X509_STORE_CTX *ctx,
                               X509_STORE_CTX_verify_fn verify);
X509_STORE_CTX_verify_fn X509_STORE_get_verify(X509_STORE *ctx);
void X509_STORE_set_verify_cb(X509_STORE *ctx,
                              X509_STORE_CTX_verify_cb verify_cb);


X509_STORE_CTX_verify_cb X509_STORE_get_verify_cb(X509_STORE *ctx);
void X509_STORE_set_get_issuer(X509_STORE *ctx,
                               X509_STORE_CTX_get_issuer_fn get_issuer);
X509_STORE_CTX_get_issuer_fn X509_STORE_get_get_issuer(X509_STORE *ctx);
void X509_STORE_set_check_issued(X509_STORE *ctx,
                                 X509_STORE_CTX_check_issued_fn check_issued);
X509_STORE_CTX_check_issued_fn X509_STORE_get_check_issued(X509_STORE *ctx);
void X509_STORE_set_check_revocation(X509_STORE *ctx,
                                     X509_STORE_CTX_check_revocation_fn check_revocation);
X509_STORE_CTX_check_revocation_fn X509_STORE_get_check_revocation(X509_STORE *ctx);
void X509_STORE_set_get_crl(X509_STORE *ctx,
                            X509_STORE_CTX_get_crl_fn get_crl);
X509_STORE_CTX_get_crl_fn X509_STORE_get_get_crl(X509_STORE *ctx);
void X509_STORE_set_check_crl(X509_STORE *ctx,
                              X509_STORE_CTX_check_crl_fn check_crl);
X509_STORE_CTX_check_crl_fn X509_STORE_get_check_crl(X509_STORE *ctx);
void X509_STORE_set_cert_crl(X509_STORE *ctx,
                             X509_STORE_CTX_cert_crl_fn cert_crl);
X509_STORE_CTX_cert_crl_fn X509_STORE_get_cert_crl(X509_STORE *ctx);
void X509_STORE_set_check_policy(X509_STORE *ctx,
                                 X509_STORE_CTX_check_policy_fn check_policy);
X509_STORE_CTX_check_policy_fn X509_STORE_get_check_policy(X509_STORE *ctx);
void X509_STORE_set_lookup_certs(X509_STORE *ctx,
                                 X509_STORE_CTX_lookup_certs_fn lookup_certs);
X509_STORE_CTX_lookup_certs_fn X509_STORE_get_lookup_certs(X509_STORE *ctx);
void X509_STORE_set_lookup_crls(X509_STORE *ctx,
                                X509_STORE_CTX_lookup_crls_fn lookup_crls);


X509_STORE_CTX_lookup_crls_fn X509_STORE_get_lookup_crls(X509_STORE *ctx);
void X509_STORE_set_cleanup(X509_STORE *ctx,
                            X509_STORE_CTX_cleanup_fn cleanup);
X509_STORE_CTX_cleanup_fn X509_STORE_get_cleanup(X509_STORE *ctx);



int X509_STORE_set_ex_data(X509_STORE *ctx, int idx, void *data);
void *X509_STORE_get_ex_data(X509_STORE *ctx, int idx);

X509_STORE_CTX *X509_STORE_CTX_new(void);

int X509_STORE_CTX_get1_issuer(X509 **issuer, X509_STORE_CTX *ctx, X509 *x);

void X509_STORE_CTX_free(X509_STORE_CTX *ctx);
int X509_STORE_CTX_init(X509_STORE_CTX *ctx, X509_STORE *store,
                        X509 *x509, struct stack_st_X509 *chain);
void X509_STORE_CTX_set0_trusted_stack(X509_STORE_CTX *ctx, struct stack_st_X509 *sk);
void X509_STORE_CTX_cleanup(X509_STORE_CTX *ctx);

X509_STORE *X509_STORE_CTX_get0_store(X509_STORE_CTX *ctx);
X509 *X509_STORE_CTX_get0_cert(X509_STORE_CTX *ctx);
struct stack_st_X509* X509_STORE_CTX_get0_untrusted(X509_STORE_CTX *ctx);
void X509_STORE_CTX_set0_untrusted(X509_STORE_CTX *ctx, struct stack_st_X509 *sk);
void X509_STORE_CTX_set_verify_cb(X509_STORE_CTX *ctx,
                                  X509_STORE_CTX_verify_cb verify);
X509_STORE_CTX_verify_cb X509_STORE_CTX_get_verify_cb(X509_STORE_CTX *ctx);
X509_STORE_CTX_verify_fn X509_STORE_CTX_get_verify(X509_STORE_CTX *ctx);
X509_STORE_CTX_get_issuer_fn X509_STORE_CTX_get_get_issuer(X509_STORE_CTX *ctx);
X509_STORE_CTX_check_issued_fn X509_STORE_CTX_get_check_issued(X509_STORE_CTX *ctx);
X509_STORE_CTX_check_revocation_fn X509_STORE_CTX_get_check_revocation(X509_STORE_CTX *ctx);
X509_STORE_CTX_get_crl_fn X509_STORE_CTX_get_get_crl(X509_STORE_CTX *ctx);
X509_STORE_CTX_check_crl_fn X509_STORE_CTX_get_check_crl(X509_STORE_CTX *ctx);
X509_STORE_CTX_cert_crl_fn X509_STORE_CTX_get_cert_crl(X509_STORE_CTX *ctx);
X509_STORE_CTX_check_policy_fn X509_STORE_CTX_get_check_policy(X509_STORE_CTX *ctx);
X509_STORE_CTX_lookup_certs_fn X509_STORE_CTX_get_lookup_certs(X509_STORE_CTX *ctx);
X509_STORE_CTX_lookup_crls_fn X509_STORE_CTX_get_lookup_crls(X509_STORE_CTX *ctx);
X509_STORE_CTX_cleanup_fn X509_STORE_CTX_get_cleanup(X509_STORE_CTX *ctx);
# 373 "/usr/include/openssl/x509_vfy.h" 3 4
X509_LOOKUP *X509_STORE_add_lookup(X509_STORE *v, X509_LOOKUP_METHOD *m);
X509_LOOKUP_METHOD *X509_LOOKUP_hash_dir(void);
X509_LOOKUP_METHOD *X509_LOOKUP_file(void);

typedef int (*X509_LOOKUP_ctrl_fn)(X509_LOOKUP *ctx, int cmd, const char *argc,
                                   long argl, char **ret);
typedef int (*X509_LOOKUP_get_by_subject_fn)(X509_LOOKUP *ctx,
                                             X509_LOOKUP_TYPE type,
                                             X509_NAME *name,
                                             X509_OBJECT *ret);
typedef int (*X509_LOOKUP_get_by_issuer_serial_fn)(X509_LOOKUP *ctx,
                                                   X509_LOOKUP_TYPE type,
                                                   X509_NAME *name,
                                                   ASN1_INTEGER *serial,
                                                   X509_OBJECT *ret);
typedef int (*X509_LOOKUP_get_by_fingerprint_fn)(X509_LOOKUP *ctx,
                                                 X509_LOOKUP_TYPE type,
                                                 const unsigned char* bytes,
                                                 int len,
                                                 X509_OBJECT *ret);
typedef int (*X509_LOOKUP_get_by_alias_fn)(X509_LOOKUP *ctx,
                                           X509_LOOKUP_TYPE type,
                                           const char *str,
                                           int len,
                                           X509_OBJECT *ret);

X509_LOOKUP_METHOD *X509_LOOKUP_meth_new(const char *name);
void X509_LOOKUP_meth_free(X509_LOOKUP_METHOD *method);

int X509_LOOKUP_meth_set_new_item(X509_LOOKUP_METHOD *method,
                                  int (*new_item) (X509_LOOKUP *ctx));
int (*X509_LOOKUP_meth_get_new_item(const X509_LOOKUP_METHOD* method))
    (X509_LOOKUP *ctx);

int X509_LOOKUP_meth_set_free(X509_LOOKUP_METHOD *method,
                              void (*free_fn) (X509_LOOKUP *ctx));
void (*X509_LOOKUP_meth_get_free(const X509_LOOKUP_METHOD* method))
    (X509_LOOKUP *ctx);

int X509_LOOKUP_meth_set_init(X509_LOOKUP_METHOD *method,
                              int (*init) (X509_LOOKUP *ctx));
int (*X509_LOOKUP_meth_get_init(const X509_LOOKUP_METHOD* method))
    (X509_LOOKUP *ctx);

int X509_LOOKUP_meth_set_shutdown(X509_LOOKUP_METHOD *method,
                                  int (*shutdown) (X509_LOOKUP *ctx));
int (*X509_LOOKUP_meth_get_shutdown(const X509_LOOKUP_METHOD* method))
    (X509_LOOKUP *ctx);

int X509_LOOKUP_meth_set_ctrl(X509_LOOKUP_METHOD *method,
                              X509_LOOKUP_ctrl_fn ctrl_fn);
X509_LOOKUP_ctrl_fn X509_LOOKUP_meth_get_ctrl(const X509_LOOKUP_METHOD *method);

int X509_LOOKUP_meth_set_get_by_subject(X509_LOOKUP_METHOD *method,
                                        X509_LOOKUP_get_by_subject_fn fn);
X509_LOOKUP_get_by_subject_fn X509_LOOKUP_meth_get_get_by_subject(
    const X509_LOOKUP_METHOD *method);

int X509_LOOKUP_meth_set_get_by_issuer_serial(X509_LOOKUP_METHOD *method,
    X509_LOOKUP_get_by_issuer_serial_fn fn);
X509_LOOKUP_get_by_issuer_serial_fn X509_LOOKUP_meth_get_get_by_issuer_serial(
    const X509_LOOKUP_METHOD *method);

int X509_LOOKUP_meth_set_get_by_fingerprint(X509_LOOKUP_METHOD *method,
    X509_LOOKUP_get_by_fingerprint_fn fn);
X509_LOOKUP_get_by_fingerprint_fn X509_LOOKUP_meth_get_get_by_fingerprint(
    const X509_LOOKUP_METHOD *method);

int X509_LOOKUP_meth_set_get_by_alias(X509_LOOKUP_METHOD *method,
                                      X509_LOOKUP_get_by_alias_fn fn);
X509_LOOKUP_get_by_alias_fn X509_LOOKUP_meth_get_get_by_alias(
    const X509_LOOKUP_METHOD *method);


int X509_STORE_add_cert(X509_STORE *ctx, X509 *x);
int X509_STORE_add_crl(X509_STORE *ctx, X509_CRL *x);

int X509_STORE_CTX_get_by_subject(X509_STORE_CTX *vs, X509_LOOKUP_TYPE type,
                                  X509_NAME *name, X509_OBJECT *ret);
X509_OBJECT *X509_STORE_CTX_get_obj_by_subject(X509_STORE_CTX *vs,
                                               X509_LOOKUP_TYPE type,
                                               X509_NAME *name);

int X509_LOOKUP_ctrl(X509_LOOKUP *ctx, int cmd, const char *argc,
                     long argl, char **ret);

int X509_load_cert_file(X509_LOOKUP *ctx, const char *file, int type);
int X509_load_crl_file(X509_LOOKUP *ctx, const char *file, int type);
int X509_load_cert_crl_file(X509_LOOKUP *ctx, const char *file, int type);

X509_LOOKUP *X509_LOOKUP_new(X509_LOOKUP_METHOD *method);
void X509_LOOKUP_free(X509_LOOKUP *ctx);
int X509_LOOKUP_init(X509_LOOKUP *ctx);
int X509_LOOKUP_by_subject(X509_LOOKUP *ctx, X509_LOOKUP_TYPE type,
                           X509_NAME *name, X509_OBJECT *ret);
int X509_LOOKUP_by_issuer_serial(X509_LOOKUP *ctx, X509_LOOKUP_TYPE type,
                                 X509_NAME *name, ASN1_INTEGER *serial,
                                 X509_OBJECT *ret);
int X509_LOOKUP_by_fingerprint(X509_LOOKUP *ctx, X509_LOOKUP_TYPE type,
                               const unsigned char *bytes, int len,
                               X509_OBJECT *ret);
int X509_LOOKUP_by_alias(X509_LOOKUP *ctx, X509_LOOKUP_TYPE type,
                         const char *str, int len, X509_OBJECT *ret);
int X509_LOOKUP_set_method_data(X509_LOOKUP *ctx, void *data);
void *X509_LOOKUP_get_method_data(const X509_LOOKUP *ctx);
X509_STORE *X509_LOOKUP_get_store(const X509_LOOKUP *ctx);
int X509_LOOKUP_shutdown(X509_LOOKUP *ctx);

int X509_STORE_load_locations(X509_STORE *ctx,
                              const char *file, const char *dir);
int X509_STORE_set_default_paths(X509_STORE *ctx);



int X509_STORE_CTX_set_ex_data(X509_STORE_CTX *ctx, int idx, void *data);
void *X509_STORE_CTX_get_ex_data(X509_STORE_CTX *ctx, int idx);
int X509_STORE_CTX_get_error(X509_STORE_CTX *ctx);
void X509_STORE_CTX_set_error(X509_STORE_CTX *ctx, int s);
int X509_STORE_CTX_get_error_depth(X509_STORE_CTX *ctx);
void X509_STORE_CTX_set_error_depth(X509_STORE_CTX *ctx, int depth);
X509 *X509_STORE_CTX_get_current_cert(X509_STORE_CTX *ctx);
void X509_STORE_CTX_set_current_cert(X509_STORE_CTX *ctx, X509 *x);
X509 *X509_STORE_CTX_get0_current_issuer(X509_STORE_CTX *ctx);
X509_CRL *X509_STORE_CTX_get0_current_crl(X509_STORE_CTX *ctx);
X509_STORE_CTX *X509_STORE_CTX_get0_parent_ctx(X509_STORE_CTX *ctx);
struct stack_st_X509 *X509_STORE_CTX_get0_chain(X509_STORE_CTX *ctx);
struct stack_st_X509 *X509_STORE_CTX_get1_chain(X509_STORE_CTX *ctx);
void X509_STORE_CTX_set_cert(X509_STORE_CTX *c, X509 *x);
void X509_STORE_CTX_set0_verified_chain(X509_STORE_CTX *c, struct stack_st_X509 *sk);
void X509_STORE_CTX_set0_crls(X509_STORE_CTX *c, struct stack_st_X509_CRL *sk);
int X509_STORE_CTX_set_purpose(X509_STORE_CTX *ctx, int purpose);
int X509_STORE_CTX_set_trust(X509_STORE_CTX *ctx, int trust);
int X509_STORE_CTX_purpose_inherit(X509_STORE_CTX *ctx, int def_purpose,
                                   int purpose, int trust);
void X509_STORE_CTX_set_flags(X509_STORE_CTX *ctx, unsigned long flags);
void X509_STORE_CTX_set_time(X509_STORE_CTX *ctx, unsigned long flags,
                             time_t t);

X509_POLICY_TREE *X509_STORE_CTX_get0_policy_tree(X509_STORE_CTX *ctx);
int X509_STORE_CTX_get_explicit_policy(X509_STORE_CTX *ctx);
int X509_STORE_CTX_get_num_untrusted(X509_STORE_CTX *ctx);

X509_VERIFY_PARAM *X509_STORE_CTX_get0_param(X509_STORE_CTX *ctx);
void X509_STORE_CTX_set0_param(X509_STORE_CTX *ctx, X509_VERIFY_PARAM *param);
int X509_STORE_CTX_set_default(X509_STORE_CTX *ctx, const char *name);





void X509_STORE_CTX_set0_dane(X509_STORE_CTX *ctx, SSL_DANE *dane);




X509_VERIFY_PARAM *X509_VERIFY_PARAM_new(void);
void X509_VERIFY_PARAM_free(X509_VERIFY_PARAM *param);
int X509_VERIFY_PARAM_inherit(X509_VERIFY_PARAM *to,
                              const X509_VERIFY_PARAM *from);
int X509_VERIFY_PARAM_set1(X509_VERIFY_PARAM *to,
                           const X509_VERIFY_PARAM *from);
int X509_VERIFY_PARAM_set1_name(X509_VERIFY_PARAM *param, const char *name);
int X509_VERIFY_PARAM_set_flags(X509_VERIFY_PARAM *param,
                                unsigned long flags);
int X509_VERIFY_PARAM_clear_flags(X509_VERIFY_PARAM *param,
                                  unsigned long flags);
unsigned long X509_VERIFY_PARAM_get_flags(X509_VERIFY_PARAM *param);
int X509_VERIFY_PARAM_set_purpose(X509_VERIFY_PARAM *param, int purpose);
int X509_VERIFY_PARAM_set_trust(X509_VERIFY_PARAM *param, int trust);
void X509_VERIFY_PARAM_set_depth(X509_VERIFY_PARAM *param, int depth);
void X509_VERIFY_PARAM_set_auth_level(X509_VERIFY_PARAM *param, int auth_level);
time_t X509_VERIFY_PARAM_get_time(const X509_VERIFY_PARAM *param);
void X509_VERIFY_PARAM_set_time(X509_VERIFY_PARAM *param, time_t t);
int X509_VERIFY_PARAM_add0_policy(X509_VERIFY_PARAM *param,
                                  ASN1_OBJECT *policy);
int X509_VERIFY_PARAM_set1_policies(X509_VERIFY_PARAM *param,
                                    struct stack_st_ASN1_OBJECT *policies);

int X509_VERIFY_PARAM_set_inh_flags(X509_VERIFY_PARAM *param,
                                    uint32_t flags);
uint32_t X509_VERIFY_PARAM_get_inh_flags(const X509_VERIFY_PARAM *param);

int X509_VERIFY_PARAM_set1_host(X509_VERIFY_PARAM *param,
                                const char *name, size_t namelen);
int X509_VERIFY_PARAM_add1_host(X509_VERIFY_PARAM *param,
                                const char *name, size_t namelen);
void X509_VERIFY_PARAM_set_hostflags(X509_VERIFY_PARAM *param,
                                     unsigned int flags);
unsigned int X509_VERIFY_PARAM_get_hostflags(const X509_VERIFY_PARAM *param);
char *X509_VERIFY_PARAM_get0_peername(X509_VERIFY_PARAM *);
void X509_VERIFY_PARAM_move_peername(X509_VERIFY_PARAM *, X509_VERIFY_PARAM *);
int X509_VERIFY_PARAM_set1_email(X509_VERIFY_PARAM *param,
                                 const char *email, size_t emaillen);
int X509_VERIFY_PARAM_set1_ip(X509_VERIFY_PARAM *param,
                              const unsigned char *ip, size_t iplen);
int X509_VERIFY_PARAM_set1_ip_asc(X509_VERIFY_PARAM *param,
                                  const char *ipasc);

int X509_VERIFY_PARAM_get_depth(const X509_VERIFY_PARAM *param);
int X509_VERIFY_PARAM_get_auth_level(const X509_VERIFY_PARAM *param);
const char *X509_VERIFY_PARAM_get0_name(const X509_VERIFY_PARAM *param);

int X509_VERIFY_PARAM_add0_table(X509_VERIFY_PARAM *param);
int X509_VERIFY_PARAM_get_count(void);
const X509_VERIFY_PARAM *X509_VERIFY_PARAM_get0(int id);
const X509_VERIFY_PARAM *X509_VERIFY_PARAM_lookup(const char *name);
void X509_VERIFY_PARAM_table_cleanup(void);
# 594 "/usr/include/openssl/x509_vfy.h" 3 4
int X509_policy_check(X509_POLICY_TREE **ptree, int *pexplicit_policy,
                      struct stack_st_X509 *certs,
                      struct stack_st_ASN1_OBJECT *policy_oids, unsigned int flags);

void X509_policy_tree_free(X509_POLICY_TREE *tree);

int X509_policy_tree_level_count(const X509_POLICY_TREE *tree);
X509_POLICY_LEVEL *X509_policy_tree_get0_level(const X509_POLICY_TREE *tree,
                                               int i);

struct stack_st_X509_POLICY_NODE *X509_policy_tree_get0_policies(const
                                                           X509_POLICY_TREE
                                                           *tree);

struct stack_st_X509_POLICY_NODE *X509_policy_tree_get0_user_policies(const
                                                                X509_POLICY_TREE
                                                                *tree);

int X509_policy_level_node_count(X509_POLICY_LEVEL *level);

X509_POLICY_NODE *X509_policy_level_get0_node(X509_POLICY_LEVEL *level,
                                              int i);

const ASN1_OBJECT *X509_policy_node_get0_policy(const X509_POLICY_NODE *node);

struct stack_st_POLICYQUALINFO *X509_policy_node_get0_qualifiers(const
                                                           X509_POLICY_NODE
                                                           *node);
const X509_POLICY_NODE *X509_policy_node_get0_parent(const X509_POLICY_NODE
                                                     *node);
# 321 "/usr/include/openssl/x509.h" 2 3 4
# 1 "/usr/include/openssl/pkcs7.h" 1 3 4
# 19 "/usr/include/openssl/pkcs7.h" 3 4
# 1 "/usr/include/openssl/pkcs7err.h" 1 3 4
# 21 "/usr/include/openssl/pkcs7err.h" 3 4
int ERR_load_PKCS7_strings(void);
# 20 "/usr/include/openssl/pkcs7.h" 2 3 4
# 32 "/usr/include/openssl/pkcs7.h" 3 4
typedef struct pkcs7_issuer_and_serial_st {
    X509_NAME *issuer;
    ASN1_INTEGER *serial;
} PKCS7_ISSUER_AND_SERIAL;

typedef struct pkcs7_signer_info_st {
    ASN1_INTEGER *version;
    PKCS7_ISSUER_AND_SERIAL *issuer_and_serial;
    X509_ALGOR *digest_alg;
    struct stack_st_X509_ATTRIBUTE *auth_attr;
    X509_ALGOR *digest_enc_alg;
    ASN1_OCTET_STRING *enc_digest;
    struct stack_st_X509_ATTRIBUTE *unauth_attr;

    EVP_PKEY *pkey;
} PKCS7_SIGNER_INFO;

struct stack_st_PKCS7_SIGNER_INFO; typedef int (*sk_PKCS7_SIGNER_INFO_compfunc)(const PKCS7_SIGNER_INFO * const *a, const PKCS7_SIGNER_INFO *const *b); typedef void (*sk_PKCS7_SIGNER_INFO_freefunc)(PKCS7_SIGNER_INFO *a); typedef PKCS7_SIGNER_INFO * (*sk_PKCS7_SIGNER_INFO_copyfunc)(const PKCS7_SIGNER_INFO *a); static __attribute__((unused)) inline int sk_PKCS7_SIGNER_INFO_num(const struct stack_st_PKCS7_SIGNER_INFO *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline PKCS7_SIGNER_INFO *sk_PKCS7_SIGNER_INFO_value(const struct stack_st_PKCS7_SIGNER_INFO *sk, int idx) { return (PKCS7_SIGNER_INFO *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_PKCS7_SIGNER_INFO *sk_PKCS7_SIGNER_INFO_new(sk_PKCS7_SIGNER_INFO_compfunc compare) { return (struct stack_st_PKCS7_SIGNER_INFO *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_PKCS7_SIGNER_INFO *sk_PKCS7_SIGNER_INFO_new_null(void) { return (struct stack_st_PKCS7_SIGNER_INFO *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_PKCS7_SIGNER_INFO *sk_PKCS7_SIGNER_INFO_new_reserve(sk_PKCS7_SIGNER_INFO_compfunc compare, int n) { return (struct stack_st_PKCS7_SIGNER_INFO *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_PKCS7_SIGNER_INFO_reserve(struct stack_st_PKCS7_SIGNER_INFO *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_PKCS7_SIGNER_INFO_free(struct stack_st_PKCS7_SIGNER_INFO *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_PKCS7_SIGNER_INFO_zero(struct stack_st_PKCS7_SIGNER_INFO *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline PKCS7_SIGNER_INFO *sk_PKCS7_SIGNER_INFO_delete(struct stack_st_PKCS7_SIGNER_INFO *sk, int i) { return (PKCS7_SIGNER_INFO *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline PKCS7_SIGNER_INFO *sk_PKCS7_SIGNER_INFO_delete_ptr(struct stack_st_PKCS7_SIGNER_INFO *sk, PKCS7_SIGNER_INFO *ptr) { return (PKCS7_SIGNER_INFO *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_PKCS7_SIGNER_INFO_push(struct stack_st_PKCS7_SIGNER_INFO *sk, PKCS7_SIGNER_INFO *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_PKCS7_SIGNER_INFO_unshift(struct stack_st_PKCS7_SIGNER_INFO *sk, PKCS7_SIGNER_INFO *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline PKCS7_SIGNER_INFO *sk_PKCS7_SIGNER_INFO_pop(struct stack_st_PKCS7_SIGNER_INFO *sk) { return (PKCS7_SIGNER_INFO *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline PKCS7_SIGNER_INFO *sk_PKCS7_SIGNER_INFO_shift(struct stack_st_PKCS7_SIGNER_INFO *sk) { return (PKCS7_SIGNER_INFO *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_PKCS7_SIGNER_INFO_pop_free(struct stack_st_PKCS7_SIGNER_INFO *sk, sk_PKCS7_SIGNER_INFO_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_PKCS7_SIGNER_INFO_insert(struct stack_st_PKCS7_SIGNER_INFO *sk, PKCS7_SIGNER_INFO *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline PKCS7_SIGNER_INFO *sk_PKCS7_SIGNER_INFO_set(struct stack_st_PKCS7_SIGNER_INFO *sk, int idx, PKCS7_SIGNER_INFO *ptr) { return (PKCS7_SIGNER_INFO *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_PKCS7_SIGNER_INFO_find(struct stack_st_PKCS7_SIGNER_INFO *sk, PKCS7_SIGNER_INFO *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_PKCS7_SIGNER_INFO_find_ex(struct stack_st_PKCS7_SIGNER_INFO *sk, PKCS7_SIGNER_INFO *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_PKCS7_SIGNER_INFO_sort(struct stack_st_PKCS7_SIGNER_INFO *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_PKCS7_SIGNER_INFO_is_sorted(const struct stack_st_PKCS7_SIGNER_INFO *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_PKCS7_SIGNER_INFO * sk_PKCS7_SIGNER_INFO_dup(const struct stack_st_PKCS7_SIGNER_INFO *sk) { return (struct stack_st_PKCS7_SIGNER_INFO *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_PKCS7_SIGNER_INFO *sk_PKCS7_SIGNER_INFO_deep_copy(const struct stack_st_PKCS7_SIGNER_INFO *sk, sk_PKCS7_SIGNER_INFO_copyfunc copyfunc, sk_PKCS7_SIGNER_INFO_freefunc freefunc) { return (struct stack_st_PKCS7_SIGNER_INFO *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_PKCS7_SIGNER_INFO_compfunc sk_PKCS7_SIGNER_INFO_set_cmp_func(struct stack_st_PKCS7_SIGNER_INFO *sk, sk_PKCS7_SIGNER_INFO_compfunc compare) { return (sk_PKCS7_SIGNER_INFO_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }

typedef struct pkcs7_recip_info_st {
    ASN1_INTEGER *version;
    PKCS7_ISSUER_AND_SERIAL *issuer_and_serial;
    X509_ALGOR *key_enc_algor;
    ASN1_OCTET_STRING *enc_key;
    X509 *cert;
} PKCS7_RECIP_INFO;

struct stack_st_PKCS7_RECIP_INFO; typedef int (*sk_PKCS7_RECIP_INFO_compfunc)(const PKCS7_RECIP_INFO * const *a, const PKCS7_RECIP_INFO *const *b); typedef void (*sk_PKCS7_RECIP_INFO_freefunc)(PKCS7_RECIP_INFO *a); typedef PKCS7_RECIP_INFO * (*sk_PKCS7_RECIP_INFO_copyfunc)(const PKCS7_RECIP_INFO *a); static __attribute__((unused)) inline int sk_PKCS7_RECIP_INFO_num(const struct stack_st_PKCS7_RECIP_INFO *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline PKCS7_RECIP_INFO *sk_PKCS7_RECIP_INFO_value(const struct stack_st_PKCS7_RECIP_INFO *sk, int idx) { return (PKCS7_RECIP_INFO *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_PKCS7_RECIP_INFO *sk_PKCS7_RECIP_INFO_new(sk_PKCS7_RECIP_INFO_compfunc compare) { return (struct stack_st_PKCS7_RECIP_INFO *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_PKCS7_RECIP_INFO *sk_PKCS7_RECIP_INFO_new_null(void) { return (struct stack_st_PKCS7_RECIP_INFO *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_PKCS7_RECIP_INFO *sk_PKCS7_RECIP_INFO_new_reserve(sk_PKCS7_RECIP_INFO_compfunc compare, int n) { return (struct stack_st_PKCS7_RECIP_INFO *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_PKCS7_RECIP_INFO_reserve(struct stack_st_PKCS7_RECIP_INFO *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_PKCS7_RECIP_INFO_free(struct stack_st_PKCS7_RECIP_INFO *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_PKCS7_RECIP_INFO_zero(struct stack_st_PKCS7_RECIP_INFO *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline PKCS7_RECIP_INFO *sk_PKCS7_RECIP_INFO_delete(struct stack_st_PKCS7_RECIP_INFO *sk, int i) { return (PKCS7_RECIP_INFO *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline PKCS7_RECIP_INFO *sk_PKCS7_RECIP_INFO_delete_ptr(struct stack_st_PKCS7_RECIP_INFO *sk, PKCS7_RECIP_INFO *ptr) { return (PKCS7_RECIP_INFO *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_PKCS7_RECIP_INFO_push(struct stack_st_PKCS7_RECIP_INFO *sk, PKCS7_RECIP_INFO *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_PKCS7_RECIP_INFO_unshift(struct stack_st_PKCS7_RECIP_INFO *sk, PKCS7_RECIP_INFO *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline PKCS7_RECIP_INFO *sk_PKCS7_RECIP_INFO_pop(struct stack_st_PKCS7_RECIP_INFO *sk) { return (PKCS7_RECIP_INFO *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline PKCS7_RECIP_INFO *sk_PKCS7_RECIP_INFO_shift(struct stack_st_PKCS7_RECIP_INFO *sk) { return (PKCS7_RECIP_INFO *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_PKCS7_RECIP_INFO_pop_free(struct stack_st_PKCS7_RECIP_INFO *sk, sk_PKCS7_RECIP_INFO_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_PKCS7_RECIP_INFO_insert(struct stack_st_PKCS7_RECIP_INFO *sk, PKCS7_RECIP_INFO *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline PKCS7_RECIP_INFO *sk_PKCS7_RECIP_INFO_set(struct stack_st_PKCS7_RECIP_INFO *sk, int idx, PKCS7_RECIP_INFO *ptr) { return (PKCS7_RECIP_INFO *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_PKCS7_RECIP_INFO_find(struct stack_st_PKCS7_RECIP_INFO *sk, PKCS7_RECIP_INFO *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_PKCS7_RECIP_INFO_find_ex(struct stack_st_PKCS7_RECIP_INFO *sk, PKCS7_RECIP_INFO *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_PKCS7_RECIP_INFO_sort(struct stack_st_PKCS7_RECIP_INFO *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_PKCS7_RECIP_INFO_is_sorted(const struct stack_st_PKCS7_RECIP_INFO *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_PKCS7_RECIP_INFO * sk_PKCS7_RECIP_INFO_dup(const struct stack_st_PKCS7_RECIP_INFO *sk) { return (struct stack_st_PKCS7_RECIP_INFO *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_PKCS7_RECIP_INFO *sk_PKCS7_RECIP_INFO_deep_copy(const struct stack_st_PKCS7_RECIP_INFO *sk, sk_PKCS7_RECIP_INFO_copyfunc copyfunc, sk_PKCS7_RECIP_INFO_freefunc freefunc) { return (struct stack_st_PKCS7_RECIP_INFO *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_PKCS7_RECIP_INFO_compfunc sk_PKCS7_RECIP_INFO_set_cmp_func(struct stack_st_PKCS7_RECIP_INFO *sk, sk_PKCS7_RECIP_INFO_compfunc compare) { return (sk_PKCS7_RECIP_INFO_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }

typedef struct pkcs7_signed_st {
    ASN1_INTEGER *version;
    struct stack_st_X509_ALGOR *md_algs;
    struct stack_st_X509 *cert;
    struct stack_st_X509_CRL *crl;
    struct stack_st_PKCS7_SIGNER_INFO *signer_info;
    struct pkcs7_st *contents;
} PKCS7_SIGNED;





typedef struct pkcs7_enc_content_st {
    ASN1_OBJECT *content_type;
    X509_ALGOR *algorithm;
    ASN1_OCTET_STRING *enc_data;
    const EVP_CIPHER *cipher;
} PKCS7_ENC_CONTENT;

typedef struct pkcs7_enveloped_st {
    ASN1_INTEGER *version;
    struct stack_st_PKCS7_RECIP_INFO *recipientinfo;
    PKCS7_ENC_CONTENT *enc_data;
} PKCS7_ENVELOPE;

typedef struct pkcs7_signedandenveloped_st {
    ASN1_INTEGER *version;
    struct stack_st_X509_ALGOR *md_algs;
    struct stack_st_X509 *cert;
    struct stack_st_X509_CRL *crl;
    struct stack_st_PKCS7_SIGNER_INFO *signer_info;
    PKCS7_ENC_CONTENT *enc_data;
    struct stack_st_PKCS7_RECIP_INFO *recipientinfo;
} PKCS7_SIGN_ENVELOPE;

typedef struct pkcs7_digest_st {
    ASN1_INTEGER *version;
    X509_ALGOR *md;
    struct pkcs7_st *contents;
    ASN1_OCTET_STRING *digest;
} PKCS7_DIGEST;

typedef struct pkcs7_encrypted_st {
    ASN1_INTEGER *version;
    PKCS7_ENC_CONTENT *enc_data;
} PKCS7_ENCRYPT;

typedef struct pkcs7_st {




    unsigned char *asn1;
    long length;



    int state;
    int detached;
    ASN1_OBJECT *type;





    union {
        char *ptr;

        ASN1_OCTET_STRING *data;

        PKCS7_SIGNED *sign;

        PKCS7_ENVELOPE *enveloped;

        PKCS7_SIGN_ENVELOPE *signed_and_enveloped;

        PKCS7_DIGEST *digest;

        PKCS7_ENCRYPT *encrypted;

        ASN1_TYPE *other;
    } d;
} PKCS7;

struct stack_st_PKCS7; typedef int (*sk_PKCS7_compfunc)(const PKCS7 * const *a, const PKCS7 *const *b); typedef void (*sk_PKCS7_freefunc)(PKCS7 *a); typedef PKCS7 * (*sk_PKCS7_copyfunc)(const PKCS7 *a); static __attribute__((unused)) inline int sk_PKCS7_num(const struct stack_st_PKCS7 *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline PKCS7 *sk_PKCS7_value(const struct stack_st_PKCS7 *sk, int idx) { return (PKCS7 *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_PKCS7 *sk_PKCS7_new(sk_PKCS7_compfunc compare) { return (struct stack_st_PKCS7 *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_PKCS7 *sk_PKCS7_new_null(void) { return (struct stack_st_PKCS7 *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_PKCS7 *sk_PKCS7_new_reserve(sk_PKCS7_compfunc compare, int n) { return (struct stack_st_PKCS7 *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_PKCS7_reserve(struct stack_st_PKCS7 *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_PKCS7_free(struct stack_st_PKCS7 *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_PKCS7_zero(struct stack_st_PKCS7 *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline PKCS7 *sk_PKCS7_delete(struct stack_st_PKCS7 *sk, int i) { return (PKCS7 *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline PKCS7 *sk_PKCS7_delete_ptr(struct stack_st_PKCS7 *sk, PKCS7 *ptr) { return (PKCS7 *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_PKCS7_push(struct stack_st_PKCS7 *sk, PKCS7 *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_PKCS7_unshift(struct stack_st_PKCS7 *sk, PKCS7 *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline PKCS7 *sk_PKCS7_pop(struct stack_st_PKCS7 *sk) { return (PKCS7 *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline PKCS7 *sk_PKCS7_shift(struct stack_st_PKCS7 *sk) { return (PKCS7 *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_PKCS7_pop_free(struct stack_st_PKCS7 *sk, sk_PKCS7_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_PKCS7_insert(struct stack_st_PKCS7 *sk, PKCS7 *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline PKCS7 *sk_PKCS7_set(struct stack_st_PKCS7 *sk, int idx, PKCS7 *ptr) { return (PKCS7 *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_PKCS7_find(struct stack_st_PKCS7 *sk, PKCS7 *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_PKCS7_find_ex(struct stack_st_PKCS7 *sk, PKCS7 *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_PKCS7_sort(struct stack_st_PKCS7 *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_PKCS7_is_sorted(const struct stack_st_PKCS7 *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_PKCS7 * sk_PKCS7_dup(const struct stack_st_PKCS7 *sk) { return (struct stack_st_PKCS7 *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_PKCS7 *sk_PKCS7_deep_copy(const struct stack_st_PKCS7 *sk, sk_PKCS7_copyfunc copyfunc, sk_PKCS7_freefunc freefunc) { return (struct stack_st_PKCS7 *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_PKCS7_compfunc sk_PKCS7_set_cmp_func(struct stack_st_PKCS7 *sk, sk_PKCS7_compfunc compare) { return (sk_PKCS7_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }
# 204 "/usr/include/openssl/pkcs7.h" 3 4
PKCS7_ISSUER_AND_SERIAL *PKCS7_ISSUER_AND_SERIAL_new(void); void PKCS7_ISSUER_AND_SERIAL_free(PKCS7_ISSUER_AND_SERIAL *a); PKCS7_ISSUER_AND_SERIAL *d2i_PKCS7_ISSUER_AND_SERIAL(PKCS7_ISSUER_AND_SERIAL **a, const unsigned char **in, long len); int i2d_PKCS7_ISSUER_AND_SERIAL(PKCS7_ISSUER_AND_SERIAL *a, unsigned char **out); extern const ASN1_ITEM PKCS7_ISSUER_AND_SERIAL_it;

int PKCS7_ISSUER_AND_SERIAL_digest(PKCS7_ISSUER_AND_SERIAL *data,
                                   const EVP_MD *type, unsigned char *md,
                                   unsigned int *len);

PKCS7 *d2i_PKCS7_fp(FILE *fp, PKCS7 **p7);
int i2d_PKCS7_fp(FILE *fp, PKCS7 *p7);

PKCS7 *PKCS7_dup(PKCS7 *p7);
PKCS7 *d2i_PKCS7_bio(BIO *bp, PKCS7 **p7);
int i2d_PKCS7_bio(BIO *bp, PKCS7 *p7);
int i2d_PKCS7_bio_stream(BIO *out, PKCS7 *p7, BIO *in, int flags);
int PEM_write_bio_PKCS7_stream(BIO *out, PKCS7 *p7, BIO *in, int flags);

PKCS7_SIGNER_INFO *PKCS7_SIGNER_INFO_new(void); void PKCS7_SIGNER_INFO_free(PKCS7_SIGNER_INFO *a); PKCS7_SIGNER_INFO *d2i_PKCS7_SIGNER_INFO(PKCS7_SIGNER_INFO **a, const unsigned char **in, long len); int i2d_PKCS7_SIGNER_INFO(PKCS7_SIGNER_INFO *a, unsigned char **out); extern const ASN1_ITEM PKCS7_SIGNER_INFO_it;
PKCS7_RECIP_INFO *PKCS7_RECIP_INFO_new(void); void PKCS7_RECIP_INFO_free(PKCS7_RECIP_INFO *a); PKCS7_RECIP_INFO *d2i_PKCS7_RECIP_INFO(PKCS7_RECIP_INFO **a, const unsigned char **in, long len); int i2d_PKCS7_RECIP_INFO(PKCS7_RECIP_INFO *a, unsigned char **out); extern const ASN1_ITEM PKCS7_RECIP_INFO_it;
PKCS7_SIGNED *PKCS7_SIGNED_new(void); void PKCS7_SIGNED_free(PKCS7_SIGNED *a); PKCS7_SIGNED *d2i_PKCS7_SIGNED(PKCS7_SIGNED **a, const unsigned char **in, long len); int i2d_PKCS7_SIGNED(PKCS7_SIGNED *a, unsigned char **out); extern const ASN1_ITEM PKCS7_SIGNED_it;
PKCS7_ENC_CONTENT *PKCS7_ENC_CONTENT_new(void); void PKCS7_ENC_CONTENT_free(PKCS7_ENC_CONTENT *a); PKCS7_ENC_CONTENT *d2i_PKCS7_ENC_CONTENT(PKCS7_ENC_CONTENT **a, const unsigned char **in, long len); int i2d_PKCS7_ENC_CONTENT(PKCS7_ENC_CONTENT *a, unsigned char **out); extern const ASN1_ITEM PKCS7_ENC_CONTENT_it;
PKCS7_ENVELOPE *PKCS7_ENVELOPE_new(void); void PKCS7_ENVELOPE_free(PKCS7_ENVELOPE *a); PKCS7_ENVELOPE *d2i_PKCS7_ENVELOPE(PKCS7_ENVELOPE **a, const unsigned char **in, long len); int i2d_PKCS7_ENVELOPE(PKCS7_ENVELOPE *a, unsigned char **out); extern const ASN1_ITEM PKCS7_ENVELOPE_it;
PKCS7_SIGN_ENVELOPE *PKCS7_SIGN_ENVELOPE_new(void); void PKCS7_SIGN_ENVELOPE_free(PKCS7_SIGN_ENVELOPE *a); PKCS7_SIGN_ENVELOPE *d2i_PKCS7_SIGN_ENVELOPE(PKCS7_SIGN_ENVELOPE **a, const unsigned char **in, long len); int i2d_PKCS7_SIGN_ENVELOPE(PKCS7_SIGN_ENVELOPE *a, unsigned char **out); extern const ASN1_ITEM PKCS7_SIGN_ENVELOPE_it;
PKCS7_DIGEST *PKCS7_DIGEST_new(void); void PKCS7_DIGEST_free(PKCS7_DIGEST *a); PKCS7_DIGEST *d2i_PKCS7_DIGEST(PKCS7_DIGEST **a, const unsigned char **in, long len); int i2d_PKCS7_DIGEST(PKCS7_DIGEST *a, unsigned char **out); extern const ASN1_ITEM PKCS7_DIGEST_it;
PKCS7_ENCRYPT *PKCS7_ENCRYPT_new(void); void PKCS7_ENCRYPT_free(PKCS7_ENCRYPT *a); PKCS7_ENCRYPT *d2i_PKCS7_ENCRYPT(PKCS7_ENCRYPT **a, const unsigned char **in, long len); int i2d_PKCS7_ENCRYPT(PKCS7_ENCRYPT *a, unsigned char **out); extern const ASN1_ITEM PKCS7_ENCRYPT_it;
PKCS7 *PKCS7_new(void); void PKCS7_free(PKCS7 *a); PKCS7 *d2i_PKCS7(PKCS7 **a, const unsigned char **in, long len); int i2d_PKCS7(PKCS7 *a, unsigned char **out); extern const ASN1_ITEM PKCS7_it;

extern const ASN1_ITEM PKCS7_ATTR_SIGN_it;
extern const ASN1_ITEM PKCS7_ATTR_VERIFY_it;

int i2d_PKCS7_NDEF(PKCS7 *a, unsigned char **out);
int PKCS7_print_ctx(BIO *out, PKCS7 *x, int indent, const ASN1_PCTX *pctx);

long PKCS7_ctrl(PKCS7 *p7, int cmd, long larg, char *parg);

int PKCS7_set_type(PKCS7 *p7, int type);
int PKCS7_set0_type_other(PKCS7 *p7, int type, ASN1_TYPE *other);
int PKCS7_set_content(PKCS7 *p7, PKCS7 *p7_data);
int PKCS7_SIGNER_INFO_set(PKCS7_SIGNER_INFO *p7i, X509 *x509, EVP_PKEY *pkey,
                          const EVP_MD *dgst);
int PKCS7_SIGNER_INFO_sign(PKCS7_SIGNER_INFO *si);
int PKCS7_add_signer(PKCS7 *p7, PKCS7_SIGNER_INFO *p7i);
int PKCS7_add_certificate(PKCS7 *p7, X509 *x509);
int PKCS7_add_crl(PKCS7 *p7, X509_CRL *x509);
int PKCS7_content_new(PKCS7 *p7, int nid);
int PKCS7_dataVerify(X509_STORE *cert_store, X509_STORE_CTX *ctx,
                     BIO *bio, PKCS7 *p7, PKCS7_SIGNER_INFO *si);
int PKCS7_signatureVerify(BIO *bio, PKCS7 *p7, PKCS7_SIGNER_INFO *si,
                          X509 *x509);

BIO *PKCS7_dataInit(PKCS7 *p7, BIO *bio);
int PKCS7_dataFinal(PKCS7 *p7, BIO *bio);
BIO *PKCS7_dataDecode(PKCS7 *p7, EVP_PKEY *pkey, BIO *in_bio, X509 *pcert);

PKCS7_SIGNER_INFO *PKCS7_add_signature(PKCS7 *p7, X509 *x509,
                                       EVP_PKEY *pkey, const EVP_MD *dgst);
X509 *PKCS7_cert_from_signer_info(PKCS7 *p7, PKCS7_SIGNER_INFO *si);
int PKCS7_set_digest(PKCS7 *p7, const EVP_MD *md);
struct stack_st_PKCS7_SIGNER_INFO *PKCS7_get_signer_info(PKCS7 *p7);

PKCS7_RECIP_INFO *PKCS7_add_recipient(PKCS7 *p7, X509 *x509);
void PKCS7_SIGNER_INFO_get0_algs(PKCS7_SIGNER_INFO *si, EVP_PKEY **pk,
                                 X509_ALGOR **pdig, X509_ALGOR **psig);
void PKCS7_RECIP_INFO_get0_alg(PKCS7_RECIP_INFO *ri, X509_ALGOR **penc);
int PKCS7_add_recipient_info(PKCS7 *p7, PKCS7_RECIP_INFO *ri);
int PKCS7_RECIP_INFO_set(PKCS7_RECIP_INFO *p7i, X509 *x509);
int PKCS7_set_cipher(PKCS7 *p7, const EVP_CIPHER *cipher);
int PKCS7_stream(unsigned char ***boundary, PKCS7 *p7);

PKCS7_ISSUER_AND_SERIAL *PKCS7_get_issuer_and_serial(PKCS7 *p7, int idx);
ASN1_OCTET_STRING *PKCS7_digest_from_attributes(struct stack_st_X509_ATTRIBUTE *sk);
int PKCS7_add_signed_attribute(PKCS7_SIGNER_INFO *p7si, int nid, int type,
                               void *data);
int PKCS7_add_attribute(PKCS7_SIGNER_INFO *p7si, int nid, int atrtype,
                        void *value);
ASN1_TYPE *PKCS7_get_attribute(PKCS7_SIGNER_INFO *si, int nid);
ASN1_TYPE *PKCS7_get_signed_attribute(PKCS7_SIGNER_INFO *si, int nid);
int PKCS7_set_signed_attributes(PKCS7_SIGNER_INFO *p7si,
                                struct stack_st_X509_ATTRIBUTE *sk);
int PKCS7_set_attributes(PKCS7_SIGNER_INFO *p7si,
                         struct stack_st_X509_ATTRIBUTE *sk);

PKCS7 *PKCS7_sign(X509 *signcert, EVP_PKEY *pkey, struct stack_st_X509 *certs,
                  BIO *data, int flags);

PKCS7_SIGNER_INFO *PKCS7_sign_add_signer(PKCS7 *p7,
                                         X509 *signcert, EVP_PKEY *pkey,
                                         const EVP_MD *md, int flags);

int PKCS7_final(PKCS7 *p7, BIO *data, int flags);
int PKCS7_verify(PKCS7 *p7, struct stack_st_X509 *certs, X509_STORE *store,
                 BIO *indata, BIO *out, int flags);
struct stack_st_X509 *PKCS7_get0_signers(PKCS7 *p7, struct stack_st_X509 *certs,
                                   int flags);
PKCS7 *PKCS7_encrypt(struct stack_st_X509 *certs, BIO *in, const EVP_CIPHER *cipher,
                     int flags);
int PKCS7_decrypt(PKCS7 *p7, EVP_PKEY *pkey, X509 *cert, BIO *data,
                  int flags);

int PKCS7_add_attrib_smimecap(PKCS7_SIGNER_INFO *si,
                              struct stack_st_X509_ALGOR *cap);
struct stack_st_X509_ALGOR *PKCS7_get_smimecap(PKCS7_SIGNER_INFO *si);
int PKCS7_simple_smimecap(struct stack_st_X509_ALGOR *sk, int nid, int arg);

int PKCS7_add_attrib_content_type(PKCS7_SIGNER_INFO *si, ASN1_OBJECT *coid);
int PKCS7_add0_attrib_signing_time(PKCS7_SIGNER_INFO *si, ASN1_TIME *t);
int PKCS7_add1_attrib_digest(PKCS7_SIGNER_INFO *si,
                             const unsigned char *md, int mdlen);

int SMIME_write_PKCS7(BIO *bio, PKCS7 *p7, BIO *data, int flags);
PKCS7 *SMIME_read_PKCS7(BIO *bio, BIO **bcont);

BIO *BIO_new_PKCS7(BIO *out, PKCS7 *p7);
# 322 "/usr/include/openssl/x509.h" 2 3 4
# 334 "/usr/include/openssl/x509.h" 3 4
void X509_CRL_set_default_method(const X509_CRL_METHOD *meth);
X509_CRL_METHOD *X509_CRL_METHOD_new(int (*crl_init) (X509_CRL *crl),
                                     int (*crl_free) (X509_CRL *crl),
                                     int (*crl_lookup) (X509_CRL *crl,
                                                        X509_REVOKED **ret,
                                                        ASN1_INTEGER *ser,
                                                        X509_NAME *issuer),
                                     int (*crl_verify) (X509_CRL *crl,
                                                        EVP_PKEY *pk));
void X509_CRL_METHOD_free(X509_CRL_METHOD *m);

void X509_CRL_set_meth_data(X509_CRL *crl, void *dat);
void *X509_CRL_get_meth_data(X509_CRL *crl);

const char *X509_verify_cert_error_string(long n);

int X509_verify(X509 *a, EVP_PKEY *r);

int X509_REQ_verify(X509_REQ *a, EVP_PKEY *r);
int X509_CRL_verify(X509_CRL *a, EVP_PKEY *r);
int NETSCAPE_SPKI_verify(NETSCAPE_SPKI *a, EVP_PKEY *r);

NETSCAPE_SPKI *NETSCAPE_SPKI_b64_decode(const char *str, int len);
char *NETSCAPE_SPKI_b64_encode(NETSCAPE_SPKI *x);
EVP_PKEY *NETSCAPE_SPKI_get_pubkey(NETSCAPE_SPKI *x);
int NETSCAPE_SPKI_set_pubkey(NETSCAPE_SPKI *x, EVP_PKEY *pkey);

int NETSCAPE_SPKI_print(BIO *out, NETSCAPE_SPKI *spki);

int X509_signature_dump(BIO *bp, const ASN1_STRING *sig, int indent);
int X509_signature_print(BIO *bp, const X509_ALGOR *alg,
                         const ASN1_STRING *sig);

int X509_sign(X509 *x, EVP_PKEY *pkey, const EVP_MD *md);
int X509_sign_ctx(X509 *x, EVP_MD_CTX *ctx);

int X509_http_nbio(OCSP_REQ_CTX *rctx, X509 **pcert);

int X509_REQ_sign(X509_REQ *x, EVP_PKEY *pkey, const EVP_MD *md);
int X509_REQ_sign_ctx(X509_REQ *x, EVP_MD_CTX *ctx);
int X509_CRL_sign(X509_CRL *x, EVP_PKEY *pkey, const EVP_MD *md);
int X509_CRL_sign_ctx(X509_CRL *x, EVP_MD_CTX *ctx);

int X509_CRL_http_nbio(OCSP_REQ_CTX *rctx, X509_CRL **pcrl);

int NETSCAPE_SPKI_sign(NETSCAPE_SPKI *x, EVP_PKEY *pkey, const EVP_MD *md);

int X509_pubkey_digest(const X509 *data, const EVP_MD *type,
                       unsigned char *md, unsigned int *len);
int X509_digest(const X509 *data, const EVP_MD *type,
                unsigned char *md, unsigned int *len);
int X509_CRL_digest(const X509_CRL *data, const EVP_MD *type,
                    unsigned char *md, unsigned int *len);
int X509_REQ_digest(const X509_REQ *data, const EVP_MD *type,
                    unsigned char *md, unsigned int *len);
int X509_NAME_digest(const X509_NAME *data, const EVP_MD *type,
                     unsigned char *md, unsigned int *len);


X509 *d2i_X509_fp(FILE *fp, X509 **x509);
int i2d_X509_fp(FILE *fp, X509 *x509);
X509_CRL *d2i_X509_CRL_fp(FILE *fp, X509_CRL **crl);
int i2d_X509_CRL_fp(FILE *fp, X509_CRL *crl);
X509_REQ *d2i_X509_REQ_fp(FILE *fp, X509_REQ **req);
int i2d_X509_REQ_fp(FILE *fp, X509_REQ *req);

RSA *d2i_RSAPrivateKey_fp(FILE *fp, RSA **rsa);
int i2d_RSAPrivateKey_fp(FILE *fp, RSA *rsa);
RSA *d2i_RSAPublicKey_fp(FILE *fp, RSA **rsa);
int i2d_RSAPublicKey_fp(FILE *fp, RSA *rsa);
RSA *d2i_RSA_PUBKEY_fp(FILE *fp, RSA **rsa);
int i2d_RSA_PUBKEY_fp(FILE *fp, RSA *rsa);


DSA *d2i_DSA_PUBKEY_fp(FILE *fp, DSA **dsa);
int i2d_DSA_PUBKEY_fp(FILE *fp, DSA *dsa);
DSA *d2i_DSAPrivateKey_fp(FILE *fp, DSA **dsa);
int i2d_DSAPrivateKey_fp(FILE *fp, DSA *dsa);


EC_KEY *d2i_EC_PUBKEY_fp(FILE *fp, EC_KEY **eckey);
int i2d_EC_PUBKEY_fp(FILE *fp, EC_KEY *eckey);
EC_KEY *d2i_ECPrivateKey_fp(FILE *fp, EC_KEY **eckey);
int i2d_ECPrivateKey_fp(FILE *fp, EC_KEY *eckey);

X509_SIG *d2i_PKCS8_fp(FILE *fp, X509_SIG **p8);
int i2d_PKCS8_fp(FILE *fp, X509_SIG *p8);
PKCS8_PRIV_KEY_INFO *d2i_PKCS8_PRIV_KEY_INFO_fp(FILE *fp,
                                                PKCS8_PRIV_KEY_INFO **p8inf);
int i2d_PKCS8_PRIV_KEY_INFO_fp(FILE *fp, PKCS8_PRIV_KEY_INFO *p8inf);
int i2d_PKCS8PrivateKeyInfo_fp(FILE *fp, EVP_PKEY *key);
int i2d_PrivateKey_fp(FILE *fp, EVP_PKEY *pkey);
EVP_PKEY *d2i_PrivateKey_fp(FILE *fp, EVP_PKEY **a);
int i2d_PUBKEY_fp(FILE *fp, EVP_PKEY *pkey);
EVP_PKEY *d2i_PUBKEY_fp(FILE *fp, EVP_PKEY **a);


X509 *d2i_X509_bio(BIO *bp, X509 **x509);
int i2d_X509_bio(BIO *bp, X509 *x509);
X509_CRL *d2i_X509_CRL_bio(BIO *bp, X509_CRL **crl);
int i2d_X509_CRL_bio(BIO *bp, X509_CRL *crl);
X509_REQ *d2i_X509_REQ_bio(BIO *bp, X509_REQ **req);
int i2d_X509_REQ_bio(BIO *bp, X509_REQ *req);

RSA *d2i_RSAPrivateKey_bio(BIO *bp, RSA **rsa);
int i2d_RSAPrivateKey_bio(BIO *bp, RSA *rsa);
RSA *d2i_RSAPublicKey_bio(BIO *bp, RSA **rsa);
int i2d_RSAPublicKey_bio(BIO *bp, RSA *rsa);
RSA *d2i_RSA_PUBKEY_bio(BIO *bp, RSA **rsa);
int i2d_RSA_PUBKEY_bio(BIO *bp, RSA *rsa);


DSA *d2i_DSA_PUBKEY_bio(BIO *bp, DSA **dsa);
int i2d_DSA_PUBKEY_bio(BIO *bp, DSA *dsa);
DSA *d2i_DSAPrivateKey_bio(BIO *bp, DSA **dsa);
int i2d_DSAPrivateKey_bio(BIO *bp, DSA *dsa);


EC_KEY *d2i_EC_PUBKEY_bio(BIO *bp, EC_KEY **eckey);
int i2d_EC_PUBKEY_bio(BIO *bp, EC_KEY *eckey);
EC_KEY *d2i_ECPrivateKey_bio(BIO *bp, EC_KEY **eckey);
int i2d_ECPrivateKey_bio(BIO *bp, EC_KEY *eckey);

X509_SIG *d2i_PKCS8_bio(BIO *bp, X509_SIG **p8);
int i2d_PKCS8_bio(BIO *bp, X509_SIG *p8);
PKCS8_PRIV_KEY_INFO *d2i_PKCS8_PRIV_KEY_INFO_bio(BIO *bp,
                                                 PKCS8_PRIV_KEY_INFO **p8inf);
int i2d_PKCS8_PRIV_KEY_INFO_bio(BIO *bp, PKCS8_PRIV_KEY_INFO *p8inf);
int i2d_PKCS8PrivateKeyInfo_bio(BIO *bp, EVP_PKEY *key);
int i2d_PrivateKey_bio(BIO *bp, EVP_PKEY *pkey);
EVP_PKEY *d2i_PrivateKey_bio(BIO *bp, EVP_PKEY **a);
int i2d_PUBKEY_bio(BIO *bp, EVP_PKEY *pkey);
EVP_PKEY *d2i_PUBKEY_bio(BIO *bp, EVP_PKEY **a);

X509 *X509_dup(X509 *x509);
X509_ATTRIBUTE *X509_ATTRIBUTE_dup(X509_ATTRIBUTE *xa);
X509_EXTENSION *X509_EXTENSION_dup(X509_EXTENSION *ex);
X509_CRL *X509_CRL_dup(X509_CRL *crl);
X509_REVOKED *X509_REVOKED_dup(X509_REVOKED *rev);
X509_REQ *X509_REQ_dup(X509_REQ *req);
X509_ALGOR *X509_ALGOR_dup(X509_ALGOR *xn);
int X509_ALGOR_set0(X509_ALGOR *alg, ASN1_OBJECT *aobj, int ptype,
                    void *pval);
void X509_ALGOR_get0(const ASN1_OBJECT **paobj, int *pptype,
                     const void **ppval, const X509_ALGOR *algor);
void X509_ALGOR_set_md(X509_ALGOR *alg, const EVP_MD *md);
int X509_ALGOR_cmp(const X509_ALGOR *a, const X509_ALGOR *b);

X509_NAME *X509_NAME_dup(X509_NAME *xn);
X509_NAME_ENTRY *X509_NAME_ENTRY_dup(X509_NAME_ENTRY *ne);

int X509_cmp_time(const ASN1_TIME *s, time_t *t);
int X509_cmp_current_time(const ASN1_TIME *s);
ASN1_TIME *X509_time_adj(ASN1_TIME *s, long adj, time_t *t);
ASN1_TIME *X509_time_adj_ex(ASN1_TIME *s,
                            int offset_day, long offset_sec, time_t *t);
ASN1_TIME *X509_gmtime_adj(ASN1_TIME *s, long adj);

const char *X509_get_default_cert_area(void);
const char *X509_get_default_cert_dir(void);
const char *X509_get_default_cert_file(void);
const char *X509_get_default_cert_dir_env(void);
const char *X509_get_default_cert_file_env(void);
const char *X509_get_default_private_dir(void);

X509_REQ *X509_to_X509_REQ(X509 *x, EVP_PKEY *pkey, const EVP_MD *md);
X509 *X509_REQ_to_X509(X509_REQ *r, int days, EVP_PKEY *pkey);

X509_ALGOR *X509_ALGOR_new(void); void X509_ALGOR_free(X509_ALGOR *a); X509_ALGOR *d2i_X509_ALGOR(X509_ALGOR **a, const unsigned char **in, long len); int i2d_X509_ALGOR(X509_ALGOR *a, unsigned char **out); extern const ASN1_ITEM X509_ALGOR_it;
X509_ALGORS *d2i_X509_ALGORS(X509_ALGORS **a, const unsigned char **in, long len); int i2d_X509_ALGORS(X509_ALGORS *a, unsigned char **out); extern const ASN1_ITEM X509_ALGORS_it;
X509_VAL *X509_VAL_new(void); void X509_VAL_free(X509_VAL *a); X509_VAL *d2i_X509_VAL(X509_VAL **a, const unsigned char **in, long len); int i2d_X509_VAL(X509_VAL *a, unsigned char **out); extern const ASN1_ITEM X509_VAL_it;

X509_PUBKEY *X509_PUBKEY_new(void); void X509_PUBKEY_free(X509_PUBKEY *a); X509_PUBKEY *d2i_X509_PUBKEY(X509_PUBKEY **a, const unsigned char **in, long len); int i2d_X509_PUBKEY(X509_PUBKEY *a, unsigned char **out); extern const ASN1_ITEM X509_PUBKEY_it;

int X509_PUBKEY_set(X509_PUBKEY **x, EVP_PKEY *pkey);
EVP_PKEY *X509_PUBKEY_get0(X509_PUBKEY *key);
EVP_PKEY *X509_PUBKEY_get(X509_PUBKEY *key);
int X509_get_pubkey_parameters(EVP_PKEY *pkey, struct stack_st_X509 *chain);
long X509_get_pathlen(X509 *x);
int i2d_PUBKEY(EVP_PKEY *a, unsigned char **pp);
EVP_PKEY *d2i_PUBKEY(EVP_PKEY **a, const unsigned char **pp, long length);

int i2d_RSA_PUBKEY(RSA *a, unsigned char **pp);
RSA *d2i_RSA_PUBKEY(RSA **a, const unsigned char **pp, long length);


int i2d_DSA_PUBKEY(DSA *a, unsigned char **pp);
DSA *d2i_DSA_PUBKEY(DSA **a, const unsigned char **pp, long length);


int i2d_EC_PUBKEY(EC_KEY *a, unsigned char **pp);
EC_KEY *d2i_EC_PUBKEY(EC_KEY **a, const unsigned char **pp, long length);


X509_SIG *X509_SIG_new(void); void X509_SIG_free(X509_SIG *a); X509_SIG *d2i_X509_SIG(X509_SIG **a, const unsigned char **in, long len); int i2d_X509_SIG(X509_SIG *a, unsigned char **out); extern const ASN1_ITEM X509_SIG_it;
void X509_SIG_get0(const X509_SIG *sig, const X509_ALGOR **palg,
                   const ASN1_OCTET_STRING **pdigest);
void X509_SIG_getm(X509_SIG *sig, X509_ALGOR **palg,
                   ASN1_OCTET_STRING **pdigest);

X509_REQ_INFO *X509_REQ_INFO_new(void); void X509_REQ_INFO_free(X509_REQ_INFO *a); X509_REQ_INFO *d2i_X509_REQ_INFO(X509_REQ_INFO **a, const unsigned char **in, long len); int i2d_X509_REQ_INFO(X509_REQ_INFO *a, unsigned char **out); extern const ASN1_ITEM X509_REQ_INFO_it;
X509_REQ *X509_REQ_new(void); void X509_REQ_free(X509_REQ *a); X509_REQ *d2i_X509_REQ(X509_REQ **a, const unsigned char **in, long len); int i2d_X509_REQ(X509_REQ *a, unsigned char **out); extern const ASN1_ITEM X509_REQ_it;

X509_ATTRIBUTE *X509_ATTRIBUTE_new(void); void X509_ATTRIBUTE_free(X509_ATTRIBUTE *a); X509_ATTRIBUTE *d2i_X509_ATTRIBUTE(X509_ATTRIBUTE **a, const unsigned char **in, long len); int i2d_X509_ATTRIBUTE(X509_ATTRIBUTE *a, unsigned char **out); extern const ASN1_ITEM X509_ATTRIBUTE_it;
X509_ATTRIBUTE *X509_ATTRIBUTE_create(int nid, int atrtype, void *value);

X509_EXTENSION *X509_EXTENSION_new(void); void X509_EXTENSION_free(X509_EXTENSION *a); X509_EXTENSION *d2i_X509_EXTENSION(X509_EXTENSION **a, const unsigned char **in, long len); int i2d_X509_EXTENSION(X509_EXTENSION *a, unsigned char **out); extern const ASN1_ITEM X509_EXTENSION_it;
X509_EXTENSIONS *d2i_X509_EXTENSIONS(X509_EXTENSIONS **a, const unsigned char **in, long len); int i2d_X509_EXTENSIONS(X509_EXTENSIONS *a, unsigned char **out); extern const ASN1_ITEM X509_EXTENSIONS_it;

X509_NAME_ENTRY *X509_NAME_ENTRY_new(void); void X509_NAME_ENTRY_free(X509_NAME_ENTRY *a); X509_NAME_ENTRY *d2i_X509_NAME_ENTRY(X509_NAME_ENTRY **a, const unsigned char **in, long len); int i2d_X509_NAME_ENTRY(X509_NAME_ENTRY *a, unsigned char **out); extern const ASN1_ITEM X509_NAME_ENTRY_it;

X509_NAME *X509_NAME_new(void); void X509_NAME_free(X509_NAME *a); X509_NAME *d2i_X509_NAME(X509_NAME **a, const unsigned char **in, long len); int i2d_X509_NAME(X509_NAME *a, unsigned char **out); extern const ASN1_ITEM X509_NAME_it;

int X509_NAME_set(X509_NAME **xn, X509_NAME *name);

X509_CINF *X509_CINF_new(void); void X509_CINF_free(X509_CINF *a); X509_CINF *d2i_X509_CINF(X509_CINF **a, const unsigned char **in, long len); int i2d_X509_CINF(X509_CINF *a, unsigned char **out); extern const ASN1_ITEM X509_CINF_it;

X509 *X509_new(void); void X509_free(X509 *a); X509 *d2i_X509(X509 **a, const unsigned char **in, long len); int i2d_X509(X509 *a, unsigned char **out); extern const ASN1_ITEM X509_it;
X509_CERT_AUX *X509_CERT_AUX_new(void); void X509_CERT_AUX_free(X509_CERT_AUX *a); X509_CERT_AUX *d2i_X509_CERT_AUX(X509_CERT_AUX **a, const unsigned char **in, long len); int i2d_X509_CERT_AUX(X509_CERT_AUX *a, unsigned char **out); extern const ASN1_ITEM X509_CERT_AUX_it;



int X509_set_ex_data(X509 *r, int idx, void *arg);
void *X509_get_ex_data(X509 *r, int idx);
int i2d_X509_AUX(X509 *a, unsigned char **pp);
X509 *d2i_X509_AUX(X509 **a, const unsigned char **pp, long length);

int i2d_re_X509_tbs(X509 *x, unsigned char **pp);

int X509_SIG_INFO_get(const X509_SIG_INFO *siginf, int *mdnid, int *pknid,
                      int *secbits, uint32_t *flags);
void X509_SIG_INFO_set(X509_SIG_INFO *siginf, int mdnid, int pknid,
                       int secbits, uint32_t flags);

int X509_get_signature_info(X509 *x, int *mdnid, int *pknid, int *secbits,
                            uint32_t *flags);

void X509_get0_signature(const ASN1_BIT_STRING **psig,
                         const X509_ALGOR **palg, const X509 *x);
int X509_get_signature_nid(const X509 *x);

int X509_trusted(const X509 *x);
int X509_alias_set1(X509 *x, const unsigned char *name, int len);
int X509_keyid_set1(X509 *x, const unsigned char *id, int len);
unsigned char *X509_alias_get0(X509 *x, int *len);
unsigned char *X509_keyid_get0(X509 *x, int *len);
int (*X509_TRUST_set_default(int (*trust) (int, X509 *, int))) (int, X509 *,
                                                                int);
int X509_TRUST_set(int *t, int trust);
int X509_add1_trust_object(X509 *x, const ASN1_OBJECT *obj);
int X509_add1_reject_object(X509 *x, const ASN1_OBJECT *obj);
void X509_trust_clear(X509 *x);
void X509_reject_clear(X509 *x);

struct stack_st_ASN1_OBJECT *X509_get0_trust_objects(X509 *x);
struct stack_st_ASN1_OBJECT *X509_get0_reject_objects(X509 *x);

X509_REVOKED *X509_REVOKED_new(void); void X509_REVOKED_free(X509_REVOKED *a); X509_REVOKED *d2i_X509_REVOKED(X509_REVOKED **a, const unsigned char **in, long len); int i2d_X509_REVOKED(X509_REVOKED *a, unsigned char **out); extern const ASN1_ITEM X509_REVOKED_it;
X509_CRL_INFO *X509_CRL_INFO_new(void); void X509_CRL_INFO_free(X509_CRL_INFO *a); X509_CRL_INFO *d2i_X509_CRL_INFO(X509_CRL_INFO **a, const unsigned char **in, long len); int i2d_X509_CRL_INFO(X509_CRL_INFO *a, unsigned char **out); extern const ASN1_ITEM X509_CRL_INFO_it;
X509_CRL *X509_CRL_new(void); void X509_CRL_free(X509_CRL *a); X509_CRL *d2i_X509_CRL(X509_CRL **a, const unsigned char **in, long len); int i2d_X509_CRL(X509_CRL *a, unsigned char **out); extern const ASN1_ITEM X509_CRL_it;

int X509_CRL_add0_revoked(X509_CRL *crl, X509_REVOKED *rev);
int X509_CRL_get0_by_serial(X509_CRL *crl,
                            X509_REVOKED **ret, ASN1_INTEGER *serial);
int X509_CRL_get0_by_cert(X509_CRL *crl, X509_REVOKED **ret, X509 *x);

X509_PKEY *X509_PKEY_new(void);
void X509_PKEY_free(X509_PKEY *a);

NETSCAPE_SPKI *NETSCAPE_SPKI_new(void); void NETSCAPE_SPKI_free(NETSCAPE_SPKI *a); NETSCAPE_SPKI *d2i_NETSCAPE_SPKI(NETSCAPE_SPKI **a, const unsigned char **in, long len); int i2d_NETSCAPE_SPKI(NETSCAPE_SPKI *a, unsigned char **out); extern const ASN1_ITEM NETSCAPE_SPKI_it;
NETSCAPE_SPKAC *NETSCAPE_SPKAC_new(void); void NETSCAPE_SPKAC_free(NETSCAPE_SPKAC *a); NETSCAPE_SPKAC *d2i_NETSCAPE_SPKAC(NETSCAPE_SPKAC **a, const unsigned char **in, long len); int i2d_NETSCAPE_SPKAC(NETSCAPE_SPKAC *a, unsigned char **out); extern const ASN1_ITEM NETSCAPE_SPKAC_it;
NETSCAPE_CERT_SEQUENCE *NETSCAPE_CERT_SEQUENCE_new(void); void NETSCAPE_CERT_SEQUENCE_free(NETSCAPE_CERT_SEQUENCE *a); NETSCAPE_CERT_SEQUENCE *d2i_NETSCAPE_CERT_SEQUENCE(NETSCAPE_CERT_SEQUENCE **a, const unsigned char **in, long len); int i2d_NETSCAPE_CERT_SEQUENCE(NETSCAPE_CERT_SEQUENCE *a, unsigned char **out); extern const ASN1_ITEM NETSCAPE_CERT_SEQUENCE_it;

X509_INFO *X509_INFO_new(void);
void X509_INFO_free(X509_INFO *a);
char *X509_NAME_oneline(const X509_NAME *a, char *buf, int size);

int ASN1_verify(i2d_of_void *i2d, X509_ALGOR *algor1,
                ASN1_BIT_STRING *signature, char *data, EVP_PKEY *pkey);

int ASN1_digest(i2d_of_void *i2d, const EVP_MD *type, char *data,
                unsigned char *md, unsigned int *len);

int ASN1_sign(i2d_of_void *i2d, X509_ALGOR *algor1,
              X509_ALGOR *algor2, ASN1_BIT_STRING *signature,
              char *data, EVP_PKEY *pkey, const EVP_MD *type);

int ASN1_item_digest(const ASN1_ITEM *it, const EVP_MD *type, void *data,
                     unsigned char *md, unsigned int *len);

int ASN1_item_verify(const ASN1_ITEM *it, X509_ALGOR *algor1,
                     ASN1_BIT_STRING *signature, void *data, EVP_PKEY *pkey);

int ASN1_item_sign(const ASN1_ITEM *it, X509_ALGOR *algor1,
                   X509_ALGOR *algor2, ASN1_BIT_STRING *signature, void *data,
                   EVP_PKEY *pkey, const EVP_MD *type);
int ASN1_item_sign_ctx(const ASN1_ITEM *it, X509_ALGOR *algor1,
                       X509_ALGOR *algor2, ASN1_BIT_STRING *signature,
                       void *asn, EVP_MD_CTX *ctx);

long X509_get_version(const X509 *x);
int X509_set_version(X509 *x, long version);
int X509_set_serialNumber(X509 *x, ASN1_INTEGER *serial);
ASN1_INTEGER *X509_get_serialNumber(X509 *x);
const ASN1_INTEGER *X509_get0_serialNumber(const X509 *x);
int X509_set_issuer_name(X509 *x, X509_NAME *name);
X509_NAME *X509_get_issuer_name(const X509 *a);
int X509_set_subject_name(X509 *x, X509_NAME *name);
X509_NAME *X509_get_subject_name(const X509 *a);
const ASN1_TIME * X509_get0_notBefore(const X509 *x);
ASN1_TIME *X509_getm_notBefore(const X509 *x);
int X509_set1_notBefore(X509 *x, const ASN1_TIME *tm);
const ASN1_TIME *X509_get0_notAfter(const X509 *x);
ASN1_TIME *X509_getm_notAfter(const X509 *x);
int X509_set1_notAfter(X509 *x, const ASN1_TIME *tm);
int X509_set_pubkey(X509 *x, EVP_PKEY *pkey);
int X509_up_ref(X509 *x);
int X509_get_signature_type(const X509 *x);
# 665 "/usr/include/openssl/x509.h" 3 4
X509_PUBKEY *X509_get_X509_PUBKEY(const X509 *x);
const struct stack_st_X509_EXTENSION *X509_get0_extensions(const X509 *x);
void X509_get0_uids(const X509 *x, const ASN1_BIT_STRING **piuid,
                    const ASN1_BIT_STRING **psuid);
const X509_ALGOR *X509_get0_tbs_sigalg(const X509 *x);

EVP_PKEY *X509_get0_pubkey(const X509 *x);
EVP_PKEY *X509_get_pubkey(X509 *x);
ASN1_BIT_STRING *X509_get0_pubkey_bitstr(const X509 *x);
int X509_certificate_type(const X509 *x, const EVP_PKEY *pubkey);

long X509_REQ_get_version(const X509_REQ *req);
int X509_REQ_set_version(X509_REQ *x, long version);
X509_NAME *X509_REQ_get_subject_name(const X509_REQ *req);
int X509_REQ_set_subject_name(X509_REQ *req, X509_NAME *name);
void X509_REQ_get0_signature(const X509_REQ *req, const ASN1_BIT_STRING **psig,
                             const X509_ALGOR **palg);
int X509_REQ_get_signature_nid(const X509_REQ *req);
int i2d_re_X509_REQ_tbs(X509_REQ *req, unsigned char **pp);
int X509_REQ_set_pubkey(X509_REQ *x, EVP_PKEY *pkey);
EVP_PKEY *X509_REQ_get_pubkey(X509_REQ *req);
EVP_PKEY *X509_REQ_get0_pubkey(X509_REQ *req);
X509_PUBKEY *X509_REQ_get_X509_PUBKEY(X509_REQ *req);
int X509_REQ_extension_nid(int nid);
int *X509_REQ_get_extension_nids(void);
void X509_REQ_set_extension_nids(int *nids);
struct stack_st_X509_EXTENSION *X509_REQ_get_extensions(X509_REQ *req);
int X509_REQ_add_extensions_nid(X509_REQ *req, struct stack_st_X509_EXTENSION *exts,
                                int nid);
int X509_REQ_add_extensions(X509_REQ *req, struct stack_st_X509_EXTENSION *exts);
int X509_REQ_get_attr_count(const X509_REQ *req);
int X509_REQ_get_attr_by_NID(const X509_REQ *req, int nid, int lastpos);
int X509_REQ_get_attr_by_OBJ(const X509_REQ *req, const ASN1_OBJECT *obj,
                             int lastpos);
X509_ATTRIBUTE *X509_REQ_get_attr(const X509_REQ *req, int loc);
X509_ATTRIBUTE *X509_REQ_delete_attr(X509_REQ *req, int loc);
int X509_REQ_add1_attr(X509_REQ *req, X509_ATTRIBUTE *attr);
int X509_REQ_add1_attr_by_OBJ(X509_REQ *req,
                              const ASN1_OBJECT *obj, int type,
                              const unsigned char *bytes, int len);
int X509_REQ_add1_attr_by_NID(X509_REQ *req,
                              int nid, int type,
                              const unsigned char *bytes, int len);
int X509_REQ_add1_attr_by_txt(X509_REQ *req,
                              const char *attrname, int type,
                              const unsigned char *bytes, int len);

int X509_CRL_set_version(X509_CRL *x, long version);
int X509_CRL_set_issuer_name(X509_CRL *x, X509_NAME *name);
int X509_CRL_set1_lastUpdate(X509_CRL *x, const ASN1_TIME *tm);
int X509_CRL_set1_nextUpdate(X509_CRL *x, const ASN1_TIME *tm);
int X509_CRL_sort(X509_CRL *crl);
int X509_CRL_up_ref(X509_CRL *crl);






long X509_CRL_get_version(const X509_CRL *crl);
const ASN1_TIME *X509_CRL_get0_lastUpdate(const X509_CRL *crl);
const ASN1_TIME *X509_CRL_get0_nextUpdate(const X509_CRL *crl);
ASN1_TIME *X509_CRL_get_lastUpdate(X509_CRL *crl) __attribute__ ((deprecated));
ASN1_TIME *X509_CRL_get_nextUpdate(X509_CRL *crl) __attribute__ ((deprecated));
X509_NAME *X509_CRL_get_issuer(const X509_CRL *crl);
const struct stack_st_X509_EXTENSION *X509_CRL_get0_extensions(const X509_CRL *crl);
struct stack_st_X509_REVOKED *X509_CRL_get_REVOKED(X509_CRL *crl);
void X509_CRL_get0_signature(const X509_CRL *crl, const ASN1_BIT_STRING **psig,
                             const X509_ALGOR **palg);
int X509_CRL_get_signature_nid(const X509_CRL *crl);
int i2d_re_X509_CRL_tbs(X509_CRL *req, unsigned char **pp);

const ASN1_INTEGER *X509_REVOKED_get0_serialNumber(const X509_REVOKED *x);
int X509_REVOKED_set_serialNumber(X509_REVOKED *x, ASN1_INTEGER *serial);
const ASN1_TIME *X509_REVOKED_get0_revocationDate(const X509_REVOKED *x);
int X509_REVOKED_set_revocationDate(X509_REVOKED *r, ASN1_TIME *tm);
const struct stack_st_X509_EXTENSION *
X509_REVOKED_get0_extensions(const X509_REVOKED *r);

X509_CRL *X509_CRL_diff(X509_CRL *base, X509_CRL *newer,
                        EVP_PKEY *skey, const EVP_MD *md, unsigned int flags);

int X509_REQ_check_private_key(X509_REQ *x509, EVP_PKEY *pkey);

int X509_check_private_key(const X509 *x509, const EVP_PKEY *pkey);
int X509_chain_check_suiteb(int *perror_depth,
                            X509 *x, struct stack_st_X509 *chain,
                            unsigned long flags);
int X509_CRL_check_suiteb(X509_CRL *crl, EVP_PKEY *pk, unsigned long flags);
struct stack_st_X509 *X509_chain_up_ref(struct stack_st_X509 *chain);

int X509_issuer_and_serial_cmp(const X509 *a, const X509 *b);
unsigned long X509_issuer_and_serial_hash(X509 *a);

int X509_issuer_name_cmp(const X509 *a, const X509 *b);
unsigned long X509_issuer_name_hash(X509 *a);

int X509_subject_name_cmp(const X509 *a, const X509 *b);
unsigned long X509_subject_name_hash(X509 *x);


unsigned long X509_issuer_name_hash_old(X509 *a);
unsigned long X509_subject_name_hash_old(X509 *x);


int X509_cmp(const X509 *a, const X509 *b);
int X509_NAME_cmp(const X509_NAME *a, const X509_NAME *b);
unsigned long X509_NAME_hash(X509_NAME *x);
unsigned long X509_NAME_hash_old(X509_NAME *x);

int X509_CRL_cmp(const X509_CRL *a, const X509_CRL *b);
int X509_CRL_match(const X509_CRL *a, const X509_CRL *b);
int X509_aux_print(BIO *out, X509 *x, int indent);

int X509_print_ex_fp(FILE *bp, X509 *x, unsigned long nmflag,
                     unsigned long cflag);
int X509_print_fp(FILE *bp, X509 *x);
int X509_CRL_print_fp(FILE *bp, X509_CRL *x);
int X509_REQ_print_fp(FILE *bp, X509_REQ *req);
int X509_NAME_print_ex_fp(FILE *fp, const X509_NAME *nm, int indent,
                          unsigned long flags);


int X509_NAME_print(BIO *bp, const X509_NAME *name, int obase);
int X509_NAME_print_ex(BIO *out, const X509_NAME *nm, int indent,
                       unsigned long flags);
int X509_print_ex(BIO *bp, X509 *x, unsigned long nmflag,
                  unsigned long cflag);
int X509_print(BIO *bp, X509 *x);
int X509_ocspid_print(BIO *bp, X509 *x);
int X509_CRL_print_ex(BIO *out, X509_CRL *x, unsigned long nmflag);
int X509_CRL_print(BIO *bp, X509_CRL *x);
int X509_REQ_print_ex(BIO *bp, X509_REQ *x, unsigned long nmflag,
                      unsigned long cflag);
int X509_REQ_print(BIO *bp, X509_REQ *req);

int X509_NAME_entry_count(const X509_NAME *name);
int X509_NAME_get_text_by_NID(X509_NAME *name, int nid, char *buf, int len);
int X509_NAME_get_text_by_OBJ(X509_NAME *name, const ASN1_OBJECT *obj,
                              char *buf, int len);





int X509_NAME_get_index_by_NID(X509_NAME *name, int nid, int lastpos);
int X509_NAME_get_index_by_OBJ(X509_NAME *name, const ASN1_OBJECT *obj,
                               int lastpos);
X509_NAME_ENTRY *X509_NAME_get_entry(const X509_NAME *name, int loc);
X509_NAME_ENTRY *X509_NAME_delete_entry(X509_NAME *name, int loc);
int X509_NAME_add_entry(X509_NAME *name, const X509_NAME_ENTRY *ne,
                        int loc, int set);
int X509_NAME_add_entry_by_OBJ(X509_NAME *name, const ASN1_OBJECT *obj, int type,
                               const unsigned char *bytes, int len, int loc,
                               int set);
int X509_NAME_add_entry_by_NID(X509_NAME *name, int nid, int type,
                               const unsigned char *bytes, int len, int loc,
                               int set);
X509_NAME_ENTRY *X509_NAME_ENTRY_create_by_txt(X509_NAME_ENTRY **ne,
                                               const char *field, int type,
                                               const unsigned char *bytes,
                                               int len);
X509_NAME_ENTRY *X509_NAME_ENTRY_create_by_NID(X509_NAME_ENTRY **ne, int nid,
                                               int type,
                                               const unsigned char *bytes,
                                               int len);
int X509_NAME_add_entry_by_txt(X509_NAME *name, const char *field, int type,
                               const unsigned char *bytes, int len, int loc,
                               int set);
X509_NAME_ENTRY *X509_NAME_ENTRY_create_by_OBJ(X509_NAME_ENTRY **ne,
                                               const ASN1_OBJECT *obj, int type,
                                               const unsigned char *bytes,
                                               int len);
int X509_NAME_ENTRY_set_object(X509_NAME_ENTRY *ne, const ASN1_OBJECT *obj);
int X509_NAME_ENTRY_set_data(X509_NAME_ENTRY *ne, int type,
                             const unsigned char *bytes, int len);
ASN1_OBJECT *X509_NAME_ENTRY_get_object(const X509_NAME_ENTRY *ne);
ASN1_STRING * X509_NAME_ENTRY_get_data(const X509_NAME_ENTRY *ne);
int X509_NAME_ENTRY_set(const X509_NAME_ENTRY *ne);

int X509_NAME_get0_der(X509_NAME *nm, const unsigned char **pder,
                       size_t *pderlen);

int X509v3_get_ext_count(const struct stack_st_X509_EXTENSION *x);
int X509v3_get_ext_by_NID(const struct stack_st_X509_EXTENSION *x,
                          int nid, int lastpos);
int X509v3_get_ext_by_OBJ(const struct stack_st_X509_EXTENSION *x,
                          const ASN1_OBJECT *obj, int lastpos);
int X509v3_get_ext_by_critical(const struct stack_st_X509_EXTENSION *x,
                               int crit, int lastpos);
X509_EXTENSION *X509v3_get_ext(const struct stack_st_X509_EXTENSION *x, int loc);
X509_EXTENSION *X509v3_delete_ext(struct stack_st_X509_EXTENSION *x, int loc);
struct stack_st_X509_EXTENSION *X509v3_add_ext(struct stack_st_X509_EXTENSION **x,
                                         X509_EXTENSION *ex, int loc);

int X509_get_ext_count(const X509 *x);
int X509_get_ext_by_NID(const X509 *x, int nid, int lastpos);
int X509_get_ext_by_OBJ(const X509 *x, const ASN1_OBJECT *obj, int lastpos);
int X509_get_ext_by_critical(const X509 *x, int crit, int lastpos);
X509_EXTENSION *X509_get_ext(const X509 *x, int loc);
X509_EXTENSION *X509_delete_ext(X509 *x, int loc);
int X509_add_ext(X509 *x, X509_EXTENSION *ex, int loc);
void *X509_get_ext_d2i(const X509 *x, int nid, int *crit, int *idx);
int X509_add1_ext_i2d(X509 *x, int nid, void *value, int crit,
                      unsigned long flags);

int X509_CRL_get_ext_count(const X509_CRL *x);
int X509_CRL_get_ext_by_NID(const X509_CRL *x, int nid, int lastpos);
int X509_CRL_get_ext_by_OBJ(const X509_CRL *x, const ASN1_OBJECT *obj,
                            int lastpos);
int X509_CRL_get_ext_by_critical(const X509_CRL *x, int crit, int lastpos);
X509_EXTENSION *X509_CRL_get_ext(const X509_CRL *x, int loc);
X509_EXTENSION *X509_CRL_delete_ext(X509_CRL *x, int loc);
int X509_CRL_add_ext(X509_CRL *x, X509_EXTENSION *ex, int loc);
void *X509_CRL_get_ext_d2i(const X509_CRL *x, int nid, int *crit, int *idx);
int X509_CRL_add1_ext_i2d(X509_CRL *x, int nid, void *value, int crit,
                          unsigned long flags);

int X509_REVOKED_get_ext_count(const X509_REVOKED *x);
int X509_REVOKED_get_ext_by_NID(const X509_REVOKED *x, int nid, int lastpos);
int X509_REVOKED_get_ext_by_OBJ(const X509_REVOKED *x, const ASN1_OBJECT *obj,
                                int lastpos);
int X509_REVOKED_get_ext_by_critical(const X509_REVOKED *x, int crit,
                                     int lastpos);
X509_EXTENSION *X509_REVOKED_get_ext(const X509_REVOKED *x, int loc);
X509_EXTENSION *X509_REVOKED_delete_ext(X509_REVOKED *x, int loc);
int X509_REVOKED_add_ext(X509_REVOKED *x, X509_EXTENSION *ex, int loc);
void *X509_REVOKED_get_ext_d2i(const X509_REVOKED *x, int nid, int *crit,
                               int *idx);
int X509_REVOKED_add1_ext_i2d(X509_REVOKED *x, int nid, void *value, int crit,
                              unsigned long flags);

X509_EXTENSION *X509_EXTENSION_create_by_NID(X509_EXTENSION **ex,
                                             int nid, int crit,
                                             ASN1_OCTET_STRING *data);
X509_EXTENSION *X509_EXTENSION_create_by_OBJ(X509_EXTENSION **ex,
                                             const ASN1_OBJECT *obj, int crit,
                                             ASN1_OCTET_STRING *data);
int X509_EXTENSION_set_object(X509_EXTENSION *ex, const ASN1_OBJECT *obj);
int X509_EXTENSION_set_critical(X509_EXTENSION *ex, int crit);
int X509_EXTENSION_set_data(X509_EXTENSION *ex, ASN1_OCTET_STRING *data);
ASN1_OBJECT *X509_EXTENSION_get_object(X509_EXTENSION *ex);
ASN1_OCTET_STRING *X509_EXTENSION_get_data(X509_EXTENSION *ne);
int X509_EXTENSION_get_critical(const X509_EXTENSION *ex);

int X509at_get_attr_count(const struct stack_st_X509_ATTRIBUTE *x);
int X509at_get_attr_by_NID(const struct stack_st_X509_ATTRIBUTE *x, int nid,
                           int lastpos);
int X509at_get_attr_by_OBJ(const struct stack_st_X509_ATTRIBUTE *sk,
                           const ASN1_OBJECT *obj, int lastpos);
X509_ATTRIBUTE *X509at_get_attr(const struct stack_st_X509_ATTRIBUTE *x, int loc);
X509_ATTRIBUTE *X509at_delete_attr(struct stack_st_X509_ATTRIBUTE *x, int loc);
struct stack_st_X509_ATTRIBUTE *X509at_add1_attr(struct stack_st_X509_ATTRIBUTE **x,
                                           X509_ATTRIBUTE *attr);
struct stack_st_X509_ATTRIBUTE *X509at_add1_attr_by_OBJ(struct stack_st_X509_ATTRIBUTE
                                                  **x, const ASN1_OBJECT *obj,
                                                  int type,
                                                  const unsigned char *bytes,
                                                  int len);
struct stack_st_X509_ATTRIBUTE *X509at_add1_attr_by_NID(struct stack_st_X509_ATTRIBUTE
                                                  **x, int nid, int type,
                                                  const unsigned char *bytes,
                                                  int len);
struct stack_st_X509_ATTRIBUTE *X509at_add1_attr_by_txt(struct stack_st_X509_ATTRIBUTE
                                                  **x, const char *attrname,
                                                  int type,
                                                  const unsigned char *bytes,
                                                  int len);
void *X509at_get0_data_by_OBJ(struct stack_st_X509_ATTRIBUTE *x,
                              const ASN1_OBJECT *obj, int lastpos, int type);
X509_ATTRIBUTE *X509_ATTRIBUTE_create_by_NID(X509_ATTRIBUTE **attr, int nid,
                                             int atrtype, const void *data,
                                             int len);
X509_ATTRIBUTE *X509_ATTRIBUTE_create_by_OBJ(X509_ATTRIBUTE **attr,
                                             const ASN1_OBJECT *obj,
                                             int atrtype, const void *data,
                                             int len);
X509_ATTRIBUTE *X509_ATTRIBUTE_create_by_txt(X509_ATTRIBUTE **attr,
                                             const char *atrname, int type,
                                             const unsigned char *bytes,
                                             int len);
int X509_ATTRIBUTE_set1_object(X509_ATTRIBUTE *attr, const ASN1_OBJECT *obj);
int X509_ATTRIBUTE_set1_data(X509_ATTRIBUTE *attr, int attrtype,
                             const void *data, int len);
void *X509_ATTRIBUTE_get0_data(X509_ATTRIBUTE *attr, int idx, int atrtype,
                               void *data);
int X509_ATTRIBUTE_count(const X509_ATTRIBUTE *attr);
ASN1_OBJECT *X509_ATTRIBUTE_get0_object(X509_ATTRIBUTE *attr);
ASN1_TYPE *X509_ATTRIBUTE_get0_type(X509_ATTRIBUTE *attr, int idx);

int EVP_PKEY_get_attr_count(const EVP_PKEY *key);
int EVP_PKEY_get_attr_by_NID(const EVP_PKEY *key, int nid, int lastpos);
int EVP_PKEY_get_attr_by_OBJ(const EVP_PKEY *key, const ASN1_OBJECT *obj,
                             int lastpos);
X509_ATTRIBUTE *EVP_PKEY_get_attr(const EVP_PKEY *key, int loc);
X509_ATTRIBUTE *EVP_PKEY_delete_attr(EVP_PKEY *key, int loc);
int EVP_PKEY_add1_attr(EVP_PKEY *key, X509_ATTRIBUTE *attr);
int EVP_PKEY_add1_attr_by_OBJ(EVP_PKEY *key,
                              const ASN1_OBJECT *obj, int type,
                              const unsigned char *bytes, int len);
int EVP_PKEY_add1_attr_by_NID(EVP_PKEY *key,
                              int nid, int type,
                              const unsigned char *bytes, int len);
int EVP_PKEY_add1_attr_by_txt(EVP_PKEY *key,
                              const char *attrname, int type,
                              const unsigned char *bytes, int len);

int X509_verify_cert(X509_STORE_CTX *ctx);


X509 *X509_find_by_issuer_and_serial(struct stack_st_X509 *sk, X509_NAME *name,
                                     ASN1_INTEGER *serial);
X509 *X509_find_by_subject(struct stack_st_X509 *sk, X509_NAME *name);

PBEPARAM *PBEPARAM_new(void); void PBEPARAM_free(PBEPARAM *a); PBEPARAM *d2i_PBEPARAM(PBEPARAM **a, const unsigned char **in, long len); int i2d_PBEPARAM(PBEPARAM *a, unsigned char **out); extern const ASN1_ITEM PBEPARAM_it;
PBE2PARAM *PBE2PARAM_new(void); void PBE2PARAM_free(PBE2PARAM *a); PBE2PARAM *d2i_PBE2PARAM(PBE2PARAM **a, const unsigned char **in, long len); int i2d_PBE2PARAM(PBE2PARAM *a, unsigned char **out); extern const ASN1_ITEM PBE2PARAM_it;
PBKDF2PARAM *PBKDF2PARAM_new(void); void PBKDF2PARAM_free(PBKDF2PARAM *a); PBKDF2PARAM *d2i_PBKDF2PARAM(PBKDF2PARAM **a, const unsigned char **in, long len); int i2d_PBKDF2PARAM(PBKDF2PARAM *a, unsigned char **out); extern const ASN1_ITEM PBKDF2PARAM_it;

SCRYPT_PARAMS *SCRYPT_PARAMS_new(void); void SCRYPT_PARAMS_free(SCRYPT_PARAMS *a); SCRYPT_PARAMS *d2i_SCRYPT_PARAMS(SCRYPT_PARAMS **a, const unsigned char **in, long len); int i2d_SCRYPT_PARAMS(SCRYPT_PARAMS *a, unsigned char **out); extern const ASN1_ITEM SCRYPT_PARAMS_it;


int PKCS5_pbe_set0_algor(X509_ALGOR *algor, int alg, int iter,
                         const unsigned char *salt, int saltlen);

X509_ALGOR *PKCS5_pbe_set(int alg, int iter,
                          const unsigned char *salt, int saltlen);
X509_ALGOR *PKCS5_pbe2_set(const EVP_CIPHER *cipher, int iter,
                           unsigned char *salt, int saltlen);
X509_ALGOR *PKCS5_pbe2_set_iv(const EVP_CIPHER *cipher, int iter,
                              unsigned char *salt, int saltlen,
                              unsigned char *aiv, int prf_nid);


X509_ALGOR *PKCS5_pbe2_set_scrypt(const EVP_CIPHER *cipher,
                                  const unsigned char *salt, int saltlen,
                                  unsigned char *aiv, uint64_t N, uint64_t r,
                                  uint64_t p);


X509_ALGOR *PKCS5_pbkdf2_set(int iter, unsigned char *salt, int saltlen,
                             int prf_nid, int keylen);



PKCS8_PRIV_KEY_INFO *PKCS8_PRIV_KEY_INFO_new(void); void PKCS8_PRIV_KEY_INFO_free(PKCS8_PRIV_KEY_INFO *a); PKCS8_PRIV_KEY_INFO *d2i_PKCS8_PRIV_KEY_INFO(PKCS8_PRIV_KEY_INFO **a, const unsigned char **in, long len); int i2d_PKCS8_PRIV_KEY_INFO(PKCS8_PRIV_KEY_INFO *a, unsigned char **out); extern const ASN1_ITEM PKCS8_PRIV_KEY_INFO_it;

EVP_PKEY *EVP_PKCS82PKEY(const PKCS8_PRIV_KEY_INFO *p8);
PKCS8_PRIV_KEY_INFO *EVP_PKEY2PKCS8(EVP_PKEY *pkey);

int PKCS8_pkey_set0(PKCS8_PRIV_KEY_INFO *priv, ASN1_OBJECT *aobj,
                    int version, int ptype, void *pval,
                    unsigned char *penc, int penclen);
int PKCS8_pkey_get0(const ASN1_OBJECT **ppkalg,
                    const unsigned char **pk, int *ppklen,
                    const X509_ALGOR **pa, const PKCS8_PRIV_KEY_INFO *p8);

const struct stack_st_X509_ATTRIBUTE *
PKCS8_pkey_get0_attrs(const PKCS8_PRIV_KEY_INFO *p8);
int PKCS8_pkey_add1_attr_by_NID(PKCS8_PRIV_KEY_INFO *p8, int nid, int type,
                                const unsigned char *bytes, int len);

int X509_PUBKEY_set0_param(X509_PUBKEY *pub, ASN1_OBJECT *aobj,
                           int ptype, void *pval,
                           unsigned char *penc, int penclen);
int X509_PUBKEY_get0_param(ASN1_OBJECT **ppkalg,
                           const unsigned char **pk, int *ppklen,
                           X509_ALGOR **pa, X509_PUBKEY *pub);

int X509_check_trust(X509 *x, int id, int flags);
int X509_TRUST_get_count(void);
X509_TRUST *X509_TRUST_get0(int idx);
int X509_TRUST_get_by_id(int id);
int X509_TRUST_add(int id, int flags, int (*ck) (X509_TRUST *, X509 *, int),
                   const char *name, int arg1, void *arg2);
void X509_TRUST_cleanup(void);
int X509_TRUST_get_flags(const X509_TRUST *xp);
char *X509_TRUST_get0_name(const X509_TRUST *xp);
int X509_TRUST_get_trust(const X509_TRUST *xp);
# 18 "/usr/include/openssl/pem.h" 2 3 4
# 1 "/usr/include/openssl/pemerr.h" 1 3 4
# 21 "/usr/include/openssl/pemerr.h" 3 4
int ERR_load_PEM_strings(void);
# 19 "/usr/include/openssl/pem.h" 2 3 4
# 231 "/usr/include/openssl/pem.h" 3 4
typedef int pem_password_cb (char *buf, int size, int rwflag, void *userdata);

int PEM_get_EVP_CIPHER_INFO(char *header, EVP_CIPHER_INFO *cipher);
int PEM_do_header(EVP_CIPHER_INFO *cipher, unsigned char *data, long *len,
                  pem_password_cb *callback, void *u);

int PEM_read_bio(BIO *bp, char **name, char **header,
                 unsigned char **data, long *len);



int PEM_read_bio_ex(BIO *bp, char **name, char **header,
                    unsigned char **data, long *len, unsigned int flags);
int PEM_bytes_read_bio_secmem(unsigned char **pdata, long *plen, char **pnm,
                              const char *name, BIO *bp, pem_password_cb *cb,
                              void *u);
int PEM_write_bio(BIO *bp, const char *name, const char *hdr,
                  const unsigned char *data, long len);
int PEM_bytes_read_bio(unsigned char **pdata, long *plen, char **pnm,
                       const char *name, BIO *bp, pem_password_cb *cb,
                       void *u);
void *PEM_ASN1_read_bio(d2i_of_void *d2i, const char *name, BIO *bp, void **x,
                        pem_password_cb *cb, void *u);
int PEM_ASN1_write_bio(i2d_of_void *i2d, const char *name, BIO *bp, void *x,
                       const EVP_CIPHER *enc, unsigned char *kstr, int klen,
                       pem_password_cb *cb, void *u);

struct stack_st_X509_INFO *PEM_X509_INFO_read_bio(BIO *bp, struct stack_st_X509_INFO *sk,
                                            pem_password_cb *cb, void *u);
int PEM_X509_INFO_write_bio(BIO *bp, X509_INFO *xi, EVP_CIPHER *enc,
                            unsigned char *kstr, int klen,
                            pem_password_cb *cd, void *u);


int PEM_read(FILE *fp, char **name, char **header,
             unsigned char **data, long *len);
int PEM_write(FILE *fp, const char *name, const char *hdr,
              const unsigned char *data, long len);
void *PEM_ASN1_read(d2i_of_void *d2i, const char *name, FILE *fp, void **x,
                    pem_password_cb *cb, void *u);
int PEM_ASN1_write(i2d_of_void *i2d, const char *name, FILE *fp,
                   void *x, const EVP_CIPHER *enc, unsigned char *kstr,
                   int klen, pem_password_cb *callback, void *u);
struct stack_st_X509_INFO *PEM_X509_INFO_read(FILE *fp, struct stack_st_X509_INFO *sk,
                                        pem_password_cb *cb, void *u);


int PEM_SignInit(EVP_MD_CTX *ctx, EVP_MD *type);
int PEM_SignUpdate(EVP_MD_CTX *ctx, unsigned char *d, unsigned int cnt);
int PEM_SignFinal(EVP_MD_CTX *ctx, unsigned char *sigret,
                  unsigned int *siglen, EVP_PKEY *pkey);


int PEM_def_callback(char *buf, int num, int rwflag, void *userdata);
void PEM_proc_type(char *buf, int type);
void PEM_dek_info(char *buf, const char *type, int len, char *str);



X509 *PEM_read_bio_X509(BIO *bp, X509 **x, pem_password_cb *cb, void *u); X509 *PEM_read_X509(FILE *fp, X509 **x, pem_password_cb *cb, void *u); int PEM_write_bio_X509(BIO *bp, X509 *x); int PEM_write_X509(FILE *fp, X509 *x);
X509 *PEM_read_bio_X509_AUX(BIO *bp, X509 **x, pem_password_cb *cb, void *u); X509 *PEM_read_X509_AUX(FILE *fp, X509 **x, pem_password_cb *cb, void *u); int PEM_write_bio_X509_AUX(BIO *bp, X509 *x); int PEM_write_X509_AUX(FILE *fp, X509 *x);
X509_REQ *PEM_read_bio_X509_REQ(BIO *bp, X509_REQ **x, pem_password_cb *cb, void *u); X509_REQ *PEM_read_X509_REQ(FILE *fp, X509_REQ **x, pem_password_cb *cb, void *u); int PEM_write_bio_X509_REQ(BIO *bp, X509_REQ *x); int PEM_write_X509_REQ(FILE *fp, X509_REQ *x);
int PEM_write_bio_X509_REQ_NEW(BIO *bp, X509_REQ *x); int PEM_write_X509_REQ_NEW(FILE *fp, X509_REQ *x);
X509_CRL *PEM_read_bio_X509_CRL(BIO *bp, X509_CRL **x, pem_password_cb *cb, void *u); X509_CRL *PEM_read_X509_CRL(FILE *fp, X509_CRL **x, pem_password_cb *cb, void *u); int PEM_write_bio_X509_CRL(BIO *bp, X509_CRL *x); int PEM_write_X509_CRL(FILE *fp, X509_CRL *x);
PKCS7 *PEM_read_bio_PKCS7(BIO *bp, PKCS7 **x, pem_password_cb *cb, void *u); PKCS7 *PEM_read_PKCS7(FILE *fp, PKCS7 **x, pem_password_cb *cb, void *u); int PEM_write_bio_PKCS7(BIO *bp, PKCS7 *x); int PEM_write_PKCS7(FILE *fp, PKCS7 *x);
NETSCAPE_CERT_SEQUENCE *PEM_read_bio_NETSCAPE_CERT_SEQUENCE(BIO *bp, NETSCAPE_CERT_SEQUENCE **x, pem_password_cb *cb, void *u); NETSCAPE_CERT_SEQUENCE *PEM_read_NETSCAPE_CERT_SEQUENCE(FILE *fp, NETSCAPE_CERT_SEQUENCE **x, pem_password_cb *cb, void *u); int PEM_write_bio_NETSCAPE_CERT_SEQUENCE(BIO *bp, NETSCAPE_CERT_SEQUENCE *x); int PEM_write_NETSCAPE_CERT_SEQUENCE(FILE *fp, NETSCAPE_CERT_SEQUENCE *x);
X509_SIG *PEM_read_bio_PKCS8(BIO *bp, X509_SIG **x, pem_password_cb *cb, void *u); X509_SIG *PEM_read_PKCS8(FILE *fp, X509_SIG **x, pem_password_cb *cb, void *u); int PEM_write_bio_PKCS8(BIO *bp, X509_SIG *x); int PEM_write_PKCS8(FILE *fp, X509_SIG *x);
PKCS8_PRIV_KEY_INFO *PEM_read_bio_PKCS8_PRIV_KEY_INFO(BIO *bp, PKCS8_PRIV_KEY_INFO **x, pem_password_cb *cb, void *u); PKCS8_PRIV_KEY_INFO *PEM_read_PKCS8_PRIV_KEY_INFO(FILE *fp, PKCS8_PRIV_KEY_INFO **x, pem_password_cb *cb, void *u); int PEM_write_bio_PKCS8_PRIV_KEY_INFO(BIO *bp, PKCS8_PRIV_KEY_INFO *x); int PEM_write_PKCS8_PRIV_KEY_INFO(FILE *fp, PKCS8_PRIV_KEY_INFO *x);

RSA *PEM_read_bio_RSAPrivateKey(BIO *bp, RSA **x, pem_password_cb *cb, void *u); RSA *PEM_read_RSAPrivateKey(FILE *fp, RSA **x, pem_password_cb *cb, void *u); int PEM_write_bio_RSAPrivateKey(BIO *bp, RSA *x, const EVP_CIPHER *enc, unsigned char *kstr, int klen, pem_password_cb *cb, void *u); int PEM_write_RSAPrivateKey(FILE *fp, RSA *x, const EVP_CIPHER *enc, unsigned char *kstr, int klen, pem_password_cb *cb, void *u);
RSA *PEM_read_bio_RSAPublicKey(BIO *bp, RSA **x, pem_password_cb *cb, void *u); RSA *PEM_read_RSAPublicKey(FILE *fp, RSA **x, pem_password_cb *cb, void *u); int PEM_write_bio_RSAPublicKey(BIO *bp, const RSA *x); int PEM_write_RSAPublicKey(FILE *fp, const RSA *x);
RSA *PEM_read_bio_RSA_PUBKEY(BIO *bp, RSA **x, pem_password_cb *cb, void *u); RSA *PEM_read_RSA_PUBKEY(FILE *fp, RSA **x, pem_password_cb *cb, void *u); int PEM_write_bio_RSA_PUBKEY(BIO *bp, RSA *x); int PEM_write_RSA_PUBKEY(FILE *fp, RSA *x);


DSA *PEM_read_bio_DSAPrivateKey(BIO *bp, DSA **x, pem_password_cb *cb, void *u); DSA *PEM_read_DSAPrivateKey(FILE *fp, DSA **x, pem_password_cb *cb, void *u); int PEM_write_bio_DSAPrivateKey(BIO *bp, DSA *x, const EVP_CIPHER *enc, unsigned char *kstr, int klen, pem_password_cb *cb, void *u); int PEM_write_DSAPrivateKey(FILE *fp, DSA *x, const EVP_CIPHER *enc, unsigned char *kstr, int klen, pem_password_cb *cb, void *u);
DSA *PEM_read_bio_DSA_PUBKEY(BIO *bp, DSA **x, pem_password_cb *cb, void *u); DSA *PEM_read_DSA_PUBKEY(FILE *fp, DSA **x, pem_password_cb *cb, void *u); int PEM_write_bio_DSA_PUBKEY(BIO *bp, DSA *x); int PEM_write_DSA_PUBKEY(FILE *fp, DSA *x);
DSA *PEM_read_bio_DSAparams(BIO *bp, DSA **x, pem_password_cb *cb, void *u); DSA *PEM_read_DSAparams(FILE *fp, DSA **x, pem_password_cb *cb, void *u); int PEM_write_bio_DSAparams(BIO *bp, const DSA *x); int PEM_write_DSAparams(FILE *fp, const DSA *x);


EC_GROUP *PEM_read_bio_ECPKParameters(BIO *bp, EC_GROUP **x, pem_password_cb *cb, void *u); EC_GROUP *PEM_read_ECPKParameters(FILE *fp, EC_GROUP **x, pem_password_cb *cb, void *u); int PEM_write_bio_ECPKParameters(BIO *bp, const EC_GROUP *x); int PEM_write_ECPKParameters(FILE *fp, const EC_GROUP *x);
EC_KEY *PEM_read_bio_ECPrivateKey(BIO *bp, EC_KEY **x, pem_password_cb *cb, void *u); EC_KEY *PEM_read_ECPrivateKey(FILE *fp, EC_KEY **x, pem_password_cb *cb, void *u); int PEM_write_bio_ECPrivateKey(BIO *bp, EC_KEY *x, const EVP_CIPHER *enc, unsigned char *kstr, int klen, pem_password_cb *cb, void *u); int PEM_write_ECPrivateKey(FILE *fp, EC_KEY *x, const EVP_CIPHER *enc, unsigned char *kstr, int klen, pem_password_cb *cb, void *u);
EC_KEY *PEM_read_bio_EC_PUBKEY(BIO *bp, EC_KEY **x, pem_password_cb *cb, void *u); EC_KEY *PEM_read_EC_PUBKEY(FILE *fp, EC_KEY **x, pem_password_cb *cb, void *u); int PEM_write_bio_EC_PUBKEY(BIO *bp, EC_KEY *x); int PEM_write_EC_PUBKEY(FILE *fp, EC_KEY *x);


DH *PEM_read_bio_DHparams(BIO *bp, DH **x, pem_password_cb *cb, void *u); DH *PEM_read_DHparams(FILE *fp, DH **x, pem_password_cb *cb, void *u); int PEM_write_bio_DHparams(BIO *bp, const DH *x); int PEM_write_DHparams(FILE *fp, const DH *x);
int PEM_write_bio_DHxparams(BIO *bp, const DH *x); int PEM_write_DHxparams(FILE *fp, const DH *x);

EVP_PKEY *PEM_read_bio_PrivateKey(BIO *bp, EVP_PKEY **x, pem_password_cb *cb, void *u); EVP_PKEY *PEM_read_PrivateKey(FILE *fp, EVP_PKEY **x, pem_password_cb *cb, void *u); int PEM_write_bio_PrivateKey(BIO *bp, EVP_PKEY *x, const EVP_CIPHER *enc, unsigned char *kstr, int klen, pem_password_cb *cb, void *u); int PEM_write_PrivateKey(FILE *fp, EVP_PKEY *x, const EVP_CIPHER *enc, unsigned char *kstr, int klen, pem_password_cb *cb, void *u);
EVP_PKEY *PEM_read_bio_PUBKEY(BIO *bp, EVP_PKEY **x, pem_password_cb *cb, void *u); EVP_PKEY *PEM_read_PUBKEY(FILE *fp, EVP_PKEY **x, pem_password_cb *cb, void *u); int PEM_write_bio_PUBKEY(BIO *bp, EVP_PKEY *x); int PEM_write_PUBKEY(FILE *fp, EVP_PKEY *x);

int PEM_write_bio_PrivateKey_traditional(BIO *bp, EVP_PKEY *x,
                                         const EVP_CIPHER *enc,
                                         unsigned char *kstr, int klen,
                                         pem_password_cb *cb, void *u);

int PEM_write_bio_PKCS8PrivateKey_nid(BIO *bp, EVP_PKEY *x, int nid,
                                      char *kstr, int klen,
                                      pem_password_cb *cb, void *u);
int PEM_write_bio_PKCS8PrivateKey(BIO *, EVP_PKEY *, const EVP_CIPHER *,
                                  char *, int, pem_password_cb *, void *);
int i2d_PKCS8PrivateKey_bio(BIO *bp, EVP_PKEY *x, const EVP_CIPHER *enc,
                            char *kstr, int klen,
                            pem_password_cb *cb, void *u);
int i2d_PKCS8PrivateKey_nid_bio(BIO *bp, EVP_PKEY *x, int nid,
                                char *kstr, int klen,
                                pem_password_cb *cb, void *u);
EVP_PKEY *d2i_PKCS8PrivateKey_bio(BIO *bp, EVP_PKEY **x, pem_password_cb *cb,
                                  void *u);


int i2d_PKCS8PrivateKey_fp(FILE *fp, EVP_PKEY *x, const EVP_CIPHER *enc,
                           char *kstr, int klen,
                           pem_password_cb *cb, void *u);
int i2d_PKCS8PrivateKey_nid_fp(FILE *fp, EVP_PKEY *x, int nid,
                               char *kstr, int klen,
                               pem_password_cb *cb, void *u);
int PEM_write_PKCS8PrivateKey_nid(FILE *fp, EVP_PKEY *x, int nid,
                                  char *kstr, int klen,
                                  pem_password_cb *cb, void *u);

EVP_PKEY *d2i_PKCS8PrivateKey_fp(FILE *fp, EVP_PKEY **x, pem_password_cb *cb,
                                 void *u);

int PEM_write_PKCS8PrivateKey(FILE *fp, EVP_PKEY *x, const EVP_CIPHER *enc,
                              char *kstr, int klen, pem_password_cb *cd,
                              void *u);

EVP_PKEY *PEM_read_bio_Parameters(BIO *bp, EVP_PKEY **x);
int PEM_write_bio_Parameters(BIO *bp, EVP_PKEY *x);


EVP_PKEY *b2i_PrivateKey(const unsigned char **in, long length);
EVP_PKEY *b2i_PublicKey(const unsigned char **in, long length);
EVP_PKEY *b2i_PrivateKey_bio(BIO *in);
EVP_PKEY *b2i_PublicKey_bio(BIO *in);
int i2b_PrivateKey_bio(BIO *out, EVP_PKEY *pk);
int i2b_PublicKey_bio(BIO *out, EVP_PKEY *pk);

EVP_PKEY *b2i_PVK_bio(BIO *in, pem_password_cb *cb, void *u);
int i2b_PVK_bio(BIO *out, EVP_PKEY *pk, int enclevel,
                pem_password_cb *cb, void *u);
# 9 "lib/object.h" 2


# 1 "/usr/include/openssl/asn1t.h" 1 3 4
# 13 "/usr/include/openssl/asn1t.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 14 "/usr/include/openssl/asn1t.h" 2 3 4
# 468 "/usr/include/openssl/asn1t.h" 3 4
struct ASN1_TEMPLATE_st {
    unsigned long flags;
    long tag;
    unsigned long offset;
    const char *field_name;
    ASN1_ITEM_EXP *item;
};






typedef struct ASN1_ADB_TABLE_st ASN1_ADB_TABLE;
typedef struct ASN1_ADB_st ASN1_ADB;

struct ASN1_ADB_st {
    unsigned long flags;
    unsigned long offset;
    int (*adb_cb)(long *psel);
    const ASN1_ADB_TABLE *tbl;
    long tblcount;
    const ASN1_TEMPLATE *default_tt;
    const ASN1_TEMPLATE *null_tt;
};

struct ASN1_ADB_TABLE_st {
    long value;
    const ASN1_TEMPLATE tt;
};
# 580 "/usr/include/openssl/asn1t.h" 3 4
struct ASN1_ITEM_st {
    char itype;

    long utype;
    const ASN1_TEMPLATE *templates;

    long tcount;
    const void *funcs;
    long size;
    const char *sname;
};
# 650 "/usr/include/openssl/asn1t.h" 3 4
struct ASN1_TLC_st {
    char valid;
    int ret;
    long plen;
    int ptag;
    int pclass;
    int hdrlen;
};


typedef int ASN1_ex_d2i(ASN1_VALUE **pval, const unsigned char **in, long len,
                        const ASN1_ITEM *it, int tag, int aclass, char opt,
                        ASN1_TLC *ctx);

typedef int ASN1_ex_i2d(ASN1_VALUE **pval, unsigned char **out,
                        const ASN1_ITEM *it, int tag, int aclass);
typedef int ASN1_ex_new_func(ASN1_VALUE **pval, const ASN1_ITEM *it);
typedef void ASN1_ex_free_func(ASN1_VALUE **pval, const ASN1_ITEM *it);

typedef int ASN1_ex_print_func(BIO *out, ASN1_VALUE **pval,
                               int indent, const char *fname,
                               const ASN1_PCTX *pctx);

typedef int ASN1_primitive_i2c(ASN1_VALUE **pval, unsigned char *cont,
                               int *putype, const ASN1_ITEM *it);
typedef int ASN1_primitive_c2i(ASN1_VALUE **pval, const unsigned char *cont,
                               int len, int utype, char *free_cont,
                               const ASN1_ITEM *it);
typedef int ASN1_primitive_print(BIO *out, ASN1_VALUE **pval,
                                 const ASN1_ITEM *it, int indent,
                                 const ASN1_PCTX *pctx);

typedef struct ASN1_EXTERN_FUNCS_st {
    void *app_data;
    ASN1_ex_new_func *asn1_ex_new;
    ASN1_ex_free_func *asn1_ex_free;
    ASN1_ex_free_func *asn1_ex_clear;
    ASN1_ex_d2i *asn1_ex_d2i;
    ASN1_ex_i2d *asn1_ex_i2d;
    ASN1_ex_print_func *asn1_ex_print;
} ASN1_EXTERN_FUNCS;

typedef struct ASN1_PRIMITIVE_FUNCS_st {
    void *app_data;
    unsigned long flags;
    ASN1_ex_new_func *prim_new;
    ASN1_ex_free_func *prim_free;
    ASN1_ex_free_func *prim_clear;
    ASN1_primitive_c2i *prim_c2i;
    ASN1_primitive_i2c *prim_i2c;
    ASN1_primitive_print *prim_print;
} ASN1_PRIMITIVE_FUNCS;
# 716 "/usr/include/openssl/asn1t.h" 3 4
typedef int ASN1_aux_cb(int operation, ASN1_VALUE **in, const ASN1_ITEM *it,
                        void *exarg);

typedef struct ASN1_AUX_st {
    void *app_data;
    int flags;
    int ref_offset;
    int ref_lock;
    ASN1_aux_cb *asn1_cb;
    int enc_offset;
} ASN1_AUX;


typedef struct ASN1_PRINT_ARG_st {
    BIO *out;
    int indent;
    const ASN1_PCTX *pctx;
} ASN1_PRINT_ARG;


typedef struct ASN1_STREAM_ARG_st {

    BIO *out;

    BIO *ndef_bio;

    unsigned char **boundary;
} ASN1_STREAM_ARG;
# 903 "/usr/include/openssl/asn1t.h" 3 4
extern const ASN1_ITEM ASN1_BOOLEAN_it;
extern const ASN1_ITEM ASN1_TBOOLEAN_it;
extern const ASN1_ITEM ASN1_FBOOLEAN_it;
extern const ASN1_ITEM ASN1_SEQUENCE_it;
extern const ASN1_ITEM CBIGNUM_it;
extern const ASN1_ITEM BIGNUM_it;
extern const ASN1_ITEM INT32_it;
extern const ASN1_ITEM ZINT32_it;
extern const ASN1_ITEM UINT32_it;
extern const ASN1_ITEM ZUINT32_it;
extern const ASN1_ITEM INT64_it;
extern const ASN1_ITEM ZINT64_it;
extern const ASN1_ITEM UINT64_it;
extern const ASN1_ITEM ZUINT64_it;







extern const ASN1_ITEM LONG_it;
extern const ASN1_ITEM ZLONG_it;


struct stack_st_ASN1_VALUE; typedef int (*sk_ASN1_VALUE_compfunc)(const ASN1_VALUE * const *a, const ASN1_VALUE *const *b); typedef void (*sk_ASN1_VALUE_freefunc)(ASN1_VALUE *a); typedef ASN1_VALUE * (*sk_ASN1_VALUE_copyfunc)(const ASN1_VALUE *a); static __attribute__((unused)) inline int sk_ASN1_VALUE_num(const struct stack_st_ASN1_VALUE *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline ASN1_VALUE *sk_ASN1_VALUE_value(const struct stack_st_ASN1_VALUE *sk, int idx) { return (ASN1_VALUE *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_ASN1_VALUE *sk_ASN1_VALUE_new(sk_ASN1_VALUE_compfunc compare) { return (struct stack_st_ASN1_VALUE *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_ASN1_VALUE *sk_ASN1_VALUE_new_null(void) { return (struct stack_st_ASN1_VALUE *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_ASN1_VALUE *sk_ASN1_VALUE_new_reserve(sk_ASN1_VALUE_compfunc compare, int n) { return (struct stack_st_ASN1_VALUE *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_ASN1_VALUE_reserve(struct stack_st_ASN1_VALUE *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_ASN1_VALUE_free(struct stack_st_ASN1_VALUE *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_ASN1_VALUE_zero(struct stack_st_ASN1_VALUE *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline ASN1_VALUE *sk_ASN1_VALUE_delete(struct stack_st_ASN1_VALUE *sk, int i) { return (ASN1_VALUE *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline ASN1_VALUE *sk_ASN1_VALUE_delete_ptr(struct stack_st_ASN1_VALUE *sk, ASN1_VALUE *ptr) { return (ASN1_VALUE *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_ASN1_VALUE_push(struct stack_st_ASN1_VALUE *sk, ASN1_VALUE *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_ASN1_VALUE_unshift(struct stack_st_ASN1_VALUE *sk, ASN1_VALUE *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline ASN1_VALUE *sk_ASN1_VALUE_pop(struct stack_st_ASN1_VALUE *sk) { return (ASN1_VALUE *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline ASN1_VALUE *sk_ASN1_VALUE_shift(struct stack_st_ASN1_VALUE *sk) { return (ASN1_VALUE *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_ASN1_VALUE_pop_free(struct stack_st_ASN1_VALUE *sk, sk_ASN1_VALUE_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_ASN1_VALUE_insert(struct stack_st_ASN1_VALUE *sk, ASN1_VALUE *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline ASN1_VALUE *sk_ASN1_VALUE_set(struct stack_st_ASN1_VALUE *sk, int idx, ASN1_VALUE *ptr) { return (ASN1_VALUE *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_ASN1_VALUE_find(struct stack_st_ASN1_VALUE *sk, ASN1_VALUE *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_ASN1_VALUE_find_ex(struct stack_st_ASN1_VALUE *sk, ASN1_VALUE *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline void sk_ASN1_VALUE_sort(struct stack_st_ASN1_VALUE *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_ASN1_VALUE_is_sorted(const struct stack_st_ASN1_VALUE *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_ASN1_VALUE * sk_ASN1_VALUE_dup(const struct stack_st_ASN1_VALUE *sk) { return (struct stack_st_ASN1_VALUE *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_ASN1_VALUE *sk_ASN1_VALUE_deep_copy(const struct stack_st_ASN1_VALUE *sk, sk_ASN1_VALUE_copyfunc copyfunc, sk_ASN1_VALUE_freefunc freefunc) { return (struct stack_st_ASN1_VALUE *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_ASN1_VALUE_compfunc sk_ASN1_VALUE_set_cmp_func(struct stack_st_ASN1_VALUE *sk, sk_ASN1_VALUE_compfunc compare) { return (sk_ASN1_VALUE_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }



int ASN1_item_ex_new(ASN1_VALUE **pval, const ASN1_ITEM *it);
void ASN1_item_ex_free(ASN1_VALUE **pval, const ASN1_ITEM *it);

int ASN1_item_ex_d2i(ASN1_VALUE **pval, const unsigned char **in, long len,
                     const ASN1_ITEM *it, int tag, int aclass, char opt,
                     ASN1_TLC *ctx);

int ASN1_item_ex_i2d(ASN1_VALUE **pval, unsigned char **out,
                     const ASN1_ITEM *it, int tag, int aclass);
# 12 "lib/object.h" 2



# 14 "lib/object.h"
typedef struct tpm2_loaded_object tpm2_loaded_object;
struct tpm2_loaded_object {
    TPM2_HANDLE handle;
    ESYS_TR tr_handle;
    const char *path;
    tpm2_session *session;
};

typedef struct {
    ASN1_OBJECT *type;
    ASN1_BOOLEAN emptyAuth;
    ASN1_INTEGER *parent;
    ASN1_OCTET_STRING *pubkey;
    ASN1_OCTET_STRING *privkey;
} TSSPRIVKEY_OBJ;




TSSPRIVKEY_OBJ 
# 33 "lib/object.h" 3 4
*
# 33 "lib/object.h"
TSSPRIVKEY_OBJ_new
# 33 "lib/object.h" 3 4
(void); void 
# 33 "lib/object.h"
TSSPRIVKEY_OBJ_free
# 33 "lib/object.h" 3 4
(
# 33 "lib/object.h"
TSSPRIVKEY_OBJ 
# 33 "lib/object.h" 3 4
*a); 
# 33 "lib/object.h"
TSSPRIVKEY_OBJ 
# 33 "lib/object.h" 3 4
*d2i_TSSPRIVKEY_OBJ(
# 33 "lib/object.h"
TSSPRIVKEY_OBJ 
# 33 "lib/object.h" 3 4
**a, const unsigned char **in, long len); int i2d_TSSPRIVKEY_OBJ(
# 33 "lib/object.h"
TSSPRIVKEY_OBJ 
# 33 "lib/object.h" 3 4
*a, unsigned char **out); extern const ASN1_ITEM 
# 33 "lib/object.h"
TSSPRIVKEY_OBJ_it
# 33 "lib/object.h" 3 4
;
# 33 "lib/object.h"
                                     ;

# 34 "lib/object.h" 3 4
int PEM_write_bio_TSSPRIVKEY_OBJ(BIO *bp, 
# 34 "lib/object.h"
TSSPRIVKEY_OBJ 
# 34 "lib/object.h" 3 4
*x);
# 34 "lib/object.h"
                                                    ;
TSSPRIVKEY_OBJ 
# 35 "lib/object.h" 3 4
*PEM_read_bio_TSSPRIVKEY_OBJ(BIO *bp, 
# 35 "lib/object.h"
TSSPRIVKEY_OBJ 
# 35 "lib/object.h" 3 4
**x, pem_password_cb *cb, void *u);
# 35 "lib/object.h"
                                                   ;




extern TPM2B_PRIVATE tpm2_util_object_tsspem_priv;
extern TPM2B_PUBLIC tpm2_util_object_tsspem_pub;
# 63 "lib/object.h"
tool_rc tpm2_util_object_load(ESYS_CONTEXT *ctx, const char *objectstr,
        tpm2_loaded_object *outobject, tpm2_handle_flags flags);
# 87 "lib/object.h"
tool_rc tpm2_util_object_load_auth(ESYS_CONTEXT *ctx, const char *objectstr,
        const char *auth, tpm2_loaded_object *outobject,
        
# 89 "lib/object.h" 3 4
       _Bool 
# 89 "lib/object.h"
            is_restricted_pswd_session, tpm2_handle_flags flags);
# 104 "lib/object.h"
tool_rc tpm2_util_object_fetch_priv_pub_from_tpk(const char *objectstr,
        TPM2B_PUBLIC *pub, TPM2B_PRIVATE *priv);
# 117 "lib/object.h"
tool_rc tpm2_util_object_fetch_parent_from_tpk(const char *objectstr,
        uint64_t *val);
# 9 "lib/tpm2.h" 2


tool_rc tpm2_from_tpm_public(ESYS_CONTEXT *esys_context, TPM2_HANDLE tpm_handle,
        ESYS_TR optional_session1, ESYS_TR optional_session2,
        ESYS_TR optional_session3, ESYS_TR *object);

tool_rc tpm2_close(ESYS_CONTEXT *esys_context, ESYS_TR *rsrc_handle);

tool_rc tpm2_tr_deserialize(ESYS_CONTEXT *esys_context, uint8_t const *buffer,
        size_t buffer_size, ESYS_TR *esys_handle);

tool_rc tpm2_tr_serialize(ESYS_CONTEXT *esys_context, ESYS_TR object,
        uint8_t **buffer, size_t *buffer_size);

tool_rc tpm2_nv_readpublic(ESYS_CONTEXT *esys_context, TPMI_RH_NV_INDEX nv_index,
    TPM2B_NAME *precalc_nvname, TPM2B_NV_PUBLIC **nv_public,
    TPM2B_NAME **nv_name, TPM2B_DIGEST *cp_hash, TPM2B_DIGEST *rp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm, ESYS_TR shandle1, ESYS_TR shandle2,
    ESYS_TR shandle3);

tool_rc tpm2_readpublic(ESYS_CONTEXT *esys_context, ESYS_TR object_handle,
        TPM2B_PUBLIC **out_public, TPM2B_NAME **name,
        TPM2B_NAME **qualified_name);

tool_rc tpm2_getcap(ESYS_CONTEXT *esys_context,TPM2_CAP capability,
        UINT32 property, UINT32 property_count, TPMI_YES_NO *more_data,
        TPMS_CAPABILITY_DATA **capability_data);

tool_rc tpm2_nv_read(ESYS_CONTEXT *esys_context,
    tpm2_loaded_object *auth_hierarchy_obj, TPM2_HANDLE nv_index,
    TPM2B_NAME *precalc_nvname, UINT16 size, UINT16 offset,
    TPM2B_MAX_NV_BUFFER **data, TPM2B_DIGEST *cp_hash, TPM2B_DIGEST *rp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm, ESYS_TR shandle2, ESYS_TR shandle3);

tool_rc tpm2_context_save(ESYS_CONTEXT *esys_context, ESYS_TR save_handle,
        
# 44 "lib/tpm2.h" 3 4
       _Bool 
# 44 "lib/tpm2.h"
            autoflush, TPMS_CONTEXT **context);

tool_rc tpm2_context_load(ESYS_CONTEXT *esys_context,
        const TPMS_CONTEXT *context, ESYS_TR *loaded_handle);

tool_rc tpm2_flush_context(ESYS_CONTEXT *esys_context, ESYS_TR flush_handle,
    TPM2B_DIGEST *cp_hash, TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_start_auth_session(ESYS_CONTEXT *esys_context, ESYS_TR tpm_key,
        ESYS_TR bind, const TPM2B_NONCE *nonce_caller, TPM2_SE session_type,
        const TPMT_SYM_DEF *symmetric, TPMI_ALG_HASH auth_hash,
        ESYS_TR *session_handle);

tool_rc tpm2_sess_set_attributes(ESYS_CONTEXT *esys_context, ESYS_TR session,
        TPMA_SESSION flags, TPMA_SESSION mask);

tool_rc tpm2_sess_get_attributes(ESYS_CONTEXT *esys_context, ESYS_TR session,
        TPMA_SESSION *flags);

tool_rc tpm2_sess_get_noncetpm(ESYS_CONTEXT *esys_context,
    ESYS_TR session_handle, TPM2B_NONCE **nonce_tpm);

tool_rc tpm2_policy_restart(ESYS_CONTEXT *esys_context, ESYS_TR session_handle,
                            ESYS_TR shandle1, ESYS_TR shandle2,
                            ESYS_TR shandle3, TPM2B_DIGEST *cp_hash,
                            TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_check_cc(ESYS_CONTEXT *ectx, uint32_t cc, 
# 71 "lib/tpm2.h" 3 4
                                                      _Bool 
# 71 "lib/tpm2.h"
                                                           *exists);

tool_rc tpm2_get_capability(ESYS_CONTEXT *esys_context, ESYS_TR shandle1,
        ESYS_TR shandle2, ESYS_TR shandle3, TPM2_CAP capability,
        UINT32 property, UINT32 property_count, TPMI_YES_NO *more_data,
        TPMS_CAPABILITY_DATA **capability_data);

tool_rc tpm2_create_primary(ESYS_CONTEXT *esys_context,
    tpm2_loaded_object *auth_hierarchy_obj,
    const TPM2B_SENSITIVE_CREATE *in_sensitive, const TPM2B_PUBLIC *in_public,
    const TPM2B_DATA *outside_info, const TPML_PCR_SELECTION *creation_pcr,
    ESYS_TR *object_handle, TPM2B_PUBLIC **out_public,
    TPM2B_CREATION_DATA **creation_data, TPM2B_DIGEST **creation_hash,
    TPMT_TK_CREATION **creation_ticket, TPM2B_DIGEST *cp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_pcr_read(ESYS_CONTEXT *esys_context, ESYS_TR shandle1,
        ESYS_TR shandle2, ESYS_TR shandle3,
        const TPML_PCR_SELECTION *pcr_selection_in, UINT32 *pcr_update_counter,
        TPML_PCR_SELECTION **pcr_selection_out, TPML_DIGEST **pcr_values,
        TPM2B_DIGEST *cp_hash, TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_policy_authorize(ESYS_CONTEXT *esys_context, ESYS_TR policy_session,
        ESYS_TR shandle1, ESYS_TR shandle2, ESYS_TR shandle3,
        const TPM2B_DIGEST *approved_policy, const TPM2B_NONCE *policy_ref,
        const TPM2B_NAME *key_sign, const TPMT_TK_VERIFIED *check_ticket,
        TPM2B_DIGEST *cp_hash, TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_policy_or(ESYS_CONTEXT *esys_context, ESYS_TR policy_session,
        ESYS_TR shandle1, ESYS_TR shandle2, ESYS_TR shandle3,
        const TPML_DIGEST *p_hash_list);

tool_rc tpm2_policy_namehash(ESYS_CONTEXT *esys_context, ESYS_TR policy_session,
    const TPM2B_DIGEST *name_hash);

tool_rc tpm2_policy_template(ESYS_CONTEXT *esys_context, ESYS_TR policy_session,
    const TPM2B_DIGEST *template_hash);

tool_rc tpm2_policy_cphash(ESYS_CONTEXT *esys_context, ESYS_TR policy_session,
    const TPM2B_DIGEST *cphash);

tool_rc tpm2_policy_pcr(ESYS_CONTEXT *esys_context, ESYS_TR policy_session,
        ESYS_TR shandle1, ESYS_TR shandle2, ESYS_TR shandle3,
        const TPM2B_DIGEST *pcr_digest, const TPML_PCR_SELECTION *pcrs);

tool_rc tpm2_policy_password(ESYS_CONTEXT *esys_context, ESYS_TR policy_session,
        ESYS_TR shandle1, ESYS_TR shandle2, ESYS_TR shandle3,
        TPM2B_DIGEST *cp_hash, TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_policy_signed(ESYS_CONTEXT *esys_context,
        tpm2_loaded_object *auth_entity_obj, ESYS_TR policy_session,
        const TPMT_SIGNATURE *signature, INT32 expiration,
        TPM2B_TIMEOUT **timeout, TPMT_TK_AUTH **policy_ticket,
        TPM2B_NONCE *policy_qualifier, TPM2B_NONCE *nonce_tpm,
        TPM2B_DIGEST *cphash);

tool_rc tpm2_policy_ticket(ESYS_CONTEXT *esys_context, ESYS_TR policy_session,
    const TPM2B_TIMEOUT *timeout, const TPM2B_NONCE *policyref,
    const TPM2B_NAME *authname, const TPMT_TK_AUTH *ticket);

tool_rc tpm2_policy_authvalue(ESYS_CONTEXT *esys_context, ESYS_TR policy_session,
        ESYS_TR shandle1, ESYS_TR shandle2, ESYS_TR shandle3,
        TPM2B_DIGEST *cp_hash, TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_policy_secret(ESYS_CONTEXT *esys_context,
    tpm2_loaded_object *auth_entity_obj, ESYS_TR policy_session,
    INT32 expiration, TPMT_TK_AUTH **policy_ticket, TPM2B_TIMEOUT **timeout,
    TPM2B_NONCE *nonce_tpm, TPM2B_NONCE *policy_qualifier,
    TPM2B_DIGEST *cp_hash, TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_policy_getdigest(ESYS_CONTEXT *esys_context, ESYS_TR policy_session,
    ESYS_TR shandle1, ESYS_TR shandle2, ESYS_TR shandle3,
    TPM2B_DIGEST **policy_digest, TPM2B_DIGEST *cp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_policy_command_code(ESYS_CONTEXT *esys_context,
        ESYS_TR policy_session, ESYS_TR shandle1, ESYS_TR shandle2,
        ESYS_TR shandle3, TPM2_CC code, TPM2B_DIGEST *cp_hash,
        TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_policy_locality(ESYS_CONTEXT *esys_context, ESYS_TR policy_session,
        ESYS_TR shandle1, ESYS_TR shandle2, ESYS_TR shandle3,
        TPMA_LOCALITY locality, TPM2B_DIGEST *cp_hash,
        TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_policy_duplication_select(ESYS_CONTEXT *esys_context,
        ESYS_TR policy_session, ESYS_TR shandle1, ESYS_TR shandle2,
        ESYS_TR shandle3, const TPM2B_NAME *object_name,
        const TPM2B_NAME *new_parent_name, TPMI_YES_NO include_object);

tool_rc tpm2_tr_get_name(ESYS_CONTEXT *esys_context, ESYS_TR handle,
        TPM2B_NAME **name);

tool_rc tpm2_mu_tpm2_handle_unmarshal(uint8_t const buffer[], size_t size,
        size_t *offset, TPM2_HANDLE *out);

tool_rc tpm2_mu_tpmt_public_marshal(TPMT_PUBLIC const *src, uint8_t buffer[],
        size_t buffer_size, size_t *offset);

tool_rc tpm2_evictcontrol(ESYS_CONTEXT *esys_context,
    tpm2_loaded_object *auth_hierarchy_obj,
    tpm2_loaded_object *to_persist_key_obj,
    TPMI_DH_PERSISTENT persistent_handle, ESYS_TR *new_object_handle,
    TPM2B_DIGEST *cp_hash, TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_hash(ESYS_CONTEXT *esys_context, ESYS_TR shandle1, ESYS_TR shandle2,
        ESYS_TR shandle3, const TPM2B_MAX_BUFFER *data, TPMI_ALG_HASH hash_alg,
        TPMI_RH_HIERARCHY hierarchy, TPM2B_DIGEST **out_hash,
        TPMT_TK_HASHCHECK **validation);

tool_rc tpm2_hash_sequence_start(ESYS_CONTEXT *esys_context, const TPM2B_AUTH *auth,
        TPMI_ALG_HASH hash_alg, ESYS_TR *sequence_handle);

tool_rc tpm2_sequence_update(ESYS_CONTEXT *esys_context, ESYS_TR sequence_handle,
        const TPM2B_MAX_BUFFER *buffer);

tool_rc tpm2_sequence_complete(ESYS_CONTEXT *esys_context,
        ESYS_TR sequence_handle, const TPM2B_MAX_BUFFER *buffer,
        TPMI_RH_HIERARCHY hierarchy, TPM2B_DIGEST **result,
        TPMT_TK_HASHCHECK **validation);

tool_rc tpm2_event_sequence_complete(ESYS_CONTEXT *ectx, ESYS_TR pcr,
        ESYS_TR sequence_handle, tpm2_session *session,
        const TPM2B_MAX_BUFFER *buffer, TPML_DIGEST_VALUES **results);

tool_rc tpm2_tr_set_auth(ESYS_CONTEXT *esys_context, ESYS_TR handle,
        TPM2B_AUTH const *auth_value);

tool_rc tpm2_activatecredential(ESYS_CONTEXT *esys_context,
        tpm2_loaded_object *activatehandle, tpm2_loaded_object *keyhandle,
        const TPM2B_ID_OBJECT *credential_blob,
        const TPM2B_ENCRYPTED_SECRET *secret, TPM2B_DIGEST **cert_info,
        TPM2B_DIGEST *cp_hash, TPM2B_DIGEST *rp_hash,
        TPMI_ALG_HASH parameter_hash_algorithm, ESYS_TR shandle3);

tool_rc tpm2_create(ESYS_CONTEXT *esys_context, tpm2_loaded_object *parent_obj,
        const TPM2B_SENSITIVE_CREATE *in_sensitive, const TPM2B_PUBLIC *in_public,
        const TPM2B_DATA *outside_info, const TPML_PCR_SELECTION *creation_pcr,
        TPM2B_PRIVATE **out_private, TPM2B_PUBLIC **out_public,
        TPM2B_CREATION_DATA **creation_data, TPM2B_DIGEST **creation_hash,
        TPMT_TK_CREATION **creation_ticket, TPM2B_DIGEST *cp_hash,
        TPM2B_DIGEST *rp_hash, TPMI_ALG_HASH parameter_hash_algorithm,
        ESYS_TR shandle2, ESYS_TR shandle3);

tool_rc tpm2_create_loaded(ESYS_CONTEXT *esys_context,
        tpm2_loaded_object *parent_obj,
        const TPM2B_SENSITIVE_CREATE *in_sensitive,
        const TPM2B_PUBLIC *in_public, ESYS_TR *object_handle,
        TPM2B_PRIVATE **out_private, TPM2B_PUBLIC **out_public,
        TPM2B_DIGEST *cp_hash, TPM2B_DIGEST *rp_hash,
        TPMI_ALG_HASH parameter_hash_algorithm, ESYS_TR shandle2,
        ESYS_TR shandle3);

tool_rc tpm2_object_change_auth(ESYS_CONTEXT *esys_context,
    tpm2_loaded_object *parent_object, tpm2_loaded_object *object,
    const TPM2B_AUTH *new_auth, TPM2B_PRIVATE **out_private,
    TPM2B_DIGEST *cp_hash, TPM2B_DIGEST *rp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm, ESYS_TR shandle2,
    ESYS_TR shandle3);

tool_rc tpm2_nv_change_auth(ESYS_CONTEXT *esys_context, tpm2_loaded_object *nv,
    const TPM2B_AUTH *new_auth, TPM2B_DIGEST *cp_hash, TPM2B_DIGEST *rp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm, ESYS_TR shandle2,
    ESYS_TR shandle3);

tool_rc tpm2_hierarchy_change_auth(ESYS_CONTEXT *esys_context,
    tpm2_loaded_object *hierarchy, const TPM2B_AUTH *new_auth,
    TPM2B_DIGEST *cp_hash, TPM2B_DIGEST *rp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm, ESYS_TR shandle2,
    ESYS_TR shandle3);

tool_rc tpm2_certify(ESYS_CONTEXT *esys_context,
    tpm2_loaded_object *certifiedkey_obj,
    tpm2_loaded_object *signingkey_obj, TPM2B_DATA *qualifying_data,
    TPMT_SIG_SCHEME *scheme, TPM2B_ATTEST **certify_info,
    TPMT_SIGNATURE **signature, TPM2B_DIGEST *cp_hash, TPM2B_DIGEST *rp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm, ESYS_TR shandle3);

tool_rc tpm2_rsa_decrypt(ESYS_CONTEXT *esys_context, tpm2_loaded_object *keyobj,
    const TPM2B_PUBLIC_KEY_RSA *cipher_text, const TPMT_RSA_DECRYPT *in_scheme,
    const TPM2B_DATA *label, TPM2B_PUBLIC_KEY_RSA **message,
    TPM2B_DIGEST *cp_hash, TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_rsa_encrypt(ESYS_CONTEXT *ectx, tpm2_loaded_object *keyobj,
        const TPM2B_PUBLIC_KEY_RSA *message, const TPMT_RSA_DECRYPT *scheme,
        const TPM2B_DATA *label, TPM2B_PUBLIC_KEY_RSA **cipher_text);

tool_rc tpm2_load(ESYS_CONTEXT *esys_context, tpm2_loaded_object *parentobj,
    const TPM2B_PRIVATE *in_private, const TPM2B_PUBLIC *in_public,
    ESYS_TR *object_handle, TPM2B_DIGEST *cp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_clear(ESYS_CONTEXT *esys_context,
    tpm2_loaded_object *auth_hierarchy, TPM2B_DIGEST *cp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_clearcontrol(ESYS_CONTEXT *esys_context,
    tpm2_loaded_object *auth_hierarchy, TPMI_YES_NO disable_clear,
    TPM2B_DIGEST *cp_hash, TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_clockrateadjust(ESYS_CONTEXT *ectx, tpm2_loaded_object *object,
    TPM2_CLOCK_ADJUST rate_adjust, TPM2B_DIGEST *cp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_dictionarylockout_reset(ESYS_CONTEXT *esys_context,
    tpm2_loaded_object *auth_hierarchy, TPM2B_DIGEST *cp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_dictionarylockout_setup(ESYS_CONTEXT *esys_context,
    tpm2_loaded_object *auth_hierarchy, UINT32 max_tries, UINT32 recovery_time,
    UINT32 lockout_recovery_time, TPM2B_DIGEST *cp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_duplicate(ESYS_CONTEXT *esys_context,
    tpm2_loaded_object *duplicable_key, tpm2_loaded_object *new_parent_handle,
    const TPM2B_DATA *in_key, const TPMT_SYM_DEF_OBJECT *sym_alg,
    TPM2B_DATA **out_key, TPM2B_PRIVATE **duplicate,
    TPM2B_ENCRYPTED_SECRET **encrypted_seed, TPM2B_DIGEST *cp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_encryptdecrypt(ESYS_CONTEXT *esys_context,
    tpm2_loaded_object *encryption_key_obj, TPMI_YES_NO decrypt,
    TPMI_ALG_SYM_MODE mode, const TPM2B_IV *iv_in,
    const TPM2B_MAX_BUFFER *input_data, TPM2B_MAX_BUFFER **output_data,
    TPM2B_IV **iv_out, TPM2B_DIGEST *cp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_hierarchycontrol(ESYS_CONTEXT *esys_context,
    tpm2_loaded_object *auth_hierarchy, TPMI_RH_ENABLES enable,
    TPMI_YES_NO state, TPM2B_DIGEST *cp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_hmac(ESYS_CONTEXT *esys_context, tpm2_loaded_object *hmac_key_obj,
    TPMI_ALG_HASH halg, const TPM2B_MAX_BUFFER *input_buffer,
    TPM2B_DIGEST **out_hmac, TPM2B_DIGEST *cp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_hmac_start(ESYS_CONTEXT *esys_context,
        tpm2_loaded_object *hmac_key_obj, TPMI_ALG_HASH halg,
        ESYS_TR *sequence_handle);

tool_rc tpm2_hmac_sequenceupdate(ESYS_CONTEXT *esys_context,
        ESYS_TR sequence_handle, tpm2_loaded_object *hmac_key_obj,
        const TPM2B_MAX_BUFFER *input_buffer);

tool_rc tpm2_hmac_sequencecomplete(ESYS_CONTEXT *esys_context,
        ESYS_TR sequence_handle, tpm2_loaded_object *hmac_key_obj,
        const TPM2B_MAX_BUFFER *input_buffer, TPM2B_DIGEST **result,
        TPMT_TK_HASHCHECK **validation);

tool_rc tpm2_import(ESYS_CONTEXT *esys_context, tpm2_loaded_object *parent_obj,
    const TPM2B_DATA *encryption_key, const TPM2B_PUBLIC *object_public,
    const TPM2B_PRIVATE *duplicate, const TPM2B_ENCRYPTED_SECRET *in_sym_seed,
    const TPMT_SYM_DEF_OBJECT *symmetric_alg, TPM2B_PRIVATE **out_private,
    TPM2B_DIGEST *cp_hash, TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_nv_definespace(ESYS_CONTEXT *esys_context,
    tpm2_loaded_object *auth_hierarchy_obj, const TPM2B_AUTH *auth,
    const TPM2B_NV_PUBLIC *public_info, TPM2B_DIGEST *cp_hash,
    TPM2B_DIGEST *rp_hash, TPMI_ALG_HASH parameter_hash_algorithm,
    ESYS_TR shandle2, ESYS_TR shandle3);

tool_rc tpm2_nvextend(ESYS_CONTEXT *esys_context,
    tpm2_loaded_object *auth_hierarchy_obj, TPM2_HANDLE nv_index,
    TPM2B_MAX_NV_BUFFER *data, TPM2B_DIGEST *cp_hash, TPM2B_DIGEST *rp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm, TPM2B_NAME *precalc_nvname,
    ESYS_TR shandle2, ESYS_TR shandle3);

tool_rc tpm2_nv_increment(ESYS_CONTEXT *esys_context,
    tpm2_loaded_object *auth_hierarchy_obj, TPM2_HANDLE nv_index,
    TPM2B_NAME *precalc_nvname, TPM2B_DIGEST *cp_hash, TPM2B_DIGEST *rp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm, ESYS_TR shandle2, ESYS_TR shandle3);

tool_rc tpm2_nvreadlock(ESYS_CONTEXT *esys_context,
    tpm2_loaded_object *auth_hierarchy_obj, TPM2_HANDLE nv_index,
    TPM2B_NAME *precalc_nvname, TPM2B_DIGEST *cp_hash, TPM2B_DIGEST *rp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm, ESYS_TR shandle2, ESYS_TR shandle3);

tool_rc tpm2_nvglobalwritelock(ESYS_CONTEXT *esys_context,
    tpm2_loaded_object *auth_hierarchy_obj, TPM2B_DIGEST *cp_hash,
    TPM2B_DIGEST *rp_hash, TPMI_ALG_HASH parameter_hash_algorithm,
    ESYS_TR shandle2, ESYS_TR shandle3);

tool_rc tpm2_nvwritelock(ESYS_CONTEXT *esys_context,
    tpm2_loaded_object *auth_hierarchy_obj, TPM2_HANDLE nv_index,
    TPM2B_NAME *precalc_nvname, TPM2B_DIGEST *cp_hash, TPM2B_DIGEST *rp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm, ESYS_TR shandle2, ESYS_TR shandle3);

tool_rc tpm2_tr_from_tpm_public(ESYS_CONTEXT *esys_context,
        TPM2_HANDLE handle, ESYS_TR *tr_handle);

tool_rc tpm2_nvsetbits(ESYS_CONTEXT *esys_context,
    tpm2_loaded_object *auth_hierarchy_obj, TPM2_HANDLE nv_index,
    UINT64 bits, TPM2B_DIGEST *cp_hash, TPM2B_DIGEST *rp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm, TPM2B_NAME *precalc_nvname,
    ESYS_TR shandle2, ESYS_TR shandle3);

tool_rc tpm2_nvundefine(ESYS_CONTEXT *esys_context,
    tpm2_loaded_object *auth_hierarchy_obj, TPM2_HANDLE nv_index,
    TPM2B_NAME *precalc_nvname, TPM2B_DIGEST *cp_hash, TPM2B_DIGEST *rp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm, ESYS_TR shandle2, ESYS_TR shandle3);

tool_rc tpm2_nvundefinespecial(ESYS_CONTEXT *esys_context, tpm2_loaded_object
    *auth_hierarchy_obj, TPM2_HANDLE nv_index, TPM2B_NAME *precalc_nvname,
    tpm2_session *policy_session, TPM2B_DIGEST *cp_hash, TPM2B_DIGEST *rp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm, ESYS_TR shandle3);

tool_rc tpm2_nvwrite(ESYS_CONTEXT *esys_context,
    tpm2_loaded_object *auth_hierarchy_obj, TPM2_HANDLE nvindex,
    TPM2B_NAME *precalc_nvname, const TPM2B_MAX_NV_BUFFER *data, UINT16 offset,
    TPM2B_DIGEST *cp_hash, TPM2B_DIGEST *rp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm, ESYS_TR shandle2, ESYS_TR shandle3);

tool_rc tpm2_pcr_allocate(ESYS_CONTEXT *esys_context,
        tpm2_loaded_object *auth_hierarchy_obj,
        const TPML_PCR_SELECTION *pcr_allocation, TPM2B_DIGEST *cp_hash,
        TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_sign(ESYS_CONTEXT *esys_context, tpm2_loaded_object *signingkey_obj,
    TPM2B_DIGEST *digest, TPMT_SIG_SCHEME *in_scheme,
    TPMT_TK_HASHCHECK *validation, TPMT_SIGNATURE **signature,
    TPM2B_DIGEST *cp_hash, TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_quote(ESYS_CONTEXT *esys_context, tpm2_loaded_object *quote_obj,
    TPMT_SIG_SCHEME *in_scheme, TPM2B_DATA *qualifying_data,
    TPML_PCR_SELECTION *pcr_select, TPM2B_ATTEST **quoted,
    TPMT_SIGNATURE **signature, TPM2B_DIGEST *cp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_changeeps(ESYS_CONTEXT *ectx,
    tpm2_session *platform_hierarchy_session, TPM2B_DIGEST *cp_hash,
    TPM2B_DIGEST *rp_hash, TPMI_ALG_HASH parameter_hash_algorithm,
    ESYS_TR shandle2, ESYS_TR shandle3);

tool_rc tpm2_changepps(ESYS_CONTEXT *ectx,
    tpm2_session *platform_hierarchy_session, TPM2B_DIGEST *cp_hash,
    TPM2B_DIGEST *rp_hash, TPMI_ALG_HASH parameter_hash_algorithm,
    ESYS_TR shandle2, ESYS_TR shandle3);

tool_rc tpm2_unseal(ESYS_CONTEXT *esys_context, tpm2_loaded_object *sealkey_obj,
    TPM2B_SENSITIVE_DATA **out_data, TPM2B_DIGEST *cp_hash,
    TPM2B_DIGEST *rp_hash, TPMI_ALG_HASH parameter_hash_algorithm,
    ESYS_TR shandle2, ESYS_TR shandle3);

tool_rc tpm2_policy_authorize_nv(ESYS_CONTEXT *esys_context,
    tpm2_loaded_object *auth_entity_obj, TPM2_HANDLE nv_index,
    ESYS_TR policy_session, TPM2B_DIGEST *cp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_incrementalselftest(ESYS_CONTEXT *ectx, const TPML_ALG *to_test,
        TPML_ALG **to_do_list);

tool_rc tpm2_stirrandom(ESYS_CONTEXT *ectx, const TPM2B_SENSITIVE_DATA *data);

tool_rc tpm2_selftest(ESYS_CONTEXT *ectx, TPMI_YES_NO full_test);

tool_rc tpm2_gettestresult(ESYS_CONTEXT *ectx, TPM2B_MAX_BUFFER **out_data,
        TPM2_RC *test_result);

tool_rc tpm2_loadexternal(ESYS_CONTEXT *ectx, const TPM2B_SENSITIVE *private,
    const TPM2B_PUBLIC *public, TPMI_RH_HIERARCHY hierarchy,
    ESYS_TR *object_handle, TPM2B_DIGEST *cp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_pcr_extend(ESYS_CONTEXT *ectx, TPMI_DH_PCR pcr_index,
    tpm2_session *session,
    TPML_DIGEST_VALUES *digests,
    ESYS_TR session_handle_2, ESYS_TR session_handle_3);

tool_rc tpm2_pcr_event(ESYS_CONTEXT *ectx, ESYS_TR pcr, tpm2_session *session,
        const TPM2B_EVENT *event_data, TPML_DIGEST_VALUES **digests,
        TPM2B_DIGEST *cp_hash, TPMI_ALG_HASH parameter_hash_algorithm,
        ESYS_TR session_handle_2, ESYS_TR session_handle_3);

tool_rc tpm2_getrandom(ESYS_CONTEXT *ectx, UINT16 count,
        TPM2B_DIGEST **random, TPM2B_DIGEST *cp_hash, TPM2B_DIGEST *rp_hash,
        ESYS_TR session_handle_1, ESYS_TR session_handle_2,
        ESYS_TR session_handle_3, TPMI_ALG_HASH param_hash_algorithm) ;

tool_rc tpm2_startup(ESYS_CONTEXT *ectx, TPM2_SU startup_type);

tool_rc tpm2_pcr_reset(ESYS_CONTEXT *ectx, ESYS_TR pcr_handle,
    TPM2B_DIGEST *cp_hash, TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_makecredential(ESYS_CONTEXT *ectx, ESYS_TR handle,
        const TPM2B_DIGEST *credential, const TPM2B_NAME *object_name,
        TPM2B_ID_OBJECT **credential_blob, TPM2B_ENCRYPTED_SECRET **secret);

tool_rc tpm2_verifysignature(ESYS_CONTEXT *ectx, ESYS_TR key_handle,
        const TPM2B_DIGEST *digest, const TPMT_SIGNATURE *signature,
        TPMT_TK_VERIFIED **validation);

tool_rc tpm2_readclock(ESYS_CONTEXT *ectx, TPMS_TIME_INFO **current_time);

tool_rc tpm2_setclock(ESYS_CONTEXT *ectx, tpm2_loaded_object *object,
    UINT64 new_time, TPM2B_DIGEST *cp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_shutdown(ESYS_CONTEXT *ectx, TPM2_SU shutdown_type);

tool_rc tpm2_policy_nv(ESYS_CONTEXT *esys_context,
    tpm2_loaded_object *auth_entity_obj, TPM2_HANDLE nv_index,
    ESYS_TR policy_session, const TPM2B_OPERAND *operand_b, UINT16 offset,
    TPM2_EO operation, TPM2B_DIGEST *cp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_policy_countertimer(ESYS_CONTEXT *esys_context,
    ESYS_TR policy_session, const TPM2B_OPERAND *operand_b, UINT16 offset,
    TPM2_EO operation, TPM2B_DIGEST *cp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_policy_nv_written(ESYS_CONTEXT *esys_context,
        ESYS_TR policy_session, ESYS_TR shandle1, ESYS_TR shandle2,
        ESYS_TR shandle3, TPMI_YES_NO written_set, TPM2B_DIGEST *cp_hash,
        TPMI_ALG_HASH parameter_hash_algorithm);

TSS2_RC fix_esys_hierarchy(uint32_t in, uint32_t *out);

tool_rc tpm2_certifycreation(ESYS_CONTEXT *esys_context,
    tpm2_loaded_object *signingkey_obj, tpm2_loaded_object *certifiedkey_obj,
    TPM2B_DIGEST *creation_hash, TPMT_SIG_SCHEME *in_scheme,
    TPMT_TK_CREATION *creation_ticket, TPM2B_ATTEST **certify_info,
    TPMT_SIGNATURE **signature, TPM2B_DATA *policy_qualifier,
    TPM2B_DIGEST *cp_hash, TPM2B_DIGEST *rp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm, ESYS_TR shandle2, ESYS_TR shandle3);

tool_rc tpm2_nvcertify(ESYS_CONTEXT *esys_context,
    tpm2_loaded_object *signingkey_obj, tpm2_loaded_object *nvindex_authobj,
    TPM2_HANDLE nv_index, TPM2B_NAME *precalc_nvname,
    TPM2B_NAME *precalc_signername, UINT16 offset, UINT16 size,
    TPMT_SIG_SCHEME *in_scheme, TPM2B_ATTEST **certify_info,
    TPMT_SIGNATURE **signature, TPM2B_DATA *policy_qualifier,
    TPM2B_DIGEST *cp_hash, TPM2B_DIGEST *rp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm, ESYS_TR shandle3);

tool_rc tpm2_setprimarypolicy(ESYS_CONTEXT *ectx,
    tpm2_loaded_object *hierarchy_object, TPM2B_DIGEST *auth_policy,
    TPMI_ALG_HASH hash_algorithm, TPM2B_DIGEST *cp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_gettime(ESYS_CONTEXT *ectx, tpm2_loaded_object *privacy_admin,
    tpm2_loaded_object *signing_object, const TPM2B_DATA *qualifying_data,
    const TPMT_SIG_SCHEME *scheme, TPM2B_ATTEST **time_info,
    TPMT_SIGNATURE **signature, TPM2B_DIGEST *cp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_setcommandcodeaudit(ESYS_CONTEXT *esys_context,
    tpm2_loaded_object *auth_entity_obj, TPMI_ALG_HASH hash_algorithm,
    const TPML_CC *setlist, const TPML_CC *clearlist);

tool_rc tpm2_getcommandauditdigest(ESYS_CONTEXT *esys_context,
        tpm2_loaded_object *privacy_object, tpm2_loaded_object *sign_object,
        TPMT_SIG_SCHEME *in_scheme, TPM2B_DATA *qualifying_data,
        TPM2B_ATTEST **audit_info, TPMT_SIGNATURE **signature);

tool_rc tpm2_getsessionauditdigest(ESYS_CONTEXT *esys_context,
        tpm2_loaded_object *privacy_object, tpm2_loaded_object *sign_object,
        TPMT_SIG_SCHEME *in_scheme, TPM2B_DATA *qualifying_data,
        TPM2B_ATTEST **audit_info, TPMT_SIGNATURE **signature,
        ESYS_TR audit_session_handle);

tool_rc tpm2_geteccparameters(ESYS_CONTEXT *esys_context,
    TPMI_ECC_CURVE curve_id, TPMS_ALGORITHM_DETAIL_ECC **parameters,
    TPM2B_DIGEST *cp_hash, TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_ecephemeral(ESYS_CONTEXT *esys_context, TPMI_ECC_CURVE curve_id,
    TPM2B_ECC_POINT **Q, uint16_t *counter, TPM2B_DIGEST *cp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_commit(ESYS_CONTEXT *esys_context,
    tpm2_loaded_object *signing_key_object, TPM2B_ECC_POINT *P1,
    TPM2B_SENSITIVE_DATA *s2, TPM2B_ECC_PARAMETER *y2, TPM2B_ECC_POINT **K,
    TPM2B_ECC_POINT **L, TPM2B_ECC_POINT **E, uint16_t *counter,
    TPM2B_DIGEST *cp_hash);

tool_rc tpm2_ecdhkeygen(ESYS_CONTEXT *esys_context,
    tpm2_loaded_object *ecc_public_key, TPM2B_ECC_POINT **Z,
    TPM2B_ECC_POINT **Q, TPM2B_DIGEST *cp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_ecdhzgen(ESYS_CONTEXT *esys_context,
    tpm2_loaded_object *ecc_key_object, TPM2B_ECC_POINT **Z,
    TPM2B_ECC_POINT *Q, TPM2B_DIGEST *cp_hash,
    TPMI_ALG_HASH parameter_hash_algorithm);

tool_rc tpm2_zgen2phase(ESYS_CONTEXT *esys_context,
    tpm2_loaded_object *ecc_key_object, TPM2B_ECC_POINT *Q1,
    TPM2B_ECC_POINT *Q2, TPM2B_ECC_POINT **Z1, TPM2B_ECC_POINT **Z2,
    TPMI_ECC_KEY_EXCHANGE keyexchange_scheme, UINT16 commit_counter);

tool_rc tpm2_getsapicontext(ESYS_CONTEXT *esys_context,
    TSS2_SYS_CONTEXT **sys_context);

tool_rc tpm2_sapi_getcphash(TSS2_SYS_CONTEXT *sys_context,
    const TPM2B_NAME *name1, const TPM2B_NAME *name2, const TPM2B_NAME *name3,
    TPMI_ALG_HASH halg, TPM2B_DIGEST *cp_hash);

tool_rc tpm2_sapi_getrphash(TSS2_SYS_CONTEXT *sys_context,
    TSS2_RC response_code, TPM2B_DIGEST *rp_hash, TPMI_ALG_HASH halg);
# 18 "lib/files.c" 2
# 1 "./tools/tpm2_tool.h" 1
# 9 "./tools/tpm2_tool.h"
# 1 "./lib/tool_rc.h" 1
# 10 "./tools/tpm2_tool.h" 2
# 1 "./lib/tpm2_options.h" 1
# 10 "./lib/tpm2_options.h"
# 1 "/usr/include/getopt.h" 1 3 4
# 35 "/usr/include/getopt.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 3 4









# 36 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 3 4
extern char *optarg;
# 50 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 91 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));


# 36 "/usr/include/getopt.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/getopt_ext.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/getopt_ext.h" 3 4

# 50 "/usr/include/x86_64-linux-gnu/bits/getopt_ext.h" 3 4
struct option
{
  const char *name;


  int has_arg;
  int *flag;
  int val;
};







extern int getopt_long (int ___argc, char *const *___argv,
   const char *__shortopts,
          const struct option *__longopts, int *__longind)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int getopt_long_only (int ___argc, char *const *___argv,
        const char *__shortopts,
               const struct option *__longopts, int *__longind)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));


# 37 "/usr/include/getopt.h" 2 3 4
# 11 "./lib/tpm2_options.h" 2








# 18 "./lib/tpm2_options.h"
typedef union tpm2_option_flags tpm2_option_flags;
union tpm2_option_flags {
    struct {
        uint8_t verbose :1;
        uint8_t quiet :1;
        uint8_t enable_errata :1;
        uint8_t tcti_none :1;
        uint8_t restricted_pwd_session :1;

    };
    uint8_t all;
};
# 46 "./lib/tpm2_options.h"
typedef 
# 46 "./lib/tpm2_options.h" 3 4
       _Bool 
# 46 "./lib/tpm2_options.h"
            (*tpm2_option_handler)(char key, char *value);
# 62 "./lib/tpm2_options.h"
typedef 
# 62 "./lib/tpm2_options.h" 3 4
       _Bool 
# 62 "./lib/tpm2_options.h"
            (*tpm2_arg_handler)(int argc, char **argv);
# 74 "./lib/tpm2_options.h"
struct tpm2_options {
    struct {
        tpm2_option_handler on_opt;
        tpm2_arg_handler on_arg;
    } callbacks;
    char *short_opts;
    size_t len;
    uint32_t flags;
    struct option long_opts[];
};

typedef struct tpm2_options tpm2_options;
# 107 "./lib/tpm2_options.h"
tpm2_options *tpm2_options_new(const char *short_opts, size_t len,
        const struct option *long_opts, tpm2_option_handler on_opt,
        tpm2_arg_handler on_arg, uint32_t flags);
# 123 "./lib/tpm2_options.h"

# 123 "./lib/tpm2_options.h" 3 4
_Bool 
# 123 "./lib/tpm2_options.h"
    tpm2_options_cat(tpm2_options **dest, tpm2_options *src);






void tpm2_options_free(tpm2_options *opts);

typedef enum tpm2_option_code tpm2_option_code;
enum tpm2_option_code {
    tpm2_option_code_continue,
    tpm2_option_code_stop,
    tpm2_option_code_err
};
# 159 "./lib/tpm2_options.h"
tpm2_option_code tpm2_handle_options(int argc, char **argv,
        tpm2_options *tool_opts, tpm2_option_flags *flags,
        TSS2_TCTI_CONTEXT **tcti);
# 171 "./lib/tpm2_options.h"
void tpm2_print_usage(const char *command, struct tpm2_options *tool_opts);
# 11 "./tools/tpm2_tool.h" 2
# 1 "./lib/tpm2_tool_output.h" 1





extern 
# 6 "./lib/tpm2_tool_output.h" 3 4
      _Bool 
# 6 "./lib/tpm2_tool_output.h"
           output_enabled;
# 12 "./tools/tpm2_tool.h" 2
# 24 "./tools/tpm2_tool.h"
typedef 
# 24 "./tools/tpm2_tool.h" 3 4
       _Bool 
# 24 "./tools/tpm2_tool.h"
            (*tpm2_tool_onstart_t)(tpm2_options **opts);
# 36 "./tools/tpm2_tool.h"
typedef tool_rc (*tpm2_tool_onrun_t)(ESYS_CONTEXT *ectx, tpm2_option_flags flags);
# 45 "./tools/tpm2_tool.h"
typedef tool_rc (*tpm2_tool_onstop_t)(ESYS_CONTEXT *ectx);




typedef void (*tpm2_tool_onexit_t)(void);


typedef struct {
 const char * name;
 tpm2_tool_onstart_t onstart;
 tpm2_tool_onrun_t onrun;
 tpm2_tool_onstop_t onstop;
 tpm2_tool_onexit_t onexit;
} tpm2_tool;

void tpm2_tool_register(const tpm2_tool * tool);
# 19 "lib/files.c" 2
# 27 "lib/files.c"
static const UINT32 MAGIC = 0xBADCC0DE;
# 48 "lib/files.c"
static 
# 48 "lib/files.c" 3 4
      _Bool 
# 48 "lib/files.c"
           writex(FILE *f, const UINT8 *data, size_t size) {

    size_t wrote = 0;
    size_t index = 0;
    do {
        wrote = fwrite(&data[index], 1, size, f);
        if (ferror(f)) {
            _log(log_level_error, "lib/files.c", 55, "fread error: %s\n", strerror(
# 55 "lib/files.c" 3 4
           (*__errno_location ())
# 55 "lib/files.c"
           ));
            return 
# 56 "lib/files.c" 3 4
                  0
# 56 "lib/files.c"
                       ;
        }
        if (wrote != size) {
            if (
# 59 "lib/files.c" 3 4
               (*__errno_location ()) 
# 59 "lib/files.c"
                     != 
# 59 "lib/files.c" 3 4
                        4
# 59 "lib/files.c"
                             ) {
                return 
# 60 "lib/files.c" 3 4
                      0
# 60 "lib/files.c"
                           ;
            }

        }
        size -= wrote;
        index += wrote;
    } while (size > 0);

    return 
# 68 "lib/files.c" 3 4
          1
# 68 "lib/files.c"
              ;
}
# 82 "lib/files.c"
static size_t readx(FILE *f, UINT8 *data, size_t size) {

    size_t bread = 0;
    do {
        bread += fread(&data[bread], 1, size-bread, f);
        if (ferror(f)) {
            _log(log_level_error, "lib/files.c", 88, "fread error: %s\n", strerror(
# 88 "lib/files.c" 3 4
           (*__errno_location ())
# 88 "lib/files.c"
           ));
            return 0;
        }
    } while (bread < size && !feof(f) && 
# 91 "lib/files.c" 3 4
                                        (*__errno_location ()) 
# 91 "lib/files.c"
                                              == 
# 91 "lib/files.c" 3 4
                                                 4
# 91 "lib/files.c"
                                                      );

    return bread;
}


# 96 "lib/files.c" 3 4
_Bool 
# 96 "lib/files.c"
    files_get_file_size(FILE *fp, unsigned long *file_size, const char *path) {

    long current = ftell(fp);
    if (current < 0) {
        if (path) {
            _log(log_level_error, "lib/files.c", 101, "Error getting current file offset for file \"%s\" error: " "%s", path, strerror(
# 101 "lib/files.c" 3 4
           (*__errno_location ())
# 101 "lib/files.c"
           ))
                                                ;
        }
        return 
# 104 "lib/files.c" 3 4
              0
# 104 "lib/files.c"
                   ;
    }

    int rc = fseek(fp, 0, 
# 107 "lib/files.c" 3 4
                         2
# 107 "lib/files.c"
                                 );
    if (rc < 0) {
        if (path) {
            _log(log_level_error, "lib/files.c", 110, "Error seeking to end of file \"%s\" error: %s", path, strerror(
# 110 "lib/files.c" 3 4
           (*__errno_location ())
# 110 "lib/files.c"
           ))
                                    ;
        }
        return 
# 113 "lib/files.c" 3 4
              0
# 113 "lib/files.c"
                   ;
    }

    long size = ftell(fp);
    if (size < 0) {
        if (path) {
            _log(log_level_error, "lib/files.c", 119, "ftell on file \"%s\" failed: %s", path, strerror(
# 119 "lib/files.c" 3 4
           (*__errno_location ())
# 119 "lib/files.c"
           ));
        }
        return 
# 121 "lib/files.c" 3 4
              0
# 121 "lib/files.c"
                   ;
    }

    rc = fseek(fp, current, 
# 124 "lib/files.c" 3 4
                           0
# 124 "lib/files.c"
                                   );
    if (rc < 0) {
        if (path) {
            _log(log_level_error, "lib/files.c", 127, "Could not restore initial stream position for file \"%s\" " "failed: %s", path, strerror(
# 127 "lib/files.c" 3 4
           (*__errno_location ())
# 127 "lib/files.c"
           ))

                                                        ;
        }
        return 
# 131 "lib/files.c" 3 4
              0
# 131 "lib/files.c"
                   ;
    }


    *file_size = (unsigned long) size;
    return 
# 136 "lib/files.c" 3 4
          1
# 136 "lib/files.c"
              ;
}


# 139 "lib/files.c" 3 4
_Bool 
# 139 "lib/files.c"
    file_read_bytes_from_file(FILE *f, UINT8 *buf, UINT32 *size,
        const char *path) {

    unsigned long file_size;
    
# 143 "lib/files.c" 3 4
   _Bool 
# 143 "lib/files.c"
        result = files_get_file_size(f, &file_size, path);
    if (!result) {

        return 
# 146 "lib/files.c" 3 4
              0
# 146 "lib/files.c"
                   ;
    }


    if (file_size > *size) {
        if (path) {
            _log(log_level_error, "lib/files.c", 152, "File \"%s\" size is larger than buffer, got %lu expected " "less than or equal to %u", path, file_size, *size)

                                                                       ;
        }
        return 
# 156 "lib/files.c" 3 4
              0
# 156 "lib/files.c"
                   ;
    }






    *size = readx(f, buf, *size);
    if (*size < file_size) {
        if (path) {
            _log(log_level_error, "lib/files.c", 167, "Could not read data from file \"%s\"", path);
        }
        return 
# 169 "lib/files.c" 3 4
              0
# 169 "lib/files.c"
                   ;
    }

    return 
# 172 "lib/files.c" 3 4
          1
# 172 "lib/files.c"
              ;
}

 
# 175 "lib/files.c" 3 4
         _Bool 
# 175 "lib/files.c"
              files_load_bytes_from_path(const char *path, UINT8 *buf, UINT32 *size) {

    if (!buf || !size || !path) {
        return 
# 178 "lib/files.c" 3 4
              0
# 178 "lib/files.c"
                   ;
    }

    FILE *f = fopen(path, "rb");
    if (!f) {
        _log(log_level_error, "lib/files.c", 183, "Could not open file \"%s\" error %s", path, strerror(
# 183 "lib/files.c" 3 4
       (*__errno_location ())
# 183 "lib/files.c"
       ));
        return 
# 184 "lib/files.c" 3 4
              0
# 184 "lib/files.c"
                   ;
    }

    
# 187 "lib/files.c" 3 4
   _Bool 
# 187 "lib/files.c"
        result = file_read_bytes_from_file(f, buf, size, path);

    fclose(f);
    return result;
}


# 193 "lib/files.c" 3 4
_Bool 
# 193 "lib/files.c"
    files_save_bytes_to_file(const char *path, UINT8 *buf, UINT16 size) {

    if (!buf) {
        return 
# 196 "lib/files.c" 3 4
              0
# 196 "lib/files.c"
                   ;
    }

    if (!path && !output_enabled) {
        return 
# 200 "lib/files.c" 3 4
              1
# 200 "lib/files.c"
                  ;
    }

    FILE *fp = path ? fopen(path, "wb+") : 
# 203 "lib/files.c" 3 4
                                          stdout
# 203 "lib/files.c"
                                                ;
    if (!fp) {
        _log(log_level_error, "lib/files.c", 205, "Could not open file \"%s\", error: %s", path, strerror(
# 205 "lib/files.c" 3 4
       (*__errno_location ())
# 205 "lib/files.c"
       ));
        return 
# 206 "lib/files.c" 3 4
              0
# 206 "lib/files.c"
                   ;
    }

    
# 209 "lib/files.c" 3 4
   _Bool 
# 209 "lib/files.c"
        result = files_write_bytes(fp, buf, size);
    if (!result) {
        _log(log_level_error, "lib/files.c", 211, "Could not write data to file \"%s\"", path ? path : "<stdout>");
    }

    if (fp != 
# 214 "lib/files.c" 3 4
             stdout
# 214 "lib/files.c"
                   ) {
        fclose(fp);
    }
# 225 "lib/files.c"
    return result;
}







# 233 "lib/files.c" 3 4
_Bool 
# 233 "lib/files.c"
    files_save_context(TPMS_CONTEXT *context, FILE *stream) {
# 244 "lib/files.c"
    
# 244 "lib/files.c" 3 4
   _Bool 
# 244 "lib/files.c"
        result = files_write_header(stream, 1);
    if (!result) {
        _log(log_level_error, "lib/files.c", 246, "Could not write context file header");
        goto out;
    }


    result = files_write_32(stream, context->hierarchy);
    if (!result) {
        _log(log_level_error, "lib/files.c", 253, "Could not write hierarchy");
        goto out;
    }

    result = files_write_32(stream, context->savedHandle);
    if (!result) {
        _log(log_level_error, "lib/files.c", 259, "Could not write savedHandle");
        goto out;
    }
    _log(log_level_verbose, "lib/files.c", 262, "Save TPMS_CONTEXT->savedHandle: 0x%x", context->savedHandle);


    result = files_write_64(stream, context->sequence);
    if (!result) {
        _log(log_level_error, "lib/files.c", 267, "Could not write sequence");
        goto out;
    }


    result = files_write_32(stream, context->contextBlob.size);
    if (!result) {
        _log(log_level_error, "lib/files.c", 274, "Could not write contextBob size");
        goto out;
    }


    result = files_write_bytes(stream, context->contextBlob.buffer,
            context->contextBlob.size);
    if (!result) {
        _log(log_level_error, "lib/files.c", 282, "Could not write contextBlob buffer");
    }


out:
    return result;
}

tool_rc files_save_tpm_context_to_file(ESYS_CONTEXT *ectx, ESYS_TR handle,
        FILE *stream, 
# 291 "lib/files.c" 3 4
                     _Bool 
# 291 "lib/files.c"
                          autoflush) {

    TPMS_CONTEXT *context = 
# 293 "lib/files.c" 3 4
                           ((void *)0)
# 293 "lib/files.c"
                               ;

    tool_rc rc = tpm2_context_save(ectx, handle, autoflush, &context);
    if (rc != tool_rc_success) {
        return rc;
    }

    
# 300 "lib/files.c" 3 4
   _Bool 
# 300 "lib/files.c"
        result = files_save_context(context, stream);
    free(context);
    return result ? tool_rc_success : tool_rc_general_error;
}

tool_rc files_save_tpm_context_to_path(ESYS_CONTEXT *context, ESYS_TR handle,
        const char *path, 
# 306 "lib/files.c" 3 4
                         _Bool 
# 306 "lib/files.c"
                              autoflush) {

    FILE *f = fopen(path, "w+b");
    if (!f) {
        _log(log_level_error, "lib/files.c", 310, "Error opening file \"%s\" due to error: %s", path, strerror(
# 310 "lib/files.c" 3 4
       (*__errno_location ())
# 310 "lib/files.c"
       ))
                                ;
        return tool_rc_general_error;
    }

    tool_rc rc = files_save_tpm_context_to_file(context, handle, f, autoflush);
    fclose(f);
    return rc;
}

static 
# 320 "lib/files.c" 3 4
      _Bool 
# 320 "lib/files.c"
           load_tpm_context_file(FILE *fstream, TPMS_CONTEXT *context) {
# 331 "lib/files.c"
    UINT32 version;
    
# 332 "lib/files.c" 3 4
   _Bool 
# 332 "lib/files.c"
        result = files_read_header(fstream, &version);
    if (!result) {
        _log(log_level_warning, "lib/files.c", 334, "The loaded tpm context does not appear to be in the proper " "format, assuming old format, this will be converted on the " "next save.")

                             ;
        if (fseek(fstream, 0, 
# 337 "lib/files.c" 3 4
                             0
# 337 "lib/files.c"
                                     ) != 0) {
            _log(log_level_error, "lib/files.c", 338, "Could not rewind stream: %s", strerror(
# 338 "lib/files.c" 3 4
           (*__errno_location ())
# 338 "lib/files.c"
           ));
            return 
# 339 "lib/files.c" 3 4
                  0
# 339 "lib/files.c"
                       ;
        }
        result = files_read_bytes(fstream, (UINT8 *) context, sizeof(*context));
        if (!result) {
            _log(log_level_error, "lib/files.c", 343, "Could not load tpm context file");
            goto out;
        }

        goto out;
    }

    if (version != 1) {
        _log(log_level_error, "lib/files.c", 351, "Unsupported context file format version found, got: %"
# 351 "lib/files.c" 3 4
       "u"
# 351 "lib/files.c"
       , version)
                        ;
        result = 
# 353 "lib/files.c" 3 4
                0
# 353 "lib/files.c"
                     ;
        goto out;
    }

    result = files_read_32(fstream, &context->hierarchy);
    if (!result) {
        _log(log_level_error, "lib/files.c", 359, "Error reading hierarchy!");
        goto out;
    }

    result = files_read_32(fstream, &context->savedHandle);
    if (!result) {
        _log(log_level_error, "lib/files.c", 365, "Error reading savedHandle!");
        goto out;
    }
    _log(log_level_verbose, "lib/files.c", 368, "load: TPMS_CONTEXT->savedHandle: 0x%x", context->savedHandle);

    result = files_read_64(fstream, &context->sequence);
    if (!result) {
        _log(log_level_error, "lib/files.c", 372, "Error reading sequence!");
        goto out;
    }

    result = files_read_32(fstream, &context->contextBlob.size);
    if (!result) {
        _log(log_level_error, "lib/files.c", 378, "Error reading contextBlob.size!");
        goto out;
    }

    if (context->contextBlob.size > sizeof(context->contextBlob.buffer)) {
        _log(log_level_error, "lib/files.c", 383, "Size mismatch found on contextBlob, got %"
# 383 "lib/files.c" 3 4
       "u"
# 383 "lib/files.c"
       " expected " "less than or equal to %zu", context->contextBlob.size, sizeof(context->contextBlob.buffer))

                                                    ;
        result = 
# 386 "lib/files.c" 3 4
                0
# 386 "lib/files.c"
                     ;
        goto out;
    }

    result = files_read_bytes(fstream, context->contextBlob.buffer,
            context->contextBlob.size);
    if (!result) {
        _log(log_level_error, "lib/files.c", 393, "Error reading contextBlob.size!");
        goto out;
    }

out:
    return result;
}

static 
# 401 "lib/files.c" 3 4
      _Bool 
# 401 "lib/files.c"
           check_magic(FILE *fstream, 
# 401 "lib/files.c" 3 4
                                      _Bool 
# 401 "lib/files.c"
                                           seek_reset) {

    do { if (!fstream) { _log(log_level_error, "lib/files.c", 403, "FILE"" must be specified"); return 
# 403 "lib/files.c" 3 4
   0
# 403 "lib/files.c"
   ; } } while(0);
    UINT32 magic = 0;
    
# 405 "lib/files.c" 3 4
   _Bool 
# 405 "lib/files.c"
        res = files_read_32(fstream, &magic);
    if (!res) {
        return 
# 407 "lib/files.c" 3 4
              0
# 407 "lib/files.c"
                   ;
    }

    
# 410 "lib/files.c" 3 4
   _Bool 
# 410 "lib/files.c"
        match = magic == MAGIC;

    if (seek_reset) {
        int rc = fseek(fstream, -(long)sizeof(magic), 
# 413 "lib/files.c" 3 4
                                                     1
# 413 "lib/files.c"
                                                             );
        if (rc != 0) {
            _log(log_level_error, "lib/files.c", 415, "fseek failed: %s", strerror(
# 415 "lib/files.c" 3 4
           (*__errno_location ())
# 415 "lib/files.c"
           ));
            return 
# 416 "lib/files.c" 3 4
                  0
# 416 "lib/files.c"
                       ;
        }
        return match;
    }

    if (!match) {
        _log(log_level_error, "lib/files.c", 422, "Found magic 0x%x did not match expected magic of 0x%x!", magic, MAGIC)
                      ;
    }

    return match;
}

tool_rc files_load_tpm_context_from_file(ESYS_CONTEXT *context,
        ESYS_TR *tr_handle, FILE *fstream) {

    TPMS_CONTEXT tpms_context;
    tool_rc rc = tool_rc_general_error;

    
# 435 "lib/files.c" 3 4
   _Bool 
# 435 "lib/files.c"
        result = check_magic(fstream, 
# 435 "lib/files.c" 3 4
                                      1
# 435 "lib/files.c"
                                          );
    if (result) {
        _log(log_level_verbose, "lib/files.c", 437, "Assuming tpm context file");
        result = load_tpm_context_file(fstream, &tpms_context);
        if (!result) {
            _log(log_level_error, "lib/files.c", 440, "Failed to load_tpm_context_file()");
            goto out;
        }

        return tpm2_context_load(context, &tpms_context, tr_handle);
    }

    ESYS_TR loaded_handle;
    _log(log_level_verbose, "lib/files.c", 448, "Assuming tpm context file");

    unsigned long size = 0;
    result = files_get_file_size(fstream, &size, 
# 451 "lib/files.c" 3 4
                                                ((void *)0)
# 451 "lib/files.c"
                                                    );
    if (!result) {
        _log(log_level_error, "lib/files.c", 453, "Failed to get file size: %s", strerror(ferror(fstream)));
        goto out;
    }

    if (size < 1) {
        _log(log_level_error, "lib/files.c", 458, "Invalid serialized ESYS_TR size, got: %lu", size);
        goto out;
    }

    uint8_t *buffer = calloc(1, size);
    if (!buffer) {
        _log(log_level_error, "lib/files.c", 464, "oom");
        goto out;
    }

    result = files_read_bytes(fstream, buffer, size);
    if (!result) {
        _log(log_level_error, "lib/files.c", 470, "Could not read serialized ESYS_TR from disk");
        free(buffer);
        goto out;
    }

    rc = tpm2_tr_deserialize(context, buffer, size, &loaded_handle);
    free(buffer);
    if (rc == tool_rc_success) {
        *tr_handle = loaded_handle;
    }
    out: return rc;
}

tool_rc files_load_tpm_context_from_path(ESYS_CONTEXT *context,
        ESYS_TR *tr_handle, const char *path) {

    FILE *f = fopen(path, "rb");
    if (!f) {
        _log(log_level_warning, "lib/files.c", 488, "Error opening file \"%s\" due to error: %s", path, strerror(
# 488 "lib/files.c" 3 4
       (*__errno_location ())
# 488 "lib/files.c"
       ))
                                ;
        return 
# 490 "lib/files.c" 3 4
              0
# 490 "lib/files.c"
                   ;
    }

    tool_rc rc = files_load_tpm_context_from_file(context, tr_handle, f);

    fclose(f);
    return rc;
}


# 499 "lib/files.c" 3 4
_Bool 
# 499 "lib/files.c"
    files_does_file_exist(const char *path) {

    if (!path) {
        _log(log_level_error, "lib/files.c", 502, "Path cannot be NULL");
        return 
# 503 "lib/files.c" 3 4
              0
# 503 "lib/files.c"
                   ;
    }

    FILE *fp = fopen(path, "rb");
    if (fp) {
        fclose(fp);
        _log(log_level_warning, "lib/files.c", 509, "Path: %s already exists. Please rename or delete the file!", path)
                     ;
        return 
# 511 "lib/files.c" 3 4
              1
# 511 "lib/files.c"
                  ;
    }
    return 
# 513 "lib/files.c" 3 4
          0
# 513 "lib/files.c"
               ;
}

 
# 516 "lib/files.c" 3 4
         _Bool 
# 516 "lib/files.c"
              files_get_file_size_path(const char *path, unsigned long *file_size) {

    
# 518 "lib/files.c" 3 4
   _Bool 
# 518 "lib/files.c"
        result = 
# 518 "lib/files.c" 3 4
                 0
# 518 "lib/files.c"
                      ;

    if (!path) {
        _log(log_level_error, "lib/files.c", 521, "Must specify a path argument, cannot be NULL!");
        return 
# 522 "lib/files.c" 3 4
              0
# 522 "lib/files.c"
                   ;
    }

    if (!file_size) {
        _log(log_level_error, "lib/files.c", 526, "Must specify a file size argument, cannot be NULL!");
        return 
# 527 "lib/files.c" 3 4
              0
# 527 "lib/files.c"
                   ;
    }

    FILE *fp = fopen(path, "rb");
    if (!fp) {
        _log(log_level_error, "lib/files.c", 532, "Could not open file: \"%s\" error: %s", path, strerror(
# 532 "lib/files.c" 3 4
       (*__errno_location ())
# 532 "lib/files.c"
       ));
        return 
# 533 "lib/files.c" 3 4
              0
# 533 "lib/files.c"
                   ;
    }

    result = files_get_file_size(fp, file_size, path);

    fclose(fp);
    return result;
}
# 570 "lib/files.c"

# 570 "lib/files.c" 3 4
_Bool 
# 570 "lib/files.c"
files_read_16(FILE *out, UINT16 *data) { do { if (!out) { _log(log_level_error, "lib/files.c", 570, "FILE"" must be specified"); return 
# 570 "lib/files.c" 3 4
0
# 570 "lib/files.c"
; } } while(0); do { if (!data) { _log(log_level_error, "lib/files.c", 570, "data"" must be specified"); return 
# 570 "lib/files.c" 3 4
0
# 570 "lib/files.c"
; } } while(0); 
# 570 "lib/files.c" 3 4
_Bool 
# 570 "lib/files.c"
res = (readx(out, (UINT8 *)data, sizeof(*data)) == sizeof(*data)); if (res) { do { if (!tpm2_util_is_big_endian()) { *data = tpm2_util_endian_swap_16(*data); } } while (0); } return res; };

# 571 "lib/files.c" 3 4
_Bool 
# 571 "lib/files.c"
files_write_16(FILE *out, UINT16 data) { do { if (!out) { _log(log_level_error, "lib/files.c", 571, "FILE"" must be specified"); return 
# 571 "lib/files.c" 3 4
0
# 571 "lib/files.c"
; } } while(0); do { if (!tpm2_util_is_big_endian()) { data = tpm2_util_endian_swap_16(data); } } while (0); return writex(out, (UINT8 *)&data, sizeof(data)); }


# 573 "lib/files.c" 3 4
_Bool 
# 573 "lib/files.c"
files_read_32(FILE *out, UINT32 *data) { do { if (!out) { _log(log_level_error, "lib/files.c", 573, "FILE"" must be specified"); return 
# 573 "lib/files.c" 3 4
0
# 573 "lib/files.c"
; } } while(0); do { if (!data) { _log(log_level_error, "lib/files.c", 573, "data"" must be specified"); return 
# 573 "lib/files.c" 3 4
0
# 573 "lib/files.c"
; } } while(0); 
# 573 "lib/files.c" 3 4
_Bool 
# 573 "lib/files.c"
res = (readx(out, (UINT8 *)data, sizeof(*data)) == sizeof(*data)); if (res) { do { if (!tpm2_util_is_big_endian()) { *data = tpm2_util_endian_swap_32(*data); } } while (0); } return res; };

# 574 "lib/files.c" 3 4
_Bool 
# 574 "lib/files.c"
files_write_32(FILE *out, UINT32 data) { do { if (!out) { _log(log_level_error, "lib/files.c", 574, "FILE"" must be specified"); return 
# 574 "lib/files.c" 3 4
0
# 574 "lib/files.c"
; } } while(0); do { if (!tpm2_util_is_big_endian()) { data = tpm2_util_endian_swap_32(data); } } while (0); return writex(out, (UINT8 *)&data, sizeof(data)); }


# 576 "lib/files.c" 3 4
_Bool 
# 576 "lib/files.c"
files_read_64(FILE *out, UINT64 *data) { do { if (!out) { _log(log_level_error, "lib/files.c", 576, "FILE"" must be specified"); return 
# 576 "lib/files.c" 3 4
0
# 576 "lib/files.c"
; } } while(0); do { if (!data) { _log(log_level_error, "lib/files.c", 576, "data"" must be specified"); return 
# 576 "lib/files.c" 3 4
0
# 576 "lib/files.c"
; } } while(0); 
# 576 "lib/files.c" 3 4
_Bool 
# 576 "lib/files.c"
res = (readx(out, (UINT8 *)data, sizeof(*data)) == sizeof(*data)); if (res) { do { if (!tpm2_util_is_big_endian()) { *data = tpm2_util_endian_swap_64(*data); } } while (0); } return res; }

# 577 "lib/files.c" 3 4
_Bool 
# 577 "lib/files.c"
files_write_64(FILE *out, UINT64 data) { do { if (!out) { _log(log_level_error, "lib/files.c", 577, "FILE"" must be specified"); return 
# 577 "lib/files.c" 3 4
0
# 577 "lib/files.c"
; } } while(0); do { if (!tpm2_util_is_big_endian()) { data = tpm2_util_endian_swap_64(data); } } while (0); return writex(out, (UINT8 *)&data, sizeof(data)); }


# 579 "lib/files.c" 3 4
_Bool 
# 579 "lib/files.c"
    files_read_bytes(FILE *out, UINT8 bytes[], size_t len) {

    do { if (!out) { _log(log_level_error, "lib/files.c", 581, "FILE"" must be specified"); return 
# 581 "lib/files.c" 3 4
   0
# 581 "lib/files.c"
   ; } } while(0);
    do { if (!bytes) { _log(log_level_error, "lib/files.c", 582, "bytes"" must be specified"); return 
# 582 "lib/files.c" 3 4
   0
# 582 "lib/files.c"
   ; } } while(0);
    return (readx(out, bytes, len) == len);
}


# 586 "lib/files.c" 3 4
_Bool 
# 586 "lib/files.c"
    files_read_bytes_chunk(FILE *out, UINT8 bytes[], size_t len, size_t *read_len) {

    do { if (!out) { _log(log_level_error, "lib/files.c", 588, "FILE"" must be specified"); return 
# 588 "lib/files.c" 3 4
   0
# 588 "lib/files.c"
   ; } } while(0);
    do { if (!bytes) { _log(log_level_error, "lib/files.c", 589, "bytes"" must be specified"); return 
# 589 "lib/files.c" 3 4
   0
# 589 "lib/files.c"
   ; } } while(0);
    size_t chunk_len = readx(out, bytes, len);
    *read_len += chunk_len;
    return (chunk_len == len);
}


# 595 "lib/files.c" 3 4
_Bool 
# 595 "lib/files.c"
    files_write_bytes(FILE *out, const uint8_t *bytes, size_t len) {

    do { if (!out) { _log(log_level_error, "lib/files.c", 597, "FILE"" must be specified"); return 
# 597 "lib/files.c" 3 4
   0
# 597 "lib/files.c"
   ; } } while(0);
    do { if (!bytes) { _log(log_level_error, "lib/files.c", 598, "bytes"" must be specified"); return 
# 598 "lib/files.c" 3 4
   0
# 598 "lib/files.c"
   ; } } while(0);
    return writex(out, bytes, len);
}


# 602 "lib/files.c" 3 4
_Bool 
# 602 "lib/files.c"
    files_write_header(FILE *out, UINT32 version) {

    do { if (!out) { _log(log_level_error, "lib/files.c", 604, "FILE"" must be specified"); return 
# 604 "lib/files.c" 3 4
   0
# 604 "lib/files.c"
   ; } } while(0);

    
# 606 "lib/files.c" 3 4
   _Bool 
# 606 "lib/files.c"
        res = files_write_32(out, MAGIC);
    if (!res) {
        return 
# 608 "lib/files.c" 3 4
              0
# 608 "lib/files.c"
                   ;
    }
    return files_write_32(out, version);
}


# 613 "lib/files.c" 3 4
_Bool 
# 613 "lib/files.c"
    files_read_header(FILE *out, uint32_t *version) {

    do { if (!out) { _log(log_level_error, "lib/files.c", 615, "FILE"" must be specified"); return 
# 615 "lib/files.c" 3 4
   0
# 615 "lib/files.c"
   ; } } while(0);
    do { if (!version) { _log(log_level_error, "lib/files.c", 616, "version"" must be specified"); return 
# 616 "lib/files.c" 3 4
   0
# 616 "lib/files.c"
   ; } } while(0);

    
# 618 "lib/files.c" 3 4
   _Bool 
# 618 "lib/files.c"
        result = check_magic(out, 
# 618 "lib/files.c" 3 4
                                  0
# 618 "lib/files.c"
                                       );
    if (!result) {
        return 
# 620 "lib/files.c" 3 4
              0
# 620 "lib/files.c"
                   ;
    }

    return files_read_32(out, version);
}


# 626 "lib/files.c" 3 4
_Bool 
# 626 "lib/files.c"
    files_load_bytes_from_buffer_or_file_or_stdin(const char *input_buffer,
        const char *path, UINT32 *size, BYTE *buf) {

    UINT16 upper_bound = *size;
    if (!upper_bound) {
        return 
# 631 "lib/files.c" 3 4
              1
# 631 "lib/files.c"
                  ;
    }

    
# 634 "lib/files.c" 3 4
   _Bool 
# 634 "lib/files.c"
        retval = 
# 634 "lib/files.c" 3 4
                 1
# 634 "lib/files.c"
                     ;

    if (!input_buffer && !path) {
        UINT16 read_bytes = 0;
        while (1) {
            read_bytes += fread(buf, 1, upper_bound, 
# 639 "lib/files.c" 3 4
                                                    stdin
# 639 "lib/files.c"
                                                         );
            if (feof(
# 640 "lib/files.c" 3 4
                    stdin
# 640 "lib/files.c"
                         )) {
                *size = read_bytes;
                return 
# 642 "lib/files.c" 3 4
                      1
# 642 "lib/files.c"
                          ;
            }
            if (ferror(
# 644 "lib/files.c" 3 4
                      stdin
# 644 "lib/files.c"
                           )) {
                _log(log_level_error, "lib/files.c", 645, "Failed read from stdin.");
                return 
# 646 "lib/files.c" 3 4
                      0
# 646 "lib/files.c"
                           ;
            }
        }

    } else if (input_buffer) {
        size_t input_buffer_size = strlen(input_buffer);
        if (path) {
            _log(log_level_error, "lib/files.c", 653, "Specify either the input buffer or file path to load data," " not both")
                                ;
        }
        if (input_buffer_size != (size_t) upper_bound) {
            _log(log_level_error, "lib/files.c", 657, "Unexpected data size. Got %u expected %u", upper_bound, (unsigned )input_buffer_size)
                                                 ;
            return 
# 659 "lib/files.c" 3 4
                  0
# 659 "lib/files.c"
                       ;
        } else {
            memcpy(buf, input_buffer, input_buffer_size);
            return 
# 662 "lib/files.c" 3 4
                  1
# 662 "lib/files.c"
                      ;
        }
    } else if (path) {
        retval = files_load_bytes_from_path(path, buf, size);
    }

    return retval;
}

tool_rc files_save_ESYS_TR(ESYS_CONTEXT *ectx, ESYS_TR handle, const char *path) {

    size_t size;
    uint8_t *buffer;
    tool_rc rc = tpm2_tr_serialize(ectx, handle, &buffer, &size);
    if (rc != tool_rc_success) {
        return rc;
    }

    
# 680 "lib/files.c" 3 4
   _Bool 
# 680 "lib/files.c"
        result = files_save_bytes_to_file(path, buffer, size);
    free(buffer);
    return result ? tool_rc_success : tool_rc_general_error;
}
# 760 "lib/files.c"

# 760 "lib/files.c" 3 4
_Bool 
# 760 "lib/files.c"
files_save_public(TPM2B_PUBLIC *public, const char *path) { size_t offset = 0; UINT8 buffer[sizeof(*public)]; TSS2_RC rc = Tss2_MU_TPM2B_PUBLIC_Marshal(public, buffer, sizeof(buffer), &offset); if (rc != ((TSS2_RC)0)) { _log(log_level_error, "lib/files.c", 760, "Error serializing ""public"" structure: 0x%x", rc); return 
# 760 "lib/files.c" 3 4
0
# 760 "lib/files.c"
; } return files_save_bytes_to_file(path, buffer, offset); }

# 761 "lib/files.c" 3 4
_Bool 
# 761 "lib/files.c"
files_load_public(const char *path, TPM2B_PUBLIC *public) { UINT8 buffer[sizeof(*public)]; UINT32 size = sizeof(buffer); 
# 761 "lib/files.c" 3 4
_Bool 
# 761 "lib/files.c"
res = files_load_bytes_from_path(path, buffer, &size); if (!res) { return 
# 761 "lib/files.c" 3 4
0
# 761 "lib/files.c"
; } size_t offset = 0; TSS2_RC rc = Tss2_MU_TPM2B_PUBLIC_Unmarshal(buffer, size, &offset, public); if (rc != ((TSS2_RC)0)) { _log(log_level_error, "lib/files.c", 761, "Error deserializing ""public"" structure: 0x%x", rc); _log(log_level_error, "lib/files.c", 761, "The input file needs to be a valid ""TPM2B_PUBLIC"" data structure"); return 
# 761 "lib/files.c" 3 4
0
# 761 "lib/files.c"
; } return rc == ((TPM2_RC)0x000); }

# 762 "lib/files.c" 3 4
_Bool 
# 762 "lib/files.c"
files_load_public_file(FILE *f, const char *path, TPM2B_PUBLIC *public) { UINT8 buffer[sizeof(*public)]; UINT32 size = sizeof(buffer); 
# 762 "lib/files.c" 3 4
_Bool 
# 762 "lib/files.c"
res = file_read_bytes_from_file(f, buffer, &size, path); if (!res) { return 
# 762 "lib/files.c" 3 4
0
# 762 "lib/files.c"
; } size_t offset = 0; TSS2_RC rc = Tss2_MU_TPM2B_PUBLIC_Unmarshal(buffer, size, &offset, public); if (rc != ((TSS2_RC)0)) { _log(log_level_error, "lib/files.c", 762, "Error deserializing ""public"" structure: 0x%x", rc); _log(log_level_error, "lib/files.c", 762, "The input file needs to be a valid ""TPM2B_PUBLIC"" data structure"); return 
# 762 "lib/files.c" 3 4
0
# 762 "lib/files.c"
; } return rc == ((TPM2_RC)0x000); }

# 763 "lib/files.c" 3 4
_Bool 
# 763 "lib/files.c"
files_load_public_silent(const char *path, TPM2B_PUBLIC *public) { UINT8 buffer[sizeof(*public)]; UINT32 size = sizeof(buffer); 
# 763 "lib/files.c" 3 4
_Bool 
# 763 "lib/files.c"
res = files_load_bytes_from_path(path, buffer, &size); if (!res) { return 
# 763 "lib/files.c" 3 4
0
# 763 "lib/files.c"
; } size_t offset = 0; TSS2_RC rc = Tss2_MU_TPM2B_PUBLIC_Unmarshal(buffer, size, &offset, public); if (rc != ((TSS2_RC)0)) { return 
# 763 "lib/files.c" 3 4
0
# 763 "lib/files.c"
; } return rc == ((TPM2_RC)0x000); }


# 765 "lib/files.c" 3 4
_Bool 
# 765 "lib/files.c"
files_save_template(TPMT_PUBLIC *template, const char *path) { size_t offset = 0; UINT8 buffer[sizeof(*template)]; TSS2_RC rc = Tss2_MU_TPMT_PUBLIC_Marshal(template, buffer, sizeof(buffer), &offset); if (rc != ((TSS2_RC)0)) { _log(log_level_error, "lib/files.c", 765, "Error serializing ""template"" structure: 0x%x", rc); return 
# 765 "lib/files.c" 3 4
0
# 765 "lib/files.c"
; } return files_save_bytes_to_file(path, buffer, offset); }

# 766 "lib/files.c" 3 4
_Bool 
# 766 "lib/files.c"
files_load_template(const char *path, TPMT_PUBLIC *template) { UINT8 buffer[sizeof(*template)]; UINT32 size = sizeof(buffer); 
# 766 "lib/files.c" 3 4
_Bool 
# 766 "lib/files.c"
res = files_load_bytes_from_path(path, buffer, &size); if (!res) { return 
# 766 "lib/files.c" 3 4
0
# 766 "lib/files.c"
; } size_t offset = 0; TSS2_RC rc = Tss2_MU_TPMT_PUBLIC_Unmarshal(buffer, size, &offset, template); if (rc != ((TSS2_RC)0)) { _log(log_level_error, "lib/files.c", 766, "Error deserializing ""template"" structure: 0x%x", rc); _log(log_level_error, "lib/files.c", 766, "The input file needs to be a valid ""TPMT_PUBLIC"" data structure"); return 
# 766 "lib/files.c" 3 4
0
# 766 "lib/files.c"
; } return rc == ((TPM2_RC)0x000); }

# 767 "lib/files.c" 3 4
_Bool 
# 767 "lib/files.c"
files_load_template_file(FILE *f, const char *path, TPMT_PUBLIC *template) { UINT8 buffer[sizeof(*template)]; UINT32 size = sizeof(buffer); 
# 767 "lib/files.c" 3 4
_Bool 
# 767 "lib/files.c"
res = file_read_bytes_from_file(f, buffer, &size, path); if (!res) { return 
# 767 "lib/files.c" 3 4
0
# 767 "lib/files.c"
; } size_t offset = 0; TSS2_RC rc = Tss2_MU_TPMT_PUBLIC_Unmarshal(buffer, size, &offset, template); if (rc != ((TSS2_RC)0)) { _log(log_level_error, "lib/files.c", 767, "Error deserializing ""template"" structure: 0x%x", rc); _log(log_level_error, "lib/files.c", 767, "The input file needs to be a valid ""TPMT_PUBLIC"" data structure"); return 
# 767 "lib/files.c" 3 4
0
# 767 "lib/files.c"
; } return rc == ((TPM2_RC)0x000); }

# 768 "lib/files.c" 3 4
_Bool 
# 768 "lib/files.c"
files_load_template_silent(const char *path, TPMT_PUBLIC *template) { UINT8 buffer[sizeof(*template)]; UINT32 size = sizeof(buffer); 
# 768 "lib/files.c" 3 4
_Bool 
# 768 "lib/files.c"
res = files_load_bytes_from_path(path, buffer, &size); if (!res) { return 
# 768 "lib/files.c" 3 4
0
# 768 "lib/files.c"
; } size_t offset = 0; TSS2_RC rc = Tss2_MU_TPMT_PUBLIC_Unmarshal(buffer, size, &offset, template); if (rc != ((TSS2_RC)0)) { return 
# 768 "lib/files.c" 3 4
0
# 768 "lib/files.c"
; } return rc == ((TPM2_RC)0x000); }


# 770 "lib/files.c" 3 4
_Bool 
# 770 "lib/files.c"
files_save_signature(TPMT_SIGNATURE *signature, const char *path) { size_t offset = 0; UINT8 buffer[sizeof(*signature)]; TSS2_RC rc = Tss2_MU_TPMT_SIGNATURE_Marshal(signature, buffer, sizeof(buffer), &offset); if (rc != ((TSS2_RC)0)) { _log(log_level_error, "lib/files.c", 770, "Error serializing ""signature"" structure: 0x%x", rc); return 
# 770 "lib/files.c" 3 4
0
# 770 "lib/files.c"
; } return files_save_bytes_to_file(path, buffer, offset); }

# 771 "lib/files.c" 3 4
_Bool 
# 771 "lib/files.c"
files_load_signature(const char *path, TPMT_SIGNATURE *signature) { UINT8 buffer[sizeof(*signature)]; UINT32 size = sizeof(buffer); 
# 771 "lib/files.c" 3 4
_Bool 
# 771 "lib/files.c"
res = files_load_bytes_from_path(path, buffer, &size); if (!res) { return 
# 771 "lib/files.c" 3 4
0
# 771 "lib/files.c"
; } size_t offset = 0; TSS2_RC rc = Tss2_MU_TPMT_SIGNATURE_Unmarshal(buffer, size, &offset, signature); if (rc != ((TSS2_RC)0)) { _log(log_level_error, "lib/files.c", 771, "Error deserializing ""signature"" structure: 0x%x", rc); _log(log_level_error, "lib/files.c", 771, "The input file needs to be a valid ""TPMT_SIGNATURE"" data structure"); return 
# 771 "lib/files.c" 3 4
0
# 771 "lib/files.c"
; } return rc == ((TPM2_RC)0x000); }

# 772 "lib/files.c" 3 4
_Bool 
# 772 "lib/files.c"
files_load_signature_silent(const char *path, TPMT_SIGNATURE *signature) { UINT8 buffer[sizeof(*signature)]; UINT32 size = sizeof(buffer); 
# 772 "lib/files.c" 3 4
_Bool 
# 772 "lib/files.c"
res = files_load_bytes_from_path(path, buffer, &size); if (!res) { return 
# 772 "lib/files.c" 3 4
0
# 772 "lib/files.c"
; } size_t offset = 0; TSS2_RC rc = Tss2_MU_TPMT_SIGNATURE_Unmarshal(buffer, size, &offset, signature); if (rc != ((TSS2_RC)0)) { return 
# 772 "lib/files.c" 3 4
0
# 772 "lib/files.c"
; } return rc == ((TPM2_RC)0x000); }


# 774 "lib/files.c" 3 4
_Bool 
# 774 "lib/files.c"
files_save_ticket(TPMT_TK_VERIFIED *ticket, const char *path) { size_t offset = 0; UINT8 buffer[sizeof(*ticket)]; TSS2_RC rc = Tss2_MU_TPMT_TK_VERIFIED_Marshal(ticket, buffer, sizeof(buffer), &offset); if (rc != ((TSS2_RC)0)) { _log(log_level_error, "lib/files.c", 774, "Error serializing ""ticket"" structure: 0x%x", rc); return 
# 774 "lib/files.c" 3 4
0
# 774 "lib/files.c"
; } return files_save_bytes_to_file(path, buffer, offset); }

# 775 "lib/files.c" 3 4
_Bool 
# 775 "lib/files.c"
files_load_ticket(const char *path, TPMT_TK_VERIFIED *ticket) { UINT8 buffer[sizeof(*ticket)]; UINT32 size = sizeof(buffer); 
# 775 "lib/files.c" 3 4
_Bool 
# 775 "lib/files.c"
res = files_load_bytes_from_path(path, buffer, &size); if (!res) { return 
# 775 "lib/files.c" 3 4
0
# 775 "lib/files.c"
; } size_t offset = 0; TSS2_RC rc = Tss2_MU_TPMT_TK_VERIFIED_Unmarshal(buffer, size, &offset, ticket); if (rc != ((TSS2_RC)0)) { _log(log_level_error, "lib/files.c", 775, "Error deserializing ""ticket"" structure: 0x%x", rc); _log(log_level_error, "lib/files.c", 775, "The input file needs to be a valid ""TPMT_TK_VERIFIED"" data structure"); return 
# 775 "lib/files.c" 3 4
0
# 775 "lib/files.c"
; } return rc == ((TPM2_RC)0x000); }


# 777 "lib/files.c" 3 4
_Bool 
# 777 "lib/files.c"
files_save_authorization_ticket(TPMT_TK_AUTH *authorization_ticket, const char *path) { size_t offset = 0; UINT8 buffer[sizeof(*authorization_ticket)]; TSS2_RC rc = Tss2_MU_TPMT_TK_AUTH_Marshal(authorization_ticket, buffer, sizeof(buffer), &offset); if (rc != ((TSS2_RC)0)) { _log(log_level_error, "lib/files.c", 777, "Error serializing ""authorization_ticket"" structure: 0x%x", rc); return 
# 777 "lib/files.c" 3 4
0
# 777 "lib/files.c"
; } return files_save_bytes_to_file(path, buffer, offset); }

# 778 "lib/files.c" 3 4
_Bool 
# 778 "lib/files.c"
files_load_authorization_ticket(const char *path, TPMT_TK_AUTH *authorization_ticket) { UINT8 buffer[sizeof(*authorization_ticket)]; UINT32 size = sizeof(buffer); 
# 778 "lib/files.c" 3 4
_Bool 
# 778 "lib/files.c"
res = files_load_bytes_from_path(path, buffer, &size); if (!res) { return 
# 778 "lib/files.c" 3 4
0
# 778 "lib/files.c"
; } size_t offset = 0; TSS2_RC rc = Tss2_MU_TPMT_TK_AUTH_Unmarshal(buffer, size, &offset, authorization_ticket); if (rc != ((TSS2_RC)0)) { _log(log_level_error, "lib/files.c", 778, "Error deserializing ""authorization_ticket"" structure: 0x%x", rc); _log(log_level_error, "lib/files.c", 778, "The input file needs to be a valid ""TPMT_TK_AUTH"" data structure"); return 
# 778 "lib/files.c" 3 4
0
# 778 "lib/files.c"
; } return rc == ((TPM2_RC)0x000); }


# 780 "lib/files.c" 3 4
_Bool 
# 780 "lib/files.c"
files_save_creation_ticket(TPMT_TK_CREATION *creation_ticket, const char *path) { size_t offset = 0; UINT8 buffer[sizeof(*creation_ticket)]; TSS2_RC rc = Tss2_MU_TPMT_TK_CREATION_Marshal(creation_ticket, buffer, sizeof(buffer), &offset); if (rc != ((TSS2_RC)0)) { _log(log_level_error, "lib/files.c", 780, "Error serializing ""creation_ticket"" structure: 0x%x", rc); return 
# 780 "lib/files.c" 3 4
0
# 780 "lib/files.c"
; } return files_save_bytes_to_file(path, buffer, offset); }

# 781 "lib/files.c" 3 4
_Bool 
# 781 "lib/files.c"
files_load_creation_ticket(const char *path, TPMT_TK_CREATION *creation_ticket) { UINT8 buffer[sizeof(*creation_ticket)]; UINT32 size = sizeof(buffer); 
# 781 "lib/files.c" 3 4
_Bool 
# 781 "lib/files.c"
res = files_load_bytes_from_path(path, buffer, &size); if (!res) { return 
# 781 "lib/files.c" 3 4
0
# 781 "lib/files.c"
; } size_t offset = 0; TSS2_RC rc = Tss2_MU_TPMT_TK_CREATION_Unmarshal(buffer, size, &offset, creation_ticket); if (rc != ((TSS2_RC)0)) { _log(log_level_error, "lib/files.c", 781, "Error deserializing ""creation_ticket"" structure: 0x%x", rc); _log(log_level_error, "lib/files.c", 781, "The input file needs to be a valid ""TPMT_TK_CREATION"" data structure"); return 
# 781 "lib/files.c" 3 4
0
# 781 "lib/files.c"
; } return rc == ((TPM2_RC)0x000); }


# 783 "lib/files.c" 3 4
_Bool 
# 783 "lib/files.c"
files_save_digest(TPM2B_DIGEST *digest, const char *path) { size_t offset = 0; UINT8 buffer[sizeof(*digest)]; TSS2_RC rc = Tss2_MU_TPM2B_DIGEST_Marshal(digest, buffer, sizeof(buffer), &offset); if (rc != ((TSS2_RC)0)) { _log(log_level_error, "lib/files.c", 783, "Error serializing ""digest"" structure: 0x%x", rc); return 
# 783 "lib/files.c" 3 4
0
# 783 "lib/files.c"
; } return files_save_bytes_to_file(path, buffer, offset); }

# 784 "lib/files.c" 3 4
_Bool 
# 784 "lib/files.c"
files_load_digest(const char *path, TPM2B_DIGEST *digest) { UINT8 buffer[sizeof(*digest)]; UINT32 size = sizeof(buffer); 
# 784 "lib/files.c" 3 4
_Bool 
# 784 "lib/files.c"
res = files_load_bytes_from_path(path, buffer, &size); if (!res) { return 
# 784 "lib/files.c" 3 4
0
# 784 "lib/files.c"
; } size_t offset = 0; TSS2_RC rc = Tss2_MU_TPM2B_DIGEST_Unmarshal(buffer, size, &offset, digest); if (rc != ((TSS2_RC)0)) { _log(log_level_error, "lib/files.c", 784, "Error deserializing ""digest"" structure: 0x%x", rc); _log(log_level_error, "lib/files.c", 784, "The input file needs to be a valid ""TPM2B_DIGEST"" data structure"); return 
# 784 "lib/files.c" 3 4
0
# 784 "lib/files.c"
; } return rc == ((TPM2_RC)0x000); }


# 786 "lib/files.c" 3 4
_Bool 
# 786 "lib/files.c"
files_save_creation_data(TPM2B_CREATION_DATA *creation_data, const char *path) { size_t offset = 0; UINT8 buffer[sizeof(*creation_data)]; TSS2_RC rc = Tss2_MU_TPM2B_CREATION_DATA_Marshal(creation_data, buffer, sizeof(buffer), &offset); if (rc != ((TSS2_RC)0)) { _log(log_level_error, "lib/files.c", 786, "Error serializing ""creation_data"" structure: 0x%x", rc); return 
# 786 "lib/files.c" 3 4
0
# 786 "lib/files.c"
; } return files_save_bytes_to_file(path, buffer, offset); }

# 787 "lib/files.c" 3 4
_Bool 
# 787 "lib/files.c"
files_load_creation_data(const char *path, TPM2B_CREATION_DATA *creation_data) { UINT8 buffer[sizeof(*creation_data)]; UINT32 size = sizeof(buffer); 
# 787 "lib/files.c" 3 4
_Bool 
# 787 "lib/files.c"
res = files_load_bytes_from_path(path, buffer, &size); if (!res) { return 
# 787 "lib/files.c" 3 4
0
# 787 "lib/files.c"
; } size_t offset = 0; TSS2_RC rc = Tss2_MU_TPM2B_CREATION_DATA_Unmarshal(buffer, size, &offset, creation_data); if (rc != ((TSS2_RC)0)) { _log(log_level_error, "lib/files.c", 787, "Error deserializing ""creation_data"" structure: 0x%x", rc); _log(log_level_error, "lib/files.c", 787, "The input file needs to be a valid ""TPM2B_CREATION_DATA"" data structure"); return 
# 787 "lib/files.c" 3 4
0
# 787 "lib/files.c"
; } return rc == ((TPM2_RC)0x000); }


# 789 "lib/files.c" 3 4
_Bool 
# 789 "lib/files.c"
files_save_sensitive(TPM2B_SENSITIVE *sensitive, const char *path) { size_t offset = 0; UINT8 buffer[sizeof(*sensitive)]; TSS2_RC rc = Tss2_MU_TPM2B_SENSITIVE_Marshal(sensitive, buffer, sizeof(buffer), &offset); if (rc != ((TSS2_RC)0)) { _log(log_level_error, "lib/files.c", 789, "Error serializing ""sensitive"" structure: 0x%x", rc); return 
# 789 "lib/files.c" 3 4
0
# 789 "lib/files.c"
; } return files_save_bytes_to_file(path, buffer, offset); }

# 790 "lib/files.c" 3 4
_Bool 
# 790 "lib/files.c"
files_load_sensitive(const char *path, TPM2B_SENSITIVE *sensitive) { UINT8 buffer[sizeof(*sensitive)]; UINT32 size = sizeof(buffer); 
# 790 "lib/files.c" 3 4
_Bool 
# 790 "lib/files.c"
res = files_load_bytes_from_path(path, buffer, &size); if (!res) { return 
# 790 "lib/files.c" 3 4
0
# 790 "lib/files.c"
; } size_t offset = 0; TSS2_RC rc = Tss2_MU_TPM2B_SENSITIVE_Unmarshal(buffer, size, &offset, sensitive); if (rc != ((TSS2_RC)0)) { _log(log_level_error, "lib/files.c", 790, "Error deserializing ""sensitive"" structure: 0x%x", rc); _log(log_level_error, "lib/files.c", 790, "The input file needs to be a valid ""TPM2B_SENSITIVE"" data structure"); return 
# 790 "lib/files.c" 3 4
0
# 790 "lib/files.c"
; } return rc == ((TPM2_RC)0x000); }


# 792 "lib/files.c" 3 4
_Bool 
# 792 "lib/files.c"
files_save_validation(TPMT_TK_HASHCHECK *validation, const char *path) { size_t offset = 0; UINT8 buffer[sizeof(*validation)]; TSS2_RC rc = Tss2_MU_TPMT_TK_HASHCHECK_Marshal(validation, buffer, sizeof(buffer), &offset); if (rc != ((TSS2_RC)0)) { _log(log_level_error, "lib/files.c", 792, "Error serializing ""validation"" structure: 0x%x", rc); return 
# 792 "lib/files.c" 3 4
0
# 792 "lib/files.c"
; } return files_save_bytes_to_file(path, buffer, offset); }

# 793 "lib/files.c" 3 4
_Bool 
# 793 "lib/files.c"
files_load_validation(const char *path, TPMT_TK_HASHCHECK *validation) { UINT8 buffer[sizeof(*validation)]; UINT32 size = sizeof(buffer); 
# 793 "lib/files.c" 3 4
_Bool 
# 793 "lib/files.c"
res = files_load_bytes_from_path(path, buffer, &size); if (!res) { return 
# 793 "lib/files.c" 3 4
0
# 793 "lib/files.c"
; } size_t offset = 0; TSS2_RC rc = Tss2_MU_TPMT_TK_HASHCHECK_Unmarshal(buffer, size, &offset, validation); if (rc != ((TSS2_RC)0)) { _log(log_level_error, "lib/files.c", 793, "Error deserializing ""validation"" structure: 0x%x", rc); _log(log_level_error, "lib/files.c", 793, "The input file needs to be a valid ""TPMT_TK_HASHCHECK"" data structure"); return 
# 793 "lib/files.c" 3 4
0
# 793 "lib/files.c"
; } return rc == ((TPM2_RC)0x000); }


# 795 "lib/files.c" 3 4
_Bool 
# 795 "lib/files.c"
files_save_private(TPM2B_PRIVATE *private, const char *path) { size_t offset = 0; UINT8 buffer[sizeof(*private)]; TSS2_RC rc = Tss2_MU_TPM2B_PRIVATE_Marshal(private, buffer, sizeof(buffer), &offset); if (rc != ((TSS2_RC)0)) { _log(log_level_error, "lib/files.c", 795, "Error serializing ""private"" structure: 0x%x", rc); return 
# 795 "lib/files.c" 3 4
0
# 795 "lib/files.c"
; } return files_save_bytes_to_file(path, buffer, offset); }

# 796 "lib/files.c" 3 4
_Bool 
# 796 "lib/files.c"
files_load_private(const char *path, TPM2B_PRIVATE *private) { UINT8 buffer[sizeof(*private)]; UINT32 size = sizeof(buffer); 
# 796 "lib/files.c" 3 4
_Bool 
# 796 "lib/files.c"
res = files_load_bytes_from_path(path, buffer, &size); if (!res) { return 
# 796 "lib/files.c" 3 4
0
# 796 "lib/files.c"
; } size_t offset = 0; TSS2_RC rc = Tss2_MU_TPM2B_PRIVATE_Unmarshal(buffer, size, &offset, private); if (rc != ((TSS2_RC)0)) { _log(log_level_error, "lib/files.c", 796, "Error deserializing ""private"" structure: 0x%x", rc); _log(log_level_error, "lib/files.c", 796, "The input file needs to be a valid ""TPM2B_PRIVATE"" data structure"); return 
# 796 "lib/files.c" 3 4
0
# 796 "lib/files.c"
; } return rc == ((TPM2_RC)0x000); }


# 798 "lib/files.c" 3 4
_Bool 
# 798 "lib/files.c"
files_save_encrypted_seed(TPM2B_ENCRYPTED_SECRET *encrypted_seed, const char *path) { size_t offset = 0; UINT8 buffer[sizeof(*encrypted_seed)]; TSS2_RC rc = Tss2_MU_TPM2B_ENCRYPTED_SECRET_Marshal(encrypted_seed, buffer, sizeof(buffer), &offset); if (rc != ((TSS2_RC)0)) { _log(log_level_error, "lib/files.c", 798, "Error serializing ""encrypted_seed"" structure: 0x%x", rc); return 
# 798 "lib/files.c" 3 4
0
# 798 "lib/files.c"
; } return files_save_bytes_to_file(path, buffer, offset); }

# 799 "lib/files.c" 3 4
_Bool 
# 799 "lib/files.c"
files_load_encrypted_seed(const char *path, TPM2B_ENCRYPTED_SECRET *encrypted_seed) { UINT8 buffer[sizeof(*encrypted_seed)]; UINT32 size = sizeof(buffer); 
# 799 "lib/files.c" 3 4
_Bool 
# 799 "lib/files.c"
res = files_load_bytes_from_path(path, buffer, &size); if (!res) { return 
# 799 "lib/files.c" 3 4
0
# 799 "lib/files.c"
; } size_t offset = 0; TSS2_RC rc = Tss2_MU_TPM2B_ENCRYPTED_SECRET_Unmarshal(buffer, size, &offset, encrypted_seed); if (rc != ((TSS2_RC)0)) { _log(log_level_error, "lib/files.c", 799, "Error deserializing ""encrypted_seed"" structure: 0x%x", rc); _log(log_level_error, "lib/files.c", 799, "The input file needs to be a valid ""TPM2B_ENCRYPTED_SECRET"" data structure"); return 
# 799 "lib/files.c" 3 4
0
# 799 "lib/files.c"
; } return rc == ((TPM2_RC)0x000); }


# 801 "lib/files.c" 3 4
_Bool 
# 801 "lib/files.c"
files_save_ecc_details(TPMS_ALGORITHM_DETAIL_ECC *ecc_details, const char *path) { size_t offset = 0; UINT8 buffer[sizeof(*ecc_details)]; TSS2_RC rc = Tss2_MU_TPMS_ALGORITHM_DETAIL_ECC_Marshal(ecc_details, buffer, sizeof(buffer), &offset); if (rc != ((TSS2_RC)0)) { _log(log_level_error, "lib/files.c", 801, "Error serializing ""ecc_details"" structure: 0x%x", rc); return 
# 801 "lib/files.c" 3 4
0
# 801 "lib/files.c"
; } return files_save_bytes_to_file(path, buffer, offset); }


# 803 "lib/files.c" 3 4
_Bool 
# 803 "lib/files.c"
files_save_ecc_point(TPM2B_ECC_POINT *ecc_point, const char *path) { size_t offset = 0; UINT8 buffer[sizeof(*ecc_point)]; TSS2_RC rc = Tss2_MU_TPM2B_ECC_POINT_Marshal(ecc_point, buffer, sizeof(buffer), &offset); if (rc != ((TSS2_RC)0)) { _log(log_level_error, "lib/files.c", 803, "Error serializing ""ecc_point"" structure: 0x%x", rc); return 
# 803 "lib/files.c" 3 4
0
# 803 "lib/files.c"
; } return files_save_bytes_to_file(path, buffer, offset); }

# 804 "lib/files.c" 3 4
_Bool 
# 804 "lib/files.c"
files_load_ecc_point(const char *path, TPM2B_ECC_POINT *ecc_point) { UINT8 buffer[sizeof(*ecc_point)]; UINT32 size = sizeof(buffer); 
# 804 "lib/files.c" 3 4
_Bool 
# 804 "lib/files.c"
res = files_load_bytes_from_path(path, buffer, &size); if (!res) { return 
# 804 "lib/files.c" 3 4
0
# 804 "lib/files.c"
; } size_t offset = 0; TSS2_RC rc = Tss2_MU_TPM2B_ECC_POINT_Unmarshal(buffer, size, &offset, ecc_point); if (rc != ((TSS2_RC)0)) { _log(log_level_error, "lib/files.c", 804, "Error deserializing ""ecc_point"" structure: 0x%x", rc); _log(log_level_error, "lib/files.c", 804, "The input file needs to be a valid ""TPM2B_ECC_POINT"" data structure"); return 
# 804 "lib/files.c" 3 4
0
# 804 "lib/files.c"
; } return rc == ((TPM2_RC)0x000); }


# 806 "lib/files.c" 3 4
_Bool 
# 806 "lib/files.c"
files_load_ecc_parameter(const char *path, TPM2B_ECC_PARAMETER *ecc_parameter) { UINT8 buffer[sizeof(*ecc_parameter)]; UINT32 size = sizeof(buffer); 
# 806 "lib/files.c" 3 4
_Bool 
# 806 "lib/files.c"
res = files_load_bytes_from_path(path, buffer, &size); if (!res) { return 
# 806 "lib/files.c" 3 4
0
# 806 "lib/files.c"
; } size_t offset = 0; TSS2_RC rc = Tss2_MU_TPM2B_ECC_PARAMETER_Unmarshal(buffer, size, &offset, ecc_parameter); if (rc != ((TSS2_RC)0)) { _log(log_level_error, "lib/files.c", 806, "Error deserializing ""ecc_parameter"" structure: 0x%x", rc); _log(log_level_error, "lib/files.c", 806, "The input file needs to be a valid ""TPM2B_ECC_PARAMETER"" data structure"); return 
# 806 "lib/files.c" 3 4
0
# 806 "lib/files.c"
; } return rc == ((TPM2_RC)0x000); }


# 808 "lib/files.c" 3 4
_Bool 
# 808 "lib/files.c"
files_load_attest_file(FILE *f, const char *path, TPMS_ATTEST *attest) { UINT8 buffer[sizeof(*attest)]; UINT32 size = sizeof(buffer); 
# 808 "lib/files.c" 3 4
_Bool 
# 808 "lib/files.c"
res = file_read_bytes_from_file(f, buffer, &size, path); if (!res) { return 
# 808 "lib/files.c" 3 4
0
# 808 "lib/files.c"
; } size_t offset = 0; TSS2_RC rc = Tss2_MU_TPMS_ATTEST_Unmarshal(buffer, size, &offset, attest); if (rc != ((TSS2_RC)0)) { _log(log_level_error, "lib/files.c", 808, "Error deserializing ""attest"" structure: 0x%x", rc); _log(log_level_error, "lib/files.c", 808, "The input file needs to be a valid ""TPMS_ATTEST"" data structure"); return 
# 808 "lib/files.c" 3 4
0
# 808 "lib/files.c"
; } return rc == ((TPM2_RC)0x000); }

tool_rc files_tpm2b_attest_to_tpms_attest(TPM2B_ATTEST *quoted, TPMS_ATTEST *attest) {

    size_t offset = 0;
    TSS2_RC rval = Tss2_MU_TPMS_ATTEST_Unmarshal(quoted->attestationData,
            quoted->size, &offset, attest);
    if (rval != ((TSS2_RC)0)) {
        _LOG_PERR("Tss2_MU_TPM2B_ATTEST_Unmarshal", rval);
        return tool_rc_from_tpm(rval);
    }

    return tool_rc_success;
}

tool_rc files_load_unique_data(const char *file_path, TPM2B_PUBLIC *public_data) {
# 833 "lib/files.c"
    UINT16 unique_size = sizeof(public_data->publicArea.unique);
    uint8_t file_data[sizeof(public_data->publicArea.unique)];
    
# 835 "lib/files.c" 3 4
   _Bool 
# 835 "lib/files.c"
        result = files_load_bytes_from_buffer_or_file_or_stdin(
# 835 "lib/files.c" 3 4
                                                               ((void *)0)
# 835 "lib/files.c"
                                                                   ,
    file_path, &unique_size, file_data);
    if (!result) {
        _log(log_level_error, "lib/files.c", 838, "Failed to load unique data from file/ stdin.");
        return tool_rc_general_error;
    }





    if (file_path) {
        memcpy(&public_data->publicArea.unique, file_data, unique_size);
        return tool_rc_success;
    }


    if (public_data->publicArea.type == ((TPM2_ALG_ID)0x0001)) {
        if (unique_size > 512) {
            _log(log_level_error, "lib/files.c", 854, "Unique data too big for RSA object's allowed unique size");
            return tool_rc_general_error;
        }
        public_data->publicArea.unique.rsa.size = unique_size;
        memcpy(&public_data->publicArea.unique.rsa.buffer, file_data,
        unique_size);
    }


    if (public_data->publicArea.type == ((TPM2_ALG_ID)0x0023)) {

        if((unique_size / 2) > 128) {
            _log(log_level_error, "lib/files.c", 866, "Unique data too big for ECC object's allowed unique size");
            return tool_rc_general_error;
        }

        public_data->publicArea.unique.ecc.x.size = (unique_size / 2);
        memcpy(&public_data->publicArea.unique.ecc.x.buffer, file_data,
        (unique_size / 2));

        public_data->publicArea.unique.ecc.y.size = (unique_size / 2) +
        (unique_size % 2);
        memcpy(&public_data->publicArea.unique.ecc.y.buffer,
        file_data + (unique_size / 2), (unique_size / 2));
    }


    if (public_data->publicArea.type == ((TPM2_ALG_ID)0x0008)) {

        if (unique_size > sizeof(TPMU_HA)) {
            _log(log_level_error, "lib/files.c", 884, "Unique data too big for keyedhash object's allowed unique " "size.")
                    ;
            return tool_rc_general_error;
        }
        public_data->publicArea.unique.keyedHash.size = unique_size;
        memcpy(&public_data->publicArea.unique.keyedHash.buffer, file_data,
        unique_size);
    }


    if (public_data->publicArea.type == ((TPM2_ALG_ID)0x0025)) {

        if (unique_size > sizeof(TPMU_HA)) {
            _log(log_level_error, "lib/files.c", 897, "Unique data too big for TPM2_ALG_SYMCIPHER object's " "allowed unique size.")
                                           ;
            return tool_rc_general_error;
        }
        public_data->publicArea.unique.sym.size = unique_size;
        memcpy(&public_data->publicArea.unique.sym.buffer, file_data,
        unique_size);
    }

    return tool_rc_success;
}
