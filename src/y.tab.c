/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 26 "src/p.y"

/* Turn off unreachable code warnings for the entire generated parser */
#if defined(__clang__) || defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunreachable-code"
#endif

/*
 * DESCRIPTION
 *   Simple context-free grammar for parsing the control file.
 *
 */

#include "config.h"

#ifdef HAVE_STDIO_H
#include <stdio.h>
#endif

#ifdef HAVE_STDLIB_H
#include <stdlib.h>
#endif

#ifdef HAVE_ERRNO_H
#include <errno.h>
#endif

#ifdef HAVE_CTYPE_H
#include <ctype.h>
#endif

#ifdef HAVE_PWD_H
#include <pwd.h>
#endif

#ifdef HAVE_GRP_H
#include <grp.h>
#endif

#ifdef HAVE_SYS_TYPES_H
#include <sys/types.h>
#endif

#ifdef HAVE_SYS_TIME_H
#include <sys/time.h>
#endif

#ifdef HAVE_TIME_H
#include <time.h>
#endif

#ifdef HAVE_SYS_SOCKET_H
#include <sys/socket.h>
#endif

#ifdef HAVE_ASM_PARAM_H
#include <asm/param.h>
#endif

#ifdef HAVE_STRING_H
#include <string.h>
#endif

#ifdef HAVE_STRINGS_H
#include <strings.h>
#endif

#ifdef HAVE_NETDB_H
#include <netdb.h>
#endif

#ifdef HAVE_SYSLOG_H
#include <syslog.h>
#endif

#ifdef HAVE_NETINET_IN_SYSTM_H
#include <netinet/in_systm.h>
#endif

#ifdef HAVE_NETINET_IN_H
#include <netinet/in.h>
#endif

#ifdef HAVE_NETINET_IP_H
#include <netinet/ip.h>
#endif

#ifdef HAVE_NETINET_IP_ICMP_H
#include <netinet/ip_icmp.h>
#endif

#ifdef HAVE_REGEX_H
#include <regex.h>
#endif

#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif

#ifdef HAVE_OPENSSL
#include <openssl/ssl.h>
#endif

#include "monit.h"
#include "protocol.h"
#include "engine.h"
#include "alert.h"
#include "device.h"
#include "processor.h"
#include "md5.h"
#include "sha1.h"
#include "checksum.h"
#include "ProcessTree.h"
#include "process_sysdep.h"

// libmonit
#include "system/Time.h"
#include "io/File.h"
#include "util/Str.h"
#include "thread/Thread.h"


/* ------------------------------------------------------------- Definitions */


struct precedence_t {
        bool daemon;
        bool logfile;
        bool pidfile;
        bool idfile;
        bool statefile;
};

struct rate_t {
        unsigned int count;
        unsigned int cycles;
};

/* yacc interface */
void  yyerror(const char *,...) __attribute__((format (printf, 1, 2)));
void  yyerror2(const char *,...) __attribute__((format (printf, 1, 2)));
void  yywarning(const char *,...) __attribute__((format (printf, 1, 2)));
void  yywarning2(const char *,...) __attribute__((format (printf, 1, 2)));

/* lexer interface */
int yylex(void);
extern FILE *yyin;
extern int lineno;
extern int arglineno;
extern char *yytext;
extern char *argyytext;
extern char *currentfile;
extern char *argcurrentfile;
extern int buffer_stack_ptr;

/* Local variables */
static int cfg_errflag = 0;
static Service_T tail = NULL;
static Service_T current = NULL;
static Request_T urlrequest = NULL;
static command_t command = NULL;
static command_t command1 = NULL;
static command_t command2 = NULL;
static Service_T depend_list = NULL;
static struct Uid_T uidset = {};
static struct Gid_T gidset = {};
static struct Pid_T pidset = {};
static struct Pid_T ppidset = {};
static struct FsFlag_T fsflagset = {};
static struct NonExist_T nonexistset = {};
static struct Exist_T existset = {};
static struct Status_T statusset = {};
static struct Perm_T permset = {};
static struct Size_T sizeset = {};
static struct NLink_T nlinkset = {};
static struct Uptime_T uptimeset = {};
static struct ResponseTime_T responsetimeset = {};
static struct LinkStatus_T linkstatusset = {};
static struct LinkSpeed_T linkspeedset = {};
static struct LinkSaturation_T linksaturationset = {};
static struct Bandwidth_T bandwidthset = {};
static struct Match_T matchset = {};
static struct Icmp_T icmpset = {};
static struct Mail_T mailset = {};
static struct SslOptions_T sslset = {};
static struct Port_T portset = {};
static struct MailServer_T mailserverset = {};
static struct Mmonit_T mmonitset = {};
static struct FileSystem_T filesystemset = {};
static struct Resource_T resourceset = {};
static struct Checksum_T checksumset = {};
static struct Timestamp_T timestampset = {};
static struct ActionRate_T actionrateset = {};
static struct precedence_t ihp = {false, false, false, false, false};
static struct rate_t rate = {1, 1};
static struct rate_t rate1 = {1, 1};
static struct rate_t rate2 = {1, 1};
static char * htpasswd_file = NULL;
static unsigned int repeat = 0;
static unsigned int repeat1 = 0;
static unsigned int repeat2 = 0;
static unsigned int timeout = 0;
static Digest_Type digesttype = Digest_Cleartext;

#define BITMAP_MAX (sizeof(long long) * 8)


/* -------------------------------------------------------------- Prototypes */

static void  preparse(void);
static void  postparse(void);
static bool _parseOutgoingAddress(char *ip, Outgoing_T *outgoing);
static void  addmail(char *, Mail_T, Mail_T *);
static Service_T createservice(Service_Type, char *, char *, State_Type (*)(Service_T));
static void  addservice(Service_T);
static void  adddependant(char *);
static void  addservicegroup(char *);
static void  addhostgroup(char *name);
static void  addport(Port_T *, Port_T);
static void  addhttpheader(Port_T, char *);
static void  addresource(Resource_T);
static void  addtimestamp(Timestamp_T);
static void  addactionrate(ActionRate_T);
static void  addsize(Size_T);
static void  addnlink(NLink_T);
static void  adduptime(Uptime_T);
static void  addpid(Pid_T);
static void  addppid(Pid_T);
static void  addfsflag(FsFlag_T);
static void  addnonexist(NonExist_T);
static void  addexist(Exist_T);
static void  addlinkstatus(Service_T, LinkStatus_T);
static void  addlinkspeed(Service_T, LinkSpeed_T);
static void  addlinksaturation(Service_T, LinkSaturation_T);
static void  addbandwidth(Bandwidth_T *, Bandwidth_T);
static void  addfilesystem(FileSystem_T);
static void  addicmp(Icmp_T);
static void  addgeneric(Port_T, char*, char*);
static void  addcommand(int, unsigned);
static void  addargument(char *);
static void  addmmonit(Mmonit_T);
static void  addmailserver(MailServer_T);
static bool addcredentials(char *, char *, Digest_Type, bool);
#ifdef HAVE_LIBPAM
static void  addpamauth(char *, int);
#endif
static void  addhtpasswdentry(char *, char *, Digest_Type);
static uid_t get_uid(char *, uid_t);
static gid_t get_gid(char *, gid_t);
static void  addchecksum(Checksum_T);
static void  addperm(Perm_T);
static void  addmatch(Match_T, int, int);
static void  addmatchpath(Match_T, Action_Type);
static void  addoutputchange(bool, Action_Type, Action_Type);
static void  addstatus(Status_T);
static Uid_T adduid(Uid_T);
static Gid_T addgid(Gid_T);
static void  addeuid(uid_t);
static void  addegid(gid_t);
static void  addeventaction(EventAction_T *, Action_Type, Action_Type);
static void  prepare_urlrequest(URL_T U);
static void  seturlrequest(int, char *);
static void  setlogfile(char *);
static void  setpidfile(char *);
static void  setidfile(char *);
static void  setstatefile(char *);
static void  reset_sslset(void);
static void  reset_mailset(void);
static void  reset_mailserverset(void);
static void  reset_mmonitset(void);
static void  reset_portset(void);
static void  reset_resourceset(void);
static void  reset_timestampset(void);
static void  reset_actionrateset(void);
static void  reset_sizeset(void);
static void  reset_nlinkset(void);
static void  reset_uptimeset(void);
static void  reset_responsetimeset(void);
static void  reset_pidset(void);
static void  reset_ppidset(void);
static void  reset_fsflagset(void);
static void  reset_nonexistset(void);
static void  reset_existset(void);
static void  reset_linkstatusset(void);
static void  reset_linkspeedset(void);
static void  reset_linksaturationset(void);
static void  reset_bandwidthset(void);
static void  reset_checksumset(void);
static void  reset_permset(void);
static void  reset_uidset(void);
static void  reset_gidset(void);
static void  reset_statusset(void);
static void  reset_filesystemset(void);
static void  reset_icmpset(void);
static void  reset_rateset(struct rate_t *);
static void  check_name(char *);
static int   check_perm(int);
static void  check_exec(char *);
static int   cleanup_hash_string(char *);
static void  check_depend(void);
static void  setsyslog(char *);
static command_t copycommand(command_t);
static int verifyMaxForward(int);
static void _setPEM(char **store, char *path, const char *description, bool isFile);
static void _setSSLOptions(SslOptions_T options);
#ifdef HAVE_OPENSSL
static void _setSSLVersion(short version);
#endif
static void _unsetSSLVersion(short version);
static void addsecurityattribute(char *, Action_Type, Action_Type);
static void addfiledescriptors(Operator_Type, bool, long long, float, Action_Type, Action_Type);
static void _sanityCheckEveryStatement(Service_T s);


#line 386 "src/y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "y.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_ELSE = 4,                       /* ELSE  */
  YYSYMBOL_THEN = 5,                       /* THEN  */
  YYSYMBOL_FAILED = 6,                     /* FAILED  */
  YYSYMBOL_SET = 7,                        /* SET  */
  YYSYMBOL_LOGFILE = 8,                    /* LOGFILE  */
  YYSYMBOL_FACILITY = 9,                   /* FACILITY  */
  YYSYMBOL_DAEMON = 10,                    /* DAEMON  */
  YYSYMBOL_SYSLOG = 11,                    /* SYSLOG  */
  YYSYMBOL_MAILSERVER = 12,                /* MAILSERVER  */
  YYSYMBOL_HTTPD = 13,                     /* HTTPD  */
  YYSYMBOL_ALLOW = 14,                     /* ALLOW  */
  YYSYMBOL_REJECTOPT = 15,                 /* REJECTOPT  */
  YYSYMBOL_ADDRESS = 16,                   /* ADDRESS  */
  YYSYMBOL_INIT = 17,                      /* INIT  */
  YYSYMBOL_TERMINAL = 18,                  /* TERMINAL  */
  YYSYMBOL_BATCH = 19,                     /* BATCH  */
  YYSYMBOL_READONLY = 20,                  /* READONLY  */
  YYSYMBOL_CLEARTEXT = 21,                 /* CLEARTEXT  */
  YYSYMBOL_MD5HASH = 22,                   /* MD5HASH  */
  YYSYMBOL_SHA1HASH = 23,                  /* SHA1HASH  */
  YYSYMBOL_CRYPT = 24,                     /* CRYPT  */
  YYSYMBOL_DELAY = 25,                     /* DELAY  */
  YYSYMBOL_PEMFILE = 26,                   /* PEMFILE  */
  YYSYMBOL_PEMKEY = 27,                    /* PEMKEY  */
  YYSYMBOL_PEMCHAIN = 28,                  /* PEMCHAIN  */
  YYSYMBOL_ENABLE = 29,                    /* ENABLE  */
  YYSYMBOL_DISABLE = 30,                   /* DISABLE  */
  YYSYMBOL_SSLTOKEN = 31,                  /* SSLTOKEN  */
  YYSYMBOL_CIPHER = 32,                    /* CIPHER  */
  YYSYMBOL_CLIENTPEMFILE = 33,             /* CLIENTPEMFILE  */
  YYSYMBOL_ALLOWSELFCERTIFICATION = 34,    /* ALLOWSELFCERTIFICATION  */
  YYSYMBOL_SELFSIGNED = 35,                /* SELFSIGNED  */
  YYSYMBOL_VERIFY = 36,                    /* VERIFY  */
  YYSYMBOL_CERTIFICATE = 37,               /* CERTIFICATE  */
  YYSYMBOL_CACERTIFICATEFILE = 38,         /* CACERTIFICATEFILE  */
  YYSYMBOL_CACERTIFICATEPATH = 39,         /* CACERTIFICATEPATH  */
  YYSYMBOL_VALID = 40,                     /* VALID  */
  YYSYMBOL_INTERFACE = 41,                 /* INTERFACE  */
  YYSYMBOL_LINK = 42,                      /* LINK  */
  YYSYMBOL_PACKET = 43,                    /* PACKET  */
  YYSYMBOL_BYTEIN = 44,                    /* BYTEIN  */
  YYSYMBOL_BYTEOUT = 45,                   /* BYTEOUT  */
  YYSYMBOL_PACKETIN = 46,                  /* PACKETIN  */
  YYSYMBOL_PACKETOUT = 47,                 /* PACKETOUT  */
  YYSYMBOL_SPEED = 48,                     /* SPEED  */
  YYSYMBOL_SATURATION = 49,                /* SATURATION  */
  YYSYMBOL_UPLOAD = 50,                    /* UPLOAD  */
  YYSYMBOL_DOWNLOAD = 51,                  /* DOWNLOAD  */
  YYSYMBOL_TOTAL = 52,                     /* TOTAL  */
  YYSYMBOL_UP = 53,                        /* UP  */
  YYSYMBOL_DOWN = 54,                      /* DOWN  */
  YYSYMBOL_IDFILE = 55,                    /* IDFILE  */
  YYSYMBOL_STATEFILE = 56,                 /* STATEFILE  */
  YYSYMBOL_SEND = 57,                      /* SEND  */
  YYSYMBOL_EXPECT = 58,                    /* EXPECT  */
  YYSYMBOL_CYCLE = 59,                     /* CYCLE  */
  YYSYMBOL_COUNT = 60,                     /* COUNT  */
  YYSYMBOL_REMINDER = 61,                  /* REMINDER  */
  YYSYMBOL_REPEAT = 62,                    /* REPEAT  */
  YYSYMBOL_LIMITS = 63,                    /* LIMITS  */
  YYSYMBOL_SENDEXPECTBUFFER = 64,          /* SENDEXPECTBUFFER  */
  YYSYMBOL_EXPECTBUFFER = 65,              /* EXPECTBUFFER  */
  YYSYMBOL_FILECONTENTBUFFER = 66,         /* FILECONTENTBUFFER  */
  YYSYMBOL_HTTPCONTENTBUFFER = 67,         /* HTTPCONTENTBUFFER  */
  YYSYMBOL_PROGRAMOUTPUT = 68,             /* PROGRAMOUTPUT  */
  YYSYMBOL_NETWORKTIMEOUT = 69,            /* NETWORKTIMEOUT  */
  YYSYMBOL_PROGRAMTIMEOUT = 70,            /* PROGRAMTIMEOUT  */
  YYSYMBOL_STARTTIMEOUT = 71,              /* STARTTIMEOUT  */
  YYSYMBOL_STOPTIMEOUT = 72,               /* STOPTIMEOUT  */
  YYSYMBOL_RESTARTTIMEOUT = 73,            /* RESTARTTIMEOUT  */
  YYSYMBOL_EXECTIMEOUT = 74,               /* EXECTIMEOUT  */
  YYSYMBOL_PIDFILE = 75,                   /* PIDFILE  */
  YYSYMBOL_START = 76,                     /* START  */
  YYSYMBOL_STOP = 77,                      /* STOP  */
  YYSYMBOL_PATHTOK = 78,                   /* PATHTOK  */
  YYSYMBOL_RSAKEY = 79,                    /* RSAKEY  */
  YYSYMBOL_HOST = 80,                      /* HOST  */
  YYSYMBOL_HOSTNAME = 81,                  /* HOSTNAME  */
  YYSYMBOL_PORT = 82,                      /* PORT  */
  YYSYMBOL_IPV4 = 83,                      /* IPV4  */
  YYSYMBOL_IPV6 = 84,                      /* IPV6  */
  YYSYMBOL_TYPE = 85,                      /* TYPE  */
  YYSYMBOL_UDP = 86,                       /* UDP  */
  YYSYMBOL_TCP = 87,                       /* TCP  */
  YYSYMBOL_TCPSSL = 88,                    /* TCPSSL  */
  YYSYMBOL_PROTOCOL = 89,                  /* PROTOCOL  */
  YYSYMBOL_CONNECTION = 90,                /* CONNECTION  */
  YYSYMBOL_ALERT = 91,                     /* ALERT  */
  YYSYMBOL_NOALERT = 92,                   /* NOALERT  */
  YYSYMBOL_MAILFORMAT = 93,                /* MAILFORMAT  */
  YYSYMBOL_UNIXSOCKET = 94,                /* UNIXSOCKET  */
  YYSYMBOL_SIGNATURE = 95,                 /* SIGNATURE  */
  YYSYMBOL_TIMEOUT = 96,                   /* TIMEOUT  */
  YYSYMBOL_RETRY = 97,                     /* RETRY  */
  YYSYMBOL_RESTART = 98,                   /* RESTART  */
  YYSYMBOL_CHECKSUM = 99,                  /* CHECKSUM  */
  YYSYMBOL_EVERY = 100,                    /* EVERY  */
  YYSYMBOL_NOTEVERY = 101,                 /* NOTEVERY  */
  YYSYMBOL_DEFAULT = 102,                  /* DEFAULT  */
  YYSYMBOL_HTTP = 103,                     /* HTTP  */
  YYSYMBOL_HTTPS = 104,                    /* HTTPS  */
  YYSYMBOL_APACHESTATUS = 105,             /* APACHESTATUS  */
  YYSYMBOL_FTP = 106,                      /* FTP  */
  YYSYMBOL_SMTP = 107,                     /* SMTP  */
  YYSYMBOL_SMTPS = 108,                    /* SMTPS  */
  YYSYMBOL_POP = 109,                      /* POP  */
  YYSYMBOL_POPS = 110,                     /* POPS  */
  YYSYMBOL_IMAP = 111,                     /* IMAP  */
  YYSYMBOL_IMAPS = 112,                    /* IMAPS  */
  YYSYMBOL_CLAMAV = 113,                   /* CLAMAV  */
  YYSYMBOL_NNTP = 114,                     /* NNTP  */
  YYSYMBOL_NTP3 = 115,                     /* NTP3  */
  YYSYMBOL_MYSQL = 116,                    /* MYSQL  */
  YYSYMBOL_MYSQLS = 117,                   /* MYSQLS  */
  YYSYMBOL_DNS = 118,                      /* DNS  */
  YYSYMBOL_WEBSOCKET = 119,                /* WEBSOCKET  */
  YYSYMBOL_MQTT = 120,                     /* MQTT  */
  YYSYMBOL_SSH = 121,                      /* SSH  */
  YYSYMBOL_DWP = 122,                      /* DWP  */
  YYSYMBOL_LDAP2 = 123,                    /* LDAP2  */
  YYSYMBOL_LDAP3 = 124,                    /* LDAP3  */
  YYSYMBOL_RDATE = 125,                    /* RDATE  */
  YYSYMBOL_RSYNC = 126,                    /* RSYNC  */
  YYSYMBOL_TNS = 127,                      /* TNS  */
  YYSYMBOL_PGSQL = 128,                    /* PGSQL  */
  YYSYMBOL_POSTFIXPOLICY = 129,            /* POSTFIXPOLICY  */
  YYSYMBOL_SIP = 130,                      /* SIP  */
  YYSYMBOL_LMTP = 131,                     /* LMTP  */
  YYSYMBOL_GPS = 132,                      /* GPS  */
  YYSYMBOL_RADIUS = 133,                   /* RADIUS  */
  YYSYMBOL_MEMCACHE = 134,                 /* MEMCACHE  */
  YYSYMBOL_REDIS = 135,                    /* REDIS  */
  YYSYMBOL_MONGODB = 136,                  /* MONGODB  */
  YYSYMBOL_SIEVE = 137,                    /* SIEVE  */
  YYSYMBOL_SPAMASSASSIN = 138,             /* SPAMASSASSIN  */
  YYSYMBOL_FAIL2BAN = 139,                 /* FAIL2BAN  */
  YYSYMBOL_STRING = 140,                   /* STRING  */
  YYSYMBOL_PATH = 141,                     /* PATH  */
  YYSYMBOL_MAILADDR = 142,                 /* MAILADDR  */
  YYSYMBOL_MAILFROM = 143,                 /* MAILFROM  */
  YYSYMBOL_MAILREPLYTO = 144,              /* MAILREPLYTO  */
  YYSYMBOL_MAILSUBJECT = 145,              /* MAILSUBJECT  */
  YYSYMBOL_MAILBODY = 146,                 /* MAILBODY  */
  YYSYMBOL_SERVICENAME = 147,              /* SERVICENAME  */
  YYSYMBOL_STRINGNAME = 148,               /* STRINGNAME  */
  YYSYMBOL_HOSTGROUPNAME = 149,            /* HOSTGROUPNAME  */
  YYSYMBOL_NUMBER = 150,                   /* NUMBER  */
  YYSYMBOL_PERCENT = 151,                  /* PERCENT  */
  YYSYMBOL_LOGLIMIT = 152,                 /* LOGLIMIT  */
  YYSYMBOL_CLOSELIMIT = 153,               /* CLOSELIMIT  */
  YYSYMBOL_DNSLIMIT = 154,                 /* DNSLIMIT  */
  YYSYMBOL_KEEPALIVELIMIT = 155,           /* KEEPALIVELIMIT  */
  YYSYMBOL_REPLYLIMIT = 156,               /* REPLYLIMIT  */
  YYSYMBOL_REQUESTLIMIT = 157,             /* REQUESTLIMIT  */
  YYSYMBOL_STARTLIMIT = 158,               /* STARTLIMIT  */
  YYSYMBOL_WAITLIMIT = 159,                /* WAITLIMIT  */
  YYSYMBOL_GRACEFULLIMIT = 160,            /* GRACEFULLIMIT  */
  YYSYMBOL_CLEANUPLIMIT = 161,             /* CLEANUPLIMIT  */
  YYSYMBOL_REAL = 162,                     /* REAL  */
  YYSYMBOL_CHECKPROC = 163,                /* CHECKPROC  */
  YYSYMBOL_CHECKFILESYS = 164,             /* CHECKFILESYS  */
  YYSYMBOL_CHECKFILE = 165,                /* CHECKFILE  */
  YYSYMBOL_CHECKDIR = 166,                 /* CHECKDIR  */
  YYSYMBOL_CHECKHOST = 167,                /* CHECKHOST  */
  YYSYMBOL_CHECKSYSTEM = 168,              /* CHECKSYSTEM  */
  YYSYMBOL_CHECKFIFO = 169,                /* CHECKFIFO  */
  YYSYMBOL_CHECKPROGRAM = 170,             /* CHECKPROGRAM  */
  YYSYMBOL_CHECKNET = 171,                 /* CHECKNET  */
  YYSYMBOL_THREADS = 172,                  /* THREADS  */
  YYSYMBOL_CHILDREN = 173,                 /* CHILDREN  */
  YYSYMBOL_METHOD = 174,                   /* METHOD  */
  YYSYMBOL_GET = 175,                      /* GET  */
  YYSYMBOL_HEAD = 176,                     /* HEAD  */
  YYSYMBOL_STATUS = 177,                   /* STATUS  */
  YYSYMBOL_ORIGIN = 178,                   /* ORIGIN  */
  YYSYMBOL_VERSIONOPT = 179,               /* VERSIONOPT  */
  YYSYMBOL_READ = 180,                     /* READ  */
  YYSYMBOL_WRITE = 181,                    /* WRITE  */
  YYSYMBOL_OPERATION = 182,                /* OPERATION  */
  YYSYMBOL_SERVICETIME = 183,              /* SERVICETIME  */
  YYSYMBOL_DISK = 184,                     /* DISK  */
  YYSYMBOL_RESOURCE = 185,                 /* RESOURCE  */
  YYSYMBOL_MEMORY = 186,                   /* MEMORY  */
  YYSYMBOL_TOTALMEMORY = 187,              /* TOTALMEMORY  */
  YYSYMBOL_LOADAVG1 = 188,                 /* LOADAVG1  */
  YYSYMBOL_LOADAVG5 = 189,                 /* LOADAVG5  */
  YYSYMBOL_LOADAVG15 = 190,                /* LOADAVG15  */
  YYSYMBOL_SWAP = 191,                     /* SWAP  */
  YYSYMBOL_MODE = 192,                     /* MODE  */
  YYSYMBOL_ACTIVE = 193,                   /* ACTIVE  */
  YYSYMBOL_PASSIVE = 194,                  /* PASSIVE  */
  YYSYMBOL_MANUAL = 195,                   /* MANUAL  */
  YYSYMBOL_ONREBOOT = 196,                 /* ONREBOOT  */
  YYSYMBOL_NOSTART = 197,                  /* NOSTART  */
  YYSYMBOL_LASTSTATE = 198,                /* LASTSTATE  */
  YYSYMBOL_CORE = 199,                     /* CORE  */
  YYSYMBOL_CPU = 200,                      /* CPU  */
  YYSYMBOL_TOTALCPU = 201,                 /* TOTALCPU  */
  YYSYMBOL_CPUUSER = 202,                  /* CPUUSER  */
  YYSYMBOL_CPUSYSTEM = 203,                /* CPUSYSTEM  */
  YYSYMBOL_CPUWAIT = 204,                  /* CPUWAIT  */
  YYSYMBOL_CPUNICE = 205,                  /* CPUNICE  */
  YYSYMBOL_CPUHARDIRQ = 206,               /* CPUHARDIRQ  */
  YYSYMBOL_CPUSOFTIRQ = 207,               /* CPUSOFTIRQ  */
  YYSYMBOL_CPUSTEAL = 208,                 /* CPUSTEAL  */
  YYSYMBOL_CPUGUEST = 209,                 /* CPUGUEST  */
  YYSYMBOL_CPUGUESTNICE = 210,             /* CPUGUESTNICE  */
  YYSYMBOL_GROUP = 211,                    /* GROUP  */
  YYSYMBOL_REQUEST = 212,                  /* REQUEST  */
  YYSYMBOL_DEPENDS = 213,                  /* DEPENDS  */
  YYSYMBOL_BASEDIR = 214,                  /* BASEDIR  */
  YYSYMBOL_SLOT = 215,                     /* SLOT  */
  YYSYMBOL_EVENTQUEUE = 216,               /* EVENTQUEUE  */
  YYSYMBOL_SECRET = 217,                   /* SECRET  */
  YYSYMBOL_HOSTHEADER = 218,               /* HOSTHEADER  */
  YYSYMBOL_UID = 219,                      /* UID  */
  YYSYMBOL_EUID = 220,                     /* EUID  */
  YYSYMBOL_GID = 221,                      /* GID  */
  YYSYMBOL_MMONIT = 222,                   /* MMONIT  */
  YYSYMBOL_INSTANCE = 223,                 /* INSTANCE  */
  YYSYMBOL_USERNAME = 224,                 /* USERNAME  */
  YYSYMBOL_PASSWORD = 225,                 /* PASSWORD  */
  YYSYMBOL_DATABASE = 226,                 /* DATABASE  */
  YYSYMBOL_TIME = 227,                     /* TIME  */
  YYSYMBOL_ATIME = 228,                    /* ATIME  */
  YYSYMBOL_CTIME = 229,                    /* CTIME  */
  YYSYMBOL_MTIME = 230,                    /* MTIME  */
  YYSYMBOL_CHANGED = 231,                  /* CHANGED  */
  YYSYMBOL_MILLISECOND = 232,              /* MILLISECOND  */
  YYSYMBOL_SECOND = 233,                   /* SECOND  */
  YYSYMBOL_MINUTE = 234,                   /* MINUTE  */
  YYSYMBOL_HOUR = 235,                     /* HOUR  */
  YYSYMBOL_DAY = 236,                      /* DAY  */
  YYSYMBOL_MONTH = 237,                    /* MONTH  */
  YYSYMBOL_SSLV2 = 238,                    /* SSLV2  */
  YYSYMBOL_SSLV3 = 239,                    /* SSLV3  */
  YYSYMBOL_TLSV1 = 240,                    /* TLSV1  */
  YYSYMBOL_TLSV11 = 241,                   /* TLSV11  */
  YYSYMBOL_TLSV12 = 242,                   /* TLSV12  */
  YYSYMBOL_TLSV13 = 243,                   /* TLSV13  */
  YYSYMBOL_CERTMD5 = 244,                  /* CERTMD5  */
  YYSYMBOL_AUTO = 245,                     /* AUTO  */
  YYSYMBOL_NOSSLV2 = 246,                  /* NOSSLV2  */
  YYSYMBOL_NOSSLV3 = 247,                  /* NOSSLV3  */
  YYSYMBOL_NOTLSV1 = 248,                  /* NOTLSV1  */
  YYSYMBOL_NOTLSV11 = 249,                 /* NOTLSV11  */
  YYSYMBOL_NOTLSV12 = 250,                 /* NOTLSV12  */
  YYSYMBOL_NOTLSV13 = 251,                 /* NOTLSV13  */
  YYSYMBOL_BYTE = 252,                     /* BYTE  */
  YYSYMBOL_KILOBYTE = 253,                 /* KILOBYTE  */
  YYSYMBOL_MEGABYTE = 254,                 /* MEGABYTE  */
  YYSYMBOL_GIGABYTE = 255,                 /* GIGABYTE  */
  YYSYMBOL_INODE = 256,                    /* INODE  */
  YYSYMBOL_SPACE = 257,                    /* SPACE  */
  YYSYMBOL_TFREE = 258,                    /* TFREE  */
  YYSYMBOL_PERMISSION = 259,               /* PERMISSION  */
  YYSYMBOL_SIZE = 260,                     /* SIZE  */
  YYSYMBOL_MATCH = 261,                    /* MATCH  */
  YYSYMBOL_NOT = 262,                      /* NOT  */
  YYSYMBOL_IGNORE = 263,                   /* IGNORE  */
  YYSYMBOL_ACTION = 264,                   /* ACTION  */
  YYSYMBOL_UPTIME = 265,                   /* UPTIME  */
  YYSYMBOL_RESPONSETIME = 266,             /* RESPONSETIME  */
  YYSYMBOL_EXEC = 267,                     /* EXEC  */
  YYSYMBOL_UNMONITOR = 268,                /* UNMONITOR  */
  YYSYMBOL_PING = 269,                     /* PING  */
  YYSYMBOL_PING4 = 270,                    /* PING4  */
  YYSYMBOL_PING6 = 271,                    /* PING6  */
  YYSYMBOL_ICMP = 272,                     /* ICMP  */
  YYSYMBOL_ICMPECHO = 273,                 /* ICMPECHO  */
  YYSYMBOL_NONEXIST = 274,                 /* NONEXIST  */
  YYSYMBOL_EXIST = 275,                    /* EXIST  */
  YYSYMBOL_INVALID = 276,                  /* INVALID  */
  YYSYMBOL_DATA = 277,                     /* DATA  */
  YYSYMBOL_RECOVERED = 278,                /* RECOVERED  */
  YYSYMBOL_PASSED = 279,                   /* PASSED  */
  YYSYMBOL_SUCCEEDED = 280,                /* SUCCEEDED  */
  YYSYMBOL_URL = 281,                      /* URL  */
  YYSYMBOL_CONTENT = 282,                  /* CONTENT  */
  YYSYMBOL_PID = 283,                      /* PID  */
  YYSYMBOL_PPID = 284,                     /* PPID  */
  YYSYMBOL_FSFLAG = 285,                   /* FSFLAG  */
  YYSYMBOL_REGISTER = 286,                 /* REGISTER  */
  YYSYMBOL_CREDENTIALS = 287,              /* CREDENTIALS  */
  YYSYMBOL_URLOBJECT = 288,                /* URLOBJECT  */
  YYSYMBOL_ADDRESSOBJECT = 289,            /* ADDRESSOBJECT  */
  YYSYMBOL_TARGET = 290,                   /* TARGET  */
  YYSYMBOL_TIMESPEC = 291,                 /* TIMESPEC  */
  YYSYMBOL_HTTPHEADER = 292,               /* HTTPHEADER  */
  YYSYMBOL_MAXFORWARD = 293,               /* MAXFORWARD  */
  YYSYMBOL_FIPS = 294,                     /* FIPS  */
  YYSYMBOL_SECURITY = 295,                 /* SECURITY  */
  YYSYMBOL_ATTRIBUTE = 296,                /* ATTRIBUTE  */
  YYSYMBOL_FILEDESCRIPTORS = 297,          /* FILEDESCRIPTORS  */
  YYSYMBOL_HARDLINK = 298,                 /* HARDLINK  */
  YYSYMBOL_GREATER = 299,                  /* GREATER  */
  YYSYMBOL_GREATEROREQUAL = 300,           /* GREATEROREQUAL  */
  YYSYMBOL_LESS = 301,                     /* LESS  */
  YYSYMBOL_LESSOREQUAL = 302,              /* LESSOREQUAL  */
  YYSYMBOL_EQUAL = 303,                    /* EQUAL  */
  YYSYMBOL_NOTEQUAL = 304,                 /* NOTEQUAL  */
  YYSYMBOL_305_ = 305,                     /* '{'  */
  YYSYMBOL_306_ = 306,                     /* '}'  */
  YYSYMBOL_307_ = 307,                     /* ':'  */
  YYSYMBOL_308_ = 308,                     /* '['  */
  YYSYMBOL_309_ = 309,                     /* ']'  */
  YYSYMBOL_310_ = 310,                     /* '@'  */
  YYSYMBOL_YYACCEPT = 311,                 /* $accept  */
  YYSYMBOL_cfgfile = 312,                  /* cfgfile  */
  YYSYMBOL_statement_list = 313,           /* statement_list  */
  YYSYMBOL_statement = 314,                /* statement  */
  YYSYMBOL_optproclist = 315,              /* optproclist  */
  YYSYMBOL_optproc = 316,                  /* optproc  */
  YYSYMBOL_optfilelist = 317,              /* optfilelist  */
  YYSYMBOL_optfile = 318,                  /* optfile  */
  YYSYMBOL_optfilesyslist = 319,           /* optfilesyslist  */
  YYSYMBOL_optfilesys = 320,               /* optfilesys  */
  YYSYMBOL_optdirlist = 321,               /* optdirlist  */
  YYSYMBOL_optdir = 322,                   /* optdir  */
  YYSYMBOL_opthostlist = 323,              /* opthostlist  */
  YYSYMBOL_opthost = 324,                  /* opthost  */
  YYSYMBOL_optnetlist = 325,               /* optnetlist  */
  YYSYMBOL_optnet = 326,                   /* optnet  */
  YYSYMBOL_optsystemlist = 327,            /* optsystemlist  */
  YYSYMBOL_optsystem = 328,                /* optsystem  */
  YYSYMBOL_optfifolist = 329,              /* optfifolist  */
  YYSYMBOL_optfifo = 330,                  /* optfifo  */
  YYSYMBOL_optprogramlist = 331,           /* optprogramlist  */
  YYSYMBOL_optprogram = 332,               /* optprogram  */
  YYSYMBOL_setalert = 333,                 /* setalert  */
  YYSYMBOL_setdaemon = 334,                /* setdaemon  */
  YYSYMBOL_setterminal = 335,              /* setterminal  */
  YYSYMBOL_startdelay = 336,               /* startdelay  */
  YYSYMBOL_setinit = 337,                  /* setinit  */
  YYSYMBOL_setonreboot = 338,              /* setonreboot  */
  YYSYMBOL_setexpectbuffer = 339,          /* setexpectbuffer  */
  YYSYMBOL_setlimits = 340,                /* setlimits  */
  YYSYMBOL_limitlist = 341,                /* limitlist  */
  YYSYMBOL_limit = 342,                    /* limit  */
  YYSYMBOL_setfips = 343,                  /* setfips  */
  YYSYMBOL_setlog = 344,                   /* setlog  */
  YYSYMBOL_seteventqueue = 345,            /* seteventqueue  */
  YYSYMBOL_setidfile = 346,                /* setidfile  */
  YYSYMBOL_setstatefile = 347,             /* setstatefile  */
  YYSYMBOL_setpid = 348,                   /* setpid  */
  YYSYMBOL_setmmonits = 349,               /* setmmonits  */
  YYSYMBOL_mmonitlist = 350,               /* mmonitlist  */
  YYSYMBOL_mmonit = 351,                   /* mmonit  */
  YYSYMBOL_mmonitoptlist = 352,            /* mmonitoptlist  */
  YYSYMBOL_mmonitopt = 353,                /* mmonitopt  */
  YYSYMBOL_credentials = 354,              /* credentials  */
  YYSYMBOL_setssl = 355,                   /* setssl  */
  YYSYMBOL_ssl = 356,                      /* ssl  */
  YYSYMBOL_ssloptionlist = 357,            /* ssloptionlist  */
  YYSYMBOL_ssloption = 358,                /* ssloption  */
  YYSYMBOL_sslexpire = 359,                /* sslexpire  */
  YYSYMBOL_expireoperator = 360,           /* expireoperator  */
  YYSYMBOL_sslchecksum = 361,              /* sslchecksum  */
  YYSYMBOL_checksumoperator = 362,         /* checksumoperator  */
  YYSYMBOL_sslversionlist = 363,           /* sslversionlist  */
  YYSYMBOL_sslversion = 364,               /* sslversion  */
  YYSYMBOL_certmd5 = 365,                  /* certmd5  */
  YYSYMBOL_setmailservers = 366,           /* setmailservers  */
  YYSYMBOL_setmailformat = 367,            /* setmailformat  */
  YYSYMBOL_mailserverlist = 368,           /* mailserverlist  */
  YYSYMBOL_mailserver = 369,               /* mailserver  */
  YYSYMBOL_mailserveroptlist = 370,        /* mailserveroptlist  */
  YYSYMBOL_mailserveropt = 371,            /* mailserveropt  */
  YYSYMBOL_sethttpd = 372,                 /* sethttpd  */
  YYSYMBOL_httpdlist = 373,                /* httpdlist  */
  YYSYMBOL_httpdoption = 374,              /* httpdoption  */
  YYSYMBOL_pemfile = 375,                  /* pemfile  */
  YYSYMBOL_clientpemfile = 376,            /* clientpemfile  */
  YYSYMBOL_allowselfcert = 377,            /* allowselfcert  */
  YYSYMBOL_httpdport = 378,                /* httpdport  */
  YYSYMBOL_httpdsocket = 379,              /* httpdsocket  */
  YYSYMBOL_httpdsocketoptionlist = 380,    /* httpdsocketoptionlist  */
  YYSYMBOL_httpdsocketoption = 381,        /* httpdsocketoption  */
  YYSYMBOL_sigenable = 382,                /* sigenable  */
  YYSYMBOL_sigdisable = 383,               /* sigdisable  */
  YYSYMBOL_signature = 384,                /* signature  */
  YYSYMBOL_bindaddress = 385,              /* bindaddress  */
  YYSYMBOL_allow = 386,                    /* allow  */
  YYSYMBOL_387_1 = 387,                    /* $@1  */
  YYSYMBOL_388_2 = 388,                    /* $@2  */
  YYSYMBOL_389_3 = 389,                    /* $@3  */
  YYSYMBOL_390_4 = 390,                    /* $@4  */
  YYSYMBOL_allowuserlist = 391,            /* allowuserlist  */
  YYSYMBOL_allowuser = 392,                /* allowuser  */
  YYSYMBOL_readonly = 393,                 /* readonly  */
  YYSYMBOL_checkproc = 394,                /* checkproc  */
  YYSYMBOL_checkfile = 395,                /* checkfile  */
  YYSYMBOL_checkfilesys = 396,             /* checkfilesys  */
  YYSYMBOL_checkdir = 397,                 /* checkdir  */
  YYSYMBOL_checkhost = 398,                /* checkhost  */
  YYSYMBOL_checknet = 399,                 /* checknet  */
  YYSYMBOL_checksystem = 400,              /* checksystem  */
  YYSYMBOL_checkfifo = 401,                /* checkfifo  */
  YYSYMBOL_checkprogram = 402,             /* checkprogram  */
  YYSYMBOL_start = 403,                    /* start  */
  YYSYMBOL_stop = 404,                     /* stop  */
  YYSYMBOL_restart = 405,                  /* restart  */
  YYSYMBOL_argumentlist = 406,             /* argumentlist  */
  YYSYMBOL_useroptionlist = 407,           /* useroptionlist  */
  YYSYMBOL_argument = 408,                 /* argument  */
  YYSYMBOL_useroption = 409,               /* useroption  */
  YYSYMBOL_username = 410,                 /* username  */
  YYSYMBOL_password = 411,                 /* password  */
  YYSYMBOL_database = 412,                 /* database  */
  YYSYMBOL_hostname = 413,                 /* hostname  */
  YYSYMBOL_connection = 414,               /* connection  */
  YYSYMBOL_connectionoptlist = 415,        /* connectionoptlist  */
  YYSYMBOL_connectionopt = 416,            /* connectionopt  */
  YYSYMBOL_connectionurl = 417,            /* connectionurl  */
  YYSYMBOL_connectionurloptlist = 418,     /* connectionurloptlist  */
  YYSYMBOL_connectionurlopt = 419,         /* connectionurlopt  */
  YYSYMBOL_connectionunix = 420,           /* connectionunix  */
  YYSYMBOL_connectionuxoptlist = 421,      /* connectionuxoptlist  */
  YYSYMBOL_connectionuxopt = 422,          /* connectionuxopt  */
  YYSYMBOL_icmp = 423,                     /* icmp  */
  YYSYMBOL_icmpoptlist = 424,              /* icmpoptlist  */
  YYSYMBOL_icmpopt = 425,                  /* icmpopt  */
  YYSYMBOL_host = 426,                     /* host  */
  YYSYMBOL_port = 427,                     /* port  */
  YYSYMBOL_unixsocket = 428,               /* unixsocket  */
  YYSYMBOL_ip = 429,                       /* ip  */
  YYSYMBOL_type = 430,                     /* type  */
  YYSYMBOL_typeoptlist = 431,              /* typeoptlist  */
  YYSYMBOL_typeopt = 432,                  /* typeopt  */
  YYSYMBOL_outgoing = 433,                 /* outgoing  */
  YYSYMBOL_protocol = 434,                 /* protocol  */
  YYSYMBOL_sendexpect = 435,               /* sendexpect  */
  YYSYMBOL_websocketlist = 436,            /* websocketlist  */
  YYSYMBOL_websocket = 437,                /* websocket  */
  YYSYMBOL_smtplist = 438,                 /* smtplist  */
  YYSYMBOL_smtp = 439,                     /* smtp  */
  YYSYMBOL_mqttlist = 440,                 /* mqttlist  */
  YYSYMBOL_mqtt = 441,                     /* mqtt  */
  YYSYMBOL_mysqllist = 442,                /* mysqllist  */
  YYSYMBOL_mysql = 443,                    /* mysql  */
  YYSYMBOL_postgresqllist = 444,           /* postgresqllist  */
  YYSYMBOL_postgresql = 445,               /* postgresql  */
  YYSYMBOL_target = 446,                   /* target  */
  YYSYMBOL_maxforward = 447,               /* maxforward  */
  YYSYMBOL_siplist = 448,                  /* siplist  */
  YYSYMBOL_sip = 449,                      /* sip  */
  YYSYMBOL_httplist = 450,                 /* httplist  */
  YYSYMBOL_http = 451,                     /* http  */
  YYSYMBOL_status = 452,                   /* status  */
  YYSYMBOL_method = 453,                   /* method  */
  YYSYMBOL_request = 454,                  /* request  */
  YYSYMBOL_responsesum = 455,              /* responsesum  */
  YYSYMBOL_hostheader = 456,               /* hostheader  */
  YYSYMBOL_httpheaderlist = 457,           /* httpheaderlist  */
  YYSYMBOL_secret = 458,                   /* secret  */
  YYSYMBOL_radiuslist = 459,               /* radiuslist  */
  YYSYMBOL_radius = 460,                   /* radius  */
  YYSYMBOL_apache_stat_list = 461,         /* apache_stat_list  */
  YYSYMBOL_apache_stat = 462,              /* apache_stat  */
  YYSYMBOL_exist = 463,                    /* exist  */
  YYSYMBOL_pid = 464,                      /* pid  */
  YYSYMBOL_ppid = 465,                     /* ppid  */
  YYSYMBOL_uptime = 466,                   /* uptime  */
  YYSYMBOL_responsetime = 467,             /* responsetime  */
  YYSYMBOL_icmpcount = 468,                /* icmpcount  */
  YYSYMBOL_icmpsize = 469,                 /* icmpsize  */
  YYSYMBOL_icmptimeout = 470,              /* icmptimeout  */
  YYSYMBOL_icmpoutgoing = 471,             /* icmpoutgoing  */
  YYSYMBOL_stoptimeout = 472,              /* stoptimeout  */
  YYSYMBOL_starttimeout = 473,             /* starttimeout  */
  YYSYMBOL_restarttimeout = 474,           /* restarttimeout  */
  YYSYMBOL_programtimeout = 475,           /* programtimeout  */
  YYSYMBOL_nettimeout = 476,               /* nettimeout  */
  YYSYMBOL_connectiontimeout = 477,        /* connectiontimeout  */
  YYSYMBOL_retry = 478,                    /* retry  */
  YYSYMBOL_actionrate = 479,               /* actionrate  */
  YYSYMBOL_urloption = 480,                /* urloption  */
  YYSYMBOL_urloperator = 481,              /* urloperator  */
  YYSYMBOL_alert = 482,                    /* alert  */
  YYSYMBOL_alertmail = 483,                /* alertmail  */
  YYSYMBOL_noalertmail = 484,              /* noalertmail  */
  YYSYMBOL_eventoptionlist = 485,          /* eventoptionlist  */
  YYSYMBOL_eventoption = 486,              /* eventoption  */
  YYSYMBOL_formatlist = 487,               /* formatlist  */
  YYSYMBOL_formatoptionlist = 488,         /* formatoptionlist  */
  YYSYMBOL_formatoption = 489,             /* formatoption  */
  YYSYMBOL_every = 490,                    /* every  */
  YYSYMBOL_mode = 491,                     /* mode  */
  YYSYMBOL_onreboot = 492,                 /* onreboot  */
  YYSYMBOL_group = 493,                    /* group  */
  YYSYMBOL_hostgrouplist = 494,            /* hostgrouplist  */
  YYSYMBOL_depend = 495,                   /* depend  */
  YYSYMBOL_dependlist = 496,               /* dependlist  */
  YYSYMBOL_dependant = 497,                /* dependant  */
  YYSYMBOL_statusvalue = 498,              /* statusvalue  */
  YYSYMBOL_resourceprocess = 499,          /* resourceprocess  */
  YYSYMBOL_resourceprocesslist = 500,      /* resourceprocesslist  */
  YYSYMBOL_resourceprocessopt = 501,       /* resourceprocessopt  */
  YYSYMBOL_resourcesystem = 502,           /* resourcesystem  */
  YYSYMBOL_resourcesystemlist = 503,       /* resourcesystemlist  */
  YYSYMBOL_resourcesystemopt = 504,        /* resourcesystemopt  */
  YYSYMBOL_resourcecpuproc = 505,          /* resourcecpuproc  */
  YYSYMBOL_resourcecpu = 506,              /* resourcecpu  */
  YYSYMBOL_resourcecpuid = 507,            /* resourcecpuid  */
  YYSYMBOL_resourcemem = 508,              /* resourcemem  */
  YYSYMBOL_resourcememproc = 509,          /* resourcememproc  */
  YYSYMBOL_resourceswap = 510,             /* resourceswap  */
  YYSYMBOL_resourcethreads = 511,          /* resourcethreads  */
  YYSYMBOL_resourcechild = 512,            /* resourcechild  */
  YYSYMBOL_resourceload = 513,             /* resourceload  */
  YYSYMBOL_resourceloadavg = 514,          /* resourceloadavg  */
  YYSYMBOL_coremultiplier = 515,           /* coremultiplier  */
  YYSYMBOL_resourceread = 516,             /* resourceread  */
  YYSYMBOL_resourcewrite = 517,            /* resourcewrite  */
  YYSYMBOL_value = 518,                    /* value  */
  YYSYMBOL_timestamptype = 519,            /* timestamptype  */
  YYSYMBOL_timestamp = 520,                /* timestamp  */
  YYSYMBOL_operator = 521,                 /* operator  */
  YYSYMBOL_time = 522,                     /* time  */
  YYSYMBOL_totaltime = 523,                /* totaltime  */
  YYSYMBOL_currenttime = 524,              /* currenttime  */
  YYSYMBOL_exectimeout = 525,              /* exectimeout  */
  YYSYMBOL_repeat = 526,                   /* repeat  */
  YYSYMBOL_action = 527,                   /* action  */
  YYSYMBOL_action1 = 528,                  /* action1  */
  YYSYMBOL_action2 = 529,                  /* action2  */
  YYSYMBOL_rateXcycles = 530,              /* rateXcycles  */
  YYSYMBOL_rateXYcycles = 531,             /* rateXYcycles  */
  YYSYMBOL_rate1 = 532,                    /* rate1  */
  YYSYMBOL_rate2 = 533,                    /* rate2  */
  YYSYMBOL_recovery_success = 534,         /* recovery_success  */
  YYSYMBOL_recovery_failure = 535,         /* recovery_failure  */
  YYSYMBOL_checksum = 536,                 /* checksum  */
  YYSYMBOL_hashtype = 537,                 /* hashtype  */
  YYSYMBOL_inode = 538,                    /* inode  */
  YYSYMBOL_space = 539,                    /* space  */
  YYSYMBOL_read = 540,                     /* read  */
  YYSYMBOL_write = 541,                    /* write  */
  YYSYMBOL_servicetime = 542,              /* servicetime  */
  YYSYMBOL_fsflag = 543,                   /* fsflag  */
  YYSYMBOL_unit = 544,                     /* unit  */
  YYSYMBOL_permission = 545,               /* permission  */
  YYSYMBOL_programmatch = 546,             /* programmatch  */
  YYSYMBOL_match = 547,                    /* match  */
  YYSYMBOL_matchflagnot = 548,             /* matchflagnot  */
  YYSYMBOL_size = 549,                     /* size  */
  YYSYMBOL_hardlink = 550,                 /* hardlink  */
  YYSYMBOL_uid = 551,                      /* uid  */
  YYSYMBOL_euid = 552,                     /* euid  */
  YYSYMBOL_secattr = 553,                  /* secattr  */
  YYSYMBOL_filedescriptorssystem = 554,    /* filedescriptorssystem  */
  YYSYMBOL_filedescriptorsprocess = 555,   /* filedescriptorsprocess  */
  YYSYMBOL_filedescriptorsprocesstotal = 556, /* filedescriptorsprocesstotal  */
  YYSYMBOL_gid = 557,                      /* gid  */
  YYSYMBOL_linkstatus = 558,               /* linkstatus  */
  YYSYMBOL_linkspeed = 559,                /* linkspeed  */
  YYSYMBOL_linksaturation = 560,           /* linksaturation  */
  YYSYMBOL_upload = 561,                   /* upload  */
  YYSYMBOL_download = 562,                 /* download  */
  YYSYMBOL_icmptype = 563,                 /* icmptype  */
  YYSYMBOL_reminder = 564                  /* reminder  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  69
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2038

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  311
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  254
/* YYNRULES -- Number of rules.  */
#define YYNRULES  854
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1667

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   559


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   307,     2,
       2,     2,     2,     2,   310,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   308,     2,   309,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   305,     2,   306,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   397,   397,   398,   401,   402,   405,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,   416,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   434,   435,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   464,
     465,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     489,   490,   493,   494,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   515,   516,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     537,   538,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   556,   557,   560,   561,   562,
     563,   564,   565,   566,   567,   568,   569,   570,   571,   572,
     573,   574,   577,   578,   581,   582,   583,   584,   585,   586,
     587,   588,   589,   590,   591,   592,   593,   596,   597,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,   610,
     611,   612,   613,   614,   615,   618,   619,   622,   623,   624,
     625,   626,   627,   628,   629,   630,   631,   632,   633,   636,
     640,   643,   649,   663,   668,   671,   676,   681,   684,   687,
     692,   698,   701,   702,   705,   716,   723,   734,   745,   751,
     757,   763,   769,   775,   781,   787,   793,   799,   805,   811,
     819,   824,   834,   837,   842,   845,   849,   855,   865,   875,
     885,   888,   889,   892,   898,   899,   902,   908,   909,   910,
     911,   912,   915,   916,   921,   926,   929,   932,   933,   936,
     940,   944,   948,   952,   955,   959,   962,   965,   968,   971,
     974,   979,   985,   986,   989,  1003,  1010,  1019,  1020,  1023,
    1024,  1027,  1034,  1037,  1044,  1047,  1054,  1057,  1064,  1067,
    1074,  1077,  1084,  1087,  1098,  1107,  1113,  1128,  1129,  1132,
    1141,  1152,  1153,  1156,  1159,  1162,  1163,  1164,  1165,  1168,
    1195,  1196,  1199,  1200,  1201,  1202,  1203,  1204,  1205,  1206,
    1207,  1211,  1217,  1223,  1229,  1236,  1242,  1243,  1246,  1251,
    1256,  1260,  1264,  1268,  1273,  1274,  1277,  1278,  1281,  1284,
    1289,  1298,  1301,  1309,  1313,  1317,  1321,  1325,  1325,  1332,
    1332,  1339,  1339,  1346,  1346,  1353,  1360,  1361,  1364,  1370,
    1373,  1378,  1381,  1384,  1391,  1400,  1405,  1408,  1413,  1418,
    1423,  1431,  1437,  1452,  1457,  1463,  1471,  1474,  1479,  1482,
    1488,  1491,  1496,  1497,  1500,  1501,  1504,  1507,  1512,  1516,
    1520,  1523,  1528,  1531,  1536,  1541,  1546,  1549,  1554,  1564,
    1574,  1575,  1578,  1579,  1580,  1581,  1582,  1583,  1584,  1585,
    1586,  1587,  1588,  1589,  1592,  1600,  1610,  1611,  1614,  1615,
    1616,  1617,  1618,  1619,  1622,  1629,  1638,  1639,  1642,  1643,
    1644,  1645,  1646,  1647,  1650,  1659,  1667,  1675,  1683,  1692,
    1700,  1708,  1718,  1719,  1722,  1723,  1724,  1725,  1726,  1729,
    1732,  1737,  1742,  1748,  1751,  1756,  1759,  1763,  1768,  1769,
    1772,  1773,  1776,  1781,  1784,  1787,  1790,  1793,  1796,  1799,
    1802,  1805,  1808,  1813,  1816,  1821,  1824,  1827,  1830,  1833,
    1836,  1839,  1842,  1846,  1849,  1853,  1856,  1859,  1864,  1867,
    1870,  1873,  1876,  1879,  1882,  1885,  1888,  1893,  1896,  1899,
    1902,  1907,  1915,  1925,  1926,  1929,  1932,  1935,  1938,  1943,
    1944,  1947,  1950,  1955,  1956,  1959,  1962,  1967,  1968,  1971,
    1974,  1977,  1990,  1996,  2004,  2005,  2008,  2011,  2014,  2019,
    2022,  2027,  2032,  2033,  2036,  2039,  2044,  2045,  2048,  2051,
    2054,  2055,  2056,  2057,  2058,  2059,  2062,  2072,  2075,  2080,
    2084,  2090,  2095,  2101,  2102,  2107,  2112,  2113,  2116,  2121,
    2122,  2125,  2128,  2131,  2134,  2138,  2142,  2146,  2150,  2154,
    2158,  2162,  2166,  2170,  2176,  2180,  2187,  2193,  2199,  2207,
    2211,  2217,  2222,  2232,  2240,  2245,  2248,  2256,  2259,  2267,
    2270,  2278,  2281,  2289,  2292,  2300,  2308,  2313,  2319,  2327,
    2333,  2334,  2337,  2341,  2344,  2348,  2353,  2356,  2359,  2360,
    2363,  2364,  2365,  2366,  2367,  2368,  2369,  2370,  2371,  2372,
    2373,  2374,  2375,  2376,  2377,  2378,  2379,  2380,  2381,  2382,
    2383,  2384,  2385,  2386,  2387,  2388,  2389,  2390,  2391,  2392,
    2395,  2396,  2399,  2400,  2403,  2404,  2405,  2406,  2409,  2414,
    2421,  2430,  2433,  2436,  2442,  2445,  2449,  2454,  2460,  2461,
    2467,  2470,  2471,  2474,  2477,  2484,  2493,  2499,  2500,  2503,
    2504,  2505,  2506,  2507,  2508,  2509,  2512,  2518,  2519,  2522,
    2523,  2524,  2525,  2528,  2533,  2540,  2547,  2553,  2559,  2565,
    2571,  2577,  2583,  2589,  2595,  2601,  2606,  2611,  2618,  2623,
    2628,  2633,  2640,  2645,  2652,  2659,  2666,  2686,  2687,  2688,
    2691,  2692,  2696,  2701,  2706,  2713,  2718,  2723,  2730,  2731,
    2734,  2735,  2736,  2737,  2740,  2747,  2755,  2756,  2757,  2758,
    2759,  2760,  2761,  2762,  2765,  2766,  2767,  2768,  2769,  2770,
    2773,  2774,  2775,  2777,  2778,  2781,  2784,  2792,  2795,  2798,
    2806,  2809,  2812,  2816,  2819,  2822,  2825,  2828,  2833,  2846,
    2859,  2869,  2881,  2882,  2887,  2894,  2895,  2900,  2907,  2910,
    2913,  2916,  2919,  2924,  2927,  2930,  2935,  2939,  2946,  2952,
    2953,  2954,  2957,  2964,  2971,  2978,  2987,  2994,  3001,  3008,
    3017,  3024,  3033,  3040,  3049,  3056,  3065,  3071,  3072,  3073,
    3074,  3075,  3078,  3083,  3090,  3097,  3100,  3105,  3113,  3120,
    3128,  3136,  3143,  3149,  3156,  3164,  3167,  3173,  3179,  3186,
    3192,  3200,  3206,  3213,  3219,  3226,  3229,  3234,  3240,  3248,
    3254,  3262,  3270,  3276,  3283,  3287,  3292,  3299,  3304,  3312,
    3320,  3328,  3336,  3344,  3352,  3362,  3370,  3378,  3386,  3394,
    3402,  3412,  3415,  3416,  3417
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IF", "ELSE", "THEN",
  "FAILED", "SET", "LOGFILE", "FACILITY", "DAEMON", "SYSLOG", "MAILSERVER",
  "HTTPD", "ALLOW", "REJECTOPT", "ADDRESS", "INIT", "TERMINAL", "BATCH",
  "READONLY", "CLEARTEXT", "MD5HASH", "SHA1HASH", "CRYPT", "DELAY",
  "PEMFILE", "PEMKEY", "PEMCHAIN", "ENABLE", "DISABLE", "SSLTOKEN",
  "CIPHER", "CLIENTPEMFILE", "ALLOWSELFCERTIFICATION", "SELFSIGNED",
  "VERIFY", "CERTIFICATE", "CACERTIFICATEFILE", "CACERTIFICATEPATH",
  "VALID", "INTERFACE", "LINK", "PACKET", "BYTEIN", "BYTEOUT", "PACKETIN",
  "PACKETOUT", "SPEED", "SATURATION", "UPLOAD", "DOWNLOAD", "TOTAL", "UP",
  "DOWN", "IDFILE", "STATEFILE", "SEND", "EXPECT", "CYCLE", "COUNT",
  "REMINDER", "REPEAT", "LIMITS", "SENDEXPECTBUFFER", "EXPECTBUFFER",
  "FILECONTENTBUFFER", "HTTPCONTENTBUFFER", "PROGRAMOUTPUT",
  "NETWORKTIMEOUT", "PROGRAMTIMEOUT", "STARTTIMEOUT", "STOPTIMEOUT",
  "RESTARTTIMEOUT", "EXECTIMEOUT", "PIDFILE", "START", "STOP", "PATHTOK",
  "RSAKEY", "HOST", "HOSTNAME", "PORT", "IPV4", "IPV6", "TYPE", "UDP",
  "TCP", "TCPSSL", "PROTOCOL", "CONNECTION", "ALERT", "NOALERT",
  "MAILFORMAT", "UNIXSOCKET", "SIGNATURE", "TIMEOUT", "RETRY", "RESTART",
  "CHECKSUM", "EVERY", "NOTEVERY", "DEFAULT", "HTTP", "HTTPS",
  "APACHESTATUS", "FTP", "SMTP", "SMTPS", "POP", "POPS", "IMAP", "IMAPS",
  "CLAMAV", "NNTP", "NTP3", "MYSQL", "MYSQLS", "DNS", "WEBSOCKET", "MQTT",
  "SSH", "DWP", "LDAP2", "LDAP3", "RDATE", "RSYNC", "TNS", "PGSQL",
  "POSTFIXPOLICY", "SIP", "LMTP", "GPS", "RADIUS", "MEMCACHE", "REDIS",
  "MONGODB", "SIEVE", "SPAMASSASSIN", "FAIL2BAN", "STRING", "PATH",
  "MAILADDR", "MAILFROM", "MAILREPLYTO", "MAILSUBJECT", "MAILBODY",
  "SERVICENAME", "STRINGNAME", "HOSTGROUPNAME", "NUMBER", "PERCENT",
  "LOGLIMIT", "CLOSELIMIT", "DNSLIMIT", "KEEPALIVELIMIT", "REPLYLIMIT",
  "REQUESTLIMIT", "STARTLIMIT", "WAITLIMIT", "GRACEFULLIMIT",
  "CLEANUPLIMIT", "REAL", "CHECKPROC", "CHECKFILESYS", "CHECKFILE",
  "CHECKDIR", "CHECKHOST", "CHECKSYSTEM", "CHECKFIFO", "CHECKPROGRAM",
  "CHECKNET", "THREADS", "CHILDREN", "METHOD", "GET", "HEAD", "STATUS",
  "ORIGIN", "VERSIONOPT", "READ", "WRITE", "OPERATION", "SERVICETIME",
  "DISK", "RESOURCE", "MEMORY", "TOTALMEMORY", "LOADAVG1", "LOADAVG5",
  "LOADAVG15", "SWAP", "MODE", "ACTIVE", "PASSIVE", "MANUAL", "ONREBOOT",
  "NOSTART", "LASTSTATE", "CORE", "CPU", "TOTALCPU", "CPUUSER",
  "CPUSYSTEM", "CPUWAIT", "CPUNICE", "CPUHARDIRQ", "CPUSOFTIRQ",
  "CPUSTEAL", "CPUGUEST", "CPUGUESTNICE", "GROUP", "REQUEST", "DEPENDS",
  "BASEDIR", "SLOT", "EVENTQUEUE", "SECRET", "HOSTHEADER", "UID", "EUID",
  "GID", "MMONIT", "INSTANCE", "USERNAME", "PASSWORD", "DATABASE", "TIME",
  "ATIME", "CTIME", "MTIME", "CHANGED", "MILLISECOND", "SECOND", "MINUTE",
  "HOUR", "DAY", "MONTH", "SSLV2", "SSLV3", "TLSV1", "TLSV11", "TLSV12",
  "TLSV13", "CERTMD5", "AUTO", "NOSSLV2", "NOSSLV3", "NOTLSV1", "NOTLSV11",
  "NOTLSV12", "NOTLSV13", "BYTE", "KILOBYTE", "MEGABYTE", "GIGABYTE",
  "INODE", "SPACE", "TFREE", "PERMISSION", "SIZE", "MATCH", "NOT",
  "IGNORE", "ACTION", "UPTIME", "RESPONSETIME", "EXEC", "UNMONITOR",
  "PING", "PING4", "PING6", "ICMP", "ICMPECHO", "NONEXIST", "EXIST",
  "INVALID", "DATA", "RECOVERED", "PASSED", "SUCCEEDED", "URL", "CONTENT",
  "PID", "PPID", "FSFLAG", "REGISTER", "CREDENTIALS", "URLOBJECT",
  "ADDRESSOBJECT", "TARGET", "TIMESPEC", "HTTPHEADER", "MAXFORWARD",
  "FIPS", "SECURITY", "ATTRIBUTE", "FILEDESCRIPTORS", "HARDLINK",
  "GREATER", "GREATEROREQUAL", "LESS", "LESSOREQUAL", "EQUAL", "NOTEQUAL",
  "'{'", "'}'", "':'", "'['", "']'", "'@'", "$accept", "cfgfile",
  "statement_list", "statement", "optproclist", "optproc", "optfilelist",
  "optfile", "optfilesyslist", "optfilesys", "optdirlist", "optdir",
  "opthostlist", "opthost", "optnetlist", "optnet", "optsystemlist",
  "optsystem", "optfifolist", "optfifo", "optprogramlist", "optprogram",
  "setalert", "setdaemon", "setterminal", "startdelay", "setinit",
  "setonreboot", "setexpectbuffer", "setlimits", "limitlist", "limit",
  "setfips", "setlog", "seteventqueue", "setidfile", "setstatefile",
  "setpid", "setmmonits", "mmonitlist", "mmonit", "mmonitoptlist",
  "mmonitopt", "credentials", "setssl", "ssl", "ssloptionlist",
  "ssloption", "sslexpire", "expireoperator", "sslchecksum",
  "checksumoperator", "sslversionlist", "sslversion", "certmd5",
  "setmailservers", "setmailformat", "mailserverlist", "mailserver",
  "mailserveroptlist", "mailserveropt", "sethttpd", "httpdlist",
  "httpdoption", "pemfile", "clientpemfile", "allowselfcert", "httpdport",
  "httpdsocket", "httpdsocketoptionlist", "httpdsocketoption", "sigenable",
  "sigdisable", "signature", "bindaddress", "allow", "$@1", "$@2", "$@3",
  "$@4", "allowuserlist", "allowuser", "readonly", "checkproc",
  "checkfile", "checkfilesys", "checkdir", "checkhost", "checknet",
  "checksystem", "checkfifo", "checkprogram", "start", "stop", "restart",
  "argumentlist", "useroptionlist", "argument", "useroption", "username",
  "password", "database", "hostname", "connection", "connectionoptlist",
  "connectionopt", "connectionurl", "connectionurloptlist",
  "connectionurlopt", "connectionunix", "connectionuxoptlist",
  "connectionuxopt", "icmp", "icmpoptlist", "icmpopt", "host", "port",
  "unixsocket", "ip", "type", "typeoptlist", "typeopt", "outgoing",
  "protocol", "sendexpect", "websocketlist", "websocket", "smtplist",
  "smtp", "mqttlist", "mqtt", "mysqllist", "mysql", "postgresqllist",
  "postgresql", "target", "maxforward", "siplist", "sip", "httplist",
  "http", "status", "method", "request", "responsesum", "hostheader",
  "httpheaderlist", "secret", "radiuslist", "radius", "apache_stat_list",
  "apache_stat", "exist", "pid", "ppid", "uptime", "responsetime",
  "icmpcount", "icmpsize", "icmptimeout", "icmpoutgoing", "stoptimeout",
  "starttimeout", "restarttimeout", "programtimeout", "nettimeout",
  "connectiontimeout", "retry", "actionrate", "urloption", "urloperator",
  "alert", "alertmail", "noalertmail", "eventoptionlist", "eventoption",
  "formatlist", "formatoptionlist", "formatoption", "every", "mode",
  "onreboot", "group", "hostgrouplist", "depend", "dependlist",
  "dependant", "statusvalue", "resourceprocess", "resourceprocesslist",
  "resourceprocessopt", "resourcesystem", "resourcesystemlist",
  "resourcesystemopt", "resourcecpuproc", "resourcecpu", "resourcecpuid",
  "resourcemem", "resourcememproc", "resourceswap", "resourcethreads",
  "resourcechild", "resourceload", "resourceloadavg", "coremultiplier",
  "resourceread", "resourcewrite", "value", "timestamptype", "timestamp",
  "operator", "time", "totaltime", "currenttime", "exectimeout", "repeat",
  "action", "action1", "action2", "rateXcycles", "rateXYcycles", "rate1",
  "rate2", "recovery_success", "recovery_failure", "checksum", "hashtype",
  "inode", "space", "read", "write", "servicetime", "fsflag", "unit",
  "permission", "programmatch", "match", "matchflagnot", "size",
  "hardlink", "uid", "euid", "secattr", "filedescriptorssystem",
  "filedescriptorsprocess", "filedescriptorsprocesstotal", "gid",
  "linkstatus", "linkspeed", "linksaturation", "upload", "download",
  "icmptype", "reminder", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-1331)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-763)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     804,    98,   -52,    15,    19,    35,   148,   200,   208,   252,
     286,    65,   804, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331,    40,   -32,    68, -1331, -1331,   305,   -86,   307,   319,
     162,   321,   359,   383,   171,   -10,   -89,   241, -1331,   -29,
      21,   455,   480,   506,   603, -1331,   543,   550,    61, -1331,
   -1331,   849,   343,  1146,  1270,  1297,  1467,  1643,  1270,  1683,
     596, -1331,   561,   572,    27, -1331,  1229, -1331, -1331, -1331,
   -1331, -1331,   538, -1331, -1331,   934, -1331, -1331, -1331,   502,
     511, -1331,   241,   389,   354,   385,  1628,   627,   576,   583,
      89,   192,   612,   623,   582,   632,   590,   609,   640,   492,
     590,   590,   658,   590,   -67,   539,   145,   159,   637,   696,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331, -1331,   -26, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331,    25,  -194, -1331,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,   256,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331,    36, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,    46,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331, -1331, -1331,    70, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331,  1296, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331, -1331,     6, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331,   729,   846, -1331,
     754,   460,   757, -1331,   814,     8,   769,   772,   823,   832,
     626,   797, -1331,   795,   817,   638, -1331, -1331, -1331, -1331,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,   104,   498,
   -1331, -1331, -1331, -1331, -1331,   672,   674, -1331, -1331,   235,
   -1331,   750, -1331,   121,   389,   692, -1331,   934,  1628, -1331,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,   809,
   -1331,   831, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331, -1331, -1331, -1331,   -47, -1331, -1331, -1331,   589,
     686,   887,   896,   896,   896,   896,   607,   896,   896, -1331,
   -1331, -1331,   896,   896,   534,   715,   896,   869,    47,   896,
    1680, -1331, -1331, -1331, -1331, -1331, -1331,   843, -1331, -1331,
     181,   203, -1331,   396,   972, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331, -1331, -1331, -1331,   696, -1331,   741,  1628,   627,
      38, -1331, -1331, -1331, -1331,   157,   896,   715,   509,   896,
     896,   793, -1331,   509,   800,   290,   896,   896,   896,  -161,
     749,  1026,   774,   -30,    -1,  1016,   829,   896,   896,   896,
     850,  1021,   896,   896, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331, -1331, -1331,   896,  1728, -1331, -1331,   896, -1331,
   -1331, -1331,   896,   890,   111, -1331,   921, -1331,   976,   314,
     942, -1331, -1331, -1331, -1331, -1331, -1331,   950, -1331, -1331,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331,   864,   959, -1331,   966,   977,   983,   822,   971,
     997, -1331, -1331, -1331, -1331, -1331, -1331,  1127, -1331, -1331,
   -1331,   854,   855,   856,   857,   858,   860,   861,   863,   867,
     868, -1331, -1331,   880,   882,   883,   885,   894,   895,   897,
     898,   903,   905, -1331, -1331, -1331, -1331, -1331, -1331,  1000,
    1038, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,   320,
    1360,  1083, -1331,  1135,  1070,    45,   278,   -43, -1331, -1331,
   -1331,  1081,  1084,   334,   335,   470,   936,   930,  1145, -1331,
     896,  1078, -1331, -1331, -1331, -1331, -1331, -1331, -1331,  1079,
    1080,   288,   288,   896,   896,   288,   288,   288,   288,   869,
     869,   869,  1085,   -12, -1331, -1331,  1234,   946,  1145, -1331,
     331, -1331,  1235, -1331,   896,  1091,    -7, -1331,  1092,   298,
   -1331,  1098,   313, -1331, -1331, -1331,  1628,  1431, -1331, -1331,
   -1331,  1101,  1153,   869,   869,   869,   869,  1154,  1104, -1331,
   -1331,   775,  1115,  1116,   783,   794,   802,   380,   393,   435,
     869,   896,   445,   896,   288, -1331, -1331, -1331,  1182, -1331,
   -1331, -1331,  1182,   869,   869,   869,  1118,  1119,  1121,   896,
     896,   869,   288,   288,   488, -1331,  1269,   288,  1125,   869,
     869,  1046,  1142, -1331,   460,    16, -1331, -1331, -1331, -1331,
   -1331, -1331,  1147,  1148,  1150,  1151,  1152,  1127,   166, -1331,
   -1331,    13,  1144,  1157,  1158,  1162,  1163,   941,   958,  1164,
    1165, -1331,  1136,  1143,  1168,  1169,  1170,  1171,  1172,  1181,
    1183,  1184, -1331,  1074,  -112, -1331,  1083,   627, -1331,  1082,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,   869,   869,
     869,   869,   869,   869, -1331,   886,  1186, -1331,   566,  1190,
    1244, -1331, -1331, -1331, -1331,   538,   538,   491,   494,   474,
     485,  1161,  1192,  1308,  1309,  1327,   777, -1331,  1285,   643,
   -1331, -1331,   566,    73,  1194,   643,   288,  1117, -1331,  1123,
   -1331,  1130, -1331,  1527,  1083,   869,     0,  1343,  1344,  1346,
    1353,   869,   538,   869,   869,   869,   777,   869,   869, -1331,
   -1331, -1331, -1331,  1178,   538,  1185,   538,  1132,  1133,  1370,
     571,    73,  1214,   288,   581,    75,    75,    75,  1103, -1331,
      75,    75,    75, -1331,  1373,  1375,  1377,  1233,   122,   250,
    1236,  1237,  1380,   585,   699,    73,  1239,   643,  1240,   869,
    1387,  1388,   869,   869,  1093,  1093, -1331,  1254,  1152,  1152,
    1152,  1127, -1331,  1152, -1331, -1331, -1331, -1331,   575,   595,
    1249, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331, -1331,  1739,   538,   538,   538,   538,   806,   881,
     884,   888,   901,   908, -1331, -1331, -1331,   627, -1331, -1331,
    1395,  1396,  1398,  1405,  1406,  1407,    72,   869,   869, -1331,
     431,  1273,  1274,   608,  1837,  1265,  1271,   896, -1331, -1331,
   -1331, -1331, -1331, -1331, -1331,  1414,   869,  1418,  1193,  1193,
    1243,   538,  1245,   538, -1331, -1331, -1331, -1331, -1331, -1331,
     643,   643,   643, -1331, -1331, -1331, -1331, -1331,   869, -1331,
   -1331, -1331, -1331, -1331, -1331,   590, -1331, -1331,  1424,    72,
     431,  1425,  1426,   869,  1424, -1331, -1331, -1331, -1331,  1083,
     627,  1427,  1294,  1432,   643,   643,   643,   643,  1434,   869,
    1438,  1442,  1446,   869,  1447,  1449,   869,  1193,   869,  1193,
     869,   869,   643,    73,  1293,  1450,   869,   745,   869,   869,
    1317,  1311,  1313,  1314, -1331, -1331, -1331, -1331, -1331, -1331,
    1453,  1460,  1462, -1331,    75,  1463,  1464,  1466,    75,   643,
     643,   643,   869,  1193,  1193,  1193,  1193,   269,   348,   643,
   -1331, -1331, -1331, -1331,  1483,   869,  1424, -1331,  1485,   643,
     643,  1486,  1487,  1332,  1354, -1331,  1152,  1152,  1152, -1331,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331, -1331, -1331,   643,   643,   643,   643,   643,   643,
      52,   509, -1331, -1331, -1331, -1331, -1331, -1331, -1331,  1490,
    1492,  1502,  1369, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,  1515, -1331,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331,  1025, -1331, -1331,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331,    37, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331,  1289, -1331,  1374,   643,  1521,   403, -1331, -1331,
   -1331, -1331,  1193, -1331,  1193, -1331, -1331,  1424,  1523,   493,
     130, -1331,  1528,  1529,   643,   643,  1530, -1331,   627, -1331,
     643,   869,   643,  1424, -1331, -1331, -1331,   643,  1531,   643,
     643,   643,  1533,   643,   643,  1549,   869,  1550,   869,  1551,
    1552, -1331,  1555,   869,   643,  1557,   869,   869,  1558,  1559,
   -1331, -1331,  1333, -1331,   643,   643,   643,  1565,   643,   643,
     643,  1572,  1424,  1574,  1424,  1575,   869,   869,   869,   869,
     154,   177,   527,   625,  1424,   643,  1577, -1331,   643, -1331,
    1424,   643,   643, -1331, -1331,  1424,  1424,  1424,  1424,  1424,
    1424,  1286,  1444,   643,   643,   643, -1331,   643,  1576,   948,
     948,  1448,   896,   896,   896,   896,   896,   896,   896,   896,
     896,   896, -1331, -1331,  1025, -1331,   810,   810,    91,    91,
    1451,  1454,  1445,  1455,    37, -1331,   810,   621,   481,  1381,
   -1331,   910,  1424,   643, -1331, -1331, -1331, -1331, -1331,   643,
    1452,   373,  1535,   584, -1331, -1331,   643,   643,  1574,  1424,
     643, -1331,  1424,  1594,  1424, -1331, -1331,   643, -1331, -1331,
    1424,   643, -1331, -1331,   643,  1595,   643,  1599,   643,   643,
     643,  1601,  1424,   643,  1604,  1605,   643,   643, -1331,  1424,
    1424,  1424,   643,  1574,  1574,  1574,   643, -1331,   215, -1331,
   -1331,   643,  1606,  1607,  1608,  1609,   639, -1331, -1331, -1331,
     869,   639,   869,   639,   869,   639,   869, -1331,  1424,   643,
    1424, -1331,  1424, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331,  1465, -1331,  1424,  1424,  1424,  1424, -1331, -1331, -1331,
    1478,   970,   896,  1018,  1481, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331, -1331, -1331, -1331,  1472,  1479,  1480,  1488,  1489,
    1491,  1497,  1498,  1499,  1501, -1331, -1331, -1331, -1331,  1532,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331,  1493, -1331, -1331, -1331, -1331,   440,  1503, -1331, -1331,
   -1331,  1500, -1331, -1331, -1331, -1331, -1331,  1424,  1424,  1422,
    1535,  1556, -1331,   869,   869,   869,  1574,  1574, -1331, -1331,
    1424, -1331,   643, -1331,  1424, -1331,  1424,  1424,   643,  1424,
     643,  1424,  1424,  1424,   643, -1331,  1424,   643,   643,  1424,
    1424, -1331, -1331, -1331,  1424, -1331, -1331, -1331,  1574,  1622,
   -1331,  1424,   643,   643,   643,   643,   869,  1652,   869,  1655,
     869,  1656,   869,  1657, -1331,  1424, -1331, -1331,  1428, -1331,
   -1331, -1331, -1331, -1331, -1331, -1331,  1517, -1331, -1331, -1331,
    -132,  1514,  1518,  1520,  1534,  1536,  1537,  1538,  1541,  1542,
    1543,    22, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331,    -3, -1331, -1331,  1663,  1674,  1676, -1331, -1331, -1331,
    1424, -1331, -1331, -1331,  1424, -1331,  1424, -1331, -1331, -1331,
    1424, -1331,  1424,  1424, -1331, -1331, -1331, -1331,   869, -1331,
    1424,  1424,  1424,  1424,  1677,   643,  1678,   643,  1679,   643,
    1692,   643, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331,  1093,  1093,  1560,
   -1331,  1640,   643,   643,   643, -1331, -1331, -1331, -1331, -1331,
   -1331,  1696, -1331, -1331, -1331, -1331,   643,  1424,   643,  1424,
     643,  1424,   643,  1424,  1562,  1569, -1331, -1331, -1331, -1331,
   -1331,   643,  1424, -1331,  1424, -1331,  1424, -1331,  1424, -1331,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     4,     6,     8,     9,    20,    22,    19,
      21,    23,    10,    11,    17,    18,    16,    12,     7,    13,
      14,    15,    33,    59,    80,   102,   120,   135,   152,   167,
     185,     0,     0,     0,   310,   206,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   230,   640,
       0,     0,     0,     0,     0,   372,     0,     0,     0,     1,
       5,    24,    25,    26,    27,    28,    32,    29,    30,    31,
     232,   231,   204,   301,   593,   297,   309,   203,   257,   237,
     238,   212,   797,   239,   606,     0,   207,   208,   209,     0,
       0,   244,   240,   252,     0,     0,     0,   852,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,    35,    36,    37,    48,    49,    50,    38,    39,    40,
      47,    51,    52,   640,   605,    53,    54,    55,    56,    57,
      58,    41,    42,    43,    44,    45,    46,   815,   815,    60,
      61,    62,    63,    64,    66,    68,    67,    76,    77,    78,
      79,    65,    72,    69,    75,    73,    74,    70,    71,     0,
      81,    82,    83,    84,    85,    86,    88,    87,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    89,    90,
      91,     0,   103,   104,   105,   106,   107,   109,   111,   110,
     116,   117,   118,   119,   108,   112,   115,   113,   114,     0,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,     0,   136,   137,   138,   139,   145,
     149,   146,   147,   148,   150,   151,   140,   141,   142,   143,
     144,     0,   153,   154,   155,   156,   165,   157,   158,   159,
     160,   161,   162,   163,   164,   166,   168,   169,   170,   171,
     172,   174,   176,   175,   181,   182,   183,   184,   173,   177,
     180,   178,   179,     0,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,     0,     0,   202,
       0,   299,     0,   298,   396,     0,     0,     0,     0,     0,
     255,     0,   323,     0,     0,     0,   312,   311,   313,   314,
     315,   319,   320,   338,   339,   316,   317,   318,     0,     0,
     798,   799,   800,   801,   210,     0,     0,   646,   647,     0,
     642,   234,   236,   243,   252,     0,   241,     0,     0,   624,
     611,   612,   626,   627,   634,   632,   614,   636,   613,   635,
     631,   638,   620,   622,   637,   628,   633,   610,   639,   617,
     621,   625,   618,   623,   616,   615,   629,   630,   619,     0,
     608,     0,   199,   361,   362,   363,   364,   367,   366,   365,
     368,   369,   373,   386,   387,   591,   382,   370,   371,   449,
       0,     0,   726,   726,   726,   726,     0,   726,   726,   707,
     708,   709,   726,   726,     0,     0,   726,   762,   449,   726,
     762,   667,   669,   670,   671,   672,   673,   710,   674,   675,
     587,   585,   607,   589,     0,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   663,   660,   661,     0,     0,   852,
     779,   720,   721,   722,   723,   779,   726,   816,     0,   726,
     726,     0,   816,     0,     0,     0,   726,   726,   726,     0,
     726,   726,     0,   449,   449,     0,     0,   726,   726,   726,
       0,     0,   726,   726,   695,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   726,   762,   677,   682,   726,   680,
     681,   679,   726,     0,     0,   233,     0,   301,     0,     0,
       0,   281,   283,   285,   287,   289,   291,     0,   293,   282,
     284,   286,   288,   290,   292,   305,   306,   307,   308,   302,
     303,   304,     0,     0,   295,     0,     0,     0,   355,   343,
       0,   340,   321,   335,   337,   257,   322,   359,   326,   334,
     336,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   254,   258,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   211,   213,   644,   645,   296,   643,     0,
       0,   658,   245,   247,   248,   249,   250,   242,   253,     0,
       0,   640,   609,   853,     0,     0,     0,   591,   383,   384,
     374,     0,     0,     0,     0,     0,     0,     0,     0,   426,
     726,     0,   733,   727,   728,   729,   730,   731,   732,     0,
       0,     0,     0,   726,   726,     0,     0,     0,     0,   762,
     762,   762,     0,     0,   763,   764,     0,     0,     0,   426,
       0,   668,     0,   711,   726,     0,   587,   376,     0,   585,
     378,     0,   589,   380,   648,   662,     0,     0,   602,   780,
     781,     0,     0,   762,   762,   762,   762,     0,     0,   600,
     601,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     762,   726,     0,   726,     0,   442,   442,   442,     0,   442,
     442,   442,     0,   762,   762,   762,     0,     0,     0,   726,
     726,   762,     0,     0,     0,   678,     0,     0,     0,   762,
     762,     0,     0,   205,   300,   277,   393,   392,   394,   294,
     594,   397,   344,   345,   346,     0,     0,   359,     0,   360,
     324,   325,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   279,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   235,     0,     0,   641,   640,   852,   854,     0,
     388,   390,   389,   391,   385,   375,   450,   452,   762,   762,
     762,   762,   762,   762,   416,     0,     0,   400,   762,     0,
       0,   704,   705,   719,   718,   797,   797,     0,     0,   797,
     797,     0,     0,     0,     0,     0,   734,   760,     0,     0,
     416,   400,   762,   719,     0,     0,     0,     0,   377,     0,
     379,     0,   381,     0,   640,   762,   762,     0,     0,     0,
       0,   762,   797,   762,   762,   762,   734,   762,   762,   810,
     809,   814,   813,   719,   797,   719,   797,   719,     0,     0,
       0,   719,     0,     0,   797,   762,   762,   762,     0,   442,
     762,   762,   762,   442,     0,     0,     0,     0,   797,   797,
       0,     0,     0,   797,   797,   719,     0,     0,     0,   762,
       0,     0,   762,   762,   277,   277,   278,     0,     0,     0,
       0,   359,   358,   348,   356,   342,   256,   333,     0,     0,
       0,   327,   265,   267,   266,   264,   268,   261,   262,   259,
     260,   269,   270,   263,   797,   797,   797,   797,     0,     0,
       0,     0,     0,     0,   246,   659,   251,   852,   200,   592,
       0,     0,     0,     0,     0,     0,   762,   762,   762,   451,
     762,     0,     0,     0,     0,     0,     0,   726,   427,   428,
     429,   430,   432,   431,   433,     0,   762,     0,   743,   743,
     719,   797,   719,   797,   699,   698,   701,   700,   683,   684,
       0,     0,     0,   735,   736,   737,   738,   739,   762,   761,
     755,   756,   750,   754,   753,     0,   757,   758,   768,   762,
     762,     0,     0,   762,   768,   706,   588,   586,   590,   640,
     852,     0,     0,     0,     0,     0,     0,     0,     0,   762,
       0,     0,     0,   762,     0,     0,   762,   743,   762,   743,
     762,   762,     0,   719,     0,     0,   762,   797,   762,   762,
       0,     0,     0,     0,   443,   448,   444,   445,   446,   447,
       0,     0,     0,   851,   762,     0,     0,     0,   762,     0,
       0,     0,   762,   743,   743,   743,   743,   797,   797,     0,
     697,   696,   703,   702,     0,   762,   768,   685,     0,     0,
       0,     0,     0,     0,     0,   274,   350,   352,   354,   341,
     357,   328,   330,   329,   331,   332,   280,   214,   215,   216,
     217,   218,   219,   220,   221,   224,   225,   222,   223,   226,
     227,   228,   229,   201,     0,     0,     0,     0,     0,     0,
       0,     0,   421,   423,   422,   417,   419,   420,   418,     0,
       0,     0,     0,   453,   454,   411,   413,   412,   401,   402,
     403,   409,   404,   405,   408,   407,   410,   406,     0,   501,
     502,   457,   455,   458,   465,   536,   536,     0,   469,   509,
     509,   486,   487,   473,   474,   464,   483,   484,   517,   517,
     466,     0,   513,   498,   467,   475,   476,   490,   492,   499,
     524,   488,   532,   477,   470,   556,   478,   491,   479,   493,
     497,   468,     0,   596,     0,     0,     0,     0,   744,   712,
     715,   714,   743,   717,   743,   576,   577,   768,     0,   745,
       0,   575,     0,     0,     0,     0,     0,   666,   852,   603,
       0,   762,     0,   768,   818,   820,   725,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   762,     0,   762,     0,
       0,   796,     0,   762,     0,     0,   762,   762,     0,     0,
     584,   581,     0,   582,     0,     0,     0,     0,     0,     0,
       0,     0,   768,   773,   768,     0,   762,   762,   762,   762,
       0,     0,     0,     0,   768,     0,     0,   676,     0,   665,
     768,     0,     0,   275,   276,   768,   768,   768,   768,   768,
     768,   272,     0,     0,     0,     0,   462,     0,   456,   471,
     472,     0,   726,   726,   726,   726,   726,   726,   726,   726,
     726,   726,   561,   562,   463,   559,   495,   496,   481,   482,
       0,     0,     0,     0,   500,   503,   480,   485,   494,   489,
     595,     0,   768,     0,   598,   597,   713,   716,   574,     0,
       0,   745,   747,     0,   759,   769,     0,     0,   773,   768,
       0,   604,   768,     0,   768,   803,   778,     0,   808,   807,
     768,     0,   812,   811,     0,     0,     0,     0,     0,     0,
       0,     0,   768,     0,     0,     0,     0,     0,   583,   768,
     768,   768,     0,   773,   773,   773,     0,   834,     0,   836,
     835,     0,     0,     0,     0,     0,     0,   740,   741,   742,
     762,     0,   762,     0,   762,     0,   762,   837,   768,     0,
     768,   805,   768,   804,   821,   822,   823,   824,   832,   833,
     273,     0,   599,   768,   768,   768,   768,   460,   461,   459,
       0,     0,   726,     0,     0,   553,   538,   539,   537,   542,
     543,   540,   541,   544,   563,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   560,   511,   512,   510,     0,
     519,   520,   518,   507,   505,   508,   506,   504,   515,   516,
     514,     0,   526,   527,   528,   525,     0,     0,   534,   535,
     533,     0,   558,   557,   579,   580,   424,   768,   768,     0,
     747,     0,   751,   765,   765,   765,   773,   773,   425,   829,
     768,   802,     0,   776,   768,   819,   768,   768,     0,   768,
       0,   768,   768,   768,     0,   782,   768,     0,     0,   768,
     768,   435,   436,   437,   768,   439,   440,   441,   773,     0,
     774,   768,     0,     0,     0,     0,   762,     0,   762,     0,
     762,     0,   762,     0,   827,   768,   664,   806,     0,   414,
     825,   826,   398,   551,   547,   548,     0,   550,   549,   552,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   277,   395,   530,   529,   531,   555,   831,   578,   746,
     752,     0,   766,   767,     0,     0,     0,   415,   399,   830,
     768,   817,   724,   791,   768,   793,   768,   794,   795,   784,
     768,   783,   768,   768,   787,   786,   434,   438,   765,   838,
     768,   768,   768,   768,     0,     0,     0,     0,     0,     0,
       0,     0,   828,   271,   546,   554,   545,   564,   565,   566,
     567,   568,   569,   570,   571,   572,   573,   277,   277,     0,
     748,     0,     0,     0,     0,   777,   790,   792,   785,   789,
     788,     0,   842,   839,   848,   845,     0,   768,     0,   768,
       0,   768,     0,   768,     0,     0,   521,   749,   770,   771,
     772,     0,   768,   843,   768,   840,   768,   849,   768,   846,
     522,   523,   775,   844,   841,   850,   847
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1331, -1331, -1331,  1698, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
    1615, -1331, -1331,  1367, -1331,   -82,  1176, -1331,  -823, -1331,
    -322,  -862, -1331,  -342,  -341, -1331, -1331, -1331,  1638,  1216,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
     209,  -737,  -691, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331,  1439,  1474,  1689,  -103,  -407,  -390,  -562,  -667,
    -377, -1331, -1331,  1650,   925, -1331,  1653,   929, -1331, -1331,
    1094, -1331, -1331,    79, -1331,  -361,  1100,  1312, -1331,  -816,
   -1331, -1331, -1331,  -796,  -507, -1331,   427,   592, -1331, -1331,
   -1331,   587, -1331, -1331, -1331, -1331, -1331, -1331, -1331,   604,
   -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331,   448,   951, -1331, -1331,  1662,  -730, -1331, -1331, -1331,
   -1331,  1096,  1105,  1095,  1155, -1331,  -484,  -178,  1848,  -490,
    -449,  1919,  1748, -1331,  -320,  -352,  -140,  1408,  -293,  1927,
    1935,  1943,  1951, -1331,  1959, -1331,  1324, -1331, -1331, -1331,
    1336, -1331, -1331,  1258, -1331, -1331, -1331, -1331, -1331, -1331,
   -1331, -1331,  -217, -1331, -1331, -1331, -1331,   529,  -224,    26,
    -397,   931,  -437,  -398,   437,   300, -1165,  -218, -1314,  -928,
    -897,  -420, -1330,   -51,  -790, -1331,  1316, -1331, -1331, -1331,
   -1331, -1331, -1331,   -39,   479, -1331, -1331,  1614, -1331,    81,
     992, -1331, -1331, -1331, -1331, -1331,  1032, -1331, -1331, -1331,
   -1331, -1331,  1086,  -440
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    11,    12,    13,    71,   130,    72,   159,    73,   180,
      74,   202,    75,   220,    76,   235,    77,   252,    78,   266,
      79,   284,    14,    15,    16,   299,    17,    18,    19,    20,
     329,   574,    21,    22,    23,    24,    25,    26,    27,   102,
     103,   343,   582,   346,    28,   525,   328,   562,  1103,  1401,
     526,   877,   903,   527,   528,    29,    30,    84,    85,   301,
     529,    31,    86,   317,   318,   319,   320,   321,   322,   731,
     891,   323,   324,   325,   326,   327,   726,   878,   879,   880,
     883,   884,   730,    32,    33,    34,    35,    36,    37,    38,
      39,    40,   131,   132,   133,   395,   597,   396,   599,   530,
     531,  1454,   534,   134,   930,  1118,   135,   926,  1105,   136,
     778,   938,   226,   845,  1024,   608,   777,   609,  1119,   939,
    1278,  1409,  1121,   940,   941,  1304,  1305,  1296,  1438,  1306,
    1450,  1298,  1442,  1307,  1455,  1458,  1459,  1308,  1460,  1279,
    1418,  1419,  1420,  1421,  1422,  1423,  1540,  1462,  1309,  1463,
    1294,  1295,   137,   138,   139,   140,  1025,  1026,  1027,  1028,
    1029,   650,   647,   653,   600,   304,   943,   944,   141,  1108,
     671,   142,   143,   144,   379,   380,   107,   339,   340,   145,
     146,   147,   148,   754,   149,   445,   446,   295,   150,   420,
     421,   264,   495,   496,   422,   497,   498,   499,   423,   500,
     424,   425,   426,   427,   644,   428,   429,   785,   460,   171,
     619,   968,  1380,  1179,  1322,  1472,   977,   978,  1325,   634,
     635,   636,  1564,  1191,  1369,   172,   662,   192,   193,   194,
     195,   196,   197,   334,   173,   296,   174,   461,   175,   176,
     151,   152,   153,   265,   154,   155,   156,   246,   247,   248,
     249,   250,   849,   382
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     642,   585,   586,   449,   316,   598,   620,   621,   622,   658,
     625,   626,  1063,  1064,   675,   627,   628,   430,   431,   632,
     433,   584,   640,   646,   649,  1324,   652,   592,   590,   535,
     536,   450,   537,   887,   501,   764,   885,   915,   874,   875,
     598,   598,   465,   598,  1617,  1618,   578,   797,   942,   594,
     601,    80,   473,   594,  1510,   712,  1620,   638,   992,   668,
     659,   660,   672,   673,   104,    69,    96,   104,   462,   677,
     678,   679,   942,   682,   684,   706,   475,   117,  -762,   601,
     696,   697,   698,   434,   764,   702,   703,   764,   463,   645,
     764,  1020,  1271,   393,   394,    60,   108,   704,   663,   109,
     214,   707,   118,   310,   278,   708,    41,  1116,    42,  1100,
      43,    44,   476,   638,  1120,    45,    46,  1300,    82,   477,
     478,   479,   480,   302,   680,    99,   100,   601,   657,    47,
     551,   552,   553,  1323,  1122,  1021,   554,   555,   798,   556,
     557,   602,   558,   559,  1565,  1566,  1070,  1621,   538,   539,
     633,   715,   310,    48,    49,   216,   401,  1116,   508,   280,
    1605,    50,    61,    51,  1120,  1043,    62,    83,   935,   936,
    1439,  1022,   595,    52,   596,   401,   595,  1606,   596,   659,
     660,    81,    63,   502,  1122,   760,   401,    97,    98,    53,
    1069,    54,   551,   552,   553,   761,   401,   916,   554,   555,
    1124,   556,   557,  1324,   558,   559,   970,   971,    83,   793,
     794,   795,   595,   779,   596,  1301,  1302,   580,  1509,    88,
     401,   972,   633,   633,   435,   633,   787,   788,   973,   385,
     386,   666,   888,   105,   889,   440,   447,   503,   592,   685,
     686,   687,   688,   817,   818,   819,   820,   806,   666,  1303,
    1124,   606,   451,   452,   453,   454,   455,   603,  1631,   605,
     839,   583,   465,   451,   452,   453,   454,   472,   689,   690,
     691,   692,   890,   854,   855,   856,   106,   645,   501,   448,
     637,   862,   110,   560,   840,   456,   843,   457,   504,   870,
     871,   970,   971,  1045,    55,    64,   578,   661,   415,   648,
     417,   481,   860,   861,  1376,   592,   972,   458,  1648,  1649,
    1650,   417,  1250,   973,    56,   509,   510,   918,   540,   876,
      57,   393,   394,   459,    87,   876,   474,  1381,   637,  1070,
    1070,  1070,   387,   388,   459,  1023,   813,  1662,   437,   438,
     439,   937,   710,   393,   394,   560,   157,    65,   920,   921,
     922,   923,   924,   925,  1101,    66,   441,   442,   945,   511,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   711,   330,   331,   332,   333,   335,   336,
     337,   338,   981,   982,   451,   452,   453,   454,  1377,  1378,
    1379,  1252,    58,   974,   648,   991,   993,   975,   976,    67,
     595,   998,   596,  1000,  1001,  1002,   401,  1004,  1005,   651,
     561,  1377,  1378,  1379,   669,   670,   663,   664,   762,   120,
     121,  1015,   595,  1123,   596,  1030,  1031,  1032,   763,   581,
    1035,  1036,  1037,    68,    53,   122,   466,   467,   783,   468,
    1127,   123,  1106,   124,   125,  1054,  1125,  1112,    89,  1058,
     784,   757,  1061,  1062,   716,   665,   717,  1324,  1324,  1324,
      90,   592,   310,   335,   336,   337,   338,    91,  1100,  1320,
    1292,    92,   886,  1123,   768,   770,    95,  1093,   974,   970,
     971,   803,   975,   976,   769,   771,  1324,   469,   931,   932,
    1127,   310,   651,   784,   972,  1106,  1125,   508,   399,  1314,
      93,   973,   330,   331,   332,   333,  1109,  1110,  1111,   603,
    1128,   605,   470,   471,  1113,  1114,   933,   595,   415,   596,
     934,   330,   331,   332,   333,    94,  1176,   935,   936,   101,
     833,   417,   595,   111,   596,   126,   393,   394,  1478,   127,
    1174,   577,   784,   835,   400,  1562,  1562,  1562,  1188,   661,
    1199,  1180,   198,   215,   128,   784,   129,   279,   112,  1192,
    1193,  1076,   563,  1196,   564,   565,   566,   567,   568,   569,
     570,   571,   572,  1505,  1506,  1507,  1563,  1563,  1563,  1208,
    1553,   633,  1554,  1212,   113,   837,  1215,   984,  1217,  1320,
    1219,  1220,   595,  1222,   596,   841,  1225,   784,  1228,  1229,
     330,   331,   332,   333,  1104,   297,   158,   784,  1117,  1216,
     772,  1218,  1416,  1416,  1237,   595,   917,   596,  1241,   114,
     773,   115,  1245,   931,   932,   954,   755,  1292,   116,  1436,
    1436,  1440,  1440,   393,   394,  1256,   956,   298,   865,  1448,
    1452,   950,   401,   341,   952,  1246,  1247,  1248,  1249,  1056,
     784,   933,  1272,   784,   300,   934,   784,  1104,  1117,   347,
    1562,   342,   935,   936,   402,   403,   974,   549,   550,   601,
     975,   976,   404,   405,   990,   345,   406,  1383,   407,   408,
     409,   410,   411,   602,   509,   510,  1567,  1568,   381,  1619,
     348,  1563,   412,   413,  1131,  1132,  1133,   937,   511,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   595,  1101,   596,  1071,   633,   383,  1587,   970,
     971,  1013,   391,   414,   384,  1072,   330,   331,   332,   333,
     393,   394,  1018,   784,   972,  1073,  1050,   330,   331,   332,
     333,   973,  1185,  1186,  1187,  1074,   948,   949,  1107,   397,
     955,   957,  1126,   389,   415,  1644,  1645,   416,  1331,   764,
    1293,  1377,  1378,  1379,   390,   846,   847,   417,   850,   851,
     852,  1456,   418,   392,  1457,  1385,  1203,  1204,  1205,  1206,
     398,  1333,  1321,   999,  1316,   443,  1317,   623,   624,   419,
     330,   331,   332,   333,  1221,  1007,  1345,  1009,  1347,   598,
     432,  1107,  1126,  1351,   573,  1019,  1354,  1355,   603,   604,
     605,     1,   669,   670,  1382,  1384,  1386,   629,   630,  1044,
    1046,  1242,  1243,  1244,  1051,  1053,  1372,  1373,  1374,  1375,
     436,  1254,   937,   330,   331,   332,   333,   330,   331,   332,
     333,  1259,  1260,   444,  1102,   509,   510,  1451,  1115,  1198,
    1052,   349,   119,   350,   351,   352,   353,   354,   355,  1377,
    1378,  1379,  1473,  1474,  1475,  1077,  1078,  1079,  1080,   505,
     606,   506,  1189,  1377,  1378,  1379,  1265,  1266,  1267,  1268,
    1269,  1270,   694,   695,   607,  1425,  1426,  1427,  1428,  1429,
    1430,  1431,  1432,  1433,  1434,   533,  1226,  1102,  1115,   356,
     699,   700,  1417,  1417,   507,   357,   974,   532,   358,   541,
     975,   976,  1182,   542,  1184,   823,   824,  1293,   543,  1437,
    1437,  1441,  1441,   827,   828,   120,   121,   544,  1034,  1449,
    1453,   545,  1038,  1197,   829,   830,  1407,  1408,   546,  1516,
      53,   122,   831,   832,  1518,   547,  1520,   123,  1522,   124,
     125,   330,   331,   332,   333,   897,   898,  1312,   548,  1315,
    1517,   575,  1519,   576,  1521,   579,  1523,     2,     3,     4,
       5,     6,     7,     8,     9,    10,  1328,  1329,  1227,   588,
     612,   593,  1332,   610,  1334,   611,   359,   899,   900,  1336,
     631,  1338,  1339,  1340,   360,  1342,  1343,   330,   331,   332,
     333,   451,   452,   453,   454,  1257,  1352,   681,  1251,  1253,
     963,   964,   965,   966,   967,  1536,  1359,  1360,  1361,   633,
    1363,  1364,  1365,   163,   184,   206,   927,   928,   361,   270,
     362,   654,   363,   663,   509,   510,   364,  1388,  1081,  1082,
    1390,   126,   643,  1392,  1393,   127,   656,  1410,   613,   614,
     615,   616,   617,   618,   674,  1403,  1404,  1405,   693,  1406,
     128,   676,   129,   701,   177,   199,   217,   709,   365,   366,
     281,   713,   665,   367,   368,   715,   369,   335,   336,   337,
     338,   370,   718,   371,   372,   373,   374,  1066,  1067,  1068,
     719,   375,   376,   377,   378,  1467,  1594,   720,  1596,   721,
    1598,  1468,  1600,  1281,   178,   200,   218,   722,  1476,  1477,
     282,  -347,  1480,  1083,  1084,   591,  1085,  1086,   723,  1484,
    1087,  1088,  1411,  1486,   724,  1412,  1487,   612,  1489,   725,
    1491,  1492,  1493,  1089,  1090,  1496,  1318,   727,  1499,  1500,
    1091,  1092,  1464,  1465,  1504,  1534,  1535,   729,  1508,   179,
     752,   786,  1335,  1511,   789,   790,   791,   792,  1537,  1538,
    1413,   732,   733,   734,   735,   736,  1414,   737,   738,   804,
     739,  1525,   509,   510,   740,   741,   104,  1282,  1283,  1284,
    1285,  1286,  1287,  1288,  1289,  1290,  1291,   742,   753,   743,
     744,  1367,   745,  1370,   758,   613,   614,   615,   616,   617,
     618,   746,   747,  1387,   748,   749,   834,   836,   838,  1391,
     750,   842,   751,   844,  1394,  1395,  1396,  1397,  1398,  1399,
     759,   766,   120,   121,   774,   767,   775,   776,   780,   781,
     782,   863,   864,   866,   800,   796,   868,    53,   122,   799,
     805,   807,   809,   305,   123,   306,   124,   125,   811,   509,
     510,   815,   816,   821,   822,   307,  1415,   612,   308,   309,
     310,  1466,   311,   312,  1570,   825,   826,   848,   857,   858,
    1574,   859,  1576,   201,   867,   869,  1580,   872,  1479,  1582,
    1583,  1481,   873,  1483,   683,   892,   904,  -349,  -351,  1485,
    -353,   881,   882,   905,  1590,  1591,  1592,  1593,   893,   894,
     219,  1495,   895,   947,   896,   901,   902,   914,  1501,  1502,
    1503,   313,   958,   960,   961,   919,   951,   953,   906,   907,
     908,   909,   910,   314,   315,   613,   614,   615,   616,   617,
     618,   911,   962,   912,   913,   985,   929,  1524,   126,  1526,
     946,  1527,   127,   959,   969,   983,   120,   121,   994,   995,
     986,   996,  1529,  1530,  1531,  1532,   987,   128,   997,   129,
    1006,    53,   122,   988,  1010,  1016,  1011,  1008,   123,  1014,
     124,   125,  1017,   120,   121,  1012,  1033,  1637,  1039,  1639,
    1040,  1641,  1041,  1643,  1042,  1049,  1047,  1048,    53,   122,
    1055,  1057,  1059,  1060,  1065,   123,   876,   124,   125,  1075,
    1094,  1095,   349,  1096,   350,   351,   352,   353,   354,   355,
    1097,  1098,  1099,  1129,  1130,  1172,  1557,  1558,  1652,  1175,
    1654,  1173,  1656,  1177,  1658,  1181,  1178,  1183,  1190,  1569,
    1194,  1195,  1200,  1571,  1201,  1572,  1573,  1202,  1575,  1207,
    1577,  1578,  1579,  1209,  1223,  1581,   401,  1210,  1584,  1585,
     356,  1211,  1213,  1586,  1214,  1224,   357,  1230,  1234,   358,
    1589,  1231,   126,  1232,  1233,  1235,   127,  1236,  1238,  1239,
     234,  1240,  1263,   349,  1602,   350,   351,   352,   353,   354,
     355,   128,   482,   129,   409,   410,   411,   483,  1255,   126,
    1258,  1261,  1262,   127,  1264,  1273,   484,  1274,   485,   486,
     487,   488,   489,   490,   491,   492,   493,  1275,   128,  1276,
     129,   160,   181,   203,   221,   236,   253,   267,   285,  1625,
    1277,   356,  1310,  1626,  1311,  1627,  1313,   357,  1319,  1628,
     358,  1629,  1630,  1326,  1327,  1330,  1337,   359,  1341,  1632,
    1633,  1634,  1635,   120,   121,   360,   161,   182,   204,   222,
     237,   254,   268,   286,  1344,  1346,  1348,  1349,    53,   122,
    1350,   416,  1353,  1356,  1357,   123,  1358,   124,   125,   349,
    1362,   350,   351,   352,   353,   354,   355,  1366,  1368,   361,
    1371,   362,  1389,   363,  1402,  1400,  1653,   364,  1655,  1424,
    1657,  1443,  1659,   494,  1444,  1445,  1446,  1471,  1461,  1482,
    1488,  1663,  1469,  1664,  1490,  1665,  1494,  1666,   359,  1497,
    1498,  1512,  1513,  1514,  1515,  1528,   360,   356,  1533,   365,
     366,  1539,  1541,   357,   367,   368,   358,   369,  1588,  1542,
    1543,  1551,   370,  1552,   371,   372,   373,   374,  1544,  1545,
    1556,  1546,   375,   376,   377,   378,   251,  1547,  1548,  1549,
     361,  1550,   362,  1555,   363,  1559,  1561,  1595,   364,   126,
    1597,  1599,  1601,   127,  1603,  1607,   756,  1604,  1622,  1608,
     349,  1609,   350,   351,   352,   353,   354,   355,   128,  1623,
     129,  1624,  1636,  1638,  1640,  1610,   283,  1611,  1612,  1613,
     365,   366,  1614,  1615,  1616,   367,   368,  1642,   369,  1647,
    1646,  1651,  1660,   370,   359,   371,   372,   373,   374,  1661,
      70,   587,   360,   375,   376,   377,   378,   344,   356,   120,
     121,   728,   303,   714,   357,   224,   980,   358,   225,   979,
     639,  1447,  1297,   802,    53,   122,  1299,   814,   801,   256,
    1280,   123,  1435,   124,   125,   810,   361,   812,   362,    59,
     363,   808,   765,   705,   364,   589,   641,  1003,  1470,   120,
     121,   162,   183,   205,   223,   238,   255,   269,   287,   655,
    1560,   667,   464,     0,    53,   122,     0,     0,   853,     0,
       0,   123,     0,   124,   125,     0,   365,   366,     0,     0,
       0,   367,   368,     0,   369,     0,     0,     0,     0,   370,
       0,   371,   372,   373,   374,   359,     0,     0,     0,   375,
     376,   377,   378,   360,   511,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,     0,     0,
     633,     0,     0,   989,     0,   126,     0,     0,     0,   127,
       0,     0,     0,     0,     0,     0,     0,   361,     0,   362,
       0,   363,   402,   403,   128,   364,   129,     0,     0,     0,
     404,   405,     0,     0,   406,     0,   407,   408,   409,   410,
     411,     0,     0,     0,     0,   126,     0,     0,   633,   127,
     412,   413,     0,     0,     0,     0,     0,   365,   366,     0,
       0,     0,   367,   368,   128,   369,   129,     0,     0,     0,
     370,     0,   371,   372,   373,   374,     0,     0,     0,     0,
     375,   376,   377,   378,   482,     0,   409,   410,   411,   483,
     164,   185,   207,   227,   239,   257,   271,   288,   484,     0,
     485,   486,   487,   488,   489,   490,   491,   492,   493,  1134,
    1135,  1136,  1137,  1138,  1139,  1140,  1141,  1142,  1143,  1144,
    1145,  1146,  1147,  1148,  1149,  1150,  1151,  1152,  1153,  1154,
    1155,  1156,  1157,  1158,  1159,  1160,  1161,  1162,  1163,  1164,
    1165,  1166,  1167,  1168,  1169,  1170,  1171,   511,   512,   513,
     514,   515,   516,     0,   518,   519,   520,   521,   522,   523,
     524,   165,   186,   208,   228,   240,   258,   272,   289,   166,
     187,   209,   229,   241,   259,   273,   290,   167,   188,   210,
     230,   242,   260,   274,   291,   168,   189,   211,   231,   243,
     261,   275,   292,   169,   190,   212,   232,   244,   262,   276,
     293,   170,   191,   213,   233,   245,   263,   277,   294
};

static const yytype_int16 yycheck[] =
{
     420,   343,   343,   143,    86,   395,   403,   404,   405,   449,
     407,   408,   874,   875,   463,   412,   413,   120,   121,   416,
     123,   343,   419,   430,   431,  1190,   433,   379,   348,    21,
      22,     6,    24,    20,   251,   597,   727,   149,    22,    23,
     430,   431,     6,   433,    22,    23,   339,    59,   778,    96,
      80,    11,     6,    96,  1368,   504,    59,   418,    58,   456,
      22,    23,   459,   460,    93,     0,    76,    93,   262,   466,
     467,   468,   802,   470,   471,   495,     6,    16,     5,    80,
     477,   478,   479,   150,   646,   482,   483,   649,   282,    96,
     652,    16,    40,   140,   141,   147,    75,   494,   259,    78,
      74,   498,    41,    31,    78,   502,     8,   930,    10,    37,
      12,    13,    42,   474,   930,    17,    18,    80,   150,    49,
      50,    51,    52,    96,   285,   214,   215,    80,   448,    31,
      26,    27,    28,     3,   930,    60,    32,    33,   150,    35,
      36,    94,    38,    39,  1474,  1475,   883,   150,   140,   141,
     150,    99,    31,    55,    56,    74,   150,   980,    37,    78,
     292,    63,   147,    65,   980,    43,   147,   140,    96,    97,
      79,    96,   219,    75,   221,   150,   219,   309,   221,    22,
      23,   141,   147,   177,   980,   140,   150,   197,   198,    91,
     881,    93,    26,    27,    28,   150,   150,   309,    32,    33,
     930,    35,    36,  1368,    38,    39,    76,    77,   140,   629,
     630,   631,   219,   610,   221,   178,   179,    96,     3,   305,
     150,    91,   150,   150,   291,   150,   623,   624,    98,   140,
     141,   455,   219,   262,   221,    76,   262,   231,   590,   269,
     270,   271,   272,   663,   664,   665,   666,   644,   472,   212,
     980,   281,   227,   228,   229,   230,   231,   219,  1588,   221,
     680,   343,     6,   227,   228,   229,   230,   231,   269,   270,
     271,   272,   259,   693,   694,   695,   305,    96,   495,   305,
     281,   701,   261,   179,   681,   260,   683,   262,   282,   709,
     710,    76,    77,    43,   196,   147,   589,   259,   262,    96,
     275,   231,   699,   700,   150,   657,    91,   282,  1622,  1623,
    1624,   275,    43,    98,   216,   224,   225,   757,   310,   303,
     222,   140,   141,   298,    19,   303,   280,   150,   281,  1066,
    1067,  1068,   140,   141,   298,   260,   656,  1651,   193,   194,
     195,   266,   231,   140,   141,   179,     3,   147,   768,   769,
     770,   771,   772,   773,   282,   147,   197,   198,   778,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   262,   252,   253,   254,   255,   143,   144,
     145,   146,   802,   803,   227,   228,   229,   230,   234,   235,
     236,    43,   294,   263,    96,   815,   816,   267,   268,   147,
     219,   821,   221,   823,   824,   825,   150,   827,   828,    96,
     306,   234,   235,   236,   303,   304,   259,   260,   140,    76,
      77,   841,   219,   930,   221,   845,   846,   847,   150,   308,
     850,   851,   852,   147,    91,    92,   180,   181,   150,   183,
     930,    98,   926,   100,   101,   865,   930,    16,   141,   869,
     162,   591,   872,   873,   140,   298,   142,  1622,  1623,  1624,
     141,   813,    31,   143,   144,   145,   146,   305,    37,    96,
    1137,   150,   306,   980,   140,   140,   305,   917,   263,    76,
      77,   150,   267,   268,   150,   150,  1651,   231,    57,    58,
     980,    31,    96,   162,    91,   979,   980,    37,     6,    96,
     141,    98,   252,   253,   254,   255,   926,   927,   928,   219,
     930,   221,   256,   257,    83,    84,    85,   219,   262,   221,
      89,   252,   253,   254,   255,   142,   946,    96,    97,   288,
     150,   275,   219,    78,   221,   192,   140,   141,  1328,   196,
     937,   306,   162,   150,    52,  1473,  1474,  1475,   968,   259,
     990,   949,    73,    74,   211,   162,   213,    78,    78,   979,
     980,   903,    64,   983,    66,    67,    68,    69,    70,    71,
      72,    73,    74,  1363,  1364,  1365,  1473,  1474,  1475,   999,
     140,   150,   142,  1003,    78,   150,  1006,   805,  1008,    96,
    1010,  1011,   219,  1013,   221,   150,  1016,   162,  1018,  1019,
     252,   253,   254,   255,   926,     9,   263,   162,   930,  1007,
     140,  1009,  1279,  1280,  1034,   219,   756,   221,  1038,    16,
     150,    78,  1042,    57,    58,   151,   306,  1294,    78,  1296,
    1297,  1298,  1299,   140,   141,  1055,   151,    76,   150,  1306,
    1307,   150,   150,   141,   150,  1043,  1044,  1045,  1046,   867,
     162,    85,  1101,   162,    82,    89,   162,   979,   980,   305,
    1588,   150,    96,    97,   172,   173,   263,    29,    30,    80,
     267,   268,   180,   181,   814,   286,   184,   150,   186,   187,
     188,   189,   190,    94,   224,   225,  1476,  1477,    61,  1551,
     305,  1588,   200,   201,    86,    87,    88,   266,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   219,   282,   221,   140,   150,   141,  1508,    76,
      77,   150,   140,   231,   141,   150,   252,   253,   254,   255,
     140,   141,   151,   162,    91,   140,   151,   252,   253,   254,
     255,    98,   960,   961,   962,   150,   785,   786,   926,   140,
     789,   790,   930,   141,   262,  1617,  1618,   265,  1198,  1321,
    1137,   234,   235,   236,   141,   686,   687,   275,   689,   690,
     691,   290,   280,   141,   293,   150,   994,   995,   996,   997,
     140,  1201,  1189,   822,  1182,   148,  1184,   180,   181,   297,
     252,   253,   254,   255,  1012,   834,  1216,   836,  1218,  1189,
     142,   979,   980,  1223,   306,   844,  1226,  1227,   219,   220,
     221,     7,   303,   304,  1251,  1252,  1253,   283,   284,   858,
     859,  1039,  1040,  1041,   863,   864,  1246,  1247,  1248,  1249,
     291,  1049,   266,   252,   253,   254,   255,   252,   253,   254,
     255,  1059,  1060,   147,   926,   224,   225,   226,   930,   989,
     151,    42,     3,    44,    45,    46,    47,    48,    49,   234,
     235,   236,   278,   279,   280,   904,   905,   906,   907,   140,
     281,    25,   975,   234,   235,   236,  1094,  1095,  1096,  1097,
    1098,  1099,    53,    54,   295,  1282,  1283,  1284,  1285,  1286,
    1287,  1288,  1289,  1290,  1291,    81,   151,   979,   980,    90,
      50,    51,  1279,  1280,   150,    96,   263,   150,    99,   140,
     267,   268,   951,   141,   953,   140,   141,  1294,    95,  1296,
    1297,  1298,  1299,   140,   141,    76,    77,    95,   849,  1306,
    1307,   305,   853,   984,   140,   141,  1278,  1278,   141,  1376,
      91,    92,   140,   141,  1381,   150,  1383,    98,  1385,   100,
     101,   252,   253,   254,   255,    14,    15,  1175,   141,  1177,
    1380,   289,  1382,   289,  1384,   215,  1386,   163,   164,   165,
     166,   167,   168,   169,   170,   171,  1194,  1195,  1017,   287,
     231,   150,  1200,   297,  1202,    98,   177,    29,    30,  1207,
     275,  1209,  1210,  1211,   185,  1213,  1214,   252,   253,   254,
     255,   227,   228,   229,   230,  1056,  1224,   258,  1047,  1048,
     233,   234,   235,   236,   237,  1412,  1234,  1235,  1236,   150,
    1238,  1239,  1240,    72,    73,    74,   140,   141,   219,    78,
     221,    59,   223,   259,   224,   225,   227,  1255,   232,   233,
    1258,   192,   199,  1261,  1262,   196,   305,    99,   299,   300,
     301,   302,   303,   304,   261,  1273,  1274,  1275,    42,  1277,
     211,   261,   213,    42,    72,    73,    74,   177,   259,   260,
      78,   150,   298,   264,   265,    99,   267,   143,   144,   145,
     146,   272,   140,   274,   275,   276,   277,   878,   879,   880,
     140,   282,   283,   284,   285,  1313,  1516,   233,  1518,   140,
    1520,  1319,  1522,    78,    72,    73,    74,   141,  1326,  1327,
      78,   140,  1330,   232,   233,   306,   232,   233,   141,  1337,
     232,   233,   174,  1341,   141,   177,  1344,   231,  1346,   307,
    1348,  1349,  1350,   232,   233,  1353,  1187,   140,  1356,  1357,
     232,   233,   232,   233,  1362,   175,   176,    20,  1366,     3,
     150,   622,  1203,  1371,   625,   626,   627,   628,   140,   141,
     212,   307,   307,   307,   307,   307,   218,   307,   307,   640,
     307,  1389,   224,   225,   307,   307,    93,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   307,   150,   307,
     307,  1242,   307,  1244,    59,   299,   300,   301,   302,   303,
     304,   307,   307,  1254,   307,   307,   677,   678,   679,  1260,
     307,   682,   307,   684,  1265,  1266,  1267,  1268,  1269,  1270,
     150,   140,    76,    77,   288,   141,   296,    82,   150,   150,
     150,   702,   703,   704,   288,   150,   707,    91,    92,     5,
       5,   150,   150,    14,    98,    16,   100,   101,   150,   224,
     225,   150,    99,    99,   150,    26,   308,   231,    29,    30,
      31,  1312,    33,    34,  1482,   150,   150,    85,   150,   150,
    1488,   150,  1490,     3,     5,   150,  1494,   231,  1329,  1497,
    1498,  1332,   140,  1334,   258,   141,   150,   140,   140,  1340,
     140,   140,   140,   150,  1512,  1513,  1514,  1515,   141,   141,
       3,  1352,   140,    59,   141,   141,   141,   233,  1359,  1360,
    1361,    82,   151,     5,     5,   233,   787,   788,   150,   150,
     150,   150,   150,    94,    95,   299,   300,   301,   302,   303,
     304,   150,     5,   150,   150,   806,   150,  1388,   192,  1390,
     150,  1392,   196,   151,    59,   151,    76,    77,     5,     5,
     233,     5,  1403,  1404,  1405,  1406,   233,   211,     5,   213,
     182,    91,    92,   233,   232,   151,   233,   182,    98,   840,
     100,   101,   843,    76,    77,     5,   273,  1595,     5,  1597,
       5,  1599,     5,  1601,   151,     5,   150,   150,    91,    92,
     151,   151,     5,     5,   140,    98,   303,   100,   101,   150,
       5,     5,    42,     5,    44,    45,    46,    47,    48,    49,
       5,     5,     5,   140,   140,   150,  1467,  1468,  1636,     5,
    1638,   150,  1640,     5,  1642,   182,   233,   182,     4,  1480,
       5,     5,     5,  1484,   140,  1486,  1487,     5,  1489,     5,
    1491,  1492,  1493,     5,   151,  1496,   150,     5,  1499,  1500,
      90,     5,     5,  1504,     5,     5,    96,   140,     5,    99,
    1511,   150,   192,   150,   150,     5,   196,     5,     5,     5,
       3,     5,   140,    42,  1525,    44,    45,    46,    47,    48,
      49,   211,   186,   213,   188,   189,   190,   191,     5,   192,
       5,     5,     5,   196,   140,     5,   200,     5,   202,   203,
     204,   205,   206,   207,   208,   209,   210,     5,   211,   140,
     213,    72,    73,    74,    75,    76,    77,    78,    79,  1570,
       5,    90,   233,  1574,   150,  1576,     5,    96,     5,  1580,
      99,  1582,  1583,     5,     5,     5,     5,   177,     5,  1590,
    1591,  1592,  1593,    76,    77,   185,    72,    73,    74,    75,
      76,    77,    78,    79,     5,     5,     5,     5,    91,    92,
       5,   265,     5,     5,     5,    98,   233,   100,   101,    42,
       5,    44,    45,    46,    47,    48,    49,     5,     4,   219,
       5,   221,     5,   223,   140,   299,  1637,   227,  1639,   141,
    1641,   140,  1643,   297,   140,   150,   141,    62,   217,     5,
       5,  1652,   150,  1654,     5,  1656,     5,  1658,   177,     5,
       5,     5,     5,     5,     5,   150,   185,    90,   140,   259,
     260,   140,   150,    96,   264,   265,    99,   267,     6,   150,
     150,    99,   272,   140,   274,   275,   276,   277,   150,   150,
     140,   150,   282,   283,   284,   285,     3,   150,   150,   150,
     219,   150,   221,   150,   223,   233,   100,     5,   227,   192,
       5,     5,     5,   196,   236,   151,   306,   150,     5,   151,
      42,   151,    44,    45,    46,    47,    48,    49,   211,     5,
     213,     5,     5,     5,     5,   151,     3,   151,   151,   151,
     259,   260,   151,   151,   151,   264,   265,     5,   267,    59,
     140,     5,   140,   272,   177,   274,   275,   276,   277,   140,
      12,   344,   185,   282,   283,   284,   285,   102,    90,    76,
      77,   545,    84,   507,    96,    75,   801,    99,    75,   800,
     418,  1304,  1140,   639,    91,    92,  1149,   306,   638,    77,
    1136,    98,  1294,   100,   101,   649,   219,   652,   221,     1,
     223,   646,   597,   495,   227,   347,   420,   826,  1321,    76,
      77,    72,    73,    74,    75,    76,    77,    78,    79,   445,
    1470,   455,   158,    -1,    91,    92,    -1,    -1,   692,    -1,
      -1,    98,    -1,   100,   101,    -1,   259,   260,    -1,    -1,
      -1,   264,   265,    -1,   267,    -1,    -1,    -1,    -1,   272,
      -1,   274,   275,   276,   277,   177,    -1,    -1,    -1,   282,
     283,   284,   285,   185,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,    -1,    -1,
     150,    -1,    -1,   306,    -1,   192,    -1,    -1,    -1,   196,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,    -1,   221,
      -1,   223,   172,   173,   211,   227,   213,    -1,    -1,    -1,
     180,   181,    -1,    -1,   184,    -1,   186,   187,   188,   189,
     190,    -1,    -1,    -1,    -1,   192,    -1,    -1,   150,   196,
     200,   201,    -1,    -1,    -1,    -1,    -1,   259,   260,    -1,
      -1,    -1,   264,   265,   211,   267,   213,    -1,    -1,    -1,
     272,    -1,   274,   275,   276,   277,    -1,    -1,    -1,    -1,
     282,   283,   284,   285,   186,    -1,   188,   189,   190,   191,
      72,    73,    74,    75,    76,    77,    78,    79,   200,    -1,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   238,   239,   240,
     241,   242,   243,    -1,   245,   246,   247,   248,   249,   250,
     251,    72,    73,    74,    75,    76,    77,    78,    79,    72,
      73,    74,    75,    76,    77,    78,    79,    72,    73,    74,
      75,    76,    77,    78,    79,    72,    73,    74,    75,    76,
      77,    78,    79,    72,    73,    74,    75,    76,    77,    78,
      79,    72,    73,    74,    75,    76,    77,    78,    79
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   312,   313,   314,   333,   334,   335,   337,   338,   339,
     340,   343,   344,   345,   346,   347,   348,   349,   355,   366,
     367,   372,   394,   395,   396,   397,   398,   399,   400,   401,
     402,     8,    10,    12,    13,    17,    18,    31,    55,    56,
      63,    65,    75,    91,    93,   196,   216,   222,   294,   483,
     147,   147,   147,   147,   147,   147,   147,   147,   147,     0,
     314,   315,   317,   319,   321,   323,   325,   327,   329,   331,
      11,   141,   150,   140,   368,   369,   373,    19,   305,   141,
     141,   305,   150,   141,   142,   305,    76,   197,   198,   214,
     215,   288,   350,   351,    93,   262,   305,   487,    75,    78,
     261,    78,    78,    78,    16,    78,    78,    16,    41,     3,
      76,    77,    92,    98,   100,   101,   192,   196,   211,   213,
     316,   403,   404,   405,   414,   417,   420,   463,   464,   465,
     466,   479,   482,   483,   484,   490,   491,   492,   493,   495,
     499,   551,   552,   553,   555,   556,   557,     3,   263,   318,
     403,   404,   405,   463,   479,   482,   490,   491,   492,   493,
     495,   520,   536,   545,   547,   549,   550,   551,   557,     3,
     320,   403,   404,   405,   463,   479,   482,   490,   491,   492,
     493,   495,   538,   539,   540,   541,   542,   543,   545,   551,
     557,     3,   322,   403,   404,   405,   463,   479,   482,   490,
     491,   492,   493,   495,   520,   545,   550,   551,   557,     3,
     324,   403,   404,   405,   414,   417,   423,   479,   482,   490,
     491,   492,   493,   495,     3,   326,   403,   404,   405,   479,
     482,   490,   491,   492,   493,   495,   558,   559,   560,   561,
     562,     3,   328,   403,   404,   405,   466,   479,   482,   490,
     491,   492,   493,   495,   502,   554,   330,   403,   404,   405,
     463,   479,   482,   490,   491,   492,   493,   495,   520,   545,
     550,   551,   557,     3,   332,   403,   404,   405,   479,   482,
     490,   491,   492,   493,   495,   498,   546,     9,    76,   336,
      82,   370,    96,   369,   476,    14,    16,    26,    29,    30,
      31,    33,    34,    82,    94,    95,   356,   374,   375,   376,
     377,   378,   379,   382,   383,   384,   385,   386,   357,   341,
     252,   253,   254,   255,   544,   143,   144,   145,   146,   488,
     489,   141,   150,   352,   351,   286,   354,   305,   305,    42,
      44,    45,    46,    47,    48,    49,    90,    96,    99,   177,
     185,   219,   221,   223,   227,   259,   260,   264,   265,   267,
     272,   274,   275,   276,   277,   282,   283,   284,   285,   485,
     486,    61,   564,   141,   141,   140,   141,   140,   141,   141,
     141,   140,   141,   140,   141,   406,   408,   140,   140,     6,
      52,   150,   172,   173,   180,   181,   184,   186,   187,   188,
     189,   190,   200,   201,   231,   262,   265,   275,   280,   297,
     500,   501,   505,   509,   511,   512,   513,   514,   516,   517,
     406,   406,   142,   406,   150,   291,   291,   193,   194,   195,
      76,   197,   198,   148,   147,   496,   497,   262,   305,   487,
       6,   227,   228,   229,   230,   231,   260,   262,   282,   298,
     519,   548,   262,   282,   548,     6,   180,   181,   183,   231,
     256,   257,   231,     6,   280,     6,    42,    49,    50,    51,
      52,   231,   186,   191,   200,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   297,   503,   504,   506,   507,   508,
     510,   513,   177,   231,   282,   140,    25,   150,    37,   224,
     225,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   356,   361,   364,   365,   371,
     410,   411,   150,    81,   413,    21,    22,    24,   140,   141,
     310,   140,   141,    95,    95,   305,   141,   150,   141,    29,
      30,    26,    27,    28,    32,    33,    35,    36,    38,    39,
     179,   306,   358,    64,    66,    67,    68,    69,    70,    71,
      72,    73,    74,   306,   342,   289,   289,   306,   489,   215,
      96,   308,   353,   356,   361,   364,   365,   354,   287,   488,
     485,   306,   486,   150,    96,   219,   221,   407,   408,   409,
     475,    80,    94,   219,   220,   221,   281,   295,   426,   428,
     297,    98,   231,   299,   300,   301,   302,   303,   304,   521,
     521,   521,   521,   180,   181,   521,   521,   521,   521,   283,
     284,   275,   521,   150,   530,   531,   532,   281,   426,   428,
     521,   501,   532,   199,   515,    96,   407,   473,    96,   407,
     472,    96,   407,   474,    59,   497,   305,   485,   564,    22,
      23,   259,   537,   259,   260,   298,   519,   537,   521,   303,
     304,   481,   521,   521,   261,   481,   261,   521,   521,   521,
     285,   258,   521,   258,   521,   269,   270,   271,   272,   269,
     270,   271,   272,    42,    53,    54,   521,   521,   521,    50,
      51,    42,   521,   521,   521,   504,   532,   521,   521,   177,
     231,   262,   481,   150,   370,    99,   140,   142,   140,   140,
     233,   140,   141,   141,   141,   307,   387,   140,   357,    20,
     393,   380,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   150,   150,   494,   306,   306,   487,    59,   150,
     140,   150,   140,   150,   409,   475,   140,   141,   140,   150,
     140,   150,   140,   150,   288,   296,    82,   427,   421,   521,
     150,   150,   150,   150,   162,   518,   518,   521,   521,   518,
     518,   518,   518,   532,   532,   532,   150,    59,   150,     5,
     288,   427,   421,   150,   518,     5,   521,   150,   473,   150,
     472,   150,   474,   485,   306,   150,    99,   532,   532,   532,
     532,    99,   150,   140,   141,   150,   150,   140,   141,   140,
     141,   140,   141,   150,   518,   150,   518,   150,   518,   532,
     521,   150,   518,   521,   518,   424,   424,   424,    85,   563,
     424,   424,   424,   563,   532,   532,   532,   150,   150,   150,
     521,   521,   532,   518,   518,   150,   518,     5,   518,   150,
     532,   532,   231,   140,    22,    23,   303,   362,   388,   389,
     390,   140,   140,   391,   392,   393,   306,    20,   219,   221,
     259,   381,   141,   141,   141,   140,   141,    14,    15,    29,
      30,   141,   141,   363,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   233,   149,   309,   487,   564,   233,
     532,   532,   532,   532,   532,   532,   418,   140,   141,   150,
     415,    57,    58,    85,    89,    96,    97,   266,   422,   430,
     434,   435,   467,   477,   478,   532,   150,    59,   544,   544,
     150,   518,   150,   518,   151,   544,   151,   544,   151,   151,
       5,     5,     5,   233,   234,   235,   236,   237,   522,    59,
      76,    77,    91,    98,   263,   267,   268,   527,   528,   418,
     415,   532,   532,   151,   528,   518,   233,   233,   233,   306,
     487,   532,    58,   532,     5,     5,     5,     5,   532,   544,
     532,   532,   532,   522,   532,   532,   182,   544,   182,   544,
     232,   233,     5,   150,   518,   532,   151,   518,   151,   544,
      16,    60,    96,   260,   425,   467,   468,   469,   470,   471,
     532,   532,   532,   273,   424,   532,   532,   532,   424,     5,
       5,     5,   151,    43,   544,    43,   544,   150,   150,     5,
     151,   544,   151,   544,   532,   151,   528,   151,   532,     5,
       5,   532,   532,   362,   362,   140,   391,   391,   391,   393,
     392,   140,   150,   140,   150,   150,   364,   544,   544,   544,
     544,   232,   233,   232,   233,   232,   233,   232,   233,   232,
     233,   232,   233,   564,     5,     5,     5,     5,     5,     5,
      37,   282,   356,   359,   361,   419,   477,   478,   480,   532,
     532,   532,    16,    83,    84,   356,   359,   361,   416,   429,
     430,   433,   434,   435,   467,   477,   478,   480,   532,   140,
     140,    86,    87,    88,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   150,   150,   521,     5,   532,     5,   233,   524,
     524,   182,   544,   182,   544,   528,   528,   528,   532,   406,
       4,   534,   532,   532,     5,     5,   532,   534,   487,   564,
       5,   140,     5,   528,   528,   528,   528,     5,   532,     5,
       5,     5,   532,     5,     5,   532,   524,   532,   524,   532,
     532,   528,   532,   151,     5,   532,   151,   544,   532,   532,
     140,   150,   150,   150,     5,     5,     5,   532,     5,     5,
       5,   532,   528,   528,   528,   532,   524,   524,   524,   524,
      43,   544,    43,   544,   528,     5,   532,   534,     5,   528,
     528,     5,     5,   140,   140,   528,   528,   528,   528,   528,
     528,    40,   481,     5,     5,     5,   140,     5,   431,   450,
     450,    78,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   410,   411,   461,   462,   438,   438,   442,   442,
      80,   178,   179,   212,   436,   437,   440,   444,   448,   459,
     233,   150,   528,     5,    96,   528,   524,   524,   534,     5,
      96,   407,   525,     3,   527,   529,     5,     5,   528,   528,
       5,   564,   528,   532,   528,   534,   528,     5,   528,   528,
     528,     5,   528,   528,     5,   532,     5,   532,     5,     5,
       5,   532,   528,     5,   532,   532,     5,     5,   233,   528,
     528,   528,     5,   528,   528,   528,     5,   534,     4,   535,
     534,     5,   532,   532,   532,   532,   150,   234,   235,   236,
     523,   150,   523,   150,   523,   150,   523,   534,   528,     5,
     528,   534,   528,   528,   534,   534,   534,   534,   534,   534,
     299,   360,   140,   528,   528,   528,   528,   364,   365,   432,
      99,   174,   177,   212,   218,   308,   410,   411,   451,   452,
     453,   454,   455,   456,   141,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   462,   410,   411,   439,    79,
     410,   411,   443,   140,   140,   150,   141,   437,   410,   411,
     441,   226,   410,   411,   412,   445,   290,   293,   446,   447,
     449,   217,   458,   460,   232,   233,   534,   528,   528,   150,
     525,    62,   526,   278,   279,   280,   528,   528,   535,   534,
     528,   534,     5,   534,   528,   534,   528,   528,     5,   528,
       5,   528,   528,   528,     5,   534,   528,     5,     5,   528,
     528,   534,   534,   534,   528,   535,   535,   535,   528,     3,
     529,   528,     5,     5,     5,     5,   523,   532,   523,   532,
     523,   532,   523,   532,   534,   528,   534,   534,   150,   534,
     534,   534,   534,   140,   175,   176,   521,   140,   141,   140,
     457,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,    99,   140,   140,   142,   150,   140,   534,   534,   233,
     526,   100,   530,   531,   533,   533,   533,   535,   535,   534,
     528,   534,   534,   534,   528,   534,   528,   534,   534,   534,
     528,   534,   528,   528,   534,   534,   534,   535,     6,   534,
     528,   528,   528,   528,   532,     5,   532,     5,   532,     5,
     532,     5,   534,   236,   150,   292,   309,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,    22,    23,   362,
      59,   150,     5,     5,     5,   534,   534,   534,   534,   534,
     534,   533,   534,   534,   534,   534,     5,   528,     5,   528,
       5,   528,     5,   528,   362,   362,   140,    59,   529,   529,
     529,     5,   528,   534,   528,   534,   528,   534,   528,   534,
     140,   140,   529,   534,   534,   534,   534
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   311,   312,   312,   313,   313,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   315,   315,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   317,
     317,   318,   318,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   318,   318,   318,
     319,   319,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   321,   321,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     323,   323,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   325,   325,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   327,   327,   328,   328,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   329,   329,   330,
     330,   330,   330,   330,   330,   330,   330,   330,   330,   330,
     330,   330,   330,   330,   330,   331,   331,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   333,
     333,   333,   334,   335,   336,   336,   337,   338,   338,   338,
     339,   340,   341,   341,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     343,   344,   344,   344,   345,   345,   345,   346,   347,   348,
     349,   350,   350,   351,   352,   352,   353,   353,   353,   353,
     353,   353,   354,   354,   355,   356,   356,   357,   357,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   359,   360,   360,   361,   361,   361,   362,   362,   363,
     363,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     364,   364,   364,   364,   365,   366,   367,   368,   368,   369,
     369,   370,   370,   371,   371,   371,   371,   371,   371,   372,
     373,   373,   374,   374,   374,   374,   374,   374,   374,   374,
     374,   375,   376,   377,   378,   379,   380,   380,   381,   381,
     381,   381,   381,   381,   382,   382,   383,   383,   384,   384,
     385,   386,   386,   386,   386,   386,   386,   387,   386,   388,
     386,   389,   386,   390,   386,   386,   391,   391,   392,   393,
     393,   394,   394,   394,   394,   395,   396,   396,   397,   398,
     399,   399,   400,   401,   402,   402,   403,   403,   404,   404,
     405,   405,   406,   406,   407,   407,   408,   408,   409,   409,
     409,   409,   410,   410,   411,   412,   413,   413,   414,   414,
     415,   415,   416,   416,   416,   416,   416,   416,   416,   416,
     416,   416,   416,   416,   417,   417,   418,   418,   419,   419,
     419,   419,   419,   419,   420,   420,   421,   421,   422,   422,
     422,   422,   422,   422,   423,   423,   423,   423,   423,   423,
     423,   423,   424,   424,   425,   425,   425,   425,   425,   426,
     426,   427,   428,   429,   429,   430,   430,   430,   431,   431,
     432,   432,   433,   434,   434,   434,   434,   434,   434,   434,
     434,   434,   434,   434,   434,   434,   434,   434,   434,   434,
     434,   434,   434,   434,   434,   434,   434,   434,   434,   434,
     434,   434,   434,   434,   434,   434,   434,   434,   434,   434,
     434,   435,   435,   436,   436,   437,   437,   437,   437,   438,
     438,   439,   439,   440,   440,   441,   441,   442,   442,   443,
     443,   443,   443,   443,   444,   444,   445,   445,   445,   446,
     446,   447,   448,   448,   449,   449,   450,   450,   451,   451,
     451,   451,   451,   451,   451,   451,   452,   453,   453,   454,
     454,   455,   456,   457,   457,   458,   459,   459,   460,   461,
     461,   462,   462,   462,   462,   462,   462,   462,   462,   462,
     462,   462,   462,   462,   463,   463,   464,   465,   466,   467,
     467,   468,   469,   470,   471,   472,   472,   473,   473,   474,
     474,   475,   475,   476,   476,   477,   478,   479,   479,   480,
     481,   481,   482,   482,   482,   482,   483,   484,   485,   485,
     486,   486,   486,   486,   486,   486,   486,   486,   486,   486,
     486,   486,   486,   486,   486,   486,   486,   486,   486,   486,
     486,   486,   486,   486,   486,   486,   486,   486,   486,   486,
     487,   487,   488,   488,   489,   489,   489,   489,   490,   490,
     490,   491,   491,   491,   492,   492,   492,   493,   494,   494,
     495,   496,   496,   497,   498,   498,   499,   500,   500,   501,
     501,   501,   501,   501,   501,   501,   502,   503,   503,   504,
     504,   504,   504,   505,   505,   506,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   508,   508,   509,   509,
     509,   509,   510,   510,   511,   512,   513,   514,   514,   514,
     515,   515,   516,   516,   516,   517,   517,   517,   518,   518,
     519,   519,   519,   519,   520,   520,   521,   521,   521,   521,
     521,   521,   521,   521,   522,   522,   522,   522,   522,   522,
     523,   523,   523,   524,   524,   525,   525,   526,   526,   526,
     527,   527,   527,   527,   527,   527,   527,   527,   528,   529,
     530,   531,   532,   532,   532,   533,   533,   533,   534,   534,
     534,   534,   534,   535,   535,   535,   536,   536,   536,   537,
     537,   537,   538,   538,   538,   538,   539,   539,   539,   539,
     540,   540,   541,   541,   542,   542,   543,   544,   544,   544,
     544,   544,   545,   545,   546,   546,   546,   547,   547,   547,
     547,   547,   547,   547,   547,   548,   548,   549,   549,   550,
     550,   551,   551,   552,   552,   553,   553,   554,   554,   555,
     555,   556,   557,   557,   558,   558,   558,   559,   560,   561,
     561,   561,   561,   561,   561,   562,   562,   562,   562,   562,
     562,   563,   564,   564,   564
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       7,     8,     4,     3,     0,     3,     2,     3,     3,     3,
       4,     5,     0,     2,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       2,     3,     3,     5,     4,     6,     4,     3,     3,     3,
       3,     2,     3,     2,     0,     2,     3,     1,     1,     1,
       1,     3,     0,     2,     5,     1,     4,     0,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     5,     0,     1,     4,     5,     5,     0,     1,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     5,     5,     1,     2,     2,
       4,     0,     2,     1,     1,     1,     1,     1,     1,     3,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     3,     3,     0,     2,     2,     2,
       2,     2,     2,     1,     2,     2,     2,     2,     1,     1,
       2,     5,     4,     2,     3,     3,     3,     0,     4,     0,
       5,     0,     5,     0,     5,     2,     1,     2,     1,     0,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     2,     4,     5,     6,     3,     4,     3,     4,
       3,     4,     1,     2,     1,     2,     1,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     0,     2,     9,     9,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     9,     9,     0,     2,     1,     1,
       1,     1,     1,     1,     8,     8,     0,     2,     1,     1,
       1,     1,     1,     1,     9,     8,     8,     8,     9,     8,
       8,     8,     0,     2,     1,     1,     1,     1,     1,     0,
       2,     2,     2,     1,     1,     2,     3,     2,     0,     2,
       1,     1,     2,     3,     2,     2,     2,     2,     2,     2,
       2,     3,     3,     2,     2,     2,     2,     2,     2,     2,
       3,     3,     3,     2,     2,     3,     2,     2,     2,     3,
       2,     2,     2,     2,     3,     3,     3,     2,     2,     2,
       3,     2,     2,     1,     2,     2,     2,     2,     2,     0,
       2,     1,     1,     0,     2,     1,     1,     0,     2,     1,
       1,     4,     5,     5,     0,     2,     1,     1,     1,     2,
       2,     2,     0,     2,     1,     1,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     2,     2,     2,
       2,     2,     2,     0,     2,     2,     0,     2,     1,     1,
       2,     1,     1,     2,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     7,     6,     6,     6,     9,     4,
       4,     2,     2,     3,     2,     0,     3,     0,     3,     0,
       3,     0,     3,     0,     3,     3,     2,     7,     7,     3,
       1,     1,     3,     6,     7,     1,     2,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     4,     1,     2,     2,     2,     1,     1,     3,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     0,     2,
       2,     1,     2,     1,     8,     6,     6,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     6,     1,     2,     1,
       1,     1,     1,     4,     4,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       4,     4,     4,     4,     3,     3,     4,     1,     1,     1,
       0,     1,     5,     6,     5,     5,     6,     5,     1,     1,
       1,     1,     1,     1,     9,     6,     0,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     0,     3,     0,     3,     4,
       1,     4,     5,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     0,     1,     1,     0,     1,     1,     0,     2,
       6,     6,     6,     0,     2,     6,     8,    10,     7,     0,
       1,     1,     8,     9,     9,    10,     9,     9,    10,    10,
      10,     9,    10,     9,     9,     9,     6,     0,     1,     1,
       1,     1,     8,     7,     7,     7,     8,     7,     7,     4,
       4,     7,     7,     4,     4,     0,     1,     9,     6,     8,
       6,     8,     8,     8,     8,     9,     9,     8,     9,     8,
       9,     9,     8,     8,     7,     7,     7,     7,     9,    10,
      11,    12,    10,    11,    12,    10,    11,    12,    10,    11,
      12,     2,     0,     2,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 199: /* setalert: SET alertmail formatlist reminder  */
#line 636 "src/p.y"
                                                    {
                        mailset.events = Event_All;
                        addmail((yyvsp[-2].string), &mailset, &Run.maillist);
                  }
#line 3266 "src/y.tab.c"
    break;

  case 200: /* setalert: SET alertmail '{' eventoptionlist '}' formatlist reminder  */
#line 640 "src/p.y"
                                                                            {
                        addmail((yyvsp[-5].string), &mailset, &Run.maillist);
                  }
#line 3274 "src/y.tab.c"
    break;

  case 201: /* setalert: SET alertmail NOT '{' eventoptionlist '}' formatlist reminder  */
#line 643 "src/p.y"
                                                                                {
                        mailset.events = ~mailset.events;
                        addmail((yyvsp[-6].string), &mailset, &Run.maillist);
                  }
#line 3283 "src/y.tab.c"
    break;

  case 202: /* setdaemon: SET DAEMON NUMBER startdelay  */
#line 649 "src/p.y"
                                               {
                        if (! (Run.flags & Run_Daemon) || ihp.daemon) {
                                int one_year = 31556952;
                                ihp.daemon     = true;
                                Run.flags      |= Run_Daemon;
                                if (((yyvsp[-1].number) <= 0) || ((yyvsp[-1].number) > one_year)) {
                                        yyerror2("Invalid Poll time seconds.");
                                }
                                Run.polltime   = (yyvsp[-1].number);
                                Run.startdelay = (yyvsp[0].number);
                        }
                  }
#line 3300 "src/y.tab.c"
    break;

  case 203: /* setterminal: SET TERMINAL BATCH  */
#line 663 "src/p.y"
                                     {
                        Run.flags |= Run_Batch;
                  }
#line 3308 "src/y.tab.c"
    break;

  case 204: /* startdelay: %empty  */
#line 668 "src/p.y"
                              {
                        (yyval.number) = 0;
                  }
#line 3316 "src/y.tab.c"
    break;

  case 205: /* startdelay: START DELAY NUMBER  */
#line 671 "src/p.y"
                                     {
                        (yyval.number) = (yyvsp[0].number);
                  }
#line 3324 "src/y.tab.c"
    break;

  case 206: /* setinit: SET INIT  */
#line 676 "src/p.y"
                           {
                        Run.flags |= Run_Foreground;
                  }
#line 3332 "src/y.tab.c"
    break;

  case 207: /* setonreboot: SET ONREBOOT START  */
#line 681 "src/p.y"
                                     {
                        Run.onreboot = Onreboot_Start;
                  }
#line 3340 "src/y.tab.c"
    break;

  case 208: /* setonreboot: SET ONREBOOT NOSTART  */
#line 684 "src/p.y"
                                       {
                        Run.onreboot = Onreboot_Nostart;
                  }
#line 3348 "src/y.tab.c"
    break;

  case 209: /* setonreboot: SET ONREBOOT LASTSTATE  */
#line 687 "src/p.y"
                                         {
                        Run.onreboot = Onreboot_Laststate;
                  }
#line 3356 "src/y.tab.c"
    break;

  case 210: /* setexpectbuffer: SET EXPECTBUFFER NUMBER unit  */
#line 692 "src/p.y"
                                               {
                        // Note: deprecated (replaced by "set limits" statement's "sendExpectBuffer" option)
                        Run.limits.sendExpectBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3365 "src/y.tab.c"
    break;

  case 214: /* limit: SENDEXPECTBUFFER ':' NUMBER unit  */
#line 705 "src/p.y"
                                                   {
                        if ((yyvsp[-1].number) <= 0) {
                                yyerror2("The sendExpectBuffer value must be > 0");
                        } else {
                                long long value = (yyvsp[-1].number) * (yyvsp[0].number64);
                                if (value > INT_MAX)
                                        yyerror2("The sendExpectBuffer value must be <= %d", INT_MAX);
                                else
                                        Run.limits.sendExpectBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                        }
                  }
#line 3381 "src/y.tab.c"
    break;

  case 215: /* limit: FILECONTENTBUFFER ':' NUMBER unit  */
#line 716 "src/p.y"
                                                    {
                        if ((yyvsp[-1].number) <= 0) {
                                yyerror2("The fileContentBuffer value must be > 0");
                        } else {
                                Run.limits.fileContentBuffer = (yyvsp[-1].number) * (yyvsp[0].number64);
                        }
                  }
#line 3393 "src/y.tab.c"
    break;

  case 216: /* limit: HTTPCONTENTBUFFER ':' NUMBER unit  */
#line 723 "src/p.y"
                                                    {
                        if ((yyvsp[-1].number) <= 0) {
                                yyerror2("The httpContentBuffer value must be > 0");
                        } else {
                                long long value = (yyvsp[-1].number) * (yyvsp[0].number64);
                                if (value > INT_MAX)
                                        yyerror2("The httpContentBuffer value must be <= %d", INT_MAX);
                                else
                                        Run.limits.httpContentBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                        }
                  }
#line 3409 "src/y.tab.c"
    break;

  case 217: /* limit: PROGRAMOUTPUT ':' NUMBER unit  */
#line 734 "src/p.y"
                                                {
                        if ((yyvsp[-1].number) <= 0) {
                                yyerror2("The programOutput value must be > 0");
                        } else {
                                long long value = (yyvsp[-1].number) * (yyvsp[0].number64);
                                if (value > INT_MAX)
                                        yyerror2("The programOutput value must be <= %d", INT_MAX);
                                else
                                        Run.limits.programOutput = (yyvsp[-1].number) * (yyvsp[0].number);
                        }
                  }
#line 3425 "src/y.tab.c"
    break;

  case 218: /* limit: NETWORKTIMEOUT ':' NUMBER MILLISECOND  */
#line 745 "src/p.y"
                                                        {
                        if ((yyvsp[-1].number) <= 0)
                                yyerror2("The networkTimeout value must be > 0");
                        else
                                Run.limits.networkTimeout = (yyvsp[-1].number);
                  }
#line 3436 "src/y.tab.c"
    break;

  case 219: /* limit: NETWORKTIMEOUT ':' NUMBER SECOND  */
#line 751 "src/p.y"
                                                   {
                        if ((yyvsp[-1].number) <= 0)
                                yyerror2("The networkTimeout value must be > 0");
                        else
                                Run.limits.networkTimeout = (yyvsp[-1].number) * 1000;
                  }
#line 3447 "src/y.tab.c"
    break;

  case 220: /* limit: PROGRAMTIMEOUT ':' NUMBER MILLISECOND  */
#line 757 "src/p.y"
                                                        {
                        if ((yyvsp[-1].number) <= 0)
                                yyerror2("The programTimeout value must be > 0");
                        else
                                Run.limits.programTimeout = (yyvsp[-1].number);
                  }
#line 3458 "src/y.tab.c"
    break;

  case 221: /* limit: PROGRAMTIMEOUT ':' NUMBER SECOND  */
#line 763 "src/p.y"
                                                   {
                        if ((yyvsp[-1].number) <= 0)
                                yyerror2("The programTimeout value must be > 0");
                        else
                                Run.limits.programTimeout = (yyvsp[-1].number) * 1000;
                  }
#line 3469 "src/y.tab.c"
    break;

  case 222: /* limit: STOPTIMEOUT ':' NUMBER MILLISECOND  */
#line 769 "src/p.y"
                                                     {
                        if ((yyvsp[-1].number) <= 0)
                                yyerror2("The stopTimeout value must be > 0");
                        else
                                Run.limits.stopTimeout = (yyvsp[-1].number);
                  }
#line 3480 "src/y.tab.c"
    break;

  case 223: /* limit: STOPTIMEOUT ':' NUMBER SECOND  */
#line 775 "src/p.y"
                                                {
                        if ((yyvsp[-1].number) <= 0)
                                yyerror2("The stopTimeout value must be > 0");
                        else
                                Run.limits.stopTimeout = (yyvsp[-1].number) * 1000;
                  }
#line 3491 "src/y.tab.c"
    break;

  case 224: /* limit: STARTTIMEOUT ':' NUMBER MILLISECOND  */
#line 781 "src/p.y"
                                                      {
                        if ((yyvsp[-1].number) <= 0)
                                yyerror2("The startTimeout value must be > 0");
                        else
                                Run.limits.startTimeout = (yyvsp[-1].number);
                  }
#line 3502 "src/y.tab.c"
    break;

  case 225: /* limit: STARTTIMEOUT ':' NUMBER SECOND  */
#line 787 "src/p.y"
                                                 {
                        if ((yyvsp[-1].number) <= 0)
                                yyerror2("The startTimeout value must be > 0");
                        else
                                Run.limits.startTimeout = (yyvsp[-1].number) * 1000;
                  }
#line 3513 "src/y.tab.c"
    break;

  case 226: /* limit: RESTARTTIMEOUT ':' NUMBER MILLISECOND  */
#line 793 "src/p.y"
                                                        {
                        if ((yyvsp[-1].number) <= 0)
                                yyerror2("The restartTimeout value must be > 0");
                        else
                                Run.limits.restartTimeout = (yyvsp[-1].number);
                  }
#line 3524 "src/y.tab.c"
    break;

  case 227: /* limit: RESTARTTIMEOUT ':' NUMBER SECOND  */
#line 799 "src/p.y"
                                                   {
                        if ((yyvsp[-1].number) <= 0)
                                yyerror2("The restartTimeout value must be > 0");
                        else
                                Run.limits.restartTimeout = (yyvsp[-1].number) * 1000;
                  }
#line 3535 "src/y.tab.c"
    break;

  case 228: /* limit: EXECTIMEOUT ':' NUMBER MILLISECOND  */
#line 805 "src/p.y"
                                                     {
                        if ((yyvsp[-1].number) <= 0)
                                yyerror2("The execTimeout value must be > 0");
                        else
                                Run.limits.execTimeout = (yyvsp[-1].number);
                  }
#line 3546 "src/y.tab.c"
    break;

  case 229: /* limit: EXECTIMEOUT ':' NUMBER SECOND  */
#line 811 "src/p.y"
                                                {
                        if ((yyvsp[-1].number) <= 0)
                                yyerror2("The execTimeout value must be > 0");
                        else
                                Run.limits.execTimeout = (yyvsp[-1].number) * 1000;
                  }
#line 3557 "src/y.tab.c"
    break;

  case 230: /* setfips: SET FIPS  */
#line 819 "src/p.y"
                           {
                        Run.flags |= Run_FipsEnabled;
                  }
#line 3565 "src/y.tab.c"
    break;

  case 231: /* setlog: SET LOGFILE PATH  */
#line 824 "src/p.y"
                                     {
                        if (! Run.files.log || ihp.logfile) {
                                ihp.logfile = true;
                                setlogfile((yyvsp[0].string));
                                Run.flags &= ~Run_UseSyslog;
                                Run.flags |= Run_Log;
                        } else {
                                FREE((yyvsp[0].string));
                        }
                  }
#line 3580 "src/y.tab.c"
    break;

  case 232: /* setlog: SET LOGFILE SYSLOG  */
#line 834 "src/p.y"
                                     {
                        setsyslog(NULL);
                  }
#line 3588 "src/y.tab.c"
    break;

  case 233: /* setlog: SET LOGFILE SYSLOG FACILITY STRING  */
#line 837 "src/p.y"
                                                     {
                        setsyslog((yyvsp[0].string)); FREE((yyvsp[0].string));
                  }
#line 3596 "src/y.tab.c"
    break;

  case 234: /* seteventqueue: SET EVENTQUEUE BASEDIR PATH  */
#line 842 "src/p.y"
                                              {
                        Run.eventlist_dir = (yyvsp[0].string);
                  }
#line 3604 "src/y.tab.c"
    break;

  case 235: /* seteventqueue: SET EVENTQUEUE BASEDIR PATH SLOT NUMBER  */
#line 845 "src/p.y"
                                                          {
                        Run.eventlist_dir = (yyvsp[-2].string);
                        Run.eventlist_slots = (yyvsp[0].number);
                  }
#line 3613 "src/y.tab.c"
    break;

  case 236: /* seteventqueue: SET EVENTQUEUE SLOT NUMBER  */
#line 849 "src/p.y"
                                             {
                        Run.eventlist_dir = Str_dup(MYEVENTLISTBASE);
                        Run.eventlist_slots = (yyvsp[0].number);
                  }
#line 3622 "src/y.tab.c"
    break;

  case 237: /* setidfile: SET IDFILE PATH  */
#line 855 "src/p.y"
                                  {
                        if (! Run.files.id || ihp.idfile) {
                                ihp.idfile = true;
                                setidfile((yyvsp[0].string));
                        } else {
                                FREE((yyvsp[0].string));
                        }
                  }
#line 3635 "src/y.tab.c"
    break;

  case 238: /* setstatefile: SET STATEFILE PATH  */
#line 865 "src/p.y"
                                     {
                        if (! Run.files.state || ihp.statefile) {
                                ihp.statefile = true;
                                setstatefile((yyvsp[0].string));
                        } else {
                                FREE((yyvsp[0].string));
                        }
                  }
#line 3648 "src/y.tab.c"
    break;

  case 239: /* setpid: SET PIDFILE PATH  */
#line 875 "src/p.y"
                                   {
                        if (! Run.files.pid || ihp.pidfile) {
                                ihp.pidfile = true;
                                setpidfile((yyvsp[0].string));
                        } else {
                                FREE((yyvsp[0].string));
                        }
                  }
#line 3661 "src/y.tab.c"
    break;

  case 243: /* mmonit: URLOBJECT mmonitoptlist  */
#line 892 "src/p.y"
                                          {
                        mmonitset.url = (yyvsp[-1].url);
                        addmmonit(&mmonitset);
                  }
#line 3670 "src/y.tab.c"
    break;

  case 246: /* mmonitopt: TIMEOUT NUMBER SECOND  */
#line 902 "src/p.y"
                                        {
                        if ((yyvsp[-1].number) <= 0)
                                yyerror2("The timeout value must be > 0");
                        else
                                mmonitset.timeout = (yyvsp[-1].number) * 1000; // net timeout is in milliseconds internally
                  }
#line 3681 "src/y.tab.c"
    break;

  case 253: /* credentials: REGISTER CREDENTIALS  */
#line 916 "src/p.y"
                                       {
                        Run.flags &= ~Run_MmonitCredentials;
                  }
#line 3689 "src/y.tab.c"
    break;

  case 254: /* setssl: SET SSLTOKEN '{' ssloptionlist '}'  */
#line 921 "src/p.y"
                                                     {
                        _setSSLOptions(&(Run.ssl));
                  }
#line 3697 "src/y.tab.c"
    break;

  case 255: /* ssl: SSLTOKEN  */
#line 926 "src/p.y"
                           {
                        sslset.flags = SSL_Enabled;
                  }
#line 3705 "src/y.tab.c"
    break;

  case 259: /* ssloption: VERIFY ':' ENABLE  */
#line 936 "src/p.y"
                                    {
                        sslset.flags = SSL_Enabled;
                        sslset.verify = true;
                  }
#line 3714 "src/y.tab.c"
    break;

  case 260: /* ssloption: VERIFY ':' DISABLE  */
#line 940 "src/p.y"
                                     {
                        sslset.flags = SSL_Enabled;
                        sslset.verify = false;
                  }
#line 3723 "src/y.tab.c"
    break;

  case 261: /* ssloption: SELFSIGNED ':' ALLOW  */
#line 944 "src/p.y"
                                       {
                        sslset.flags = SSL_Enabled;
                        sslset.allowSelfSigned = true;
                  }
#line 3732 "src/y.tab.c"
    break;

  case 262: /* ssloption: SELFSIGNED ':' REJECTOPT  */
#line 948 "src/p.y"
                                           {
                        sslset.flags = SSL_Enabled;
                        sslset.allowSelfSigned = false;
                  }
#line 3741 "src/y.tab.c"
    break;

  case 263: /* ssloption: VERSIONOPT ':' sslversionlist  */
#line 952 "src/p.y"
                                                {
                        sslset.flags = SSL_Enabled;
                  }
#line 3749 "src/y.tab.c"
    break;

  case 264: /* ssloption: CIPHER ':' STRING  */
#line 955 "src/p.y"
                                    {
                        FREE(sslset.ciphers);
                        sslset.ciphers = (yyvsp[0].string);
                  }
#line 3758 "src/y.tab.c"
    break;

  case 265: /* ssloption: PEMFILE ':' PATH  */
#line 959 "src/p.y"
                                   {
                        _setPEM(&(sslset.pemfile), (yyvsp[0].string), "SSL server PEM file", true);
                  }
#line 3766 "src/y.tab.c"
    break;

  case 266: /* ssloption: PEMCHAIN ':' PATH  */
#line 962 "src/p.y"
                                    {
                        _setPEM(&(sslset.pemchain), (yyvsp[0].string), "SSL certificate chain PEM file", true);
                  }
#line 3774 "src/y.tab.c"
    break;

  case 267: /* ssloption: PEMKEY ':' PATH  */
#line 965 "src/p.y"
                                  {
                        _setPEM(&(sslset.pemkey), (yyvsp[0].string), "SSL server private key PEM file", true);
                  }
#line 3782 "src/y.tab.c"
    break;

  case 268: /* ssloption: CLIENTPEMFILE ':' PATH  */
#line 968 "src/p.y"
                                         {
                        _setPEM(&(sslset.clientpemfile), (yyvsp[0].string), "SSL client PEM file", true);
                  }
#line 3790 "src/y.tab.c"
    break;

  case 269: /* ssloption: CACERTIFICATEFILE ':' PATH  */
#line 971 "src/p.y"
                                             {
                        _setPEM(&(sslset.CACertificateFile), (yyvsp[0].string), "SSL CA certificates file", true);
                  }
#line 3798 "src/y.tab.c"
    break;

  case 270: /* ssloption: CACERTIFICATEPATH ':' PATH  */
#line 974 "src/p.y"
                                             {
                        _setPEM(&(sslset.CACertificatePath), (yyvsp[0].string), "SSL CA certificates directory", false);
                  }
#line 3806 "src/y.tab.c"
    break;

  case 271: /* sslexpire: CERTIFICATE VALID expireoperator NUMBER DAY  */
#line 979 "src/p.y"
                                                              {
                        sslset.flags = SSL_Enabled;
                        portset.target.net.ssl.certificate.minimumDays = (yyvsp[-1].number);
                  }
#line 3815 "src/y.tab.c"
    break;

  case 274: /* sslchecksum: CERTIFICATE CHECKSUM checksumoperator STRING  */
#line 989 "src/p.y"
                                                               {
                        sslset.flags = SSL_Enabled;
                        sslset.checksum = (yyvsp[0].string);
                        switch (cleanup_hash_string(sslset.checksum)) {
                                case 32:
                                        sslset.checksumType = Hash_Md5;
                                        break;
                                case 40:
                                        sslset.checksumType = Hash_Sha1;
                                        break;
                                default:
                                        yyerror2("Unknown checksum type: [%s] is not MD5 nor SHA1", sslset.checksum);
                        }
                  }
#line 3834 "src/y.tab.c"
    break;

  case 275: /* sslchecksum: CERTIFICATE CHECKSUM MD5HASH checksumoperator STRING  */
#line 1003 "src/p.y"
                                                                       {
                        sslset.flags = SSL_Enabled;
                        sslset.checksum = (yyvsp[0].string);
                        if (cleanup_hash_string(sslset.checksum) != 32)
                                yyerror2("Unknown checksum type: [%s] is not MD5", sslset.checksum);
                        sslset.checksumType = Hash_Md5;
                  }
#line 3846 "src/y.tab.c"
    break;

  case 276: /* sslchecksum: CERTIFICATE CHECKSUM SHA1HASH checksumoperator STRING  */
#line 1010 "src/p.y"
                                                                        {
                        sslset.flags = SSL_Enabled;
                        sslset.checksum = (yyvsp[0].string);
                        if (cleanup_hash_string(sslset.checksum) != 40)
                                yyerror2("Unknown checksum type: [%s] is not SHA1", sslset.checksum);
                        sslset.checksumType = Hash_Sha1;
                  }
#line 3858 "src/y.tab.c"
    break;

  case 281: /* sslversion: SSLV2  */
#line 1027 "src/p.y"
                        {
#if defined OPENSSL_NO_SSL2 || ! defined HAVE_SSLV2 || ! defined HAVE_OPENSSL
                        yyerror("Your SSL Library does not support SSL version 2");
#else
                        _setSSLVersion(SSL_V2);
#endif
                  }
#line 3870 "src/y.tab.c"
    break;

  case 282: /* sslversion: NOSSLV2  */
#line 1034 "src/p.y"
                          {
                        _unsetSSLVersion(SSL_V2);
                  }
#line 3878 "src/y.tab.c"
    break;

  case 283: /* sslversion: SSLV3  */
#line 1037 "src/p.y"
                        {
#if defined OPENSSL_NO_SSL3 || ! defined HAVE_OPENSSL
                        yyerror("Your SSL Library does not support SSL version 3");
#else
                        _setSSLVersion(SSL_V3);
#endif
                  }
#line 3890 "src/y.tab.c"
    break;

  case 284: /* sslversion: NOSSLV3  */
#line 1044 "src/p.y"
                          {
                        _unsetSSLVersion(SSL_V3);
                  }
#line 3898 "src/y.tab.c"
    break;

  case 285: /* sslversion: TLSV1  */
#line 1047 "src/p.y"
                        {
#if defined OPENSSL_NO_TLS1_METHOD || ! defined HAVE_OPENSSL
                        yyerror("Your SSL Library does not support TLS version 1.0");
#else
                        _setSSLVersion(SSL_TLSV1);
#endif
                  }
#line 3910 "src/y.tab.c"
    break;

  case 286: /* sslversion: NOTLSV1  */
#line 1054 "src/p.y"
                          {
                        _unsetSSLVersion(SSL_TLSV1);
                  }
#line 3918 "src/y.tab.c"
    break;

  case 287: /* sslversion: TLSV11  */
#line 1057 "src/p.y"
                         {
#if defined OPENSSL_NO_TLS1_1_METHOD || ! defined HAVE_TLSV1_1 || ! defined HAVE_OPENSSL
                        yyerror("Your SSL Library does not support TLS version 1.1");
#else
                        _setSSLVersion(SSL_TLSV11);
#endif
                }
#line 3930 "src/y.tab.c"
    break;

  case 288: /* sslversion: NOTLSV11  */
#line 1064 "src/p.y"
                           {
                        _unsetSSLVersion(SSL_TLSV11);
                  }
#line 3938 "src/y.tab.c"
    break;

  case 289: /* sslversion: TLSV12  */
#line 1067 "src/p.y"
                         {
#if defined OPENSSL_NO_TLS1_2_METHOD || ! defined HAVE_TLSV1_2 || ! defined HAVE_OPENSSL
                        yyerror("Your SSL Library does not support TLS version 1.2");
#else
                        _setSSLVersion(SSL_TLSV12);
#endif
                }
#line 3950 "src/y.tab.c"
    break;

  case 290: /* sslversion: NOTLSV12  */
#line 1074 "src/p.y"
                           {
                        _unsetSSLVersion(SSL_TLSV12);
                  }
#line 3958 "src/y.tab.c"
    break;

  case 291: /* sslversion: TLSV13  */
#line 1077 "src/p.y"
                         {
#if defined OPENSSL_NO_TLS1_3_METHOD || ! defined HAVE_TLSV1_3 || ! defined HAVE_OPENSSL
                        yyerror("Your SSL Library does not support TLS version 1.3");
#else
                        _setSSLVersion(SSL_TLSV13);
#endif
                }
#line 3970 "src/y.tab.c"
    break;

  case 292: /* sslversion: NOTLSV13  */
#line 1084 "src/p.y"
                           {
                        _unsetSSLVersion(SSL_TLSV13);
                  }
#line 3978 "src/y.tab.c"
    break;

  case 293: /* sslversion: AUTO  */
#line 1087 "src/p.y"
                       {
                        // Enable just TLS 1.2 and 1.3 by default
#if ! defined OPENSSL_NO_TLS1_2_METHOD && defined HAVE_TLSV1_2 && defined HAVE_OPENSSL
                        _setSSLVersion(SSL_TLSV12);
#endif
#if ! defined OPENSSL_NO_TLS1_3_METHOD && defined HAVE_TLSV1_3 && defined HAVE_OPENSSL
                        _setSSLVersion(SSL_TLSV13);
#endif
                  }
#line 3992 "src/y.tab.c"
    break;

  case 294: /* certmd5: CERTMD5 STRING  */
#line 1098 "src/p.y"
                                 { // Backward compatibility
                        sslset.flags = SSL_Enabled;
                        sslset.checksum = (yyvsp[0].string);
                        if (cleanup_hash_string(sslset.checksum) != 32)
                                yyerror2("Unknown checksum type: [%s] is not MD5", sslset.checksum);
                        sslset.checksumType = Hash_Md5;
                  }
#line 4004 "src/y.tab.c"
    break;

  case 295: /* setmailservers: SET MAILSERVER mailserverlist nettimeout hostname  */
#line 1107 "src/p.y"
                                                                    {
                        Run.mailserver_timeout = (yyvsp[-1].number);
                        Run.mail_hostname = (yyvsp[0].string);
                  }
#line 4013 "src/y.tab.c"
    break;

  case 296: /* setmailformat: SET MAILFORMAT '{' formatoptionlist '}'  */
#line 1113 "src/p.y"
                                                          {
                        if (mailset.from) {
                                Run.MailFormat.from = mailset.from;
                        } else {
                                Run.MailFormat.from = Address_new();
                                Run.MailFormat.from->address = Str_dup(ALERT_FROM);
                        }
                        if (mailset.replyto)
                                Run.MailFormat.replyto = mailset.replyto;
                        Run.MailFormat.subject = mailset.subject ?  mailset.subject : Str_dup(ALERT_SUBJECT);
                        Run.MailFormat.message = mailset.message ?  mailset.message : Str_dup(ALERT_MESSAGE);
                        reset_mailset();
                  }
#line 4031 "src/y.tab.c"
    break;

  case 299: /* mailserver: STRING mailserveroptlist  */
#line 1132 "src/p.y"
                                           {
                        /* Restore the current text overridden by lookahead */
                        FREE(argyytext);
                        argyytext = Str_dup((yyvsp[-1].string));

                        mailserverset.host = (yyvsp[-1].string);
                        mailserverset.port = PORT_SMTP;
                        addmailserver(&mailserverset);
                  }
#line 4045 "src/y.tab.c"
    break;

  case 300: /* mailserver: STRING PORT NUMBER mailserveroptlist  */
#line 1141 "src/p.y"
                                                       {
                        /* Restore the current text overridden by lookahead */
                        FREE(argyytext);
                        argyytext = Str_dup((yyvsp[-3].string));

                        mailserverset.host = (yyvsp[-3].string);
                        mailserverset.port = (yyvsp[-1].number);
                        addmailserver(&mailserverset);
                  }
#line 4059 "src/y.tab.c"
    break;

  case 303: /* mailserveropt: username  */
#line 1156 "src/p.y"
                           {
                        mailserverset.username = (yyvsp[0].string);
                  }
#line 4067 "src/y.tab.c"
    break;

  case 304: /* mailserveropt: password  */
#line 1159 "src/p.y"
                           {
                        mailserverset.password = (yyvsp[0].string);
                  }
#line 4075 "src/y.tab.c"
    break;

  case 309: /* sethttpd: SET HTTPD httpdlist  */
#line 1168 "src/p.y"
                                      {
                        if (sslset.flags & SSL_Enabled) {
#ifdef HAVE_OPENSSL
                                if (sslset.pemfile) {
                                        if (sslset.pemchain || sslset.pemkey) {
                                                yyerror("SSL server option pemfile and pemchain|pemkey are mutually exclusive");
                                        } else if (! file_checkStat(sslset.pemfile, "SSL server PEM file", S_IRWXU | S_IRGRP | S_IXGRP)) {
                                                yyerror("SSL server PEM file permissions check failed");
                                        } else {
                                                _setSSLOptions(&(Run.httpd.socket.net.ssl));
                                        }
                                } else if (sslset.pemchain && sslset.pemkey) {
                                        if (! file_checkStat(sslset.pemkey, "SSL server private key PEM file", S_IRWXU | S_IRGRP | S_IXGRP)) {
                                                yyerror("SSL server private key PEM file permissions check failed");
                                        } else {
                                                _setSSLOptions(&(Run.httpd.socket.net.ssl));
                                        }
                                } else {
                                        yyerror("SSL server PEM file is required (please use ssl pemfile option)");
                                }
#else
                                yyerror("SSL is not supported");
#endif
                        }
                  }
#line 4105 "src/y.tab.c"
    break;

  case 321: /* pemfile: PEMFILE PATH  */
#line 1211 "src/p.y"
                               {
                        _setPEM(&(sslset.pemfile), (yyvsp[0].string), "SSL server PEM file", true);
                  }
#line 4113 "src/y.tab.c"
    break;

  case 322: /* clientpemfile: CLIENTPEMFILE PATH  */
#line 1217 "src/p.y"
                                     {
                        _setPEM(&(sslset.clientpemfile), (yyvsp[0].string), "SSL client PEM file", true);
                  }
#line 4121 "src/y.tab.c"
    break;

  case 323: /* allowselfcert: ALLOWSELFCERTIFICATION  */
#line 1223 "src/p.y"
                                         {
                        sslset.flags = SSL_Enabled;
                        sslset.allowSelfSigned = true;
                  }
#line 4130 "src/y.tab.c"
    break;

  case 324: /* httpdport: PORT NUMBER readonly  */
#line 1229 "src/p.y"
                                       {
                        Run.httpd.flags |= Httpd_Net;
                        Run.httpd.socket.net.port = (yyvsp[-1].number);
                        Run.httpd.socket.net.readonly = (yyvsp[0].number);
                  }
#line 4140 "src/y.tab.c"
    break;

  case 325: /* httpdsocket: UNIXSOCKET PATH httpdsocketoptionlist  */
#line 1236 "src/p.y"
                                                        {
                        Run.httpd.flags |= Httpd_Unix;
                        Run.httpd.socket.unix.path = (yyvsp[-1].string);
                  }
#line 4149 "src/y.tab.c"
    break;

  case 328: /* httpdsocketoption: UID STRING  */
#line 1246 "src/p.y"
                               {
                        Run.httpd.flags |= Httpd_UnixUid;
                        Run.httpd.socket.unix.uid = get_uid((yyvsp[0].string), 0);
                        FREE((yyvsp[0].string));
                    }
#line 4159 "src/y.tab.c"
    break;

  case 329: /* httpdsocketoption: GID STRING  */
#line 1251 "src/p.y"
                               {
                        Run.httpd.flags |= Httpd_UnixGid;
                        Run.httpd.socket.unix.gid = get_gid((yyvsp[0].string), 0);
                        FREE((yyvsp[0].string));
                    }
#line 4169 "src/y.tab.c"
    break;

  case 330: /* httpdsocketoption: UID NUMBER  */
#line 1256 "src/p.y"
                               {
                        Run.httpd.flags |= Httpd_UnixUid;
                        Run.httpd.socket.unix.uid = get_uid(NULL, (yyvsp[0].number));
                    }
#line 4178 "src/y.tab.c"
    break;

  case 331: /* httpdsocketoption: GID NUMBER  */
#line 1260 "src/p.y"
                               {
                        Run.httpd.flags |= Httpd_UnixGid;
                        Run.httpd.socket.unix.gid = get_gid(NULL, (yyvsp[0].number));
                    }
#line 4187 "src/y.tab.c"
    break;

  case 332: /* httpdsocketoption: PERMISSION NUMBER  */
#line 1264 "src/p.y"
                                      {
                        Run.httpd.flags |= Httpd_UnixPermission;
                        Run.httpd.socket.unix.permission = check_perm((yyvsp[0].number));
                    }
#line 4196 "src/y.tab.c"
    break;

  case 333: /* httpdsocketoption: READONLY  */
#line 1268 "src/p.y"
                             {
                        Run.httpd.socket.unix.readonly = true;
                    }
#line 4204 "src/y.tab.c"
    break;

  case 338: /* signature: sigenable  */
#line 1281 "src/p.y"
                             {
                        Run.httpd.flags |= Httpd_Signature;
                  }
#line 4212 "src/y.tab.c"
    break;

  case 339: /* signature: sigdisable  */
#line 1284 "src/p.y"
                             {
                        Run.httpd.flags &= ~Httpd_Signature;
                  }
#line 4220 "src/y.tab.c"
    break;

  case 340: /* bindaddress: ADDRESS STRING  */
#line 1289 "src/p.y"
                                 {
                        if (Run.httpd.socket.net.address) {
                                yywarning2("The 'address' option can be specified only once, the last value will be used\n");
                                FREE(Run.httpd.socket.net.address);
                        }
                        Run.httpd.socket.net.address = (yyvsp[0].string);
                  }
#line 4232 "src/y.tab.c"
    break;

  case 341: /* allow: ALLOW STRING ':' STRING readonly  */
#line 1298 "src/p.y"
                                                 {
                        addcredentials((yyvsp[-3].string), (yyvsp[-1].string), Digest_Cleartext, (yyvsp[0].number));
                  }
#line 4240 "src/y.tab.c"
    break;

  case 342: /* allow: ALLOW '@' STRING readonly  */
#line 1301 "src/p.y"
                                           {
#ifdef HAVE_LIBPAM
                        addpamauth((yyvsp[-1].string), (yyvsp[0].number));
#else
                        yyerror("PAM is not supported");
                        FREE((yyvsp[-1].string));
#endif
                  }
#line 4253 "src/y.tab.c"
    break;

  case 343: /* allow: ALLOW PATH  */
#line 1309 "src/p.y"
                             {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Cleartext);
                        FREE((yyvsp[0].string));
                  }
#line 4262 "src/y.tab.c"
    break;

  case 344: /* allow: ALLOW CLEARTEXT PATH  */
#line 1313 "src/p.y"
                                       {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Cleartext);
                        FREE((yyvsp[0].string));
                  }
#line 4271 "src/y.tab.c"
    break;

  case 345: /* allow: ALLOW MD5HASH PATH  */
#line 1317 "src/p.y"
                                     {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Md5);
                        FREE((yyvsp[0].string));
                  }
#line 4280 "src/y.tab.c"
    break;

  case 346: /* allow: ALLOW CRYPT PATH  */
#line 1321 "src/p.y"
                                   {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Crypt);
                        FREE((yyvsp[0].string));
                  }
#line 4289 "src/y.tab.c"
    break;

  case 347: /* $@1: %empty  */
#line 1325 "src/p.y"
                             {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Cleartext;
                  }
#line 4298 "src/y.tab.c"
    break;

  case 348: /* allow: ALLOW PATH $@1 allowuserlist  */
#line 1329 "src/p.y"
                                {
                        FREE(htpasswd_file);
                  }
#line 4306 "src/y.tab.c"
    break;

  case 349: /* $@2: %empty  */
#line 1332 "src/p.y"
                                       {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Cleartext;
                  }
#line 4315 "src/y.tab.c"
    break;

  case 350: /* allow: ALLOW CLEARTEXT PATH $@2 allowuserlist  */
#line 1336 "src/p.y"
                                {
                        FREE(htpasswd_file);
                  }
#line 4323 "src/y.tab.c"
    break;

  case 351: /* $@3: %empty  */
#line 1339 "src/p.y"
                                     {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Md5;
                  }
#line 4332 "src/y.tab.c"
    break;

  case 352: /* allow: ALLOW MD5HASH PATH $@3 allowuserlist  */
#line 1343 "src/p.y"
                                {
                        FREE(htpasswd_file);
                  }
#line 4340 "src/y.tab.c"
    break;

  case 353: /* $@4: %empty  */
#line 1346 "src/p.y"
                                   {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Crypt;
                  }
#line 4349 "src/y.tab.c"
    break;

  case 354: /* allow: ALLOW CRYPT PATH $@4 allowuserlist  */
#line 1350 "src/p.y"
                                {
                        FREE(htpasswd_file);
                  }
#line 4357 "src/y.tab.c"
    break;

  case 355: /* allow: ALLOW STRING  */
#line 1353 "src/p.y"
                               {
                        if (! Engine_addAllow((yyvsp[0].string)))
                                yywarning2("invalid allow option: %s", (yyvsp[0].string));
                        FREE((yyvsp[0].string));
                  }
#line 4367 "src/y.tab.c"
    break;

  case 358: /* allowuser: STRING  */
#line 1364 "src/p.y"
                         {
                        addhtpasswdentry(htpasswd_file, (yyvsp[0].string), digesttype);
                        FREE((yyvsp[0].string));
                  }
#line 4376 "src/y.tab.c"
    break;

  case 359: /* readonly: %empty  */
#line 1370 "src/p.y"
                              {
                        (yyval.number) = false;
                  }
#line 4384 "src/y.tab.c"
    break;

  case 360: /* readonly: READONLY  */
#line 1373 "src/p.y"
                           {
                        (yyval.number) = true;
                  }
#line 4392 "src/y.tab.c"
    break;

  case 361: /* checkproc: CHECKPROC SERVICENAME PIDFILE PATH  */
#line 1378 "src/p.y"
                                                     {
                        createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                  }
#line 4400 "src/y.tab.c"
    break;

  case 362: /* checkproc: CHECKPROC SERVICENAME PATHTOK PATH  */
#line 1381 "src/p.y"
                                                     {
                        createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                  }
#line 4408 "src/y.tab.c"
    break;

  case 363: /* checkproc: CHECKPROC SERVICENAME MATCH STRING  */
#line 1384 "src/p.y"
                                                     {
                        createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                        matchset.ignore = false;
                        matchset.match_path = NULL;
                        matchset.match_string = Str_dup((yyvsp[0].string));
                        addmatch(&matchset, Action_Ignored, 0);
                  }
#line 4420 "src/y.tab.c"
    break;

  case 364: /* checkproc: CHECKPROC SERVICENAME MATCH PATH  */
#line 1391 "src/p.y"
                                                   {
                        createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                        matchset.ignore = false;
                        matchset.match_path = NULL;
                        matchset.match_string = Str_dup((yyvsp[0].string));
                        addmatch(&matchset, Action_Ignored, 0);
                  }
#line 4432 "src/y.tab.c"
    break;

  case 365: /* checkfile: CHECKFILE SERVICENAME PATHTOK PATH  */
#line 1400 "src/p.y"
                                                     {
                        createservice(Service_File, (yyvsp[-2].string), (yyvsp[0].string), check_file);
                  }
#line 4440 "src/y.tab.c"
    break;

  case 366: /* checkfilesys: CHECKFILESYS SERVICENAME PATHTOK PATH  */
#line 1405 "src/p.y"
                                                        {
                        createservice(Service_Filesystem, (yyvsp[-2].string), (yyvsp[0].string), check_filesystem);
                  }
#line 4448 "src/y.tab.c"
    break;

  case 367: /* checkfilesys: CHECKFILESYS SERVICENAME PATHTOK STRING  */
#line 1408 "src/p.y"
                                                          {
                        createservice(Service_Filesystem, (yyvsp[-2].string), (yyvsp[0].string), check_filesystem);
                  }
#line 4456 "src/y.tab.c"
    break;

  case 368: /* checkdir: CHECKDIR SERVICENAME PATHTOK PATH  */
#line 1413 "src/p.y"
                                                    {
                        createservice(Service_Directory, (yyvsp[-2].string), (yyvsp[0].string), check_directory);
                  }
#line 4464 "src/y.tab.c"
    break;

  case 369: /* checkhost: CHECKHOST SERVICENAME ADDRESS STRING  */
#line 1418 "src/p.y"
                                                       {
                        createservice(Service_Host, (yyvsp[-2].string), (yyvsp[0].string), check_remote_host);
                  }
#line 4472 "src/y.tab.c"
    break;

  case 370: /* checknet: CHECKNET SERVICENAME ADDRESS STRING  */
#line 1423 "src/p.y"
                                                      {
                        if (Link_isGetByAddressSupported()) {
                                createservice(Service_Net, (yyvsp[-2].string), (yyvsp[0].string), check_net);
                                current->inf.net->stats = Link_createForAddress((yyvsp[0].string));
                        } else {
                                yyerror("Network monitoring by IP address is not supported on this platform, please use 'check network <foo> with interface <bar>' instead");
                        }
                  }
#line 4485 "src/y.tab.c"
    break;

  case 371: /* checknet: CHECKNET SERVICENAME INTERFACE STRING  */
#line 1431 "src/p.y"
                                                        {
                        createservice(Service_Net, (yyvsp[-2].string), (yyvsp[0].string), check_net);
                        current->inf.net->stats = Link_createForInterface((yyvsp[0].string));
                  }
#line 4494 "src/y.tab.c"
    break;

  case 372: /* checksystem: CHECKSYSTEM SERVICENAME  */
#line 1437 "src/p.y"
                                          {
                        char *servicename = (yyvsp[0].string);
                        if (Str_sub(servicename, "$HOST")) {
                                char hostname[STRLEN];
                                if (gethostname(hostname, sizeof(hostname))) {
                                        Log_error("System hostname error -- %s\n", STRERROR);
                                        cfg_errflag++;
                                } else {
                                        Util_replaceString(&servicename, "$HOST", hostname);
                                }
                        }
                        Run.system = createservice(Service_System, servicename, NULL, check_system); // The name given in the 'check system' statement overrides system hostname
                  }
#line 4512 "src/y.tab.c"
    break;

  case 373: /* checkfifo: CHECKFIFO SERVICENAME PATHTOK PATH  */
#line 1452 "src/p.y"
                                                     {
                        createservice(Service_Fifo, (yyvsp[-2].string), (yyvsp[0].string), check_fifo);
                  }
#line 4520 "src/y.tab.c"
    break;

  case 374: /* checkprogram: CHECKPROGRAM SERVICENAME PATHTOK argumentlist programtimeout  */
#line 1457 "src/p.y"
                                                                               {
                        createservice(Service_Program, (yyvsp[-3].string), NULL, check_program);
                        current->program->timeout = (yyvsp[0].number);
                        current->program->lastOutput = StringBuffer_create(64);
                        current->program->inprogressOutput = StringBuffer_create(64);
                 }
#line 4531 "src/y.tab.c"
    break;

  case 375: /* checkprogram: CHECKPROGRAM SERVICENAME PATHTOK argumentlist useroptionlist programtimeout  */
#line 1463 "src/p.y"
                                                                                              {
                        createservice(Service_Program, (yyvsp[-4].string), NULL, check_program);
                        current->program->timeout = (yyvsp[0].number);
                        current->program->lastOutput = StringBuffer_create(64);
                        current->program->inprogressOutput = StringBuffer_create(64);
                 }
#line 4542 "src/y.tab.c"
    break;

  case 376: /* start: START argumentlist starttimeout  */
#line 1471 "src/p.y"
                                                  {
                        addcommand(START, (yyvsp[0].number));
                  }
#line 4550 "src/y.tab.c"
    break;

  case 377: /* start: START argumentlist useroptionlist starttimeout  */
#line 1474 "src/p.y"
                                                                 {
                        addcommand(START, (yyvsp[0].number));
                  }
#line 4558 "src/y.tab.c"
    break;

  case 378: /* stop: STOP argumentlist stoptimeout  */
#line 1479 "src/p.y"
                                                {
                        addcommand(STOP, (yyvsp[0].number));
                  }
#line 4566 "src/y.tab.c"
    break;

  case 379: /* stop: STOP argumentlist useroptionlist stoptimeout  */
#line 1482 "src/p.y"
                                                               {
                        addcommand(STOP, (yyvsp[0].number));
                  }
#line 4574 "src/y.tab.c"
    break;

  case 380: /* restart: RESTART argumentlist restarttimeout  */
#line 1488 "src/p.y"
                                                      {
                        addcommand(RESTART, (yyvsp[0].number));
                  }
#line 4582 "src/y.tab.c"
    break;

  case 381: /* restart: RESTART argumentlist useroptionlist restarttimeout  */
#line 1491 "src/p.y"
                                                                     {
                        addcommand(RESTART, (yyvsp[0].number));
                  }
#line 4590 "src/y.tab.c"
    break;

  case 386: /* argument: STRING  */
#line 1504 "src/p.y"
                         {
                        addargument((yyvsp[0].string));
                  }
#line 4598 "src/y.tab.c"
    break;

  case 387: /* argument: PATH  */
#line 1507 "src/p.y"
                       {
                        addargument((yyvsp[0].string));
                  }
#line 4606 "src/y.tab.c"
    break;

  case 388: /* useroption: UID STRING  */
#line 1512 "src/p.y"
                             {
                        addeuid(get_uid((yyvsp[0].string), 0));
                        FREE((yyvsp[0].string));
                  }
#line 4615 "src/y.tab.c"
    break;

  case 389: /* useroption: GID STRING  */
#line 1516 "src/p.y"
                             {
                        addegid(get_gid((yyvsp[0].string), 0));
                        FREE((yyvsp[0].string));
                  }
#line 4624 "src/y.tab.c"
    break;

  case 390: /* useroption: UID NUMBER  */
#line 1520 "src/p.y"
                             {
                        addeuid(get_uid(NULL, (yyvsp[0].number)));
                  }
#line 4632 "src/y.tab.c"
    break;

  case 391: /* useroption: GID NUMBER  */
#line 1523 "src/p.y"
                             {
                        addegid(get_gid(NULL, (yyvsp[0].number)));
                  }
#line 4640 "src/y.tab.c"
    break;

  case 392: /* username: USERNAME MAILADDR  */
#line 1528 "src/p.y"
                                    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4648 "src/y.tab.c"
    break;

  case 393: /* username: USERNAME STRING  */
#line 1531 "src/p.y"
                                  {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4656 "src/y.tab.c"
    break;

  case 394: /* password: PASSWORD STRING  */
#line 1536 "src/p.y"
                                  {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4664 "src/y.tab.c"
    break;

  case 395: /* database: DATABASE STRING  */
#line 1541 "src/p.y"
                                  {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4672 "src/y.tab.c"
    break;

  case 396: /* hostname: %empty  */
#line 1546 "src/p.y"
                                  {
                        (yyval.string) = NULL;
                  }
#line 4680 "src/y.tab.c"
    break;

  case 397: /* hostname: HOSTNAME STRING  */
#line 1549 "src/p.y"
                                  {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4688 "src/y.tab.c"
    break;

  case 398: /* connection: IF FAILED host port connectionoptlist rate1 THEN action1 recovery_success  */
#line 1554 "src/p.y"
                                                                                            {
                        /* This is a workaround to support content match without having to create an URL object. 'urloption' creates the Request_T object we need minus the URL object, but with enough information to perform content test.
                           TODO: Parser is in need of refactoring */
                        portset.url_request = urlrequest;
                        portset.check_invers = false;
                        portset.responsetime.operator = responsetimeset.operator;
                        portset.responsetime.limit = responsetimeset.limit;
                        addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addport(&(current->portlist), &portset);
                  }
#line 4703 "src/y.tab.c"
    break;

  case 399: /* connection: IF SUCCEEDED host port connectionoptlist rate1 THEN action1 recovery_failure  */
#line 1564 "src/p.y"
                                                                                               {
                        portset.url_request = urlrequest;
                        portset.check_invers = true;
                        portset.responsetime.operator = responsetimeset.operator;
                        portset.responsetime.limit = responsetimeset.limit;
                        addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addport(&(current->portlist), &portset);
                  }
#line 4716 "src/y.tab.c"
    break;

  case 414: /* connectionurl: IF FAILED URL URLOBJECT connectionurloptlist rate1 THEN action1 recovery_success  */
#line 1592 "src/p.y"
                                                                                                   {
                        portset.check_invers = false;
                        portset.responsetime.operator = responsetimeset.operator;
                        portset.responsetime.limit = responsetimeset.limit;
                        prepare_urlrequest((yyvsp[-5].url));
                        addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addport(&(current->portlist), &portset);
                  }
#line 4729 "src/y.tab.c"
    break;

  case 415: /* connectionurl: IF SUCCEEDED URL URLOBJECT connectionurloptlist rate1 THEN action1 recovery_failure  */
#line 1600 "src/p.y"
                                                                                                      {
                        portset.check_invers = true;
                        portset.responsetime.operator = responsetimeset.operator;
                        portset.responsetime.limit = responsetimeset.limit;
                        prepare_urlrequest((yyvsp[-5].url));
                        addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addport(&(current->portlist), &portset);
                  }
#line 4742 "src/y.tab.c"
    break;

  case 424: /* connectionunix: IF FAILED unixsocket connectionuxoptlist rate1 THEN action1 recovery_success  */
#line 1622 "src/p.y"
                                                                                               {
                        portset.check_invers = false;
                        portset.responsetime.operator = responsetimeset.operator;
                        portset.responsetime.limit = responsetimeset.limit;
                        addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addport(&(current->socketlist), &portset);
                  }
#line 4754 "src/y.tab.c"
    break;

  case 425: /* connectionunix: IF SUCCEEDED unixsocket connectionuxoptlist rate1 THEN action1 recovery_failure  */
#line 1629 "src/p.y"
                                                                                                  {
                        portset.check_invers = true;
                        portset.responsetime.operator = responsetimeset.operator;
                        portset.responsetime.limit = responsetimeset.limit;
                        addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addport(&(current->socketlist), &portset);
                  }
#line 4766 "src/y.tab.c"
    break;

  case 434: /* icmp: IF FAILED ICMP icmptype icmpoptlist rate1 THEN action1 recovery_success  */
#line 1650 "src/p.y"
                                                                                          {
                        icmpset.family = Socket_Ip;
                        icmpset.check_invers = false;
                        icmpset.type = (yyvsp[-5].number);
                        icmpset.responsetime.operator = responsetimeset.operator;
                        icmpset.responsetime.limit = responsetimeset.limit;
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                  }
#line 4780 "src/y.tab.c"
    break;

  case 435: /* icmp: IF FAILED PING icmpoptlist rate1 THEN action1 recovery_success  */
#line 1659 "src/p.y"
                                                                                 {
                        icmpset.family = Socket_Ip;
                        icmpset.check_invers = false;
                        icmpset.responsetime.operator = responsetimeset.operator;
                        icmpset.responsetime.limit = responsetimeset.limit;
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 4793 "src/y.tab.c"
    break;

  case 436: /* icmp: IF FAILED PING4 icmpoptlist rate1 THEN action1 recovery_success  */
#line 1667 "src/p.y"
                                                                                  {
                        icmpset.family = Socket_Ip4;
                        icmpset.check_invers = false;
                        icmpset.responsetime.operator = responsetimeset.operator;
                        icmpset.responsetime.limit = responsetimeset.limit;
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 4806 "src/y.tab.c"
    break;

  case 437: /* icmp: IF FAILED PING6 icmpoptlist rate1 THEN action1 recovery_success  */
#line 1675 "src/p.y"
                                                                                  {
                        icmpset.family = Socket_Ip6;
                        icmpset.check_invers = false;
                        icmpset.responsetime.operator = responsetimeset.operator;
                        icmpset.responsetime.limit = responsetimeset.limit;
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 4819 "src/y.tab.c"
    break;

  case 438: /* icmp: IF SUCCEEDED ICMP icmptype icmpoptlist rate1 THEN action1 recovery_failure  */
#line 1683 "src/p.y"
                                                                                             {
                        icmpset.family = Socket_Ip;
                        icmpset.check_invers = true;
                        icmpset.type = (yyvsp[-5].number);
                        icmpset.responsetime.operator = responsetimeset.operator;
                        icmpset.responsetime.limit = responsetimeset.limit;
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                  }
#line 4833 "src/y.tab.c"
    break;

  case 439: /* icmp: IF SUCCEEDED PING icmpoptlist rate1 THEN action1 recovery_failure  */
#line 1692 "src/p.y"
                                                                                    {
                        icmpset.family = Socket_Ip;
                        icmpset.check_invers = true;
                        icmpset.responsetime.operator = responsetimeset.operator;
                        icmpset.responsetime.limit = responsetimeset.limit;
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 4846 "src/y.tab.c"
    break;

  case 440: /* icmp: IF SUCCEEDED PING4 icmpoptlist rate1 THEN action1 recovery_failure  */
#line 1700 "src/p.y"
                                                                                     {
                        icmpset.family = Socket_Ip4;
                        icmpset.check_invers = true;
                        icmpset.responsetime.operator = responsetimeset.operator;
                        icmpset.responsetime.limit = responsetimeset.limit;
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 4859 "src/y.tab.c"
    break;

  case 441: /* icmp: IF SUCCEEDED PING6 icmpoptlist rate1 THEN action1 recovery_failure  */
#line 1708 "src/p.y"
                                                                                     {
                        icmpset.family = Socket_Ip6;
                        icmpset.check_invers = true;
                        icmpset.responsetime.operator = responsetimeset.operator;
                        icmpset.responsetime.limit = responsetimeset.limit;
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 4872 "src/y.tab.c"
    break;

  case 449: /* host: %empty  */
#line 1729 "src/p.y"
                              {
                        portset.hostname = Str_dup(current->type == Service_Host ? current->path : LOCALHOST);
                  }
#line 4880 "src/y.tab.c"
    break;

  case 450: /* host: HOST STRING  */
#line 1732 "src/p.y"
                              {
                        portset.hostname = (yyvsp[0].string);
                  }
#line 4888 "src/y.tab.c"
    break;

  case 451: /* port: PORT NUMBER  */
#line 1737 "src/p.y"
                              {
                        portset.target.net.port = (yyvsp[0].number);
                  }
#line 4896 "src/y.tab.c"
    break;

  case 452: /* unixsocket: UNIXSOCKET PATH  */
#line 1742 "src/p.y"
                                  {
                        portset.family = Socket_Unix;
                        portset.target.unix.pathname = (yyvsp[0].string);
                  }
#line 4905 "src/y.tab.c"
    break;

  case 453: /* ip: IPV4  */
#line 1748 "src/p.y"
                       {
                        portset.family = Socket_Ip4;
                  }
#line 4913 "src/y.tab.c"
    break;

  case 454: /* ip: IPV6  */
#line 1751 "src/p.y"
                       {
                        portset.family = Socket_Ip6;
                  }
#line 4921 "src/y.tab.c"
    break;

  case 455: /* type: TYPE TCP  */
#line 1756 "src/p.y"
                           {
                        portset.type = Socket_Tcp;
                  }
#line 4929 "src/y.tab.c"
    break;

  case 456: /* type: TYPE TCPSSL typeoptlist  */
#line 1759 "src/p.y"
                                          { // The typelist is kept for backward compatibility (replaced by ssloptionlist)
                        portset.type = Socket_Tcp;
                        sslset.flags = SSL_Enabled;
                  }
#line 4938 "src/y.tab.c"
    break;

  case 457: /* type: TYPE UDP  */
#line 1763 "src/p.y"
                           {
                        portset.type = Socket_Udp;
                  }
#line 4946 "src/y.tab.c"
    break;

  case 462: /* outgoing: ADDRESS STRING  */
#line 1776 "src/p.y"
                                 {
                        _parseOutgoingAddress((yyvsp[0].string), &(portset.outgoing));
                  }
#line 4954 "src/y.tab.c"
    break;

  case 463: /* protocol: PROTOCOL APACHESTATUS apache_stat_list  */
#line 1781 "src/p.y"
                                                         {
                        portset.protocol = Protocol_get(Protocol_APACHESTATUS);
                  }
#line 4962 "src/y.tab.c"
    break;

  case 464: /* protocol: PROTOCOL CLAMAV  */
#line 1784 "src/p.y"
                                  {
                        portset.protocol = Protocol_get(Protocol_CLAMAV);
                  }
#line 4970 "src/y.tab.c"
    break;

  case 465: /* protocol: PROTOCOL DEFAULT  */
#line 1787 "src/p.y"
                                   {
                        portset.protocol = Protocol_get(Protocol_DEFAULT);
                  }
#line 4978 "src/y.tab.c"
    break;

  case 466: /* protocol: PROTOCOL DNS  */
#line 1790 "src/p.y"
                               {
                        portset.protocol = Protocol_get(Protocol_DNS);
                  }
#line 4986 "src/y.tab.c"
    break;

  case 467: /* protocol: PROTOCOL DWP  */
#line 1793 "src/p.y"
                                {
                        portset.protocol = Protocol_get(Protocol_DWP);
                  }
#line 4994 "src/y.tab.c"
    break;

  case 468: /* protocol: PROTOCOL FAIL2BAN  */
#line 1796 "src/p.y"
                                    {
                        portset.protocol = Protocol_get(Protocol_FAIL2BAN);
                }
#line 5002 "src/y.tab.c"
    break;

  case 469: /* protocol: PROTOCOL FTP  */
#line 1799 "src/p.y"
                               {
                        portset.protocol = Protocol_get(Protocol_FTP);
                  }
#line 5010 "src/y.tab.c"
    break;

  case 470: /* protocol: PROTOCOL GPS  */
#line 1802 "src/p.y"
                               {
                        portset.protocol = Protocol_get(Protocol_GPS);
                  }
#line 5018 "src/y.tab.c"
    break;

  case 471: /* protocol: PROTOCOL HTTP httplist  */
#line 1805 "src/p.y"
                                         {
                        portset.protocol = Protocol_get(Protocol_HTTP);
                  }
#line 5026 "src/y.tab.c"
    break;

  case 472: /* protocol: PROTOCOL HTTPS httplist  */
#line 1808 "src/p.y"
                                          {
                        sslset.flags = SSL_Enabled;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_HTTP);
                 }
#line 5036 "src/y.tab.c"
    break;

  case 473: /* protocol: PROTOCOL IMAP  */
#line 1813 "src/p.y"
                                {
                        portset.protocol = Protocol_get(Protocol_IMAP);
                  }
#line 5044 "src/y.tab.c"
    break;

  case 474: /* protocol: PROTOCOL IMAPS  */
#line 1816 "src/p.y"
                                 {
                        sslset.flags = SSL_Enabled;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_IMAP);
                  }
#line 5054 "src/y.tab.c"
    break;

  case 475: /* protocol: PROTOCOL LDAP2  */
#line 1821 "src/p.y"
                                 {
                        portset.protocol = Protocol_get(Protocol_LDAP2);
                  }
#line 5062 "src/y.tab.c"
    break;

  case 476: /* protocol: PROTOCOL LDAP3  */
#line 1824 "src/p.y"
                                 {
                        portset.protocol = Protocol_get(Protocol_LDAP3);
                  }
#line 5070 "src/y.tab.c"
    break;

  case 477: /* protocol: PROTOCOL LMTP  */
#line 1827 "src/p.y"
                                {
                        portset.protocol = Protocol_get(Protocol_LMTP);
                  }
#line 5078 "src/y.tab.c"
    break;

  case 478: /* protocol: PROTOCOL MEMCACHE  */
#line 1830 "src/p.y"
                                    {
                        portset.protocol = Protocol_get(Protocol_MEMCACHE);
                  }
#line 5086 "src/y.tab.c"
    break;

  case 479: /* protocol: PROTOCOL MONGODB  */
#line 1833 "src/p.y"
                                    {
                        portset.protocol = Protocol_get(Protocol_MONGODB);
                  }
#line 5094 "src/y.tab.c"
    break;

  case 480: /* protocol: PROTOCOL MQTT mqttlist  */
#line 1836 "src/p.y"
                                         {
                        portset.protocol = Protocol_get(Protocol_MQTT);
                  }
#line 5102 "src/y.tab.c"
    break;

  case 481: /* protocol: PROTOCOL MYSQL mysqllist  */
#line 1839 "src/p.y"
                                           {
                        portset.protocol = Protocol_get(Protocol_MYSQL);
                  }
#line 5110 "src/y.tab.c"
    break;

  case 482: /* protocol: PROTOCOL MYSQLS mysqllist  */
#line 1842 "src/p.y"
                                            {
                        sslset.flags = SSL_StartTLS;
                        portset.protocol = Protocol_get(Protocol_MYSQL);
                  }
#line 5119 "src/y.tab.c"
    break;

  case 483: /* protocol: PROTOCOL NNTP  */
#line 1846 "src/p.y"
                                {
                        portset.protocol = Protocol_get(Protocol_NNTP);
                  }
#line 5127 "src/y.tab.c"
    break;

  case 484: /* protocol: PROTOCOL NTP3  */
#line 1849 "src/p.y"
                                 {
                        portset.protocol = Protocol_get(Protocol_NTP3);
                        portset.type = Socket_Udp;
                  }
#line 5136 "src/y.tab.c"
    break;

  case 485: /* protocol: PROTOCOL PGSQL postgresqllist  */
#line 1853 "src/p.y"
                                                {
                        portset.protocol = Protocol_get(Protocol_PGSQL);
                  }
#line 5144 "src/y.tab.c"
    break;

  case 486: /* protocol: PROTOCOL POP  */
#line 1856 "src/p.y"
                               {
                        portset.protocol = Protocol_get(Protocol_POP);
                  }
#line 5152 "src/y.tab.c"
    break;

  case 487: /* protocol: PROTOCOL POPS  */
#line 1859 "src/p.y"
                                {
                        sslset.flags = SSL_Enabled;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_POP);
                  }
#line 5162 "src/y.tab.c"
    break;

  case 488: /* protocol: PROTOCOL POSTFIXPOLICY  */
#line 1864 "src/p.y"
                                         {
                        portset.protocol = Protocol_get(Protocol_POSTFIXPOLICY);
                  }
#line 5170 "src/y.tab.c"
    break;

  case 489: /* protocol: PROTOCOL RADIUS radiuslist  */
#line 1867 "src/p.y"
                                             {
                        portset.protocol = Protocol_get(Protocol_RADIUS);
                  }
#line 5178 "src/y.tab.c"
    break;

  case 490: /* protocol: PROTOCOL RDATE  */
#line 1870 "src/p.y"
                                 {
                        portset.protocol = Protocol_get(Protocol_RDATE);
                  }
#line 5186 "src/y.tab.c"
    break;

  case 491: /* protocol: PROTOCOL REDIS  */
#line 1873 "src/p.y"
                                  {
                        portset.protocol = Protocol_get(Protocol_REDIS);
                  }
#line 5194 "src/y.tab.c"
    break;

  case 492: /* protocol: PROTOCOL RSYNC  */
#line 1876 "src/p.y"
                                 {
                        portset.protocol = Protocol_get(Protocol_RSYNC);
                  }
#line 5202 "src/y.tab.c"
    break;

  case 493: /* protocol: PROTOCOL SIEVE  */
#line 1879 "src/p.y"
                                 {
                        portset.protocol = Protocol_get(Protocol_SIEVE);
                  }
#line 5210 "src/y.tab.c"
    break;

  case 494: /* protocol: PROTOCOL SIP siplist  */
#line 1882 "src/p.y"
                                       {
                        portset.protocol = Protocol_get(Protocol_SIP);
                  }
#line 5218 "src/y.tab.c"
    break;

  case 495: /* protocol: PROTOCOL SMTP smtplist  */
#line 1885 "src/p.y"
                                         {
                        portset.protocol = Protocol_get(Protocol_SMTP);
                  }
#line 5226 "src/y.tab.c"
    break;

  case 496: /* protocol: PROTOCOL SMTPS smtplist  */
#line 1888 "src/p.y"
                                          {
                        sslset.flags = SSL_Enabled;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_SMTP);
                 }
#line 5236 "src/y.tab.c"
    break;

  case 497: /* protocol: PROTOCOL SPAMASSASSIN  */
#line 1893 "src/p.y"
                                        {
                        portset.protocol = Protocol_get(Protocol_SPAMASSASSIN);
                  }
#line 5244 "src/y.tab.c"
    break;

  case 498: /* protocol: PROTOCOL SSH  */
#line 1896 "src/p.y"
                                {
                        portset.protocol = Protocol_get(Protocol_SSH);
                  }
#line 5252 "src/y.tab.c"
    break;

  case 499: /* protocol: PROTOCOL TNS  */
#line 1899 "src/p.y"
                               {
                        portset.protocol = Protocol_get(Protocol_TNS);
                  }
#line 5260 "src/y.tab.c"
    break;

  case 500: /* protocol: PROTOCOL WEBSOCKET websocketlist  */
#line 1902 "src/p.y"
                                                   {
                        portset.protocol = Protocol_get(Protocol_WEBSOCKET);
                  }
#line 5268 "src/y.tab.c"
    break;

  case 501: /* sendexpect: SEND STRING  */
#line 1907 "src/p.y"
                              {
                        if (portset.protocol->check == check_default || portset.protocol->check == check_generic) {
                                portset.protocol = Protocol_get(Protocol_GENERIC);
                                addgeneric(&portset, (yyvsp[0].string), NULL);
                        } else {
                                yyerror("The SEND statement is not allowed in the %s protocol context", portset.protocol->name);
                        }
                  }
#line 5281 "src/y.tab.c"
    break;

  case 502: /* sendexpect: EXPECT STRING  */
#line 1915 "src/p.y"
                                {
                        if (portset.protocol->check == check_default || portset.protocol->check == check_generic) {
                                portset.protocol = Protocol_get(Protocol_GENERIC);
                                addgeneric(&portset, NULL, (yyvsp[0].string));
                        } else {
                                yyerror("The EXPECT statement is not allowed in the %s protocol context", portset.protocol->name);
                        }
                  }
#line 5294 "src/y.tab.c"
    break;

  case 505: /* websocket: ORIGIN STRING  */
#line 1929 "src/p.y"
                                {
                        portset.parameters.websocket.origin = (yyvsp[0].string);
                  }
#line 5302 "src/y.tab.c"
    break;

  case 506: /* websocket: REQUEST PATH  */
#line 1932 "src/p.y"
                               {
                        portset.parameters.websocket.request = (yyvsp[0].string);
                  }
#line 5310 "src/y.tab.c"
    break;

  case 507: /* websocket: HOST STRING  */
#line 1935 "src/p.y"
                              {
                        portset.parameters.websocket.host = (yyvsp[0].string);
                  }
#line 5318 "src/y.tab.c"
    break;

  case 508: /* websocket: VERSIONOPT NUMBER  */
#line 1938 "src/p.y"
                                    {
                        portset.parameters.websocket.version = (yyvsp[0].number);
                  }
#line 5326 "src/y.tab.c"
    break;

  case 511: /* smtp: username  */
#line 1947 "src/p.y"
                           {
                        portset.parameters.smtp.username = (yyvsp[0].string);
                  }
#line 5334 "src/y.tab.c"
    break;

  case 512: /* smtp: password  */
#line 1950 "src/p.y"
                           {
                        portset.parameters.smtp.password = (yyvsp[0].string);
                  }
#line 5342 "src/y.tab.c"
    break;

  case 515: /* mqtt: username  */
#line 1959 "src/p.y"
                           {
                        portset.parameters.mqtt.username = (yyvsp[0].string);
                  }
#line 5350 "src/y.tab.c"
    break;

  case 516: /* mqtt: password  */
#line 1962 "src/p.y"
                           {
                        portset.parameters.mqtt.password = (yyvsp[0].string);
                  }
#line 5358 "src/y.tab.c"
    break;

  case 519: /* mysql: username  */
#line 1971 "src/p.y"
                           {
                        portset.parameters.mysql.username = (yyvsp[0].string);
                  }
#line 5366 "src/y.tab.c"
    break;

  case 520: /* mysql: password  */
#line 1974 "src/p.y"
                           {
                        portset.parameters.mysql.password = (yyvsp[0].string);
                  }
#line 5374 "src/y.tab.c"
    break;

  case 521: /* mysql: RSAKEY CHECKSUM checksumoperator STRING  */
#line 1977 "src/p.y"
                                                          {
                        portset.parameters.mysql.rsaChecksum = (yyvsp[0].string);
                        switch (cleanup_hash_string(portset.parameters.mysql.rsaChecksum)) {
                                case 32:
                                        portset.parameters.mysql.rsaChecksumType = Hash_Md5;
                                        break;
                                case 40:
                                        portset.parameters.mysql.rsaChecksumType = Hash_Sha1;
                                        break;
                                default:
                                        yyerror2("Unknown checksum type: [%s] is not MD5 nor SHA1", portset.parameters.mysql.rsaChecksum);
                        }
                  }
#line 5392 "src/y.tab.c"
    break;

  case 522: /* mysql: RSAKEY CHECKSUM MD5HASH checksumoperator STRING  */
#line 1990 "src/p.y"
                                                                  {
                        portset.parameters.mysql.rsaChecksum = (yyvsp[0].string);
                        if (cleanup_hash_string(portset.parameters.mysql.rsaChecksum) != 32)
                                yyerror2("Unknown checksum type: [%s] is not MD5", portset.parameters.mysql.rsaChecksum);
                        portset.parameters.mysql.rsaChecksumType = Hash_Md5;
                  }
#line 5403 "src/y.tab.c"
    break;

  case 523: /* mysql: RSAKEY CHECKSUM SHA1HASH checksumoperator STRING  */
#line 1996 "src/p.y"
                                                                   {
                        portset.parameters.mysql.rsaChecksum = (yyvsp[0].string);
                        if (cleanup_hash_string(portset.parameters.mysql.rsaChecksum) != 40)
                                yyerror2("Unknown checksum type: [%s] is not SHA1", portset.parameters.mysql.rsaChecksum);
                        portset.parameters.mysql.rsaChecksumType = Hash_Sha1;
                  }
#line 5414 "src/y.tab.c"
    break;

  case 526: /* postgresql: username  */
#line 2008 "src/p.y"
                           {
                        portset.parameters.postgresql.username = (yyvsp[0].string);
                  }
#line 5422 "src/y.tab.c"
    break;

  case 527: /* postgresql: password  */
#line 2011 "src/p.y"
                           {
                        portset.parameters.postgresql.password = (yyvsp[0].string);
                  }
#line 5430 "src/y.tab.c"
    break;

  case 528: /* postgresql: database  */
#line 2014 "src/p.y"
                           {
                        portset.parameters.postgresql.database = (yyvsp[0].string);
                  }
#line 5438 "src/y.tab.c"
    break;

  case 529: /* target: TARGET MAILADDR  */
#line 2019 "src/p.y"
                                  {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 5446 "src/y.tab.c"
    break;

  case 530: /* target: TARGET STRING  */
#line 2022 "src/p.y"
                                {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 5454 "src/y.tab.c"
    break;

  case 531: /* maxforward: MAXFORWARD NUMBER  */
#line 2027 "src/p.y"
                                    {
                        (yyval.number) = verifyMaxForward((yyvsp[0].number));
                  }
#line 5462 "src/y.tab.c"
    break;

  case 534: /* sip: target  */
#line 2036 "src/p.y"
                         {
                        portset.parameters.sip.target = (yyvsp[0].string);
                  }
#line 5470 "src/y.tab.c"
    break;

  case 535: /* sip: maxforward  */
#line 2039 "src/p.y"
                             {
                        portset.parameters.sip.maxforward = (yyvsp[0].number);
                  }
#line 5478 "src/y.tab.c"
    break;

  case 538: /* http: username  */
#line 2048 "src/p.y"
                           {
                        portset.parameters.http.username = (yyvsp[0].string);
                  }
#line 5486 "src/y.tab.c"
    break;

  case 539: /* http: password  */
#line 2051 "src/p.y"
                           {
                        portset.parameters.http.password = (yyvsp[0].string);
                  }
#line 5494 "src/y.tab.c"
    break;

  case 546: /* status: STATUS operator NUMBER  */
#line 2062 "src/p.y"
                                         {
                        if ((yyvsp[0].number) < 0) {
                                yyerror2("The status value must be greater or equal to 0");
                        }
                        portset.parameters.http.operator = (yyvsp[-1].number);
                        portset.parameters.http.status = (yyvsp[0].number);
                        portset.parameters.http.hasStatus = true;
                  }
#line 5507 "src/y.tab.c"
    break;

  case 547: /* method: METHOD GET  */
#line 2072 "src/p.y"
                             {
                        portset.parameters.http.method = Http_Get;
                  }
#line 5515 "src/y.tab.c"
    break;

  case 548: /* method: METHOD HEAD  */
#line 2075 "src/p.y"
                              {
                        portset.parameters.http.method = Http_Head;
                  }
#line 5523 "src/y.tab.c"
    break;

  case 549: /* request: REQUEST PATH  */
#line 2080 "src/p.y"
                               {
                        portset.parameters.http.request = Util_urlEncode((yyvsp[0].string), false);
                        FREE((yyvsp[0].string));
                  }
#line 5532 "src/y.tab.c"
    break;

  case 550: /* request: REQUEST STRING  */
#line 2084 "src/p.y"
                                 {
                        portset.parameters.http.request = Util_urlEncode((yyvsp[0].string), false);
                        FREE((yyvsp[0].string));
                  }
#line 5541 "src/y.tab.c"
    break;

  case 551: /* responsesum: CHECKSUM STRING  */
#line 2090 "src/p.y"
                                  {
                        portset.parameters.http.checksum = (yyvsp[0].string);
                  }
#line 5549 "src/y.tab.c"
    break;

  case 552: /* hostheader: HOSTHEADER STRING  */
#line 2095 "src/p.y"
                                    {
                        addhttpheader(&portset, Str_cat("Host:%s", (yyvsp[0].string)));
                        FREE((yyvsp[0].string));
                  }
#line 5558 "src/y.tab.c"
    break;

  case 554: /* httpheaderlist: httpheaderlist HTTPHEADER  */
#line 2102 "src/p.y"
                                            {
                        addhttpheader(&portset, (yyvsp[0].string));
                 }
#line 5566 "src/y.tab.c"
    break;

  case 555: /* secret: SECRET STRING  */
#line 2107 "src/p.y"
                                {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 5574 "src/y.tab.c"
    break;

  case 558: /* radius: secret  */
#line 2116 "src/p.y"
                         {
                        portset.parameters.radius.secret = (yyvsp[0].string);
                  }
#line 5582 "src/y.tab.c"
    break;

  case 561: /* apache_stat: username  */
#line 2125 "src/p.y"
                           {
                        portset.parameters.apachestatus.username = (yyvsp[0].string);
                  }
#line 5590 "src/y.tab.c"
    break;

  case 562: /* apache_stat: password  */
#line 2128 "src/p.y"
                           {
                        portset.parameters.apachestatus.password = (yyvsp[0].string);
                  }
#line 5598 "src/y.tab.c"
    break;

  case 563: /* apache_stat: PATHTOK PATH  */
#line 2131 "src/p.y"
                               {
                        portset.parameters.apachestatus.path = (yyvsp[0].string);
                  }
#line 5606 "src/y.tab.c"
    break;

  case 564: /* apache_stat: LOGLIMIT operator NUMBER PERCENT  */
#line 2134 "src/p.y"
                                                   {
                        portset.parameters.apachestatus.loglimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.loglimit = (yyvsp[-1].number);
                  }
#line 5615 "src/y.tab.c"
    break;

  case 565: /* apache_stat: CLOSELIMIT operator NUMBER PERCENT  */
#line 2138 "src/p.y"
                                                     {
                        portset.parameters.apachestatus.closelimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.closelimit = (yyvsp[-1].number);
                  }
#line 5624 "src/y.tab.c"
    break;

  case 566: /* apache_stat: DNSLIMIT operator NUMBER PERCENT  */
#line 2142 "src/p.y"
                                                   {
                        portset.parameters.apachestatus.dnslimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.dnslimit = (yyvsp[-1].number);
                  }
#line 5633 "src/y.tab.c"
    break;

  case 567: /* apache_stat: KEEPALIVELIMIT operator NUMBER PERCENT  */
#line 2146 "src/p.y"
                                                         {
                        portset.parameters.apachestatus.keepalivelimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.keepalivelimit = (yyvsp[-1].number);
                  }
#line 5642 "src/y.tab.c"
    break;

  case 568: /* apache_stat: REPLYLIMIT operator NUMBER PERCENT  */
#line 2150 "src/p.y"
                                                     {
                        portset.parameters.apachestatus.replylimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.replylimit = (yyvsp[-1].number);
                  }
#line 5651 "src/y.tab.c"
    break;

  case 569: /* apache_stat: REQUESTLIMIT operator NUMBER PERCENT  */
#line 2154 "src/p.y"
                                                       {
                        portset.parameters.apachestatus.requestlimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.requestlimit = (yyvsp[-1].number);
                  }
#line 5660 "src/y.tab.c"
    break;

  case 570: /* apache_stat: STARTLIMIT operator NUMBER PERCENT  */
#line 2158 "src/p.y"
                                                     {
                        portset.parameters.apachestatus.startlimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.startlimit = (yyvsp[-1].number);
                  }
#line 5669 "src/y.tab.c"
    break;

  case 571: /* apache_stat: WAITLIMIT operator NUMBER PERCENT  */
#line 2162 "src/p.y"
                                                    {
                        portset.parameters.apachestatus.waitlimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.waitlimit = (yyvsp[-1].number);
                  }
#line 5678 "src/y.tab.c"
    break;

  case 572: /* apache_stat: GRACEFULLIMIT operator NUMBER PERCENT  */
#line 2166 "src/p.y"
                                                        {
                        portset.parameters.apachestatus.gracefullimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.gracefullimit = (yyvsp[-1].number);
                  }
#line 5687 "src/y.tab.c"
    break;

  case 573: /* apache_stat: CLEANUPLIMIT operator NUMBER PERCENT  */
#line 2170 "src/p.y"
                                                       {
                        portset.parameters.apachestatus.cleanuplimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.cleanuplimit = (yyvsp[-1].number);
                  }
#line 5696 "src/y.tab.c"
    break;

  case 574: /* exist: IF NOT EXIST rate1 THEN action1 recovery_success  */
#line 2176 "src/p.y"
                                                                   {
                        addeventaction(&(nonexistset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addnonexist(&nonexistset);
                  }
#line 5705 "src/y.tab.c"
    break;

  case 575: /* exist: IF EXIST rate1 THEN action1 recovery_success  */
#line 2180 "src/p.y"
                                                               {
                        addeventaction(&(existset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addexist(&existset);
                  }
#line 5714 "src/y.tab.c"
    break;

  case 576: /* pid: IF CHANGED PID rate1 THEN action1  */
#line 2187 "src/p.y"
                                                    {
                        addeventaction(&(pidset).action, (yyvsp[0].number), Action_Ignored);
                        addpid(&pidset);
                  }
#line 5723 "src/y.tab.c"
    break;

  case 577: /* ppid: IF CHANGED PPID rate1 THEN action1  */
#line 2193 "src/p.y"
                                                     {
                        addeventaction(&(ppidset).action, (yyvsp[0].number), Action_Ignored);
                        addppid(&ppidset);
                  }
#line 5732 "src/y.tab.c"
    break;

  case 578: /* uptime: IF UPTIME operator NUMBER time rate1 THEN action1 recovery_success  */
#line 2199 "src/p.y"
                                                                                     {
                        uptimeset.operator = (yyvsp[-6].number);
                        uptimeset.uptime = ((unsigned long long)(yyvsp[-5].number) * (yyvsp[-4].number));
                        addeventaction(&(uptimeset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        adduptime(&uptimeset);
                  }
#line 5743 "src/y.tab.c"
    break;

  case 579: /* responsetime: RESPONSETIME operator NUMBER MILLISECOND  */
#line 2207 "src/p.y"
                                                           {
                        responsetimeset.operator = (yyvsp[-2].number);
                        responsetimeset.limit = (yyvsp[-1].number);
                  }
#line 5752 "src/y.tab.c"
    break;

  case 580: /* responsetime: RESPONSETIME operator NUMBER SECOND  */
#line 2211 "src/p.y"
                                                      {
                        responsetimeset.operator = (yyvsp[-2].number);
                        responsetimeset.limit = (yyvsp[-1].number) * 1000;
                  }
#line 5761 "src/y.tab.c"
    break;

  case 581: /* icmpcount: COUNT NUMBER  */
#line 2217 "src/p.y"
                               {
                        icmpset.count = (yyvsp[0].number);
                 }
#line 5769 "src/y.tab.c"
    break;

  case 582: /* icmpsize: SIZE NUMBER  */
#line 2222 "src/p.y"
                              {
                        icmpset.size = (yyvsp[0].number);
                        if (icmpset.size < 8) {
                                yyerror2("The minimum ping size is 8 bytes");
                        } else if (icmpset.size > 1492) {
                                yyerror2("The maximum ping size is 1492 bytes");
                        }
                 }
#line 5782 "src/y.tab.c"
    break;

  case 583: /* icmptimeout: TIMEOUT NUMBER SECOND  */
#line 2232 "src/p.y"
                                        {
                        if ((yyvsp[-1].number) <= 0)
                                yyerror2("The timeout value must be > 0");
                        else
                                icmpset.timeout = (yyvsp[-1].number) * 1000; // timeout is in milliseconds internally
                    }
#line 5793 "src/y.tab.c"
    break;

  case 584: /* icmpoutgoing: ADDRESS STRING  */
#line 2240 "src/p.y"
                                 {
                        _parseOutgoingAddress((yyvsp[0].string), &(icmpset.outgoing));
                  }
#line 5801 "src/y.tab.c"
    break;

  case 585: /* stoptimeout: %empty  */
#line 2245 "src/p.y"
                              {
                        (yyval.number) = Run.limits.stopTimeout;
                  }
#line 5809 "src/y.tab.c"
    break;

  case 586: /* stoptimeout: TIMEOUT NUMBER SECOND  */
#line 2248 "src/p.y"
                                        {
                        if ((yyvsp[-1].number) <= 0)
                                yyerror2("The timeout value must be > 0");
                        else
                                (yyval.number) = (yyvsp[-1].number) * 1000; // milliseconds internally
                  }
#line 5820 "src/y.tab.c"
    break;

  case 587: /* starttimeout: %empty  */
#line 2256 "src/p.y"
                              {
                        (yyval.number) = Run.limits.startTimeout;
                  }
#line 5828 "src/y.tab.c"
    break;

  case 588: /* starttimeout: TIMEOUT NUMBER SECOND  */
#line 2259 "src/p.y"
                                        {
                        if ((yyvsp[-1].number) <= 0)
                                yyerror2("The timeout value must be > 0");
                        else
                                (yyval.number) = (yyvsp[-1].number) * 1000; // milliseconds internally
                  }
#line 5839 "src/y.tab.c"
    break;

  case 589: /* restarttimeout: %empty  */
#line 2267 "src/p.y"
                              {
                        (yyval.number) = Run.limits.restartTimeout;
                  }
#line 5847 "src/y.tab.c"
    break;

  case 590: /* restarttimeout: TIMEOUT NUMBER SECOND  */
#line 2270 "src/p.y"
                                        {
                        if ((yyvsp[-1].number) <= 0)
                                yyerror2("The timeout value must be > 0");
                        else
                                (yyval.number) = (yyvsp[-1].number) * 1000; // milliseconds internally
                  }
#line 5858 "src/y.tab.c"
    break;

  case 591: /* programtimeout: %empty  */
#line 2278 "src/p.y"
                              {
                        (yyval.number) = Run.limits.programTimeout;
                  }
#line 5866 "src/y.tab.c"
    break;

  case 592: /* programtimeout: TIMEOUT NUMBER SECOND  */
#line 2281 "src/p.y"
                                        {
                        if ((yyvsp[-1].number) <= 0)
                                yyerror2("The timeout value must be > 0");
                        else
                                (yyval.number) = (yyvsp[-1].number) * 1000; // milliseconds internally
                  }
#line 5877 "src/y.tab.c"
    break;

  case 593: /* nettimeout: %empty  */
#line 2289 "src/p.y"
                              {
                        (yyval.number) = Run.limits.networkTimeout;
                  }
#line 5885 "src/y.tab.c"
    break;

  case 594: /* nettimeout: TIMEOUT NUMBER SECOND  */
#line 2292 "src/p.y"
                                        {
                        if ((yyvsp[-1].number) <= 0)
                                yyerror2("The timeout value must be > 0");
                        else
                                (yyval.number) = (yyvsp[-1].number) * 1000; // net timeout is in milliseconds internally
                  }
#line 5896 "src/y.tab.c"
    break;

  case 595: /* connectiontimeout: TIMEOUT NUMBER SECOND  */
#line 2300 "src/p.y"
                                          {
                        if ((yyvsp[-1].number) <= 0)
                                yyerror2("The timeout value must be > 0");
                        else
                                portset.timeout = (yyvsp[-1].number) * 1000; // timeout is in milliseconds internally
                    }
#line 5907 "src/y.tab.c"
    break;

  case 596: /* retry: RETRY NUMBER  */
#line 2308 "src/p.y"
                               {
                        portset.retry = (yyvsp[0].number);
                  }
#line 5915 "src/y.tab.c"
    break;

  case 597: /* actionrate: IF NUMBER RESTART NUMBER CYCLE THEN action1  */
#line 2313 "src/p.y"
                                                              {
                        actionrateset.count = (yyvsp[-5].number);
                        actionrateset.cycle = (yyvsp[-3].number);
                        addeventaction(&(actionrateset).action, (yyvsp[0].number), Action_Alert);
                        addactionrate(&actionrateset);
                  }
#line 5926 "src/y.tab.c"
    break;

  case 598: /* actionrate: IF NUMBER RESTART NUMBER CYCLE THEN TIMEOUT  */
#line 2319 "src/p.y"
                                                              {
                        actionrateset.count = (yyvsp[-5].number);
                        actionrateset.cycle = (yyvsp[-3].number);
                        addeventaction(&(actionrateset).action, Action_Unmonitor, Action_Alert);
                        addactionrate(&actionrateset);
                  }
#line 5937 "src/y.tab.c"
    break;

  case 599: /* urloption: CONTENT urloperator STRING  */
#line 2327 "src/p.y"
                                             {
                        seturlrequest((yyvsp[-1].number), (yyvsp[0].string));
                        FREE((yyvsp[0].string));
                  }
#line 5946 "src/y.tab.c"
    break;

  case 600: /* urloperator: EQUAL  */
#line 2333 "src/p.y"
                           { (yyval.number) = Operator_Equal; }
#line 5952 "src/y.tab.c"
    break;

  case 601: /* urloperator: NOTEQUAL  */
#line 2334 "src/p.y"
                           { (yyval.number) = Operator_NotEqual; }
#line 5958 "src/y.tab.c"
    break;

  case 602: /* alert: alertmail formatlist reminder  */
#line 2337 "src/p.y"
                                                {
                        mailset.events = Event_All;
                        addmail((yyvsp[-2].string), &mailset, &current->maillist);
                  }
#line 5967 "src/y.tab.c"
    break;

  case 603: /* alert: alertmail '{' eventoptionlist '}' formatlist reminder  */
#line 2341 "src/p.y"
                                                                        {
                        addmail((yyvsp[-5].string), &mailset, &current->maillist);
                  }
#line 5975 "src/y.tab.c"
    break;

  case 604: /* alert: alertmail NOT '{' eventoptionlist '}' formatlist reminder  */
#line 2344 "src/p.y"
                                                                            {
                        mailset.events = ~mailset.events;
                        addmail((yyvsp[-6].string), &mailset, &current->maillist);
                  }
#line 5984 "src/y.tab.c"
    break;

  case 605: /* alert: noalertmail  */
#line 2348 "src/p.y"
                              {
                        addmail((yyvsp[0].string), &mailset, &current->maillist);
                  }
#line 5992 "src/y.tab.c"
    break;

  case 606: /* alertmail: ALERT MAILADDR  */
#line 2353 "src/p.y"
                                 { (yyval.string) = (yyvsp[0].string); }
#line 5998 "src/y.tab.c"
    break;

  case 607: /* noalertmail: NOALERT MAILADDR  */
#line 2356 "src/p.y"
                                   { (yyval.string) = (yyvsp[0].string); }
#line 6004 "src/y.tab.c"
    break;

  case 610: /* eventoption: ACTION  */
#line 2363 "src/p.y"
                                  { mailset.events |= Event_Action; }
#line 6010 "src/y.tab.c"
    break;

  case 611: /* eventoption: BYTEIN  */
#line 2364 "src/p.y"
                                  { mailset.events |= Event_ByteIn; }
#line 6016 "src/y.tab.c"
    break;

  case 612: /* eventoption: BYTEOUT  */
#line 2365 "src/p.y"
                                  { mailset.events |= Event_ByteOut; }
#line 6022 "src/y.tab.c"
    break;

  case 613: /* eventoption: CHECKSUM  */
#line 2366 "src/p.y"
                                  { mailset.events |= Event_Checksum; }
#line 6028 "src/y.tab.c"
    break;

  case 614: /* eventoption: CONNECTION  */
#line 2367 "src/p.y"
                                  { mailset.events |= Event_Connection; }
#line 6034 "src/y.tab.c"
    break;

  case 615: /* eventoption: CONTENT  */
#line 2368 "src/p.y"
                                  { mailset.events |= Event_Content; }
#line 6040 "src/y.tab.c"
    break;

  case 616: /* eventoption: DATA  */
#line 2369 "src/p.y"
                                  { mailset.events |= Event_Data; }
#line 6046 "src/y.tab.c"
    break;

  case 617: /* eventoption: EXEC  */
#line 2370 "src/p.y"
                                  { mailset.events |= Event_Exec; }
#line 6052 "src/y.tab.c"
    break;

  case 618: /* eventoption: EXIST  */
#line 2371 "src/p.y"
                                  { mailset.events |= Event_Exist; }
#line 6058 "src/y.tab.c"
    break;

  case 619: /* eventoption: FSFLAG  */
#line 2372 "src/p.y"
                                  { mailset.events |= Event_FsFlag; }
#line 6064 "src/y.tab.c"
    break;

  case 620: /* eventoption: GID  */
#line 2373 "src/p.y"
                                  { mailset.events |= Event_Gid; }
#line 6070 "src/y.tab.c"
    break;

  case 621: /* eventoption: ICMP  */
#line 2374 "src/p.y"
                                  { mailset.events |= Event_Icmp; }
#line 6076 "src/y.tab.c"
    break;

  case 622: /* eventoption: INSTANCE  */
#line 2375 "src/p.y"
                                  { mailset.events |= Event_Instance; }
#line 6082 "src/y.tab.c"
    break;

  case 623: /* eventoption: INVALID  */
#line 2376 "src/p.y"
                                  { mailset.events |= Event_Invalid; }
#line 6088 "src/y.tab.c"
    break;

  case 624: /* eventoption: LINK  */
#line 2377 "src/p.y"
                                  { mailset.events |= Event_Link; }
#line 6094 "src/y.tab.c"
    break;

  case 625: /* eventoption: NONEXIST  */
#line 2378 "src/p.y"
                                  { mailset.events |= Event_NonExist; }
#line 6100 "src/y.tab.c"
    break;

  case 626: /* eventoption: PACKETIN  */
#line 2379 "src/p.y"
                                  { mailset.events |= Event_PacketIn; }
#line 6106 "src/y.tab.c"
    break;

  case 627: /* eventoption: PACKETOUT  */
#line 2380 "src/p.y"
                                  { mailset.events |= Event_PacketOut; }
#line 6112 "src/y.tab.c"
    break;

  case 628: /* eventoption: PERMISSION  */
#line 2381 "src/p.y"
                                  { mailset.events |= Event_Permission; }
#line 6118 "src/y.tab.c"
    break;

  case 629: /* eventoption: PID  */
#line 2382 "src/p.y"
                                  { mailset.events |= Event_Pid; }
#line 6124 "src/y.tab.c"
    break;

  case 630: /* eventoption: PPID  */
#line 2383 "src/p.y"
                                  { mailset.events |= Event_PPid; }
#line 6130 "src/y.tab.c"
    break;

  case 631: /* eventoption: RESOURCE  */
#line 2384 "src/p.y"
                                  { mailset.events |= Event_Resource; }
#line 6136 "src/y.tab.c"
    break;

  case 632: /* eventoption: SATURATION  */
#line 2385 "src/p.y"
                                  { mailset.events |= Event_Saturation; }
#line 6142 "src/y.tab.c"
    break;

  case 633: /* eventoption: SIZE  */
#line 2386 "src/p.y"
                                  { mailset.events |= Event_Size; }
#line 6148 "src/y.tab.c"
    break;

  case 634: /* eventoption: SPEED  */
#line 2387 "src/p.y"
                                  { mailset.events |= Event_Speed; }
#line 6154 "src/y.tab.c"
    break;

  case 635: /* eventoption: STATUS  */
#line 2388 "src/p.y"
                                  { mailset.events |= Event_Status; }
#line 6160 "src/y.tab.c"
    break;

  case 636: /* eventoption: TIMEOUT  */
#line 2389 "src/p.y"
                                  { mailset.events |= Event_Timeout; }
#line 6166 "src/y.tab.c"
    break;

  case 637: /* eventoption: TIME  */
#line 2390 "src/p.y"
                                  { mailset.events |= Event_Timestamp; }
#line 6172 "src/y.tab.c"
    break;

  case 638: /* eventoption: UID  */
#line 2391 "src/p.y"
                                  { mailset.events |= Event_Uid; }
#line 6178 "src/y.tab.c"
    break;

  case 639: /* eventoption: UPTIME  */
#line 2392 "src/p.y"
                                  { mailset.events |= Event_Uptime; }
#line 6184 "src/y.tab.c"
    break;

  case 644: /* formatoption: MAILFROM ADDRESSOBJECT  */
#line 2403 "src/p.y"
                                         { mailset.from = (yyvsp[-1].address); }
#line 6190 "src/y.tab.c"
    break;

  case 645: /* formatoption: MAILREPLYTO ADDRESSOBJECT  */
#line 2404 "src/p.y"
                                            { mailset.replyto = (yyvsp[-1].address); }
#line 6196 "src/y.tab.c"
    break;

  case 646: /* formatoption: MAILSUBJECT  */
#line 2405 "src/p.y"
                              { mailset.subject = (yyvsp[0].string); }
#line 6202 "src/y.tab.c"
    break;

  case 647: /* formatoption: MAILBODY  */
#line 2406 "src/p.y"
                           { mailset.message = (yyvsp[0].string); }
#line 6208 "src/y.tab.c"
    break;

  case 648: /* every: EVERY NUMBER CYCLE  */
#line 2409 "src/p.y"
                                     {
                        _sanityCheckEveryStatement(current);
                        current->every.type = Every_SkipCycles;
                        current->every.spec.cycle.counter = current->every.spec.cycle.number = (yyvsp[-1].number);
                 }
#line 6218 "src/y.tab.c"
    break;

  case 649: /* every: EVERY TIMESPEC  */
#line 2414 "src/p.y"
                                 {
                        _sanityCheckEveryStatement(current);
                        if (Time_incron((yyvsp[0].string), Time_now()) < 0)
                                yyerror2("Invalid cron specification");
                        current->every.type = Every_Cron;
                        current->every.spec.cron = (yyvsp[0].string);
                 }
#line 6230 "src/y.tab.c"
    break;

  case 650: /* every: NOTEVERY TIMESPEC  */
#line 2421 "src/p.y"
                                    {
                        _sanityCheckEveryStatement(current);
                        if (Time_incron((yyvsp[0].string), Time_now()) < 0)
                                yyerror2("Invalid cron specification");
                        current->every.type = Every_NotInCron;
                        current->every.spec.cron = (yyvsp[0].string);
                 }
#line 6242 "src/y.tab.c"
    break;

  case 651: /* mode: MODE ACTIVE  */
#line 2430 "src/p.y"
                              {
                        current->mode = Monitor_Active;
                  }
#line 6250 "src/y.tab.c"
    break;

  case 652: /* mode: MODE PASSIVE  */
#line 2433 "src/p.y"
                               {
                        current->mode = Monitor_Passive;
                  }
#line 6258 "src/y.tab.c"
    break;

  case 653: /* mode: MODE MANUAL  */
#line 2436 "src/p.y"
                              {
                        // Deprecated since monit 5.18
                        current->onreboot = Onreboot_Laststate;
                  }
#line 6267 "src/y.tab.c"
    break;

  case 654: /* onreboot: ONREBOOT START  */
#line 2442 "src/p.y"
                                 {
                        current->onreboot = Onreboot_Start;
                  }
#line 6275 "src/y.tab.c"
    break;

  case 655: /* onreboot: ONREBOOT NOSTART  */
#line 2445 "src/p.y"
                                   {
                        current->onreboot = Onreboot_Nostart;
                        current->monitor = Monitor_Not;
                  }
#line 6284 "src/y.tab.c"
    break;

  case 656: /* onreboot: ONREBOOT LASTSTATE  */
#line 2449 "src/p.y"
                                     {
                        current->onreboot = Onreboot_Laststate;
                  }
#line 6292 "src/y.tab.c"
    break;

  case 657: /* group: GROUP STRINGNAME  */
#line 2454 "src/p.y"
                                   {
                        addservicegroup((yyvsp[0].string));
                        FREE((yyvsp[0].string));
                  }
#line 6301 "src/y.tab.c"
    break;

  case 659: /* hostgrouplist: hostgrouplist HOSTGROUPNAME  */
#line 2461 "src/p.y"
                                              {
                        addhostgroup((yyvsp[0].string));
                 }
#line 6309 "src/y.tab.c"
    break;

  case 663: /* dependant: SERVICENAME  */
#line 2474 "src/p.y"
                              { adddependant((yyvsp[0].string)); }
#line 6315 "src/y.tab.c"
    break;

  case 664: /* statusvalue: IF STATUS operator NUMBER rate1 THEN action1 recovery_success  */
#line 2477 "src/p.y"
                                                                                {
                        statusset.initialized = true;
                        statusset.operator = (yyvsp[-5].number);
                        statusset.return_value = (yyvsp[-4].number);
                        addeventaction(&(statusset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addstatus(&statusset);
                   }
#line 6327 "src/y.tab.c"
    break;

  case 665: /* statusvalue: IF CHANGED STATUS rate1 THEN action1  */
#line 2484 "src/p.y"
                                                       {
                        statusset.initialized = false;
                        statusset.operator = Operator_Changed;
                        statusset.return_value = 0;
                        addeventaction(&(statusset).action, (yyvsp[0].number), Action_Ignored);
                        addstatus(&statusset);
                   }
#line 6339 "src/y.tab.c"
    break;

  case 666: /* resourceprocess: IF resourceprocesslist rate1 THEN action1 recovery_success  */
#line 2493 "src/p.y"
                                                                             {
                        addeventaction(&(resourceset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addresource(&resourceset);
                   }
#line 6348 "src/y.tab.c"
    break;

  case 676: /* resourcesystem: IF resourcesystemlist rate1 THEN action1 recovery_success  */
#line 2512 "src/p.y"
                                                                            {
                        addeventaction(&(resourceset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addresource(&resourceset);
                   }
#line 6357 "src/y.tab.c"
    break;

  case 683: /* resourcecpuproc: CPU operator value PERCENT  */
#line 2528 "src/p.y"
                                             {
                        resourceset.resource_id = Resource_CpuPercent;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 6367 "src/y.tab.c"
    break;

  case 684: /* resourcecpuproc: TOTALCPU operator value PERCENT  */
#line 2533 "src/p.y"
                                                  {
                        resourceset.resource_id = Resource_CpuPercentTotal;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 6377 "src/y.tab.c"
    break;

  case 685: /* resourcecpu: resourcecpuid operator value PERCENT  */
#line 2540 "src/p.y"
                                                       {
                        resourceset.resource_id = (yyvsp[-3].number);
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 6387 "src/y.tab.c"
    break;

  case 686: /* resourcecpuid: CPUUSER  */
#line 2547 "src/p.y"
                          {
                        if (System_Info.statisticsAvailable & Statistics_CpuUser)
                                (yyval.number) = Resource_CpuUser;
                        else
                                yywarning2("The CPU user usage statistics is not available on this system\n");
                  }
#line 6398 "src/y.tab.c"
    break;

  case 687: /* resourcecpuid: CPUSYSTEM  */
#line 2553 "src/p.y"
                            {
                        if (System_Info.statisticsAvailable & Statistics_CpuSystem)
                                (yyval.number) = Resource_CpuSystem;
                        else
                                yywarning2("The CPU system usage statistics is not available on this system\n");
                  }
#line 6409 "src/y.tab.c"
    break;

  case 688: /* resourcecpuid: CPUWAIT  */
#line 2559 "src/p.y"
                          {
                        if (System_Info.statisticsAvailable & Statistics_CpuIOWait)
                                (yyval.number) = Resource_CpuWait;
                        else
                                yywarning2("The CPU I/O wait usage statistics is not available on this system\n");
                  }
#line 6420 "src/y.tab.c"
    break;

  case 689: /* resourcecpuid: CPUNICE  */
#line 2565 "src/p.y"
                          {
                        if (System_Info.statisticsAvailable & Statistics_CpuNice)
                                (yyval.number) = Resource_CpuNice;
                        else
                                yywarning2("The CPU nice usage statistics is not available on this system\n");
                  }
#line 6431 "src/y.tab.c"
    break;

  case 690: /* resourcecpuid: CPUHARDIRQ  */
#line 2571 "src/p.y"
                             {
                        if (System_Info.statisticsAvailable & Statistics_CpuHardIRQ)
                                (yyval.number) = Resource_CpuHardIRQ;
                        else
                                yywarning2("The CPU hardware IRQ usage statistics is not available on this system\n");
                  }
#line 6442 "src/y.tab.c"
    break;

  case 691: /* resourcecpuid: CPUSOFTIRQ  */
#line 2577 "src/p.y"
                             {
                        if (System_Info.statisticsAvailable & Statistics_CpuSoftIRQ)
                                (yyval.number) = Resource_CpuSoftIRQ;
                        else
                                yywarning2("The CPU software IRQ usage statistics is not available on this system\n");
                  }
#line 6453 "src/y.tab.c"
    break;

  case 692: /* resourcecpuid: CPUSTEAL  */
#line 2583 "src/p.y"
                           {
                        if (System_Info.statisticsAvailable & Statistics_CpuSteal)
                                (yyval.number) = Resource_CpuSteal;
                        else
                                yywarning2("The CPU steal usage statistics is not available on this system\n");
                  }
#line 6464 "src/y.tab.c"
    break;

  case 693: /* resourcecpuid: CPUGUEST  */
#line 2589 "src/p.y"
                           {
                        if (System_Info.statisticsAvailable & Statistics_CpuGuest)
                                (yyval.number) = Resource_CpuGuest;
                        else
                                yywarning2("The CPU guest usage statistics is not available on this system\n");
                  }
#line 6475 "src/y.tab.c"
    break;

  case 694: /* resourcecpuid: CPUGUESTNICE  */
#line 2595 "src/p.y"
                               {
                        if (System_Info.statisticsAvailable & Statistics_CpuGuestNice)
                                (yyval.number) = Resource_CpuGuestNice;
                        else
                                yywarning2("The CPU guest nice usage statistics is not available on this system\n");
                  }
#line 6486 "src/y.tab.c"
    break;

  case 695: /* resourcecpuid: CPU  */
#line 2601 "src/p.y"
                      {
                        (yyval.number) = Resource_CpuPercent;
                  }
#line 6494 "src/y.tab.c"
    break;

  case 696: /* resourcemem: MEMORY operator value unit  */
#line 2606 "src/p.y"
                                             {
                        resourceset.resource_id = Resource_MemoryKbyte;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real) * (yyvsp[0].number);
                  }
#line 6504 "src/y.tab.c"
    break;

  case 697: /* resourcemem: MEMORY operator value PERCENT  */
#line 2611 "src/p.y"
                                                {
                        resourceset.resource_id = Resource_MemoryPercent;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 6514 "src/y.tab.c"
    break;

  case 698: /* resourcememproc: MEMORY operator value unit  */
#line 2618 "src/p.y"
                                             {
                        resourceset.resource_id = Resource_MemoryKbyte;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real) * (yyvsp[0].number);
                  }
#line 6524 "src/y.tab.c"
    break;

  case 699: /* resourcememproc: MEMORY operator value PERCENT  */
#line 2623 "src/p.y"
                                                {
                        resourceset.resource_id = Resource_MemoryPercent;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 6534 "src/y.tab.c"
    break;

  case 700: /* resourcememproc: TOTALMEMORY operator value unit  */
#line 2628 "src/p.y"
                                                  {
                        resourceset.resource_id = Resource_MemoryKbyteTotal;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real) * (yyvsp[0].number);
                  }
#line 6544 "src/y.tab.c"
    break;

  case 701: /* resourcememproc: TOTALMEMORY operator value PERCENT  */
#line 2633 "src/p.y"
                                                      {
                        resourceset.resource_id = Resource_MemoryPercentTotal;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 6554 "src/y.tab.c"
    break;

  case 702: /* resourceswap: SWAP operator value unit  */
#line 2640 "src/p.y"
                                           {
                        resourceset.resource_id = Resource_SwapKbyte;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real) * (yyvsp[0].number);
                  }
#line 6564 "src/y.tab.c"
    break;

  case 703: /* resourceswap: SWAP operator value PERCENT  */
#line 2645 "src/p.y"
                                              {
                        resourceset.resource_id = Resource_SwapPercent;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 6574 "src/y.tab.c"
    break;

  case 704: /* resourcethreads: THREADS operator NUMBER  */
#line 2652 "src/p.y"
                                          {
                        resourceset.resource_id = Resource_Threads;
                        resourceset.operator = (yyvsp[-1].number);
                        resourceset.limit = (yyvsp[0].number);
                  }
#line 6584 "src/y.tab.c"
    break;

  case 705: /* resourcechild: CHILDREN operator NUMBER  */
#line 2659 "src/p.y"
                                           {
                        resourceset.resource_id = Resource_Children;
                        resourceset.operator = (yyvsp[-1].number);
                        resourceset.limit = (yyvsp[0].number);
                  }
#line 6594 "src/y.tab.c"
    break;

  case 706: /* resourceload: resourceloadavg coremultiplier operator value  */
#line 2666 "src/p.y"
                                                                {
                        switch ((yyvsp[-3].number)) {
                                case Resource_LoadAverage1m:
                                        resourceset.resource_id = (yyvsp[-2].number) > 1 ? Resource_LoadAveragePerCore1m : (yyvsp[-3].number);
                                        break;
                                case Resource_LoadAverage5m:
                                        resourceset.resource_id = (yyvsp[-2].number) > 1 ? Resource_LoadAveragePerCore5m : (yyvsp[-3].number);
                                        break;
                                case Resource_LoadAverage15m:
                                        resourceset.resource_id = (yyvsp[-2].number) > 1 ? Resource_LoadAveragePerCore15m : (yyvsp[-3].number);
                                        break;
                                default:
                                        resourceset.resource_id = (yyvsp[-3].number);
                                        break;
                        }
                        resourceset.operator = (yyvsp[-1].number);
                        resourceset.limit = (yyvsp[0].real);
                  }
#line 6617 "src/y.tab.c"
    break;

  case 707: /* resourceloadavg: LOADAVG1  */
#line 2686 "src/p.y"
                            { (yyval.number) = Resource_LoadAverage1m; }
#line 6623 "src/y.tab.c"
    break;

  case 708: /* resourceloadavg: LOADAVG5  */
#line 2687 "src/p.y"
                            { (yyval.number) = Resource_LoadAverage5m; }
#line 6629 "src/y.tab.c"
    break;

  case 709: /* resourceloadavg: LOADAVG15  */
#line 2688 "src/p.y"
                            { (yyval.number) = Resource_LoadAverage15m; }
#line 6635 "src/y.tab.c"
    break;

  case 710: /* coremultiplier: %empty  */
#line 2691 "src/p.y"
                              { (yyval.number) = 1; }
#line 6641 "src/y.tab.c"
    break;

  case 711: /* coremultiplier: CORE  */
#line 2692 "src/p.y"
                              { (yyval.number) = System_Info.cpu.count; }
#line 6647 "src/y.tab.c"
    break;

  case 712: /* resourceread: READ operator value unit currenttime  */
#line 2696 "src/p.y"
                                                       {
                        resourceset.resource_id = Resource_ReadBytes;
                        resourceset.operator = (yyvsp[-3].number);
                        resourceset.limit = (yyvsp[-2].real) * (yyvsp[-1].number);
                  }
#line 6657 "src/y.tab.c"
    break;

  case 713: /* resourceread: DISK READ operator value unit currenttime  */
#line 2701 "src/p.y"
                                                            {
                        resourceset.resource_id = Resource_ReadBytesPhysical;
                        resourceset.operator = (yyvsp[-3].number);
                        resourceset.limit = (yyvsp[-2].real) * (yyvsp[-1].number);
                  }
#line 6667 "src/y.tab.c"
    break;

  case 714: /* resourceread: DISK READ operator NUMBER OPERATION  */
#line 2706 "src/p.y"
                                                      {
                        resourceset.resource_id = Resource_ReadOperations;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].number);
                  }
#line 6677 "src/y.tab.c"
    break;

  case 715: /* resourcewrite: WRITE operator value unit currenttime  */
#line 2713 "src/p.y"
                                                        {
                        resourceset.resource_id = Resource_WriteBytes;
                        resourceset.operator = (yyvsp[-3].number);
                        resourceset.limit = (yyvsp[-2].real) * (yyvsp[-1].number);
                  }
#line 6687 "src/y.tab.c"
    break;

  case 716: /* resourcewrite: DISK WRITE operator value unit currenttime  */
#line 2718 "src/p.y"
                                                             {
                        resourceset.resource_id = Resource_WriteBytesPhysical;
                        resourceset.operator = (yyvsp[-3].number);
                        resourceset.limit = (yyvsp[-2].real) * (yyvsp[-1].number);
                  }
#line 6697 "src/y.tab.c"
    break;

  case 717: /* resourcewrite: DISK WRITE operator NUMBER OPERATION  */
#line 2723 "src/p.y"
                                                       {
                        resourceset.resource_id = Resource_WriteOperations;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].number);
                  }
#line 6707 "src/y.tab.c"
    break;

  case 718: /* value: REAL  */
#line 2730 "src/p.y"
                       { (yyval.real) = (yyvsp[0].real); }
#line 6713 "src/y.tab.c"
    break;

  case 719: /* value: NUMBER  */
#line 2731 "src/p.y"
                         { (yyval.real) = (float) (yyvsp[0].number); }
#line 6719 "src/y.tab.c"
    break;

  case 720: /* timestamptype: TIME  */
#line 2734 "src/p.y"
                        { (yyval.number) = Timestamp_Default; }
#line 6725 "src/y.tab.c"
    break;

  case 721: /* timestamptype: ATIME  */
#line 2735 "src/p.y"
                        { (yyval.number) = Timestamp_Access; }
#line 6731 "src/y.tab.c"
    break;

  case 722: /* timestamptype: CTIME  */
#line 2736 "src/p.y"
                        { (yyval.number) = Timestamp_Change; }
#line 6737 "src/y.tab.c"
    break;

  case 723: /* timestamptype: MTIME  */
#line 2737 "src/p.y"
                        { (yyval.number) = Timestamp_Modification; }
#line 6743 "src/y.tab.c"
    break;

  case 724: /* timestamp: IF timestamptype operator NUMBER time rate1 THEN action1 recovery_success  */
#line 2740 "src/p.y"
                                                                                            {
                        timestampset.type = (yyvsp[-7].number);
                        timestampset.operator = (yyvsp[-6].number);
                        timestampset.time = ((yyvsp[-5].number) * (yyvsp[-4].number));
                        addeventaction(&(timestampset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addtimestamp(&timestampset);
                  }
#line 6755 "src/y.tab.c"
    break;

  case 725: /* timestamp: IF CHANGED timestamptype rate1 THEN action1  */
#line 2747 "src/p.y"
                                                              {
                        timestampset.type = (yyvsp[-3].number);
                        timestampset.test_changes = true;
                        addeventaction(&(timestampset).action, (yyvsp[0].number), Action_Ignored);
                        addtimestamp(&timestampset);
                  }
#line 6766 "src/y.tab.c"
    break;

  case 726: /* operator: %empty  */
#line 2755 "src/p.y"
                                 { (yyval.number) = Operator_Equal; }
#line 6772 "src/y.tab.c"
    break;

  case 727: /* operator: GREATER  */
#line 2756 "src/p.y"
                                 { (yyval.number) = Operator_Greater; }
#line 6778 "src/y.tab.c"
    break;

  case 728: /* operator: GREATEROREQUAL  */
#line 2757 "src/p.y"
                                 { (yyval.number) = Operator_GreaterOrEqual; }
#line 6784 "src/y.tab.c"
    break;

  case 729: /* operator: LESS  */
#line 2758 "src/p.y"
                                 { (yyval.number) = Operator_Less; }
#line 6790 "src/y.tab.c"
    break;

  case 730: /* operator: LESSOREQUAL  */
#line 2759 "src/p.y"
                                 { (yyval.number) = Operator_LessOrEqual; }
#line 6796 "src/y.tab.c"
    break;

  case 731: /* operator: EQUAL  */
#line 2760 "src/p.y"
                                 { (yyval.number) = Operator_Equal; }
#line 6802 "src/y.tab.c"
    break;

  case 732: /* operator: NOTEQUAL  */
#line 2761 "src/p.y"
                                 { (yyval.number) = Operator_NotEqual; }
#line 6808 "src/y.tab.c"
    break;

  case 733: /* operator: CHANGED  */
#line 2762 "src/p.y"
                                 { (yyval.number) = Operator_Changed; }
#line 6814 "src/y.tab.c"
    break;

  case 734: /* time: %empty  */
#line 2765 "src/p.y"
                              { (yyval.number) = Time_Second; }
#line 6820 "src/y.tab.c"
    break;

  case 735: /* time: SECOND  */
#line 2766 "src/p.y"
                              { (yyval.number) = Time_Second; }
#line 6826 "src/y.tab.c"
    break;

  case 736: /* time: MINUTE  */
#line 2767 "src/p.y"
                              { (yyval.number) = Time_Minute; }
#line 6832 "src/y.tab.c"
    break;

  case 737: /* time: HOUR  */
#line 2768 "src/p.y"
                              { (yyval.number) = Time_Hour; }
#line 6838 "src/y.tab.c"
    break;

  case 738: /* time: DAY  */
#line 2769 "src/p.y"
                              { (yyval.number) = Time_Day; }
#line 6844 "src/y.tab.c"
    break;

  case 739: /* time: MONTH  */
#line 2770 "src/p.y"
                              { (yyval.number) = Time_Month; }
#line 6850 "src/y.tab.c"
    break;

  case 740: /* totaltime: MINUTE  */
#line 2773 "src/p.y"
                              { (yyval.number) = Time_Minute; }
#line 6856 "src/y.tab.c"
    break;

  case 741: /* totaltime: HOUR  */
#line 2774 "src/p.y"
                              { (yyval.number) = Time_Hour; }
#line 6862 "src/y.tab.c"
    break;

  case 742: /* totaltime: DAY  */
#line 2775 "src/p.y"
                              { (yyval.number) = Time_Day; }
#line 6868 "src/y.tab.c"
    break;

  case 743: /* currenttime: %empty  */
#line 2777 "src/p.y"
                              { (yyval.number) = Time_Second; }
#line 6874 "src/y.tab.c"
    break;

  case 744: /* currenttime: SECOND  */
#line 2778 "src/p.y"
                              { (yyval.number) = Time_Second; }
#line 6880 "src/y.tab.c"
    break;

  case 745: /* exectimeout: %empty  */
#line 2781 "src/p.y"
                              {
                        timeout = Run.limits.execTimeout;
                  }
#line 6888 "src/y.tab.c"
    break;

  case 746: /* exectimeout: TIMEOUT NUMBER SECOND  */
#line 2784 "src/p.y"
                                        {
                        if ((yyvsp[0].number) < 0) {
                                yyerror2("The timeout must be greater or equal to 0");
                        }
                        timeout = (yyvsp[-1].number) * 1000; // milliseconds internally
                  }
#line 6899 "src/y.tab.c"
    break;

  case 747: /* repeat: %empty  */
#line 2792 "src/p.y"
                              {
                        repeat = 0;
                  }
#line 6907 "src/y.tab.c"
    break;

  case 748: /* repeat: REPEAT EVERY CYCLE  */
#line 2795 "src/p.y"
                                     {
                        repeat = 1;
                  }
#line 6915 "src/y.tab.c"
    break;

  case 749: /* repeat: REPEAT EVERY NUMBER CYCLE  */
#line 2798 "src/p.y"
                                            {
                        if ((yyvsp[-1].number) < 0) {
                                yyerror2("The number of repeat cycles must be greater or equal to 0");
                        }
                        repeat = (yyvsp[-1].number);
                  }
#line 6926 "src/y.tab.c"
    break;

  case 750: /* action: ALERT  */
#line 2806 "src/p.y"
                        {
                        (yyval.number) = Action_Alert;
                  }
#line 6934 "src/y.tab.c"
    break;

  case 751: /* action: EXEC argumentlist exectimeout repeat  */
#line 2809 "src/p.y"
                                                       {
                        (yyval.number) = Action_Exec;
                  }
#line 6942 "src/y.tab.c"
    break;

  case 752: /* action: EXEC argumentlist useroptionlist exectimeout repeat  */
#line 2813 "src/p.y"
                  {
                        (yyval.number) = Action_Exec;
                  }
#line 6950 "src/y.tab.c"
    break;

  case 753: /* action: IGNORE  */
#line 2816 "src/p.y"
                         {
                        (yyval.number) = Action_Ignored;
                  }
#line 6958 "src/y.tab.c"
    break;

  case 754: /* action: RESTART  */
#line 2819 "src/p.y"
                          {
                        (yyval.number) = Action_Restart;
                  }
#line 6966 "src/y.tab.c"
    break;

  case 755: /* action: START  */
#line 2822 "src/p.y"
                        {
                        (yyval.number) = Action_Start;
                  }
#line 6974 "src/y.tab.c"
    break;

  case 756: /* action: STOP  */
#line 2825 "src/p.y"
                       {
                        (yyval.number) = Action_Stop;
                  }
#line 6982 "src/y.tab.c"
    break;

  case 757: /* action: UNMONITOR  */
#line 2828 "src/p.y"
                            {
                        (yyval.number) = Action_Unmonitor;
                  }
#line 6990 "src/y.tab.c"
    break;

  case 758: /* action1: action  */
#line 2833 "src/p.y"
                         {
                        (yyval.number) = (yyvsp[0].number);
                        if ((yyvsp[0].number) == Action_Exec && command) {
                                repeat1 = repeat;
                                repeat = 0;
                                command->timeout = timeout;
                                timeout = 0;
                                command1 = command;
                                command = NULL;
                        }
                  }
#line 7006 "src/y.tab.c"
    break;

  case 759: /* action2: action  */
#line 2846 "src/p.y"
                         {
                        (yyval.number) = (yyvsp[0].number);
                        if ((yyvsp[0].number) == Action_Exec && command) {
                                repeat2 = repeat;
                                repeat = 0;
                                command->timeout = timeout;
                                timeout = 0;
                                command2 = command;
                                command = NULL;
                        }
                  }
#line 7022 "src/y.tab.c"
    break;

  case 760: /* rateXcycles: NUMBER CYCLE  */
#line 2859 "src/p.y"
                               {
                        if ((yyvsp[-1].number) < 1 || (unsigned long)(yyvsp[-1].number) > BITMAP_MAX) {
                                yyerror2("The number of cycles must be between 1 and %zu", BITMAP_MAX);
                        } else {
                                rate.count  = (yyvsp[-1].number);
                                rate.cycles = (yyvsp[-1].number);
                        }
                  }
#line 7035 "src/y.tab.c"
    break;

  case 761: /* rateXYcycles: NUMBER NUMBER CYCLE  */
#line 2869 "src/p.y"
                                      {
                        if ((yyvsp[-1].number) < 1 || (unsigned long)(yyvsp[-1].number) > BITMAP_MAX) {
                                yyerror2("The number of cycles must be between 1 and %zu", BITMAP_MAX);
                        } else if ((yyvsp[-2].number) < 1 || (yyvsp[-2].number) > (yyvsp[-1].number)) {
                                yyerror2("The number of events must be between 1 and less then poll cycles");
                        } else {
                                rate.count  = (yyvsp[-2].number);
                                rate.cycles = (yyvsp[-1].number);
                        }
                  }
#line 7050 "src/y.tab.c"
    break;

  case 763: /* rate1: rateXcycles  */
#line 2882 "src/p.y"
                              {
                        rate1.count = rate.count;
                        rate1.cycles = rate.cycles;
                        reset_rateset(&rate);
                  }
#line 7060 "src/y.tab.c"
    break;

  case 764: /* rate1: rateXYcycles  */
#line 2887 "src/p.y"
                               {
                        rate1.count = rate.count;
                        rate1.cycles = rate.cycles;
                        reset_rateset(&rate);
                }
#line 7070 "src/y.tab.c"
    break;

  case 766: /* rate2: rateXcycles  */
#line 2895 "src/p.y"
                              {
                        rate2.count = rate.count;
                        rate2.cycles = rate.cycles;
                        reset_rateset(&rate);
                  }
#line 7080 "src/y.tab.c"
    break;

  case 767: /* rate2: rateXYcycles  */
#line 2900 "src/p.y"
                               {
                        rate2.count = rate.count;
                        rate2.cycles = rate.cycles;
                        reset_rateset(&rate);
                }
#line 7090 "src/y.tab.c"
    break;

  case 768: /* recovery_success: %empty  */
#line 2907 "src/p.y"
                               {
                        (yyval.number) = Action_Alert;
                  }
#line 7098 "src/y.tab.c"
    break;

  case 769: /* recovery_success: ELSE action2  */
#line 2910 "src/p.y"
                               {
                        (yyval.number) = (yyvsp[0].number);
                  }
#line 7106 "src/y.tab.c"
    break;

  case 770: /* recovery_success: ELSE IF RECOVERED rate2 THEN action2  */
#line 2913 "src/p.y"
                                                       {
                        (yyval.number) = (yyvsp[0].number);
                  }
#line 7114 "src/y.tab.c"
    break;

  case 771: /* recovery_success: ELSE IF PASSED rate2 THEN action2  */
#line 2916 "src/p.y"
                                                    {
                        (yyval.number) = (yyvsp[0].number);
                  }
#line 7122 "src/y.tab.c"
    break;

  case 772: /* recovery_success: ELSE IF SUCCEEDED rate2 THEN action2  */
#line 2919 "src/p.y"
                                                       {
                        (yyval.number) = (yyvsp[0].number);
                  }
#line 7130 "src/y.tab.c"
    break;

  case 773: /* recovery_failure: %empty  */
#line 2924 "src/p.y"
                               {
                        (yyval.number) = Action_Alert;
                  }
#line 7138 "src/y.tab.c"
    break;

  case 774: /* recovery_failure: ELSE action2  */
#line 2927 "src/p.y"
                               {
                        (yyval.number) = (yyvsp[0].number);
                  }
#line 7146 "src/y.tab.c"
    break;

  case 775: /* recovery_failure: ELSE IF FAILED rate2 THEN action2  */
#line 2930 "src/p.y"
                                                    {
                        (yyval.number) = (yyvsp[0].number);
                  }
#line 7154 "src/y.tab.c"
    break;

  case 776: /* checksum: IF FAILED hashtype CHECKSUM rate1 THEN action1 recovery_success  */
#line 2935 "src/p.y"
                                                                                  {
                        addeventaction(&(checksumset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addchecksum(&checksumset);
                  }
#line 7163 "src/y.tab.c"
    break;

  case 777: /* checksum: IF FAILED hashtype CHECKSUM EXPECT STRING rate1 THEN action1 recovery_success  */
#line 2940 "src/p.y"
                                   {
                        snprintf(checksumset.hash, sizeof(checksumset.hash), "%s", (yyvsp[-4].string));
                        FREE((yyvsp[-4].string));
                        addeventaction(&(checksumset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addchecksum(&checksumset);
                  }
#line 7174 "src/y.tab.c"
    break;

  case 778: /* checksum: IF CHANGED hashtype CHECKSUM rate1 THEN action1  */
#line 2946 "src/p.y"
                                                                  {
                        checksumset.test_changes = true;
                        addeventaction(&(checksumset).action, (yyvsp[0].number), Action_Ignored);
                        addchecksum(&checksumset);
                  }
#line 7184 "src/y.tab.c"
    break;

  case 779: /* hashtype: %empty  */
#line 2952 "src/p.y"
                              { checksumset.type = Hash_Unknown; }
#line 7190 "src/y.tab.c"
    break;

  case 780: /* hashtype: MD5HASH  */
#line 2953 "src/p.y"
                              { checksumset.type = Hash_Md5; }
#line 7196 "src/y.tab.c"
    break;

  case 781: /* hashtype: SHA1HASH  */
#line 2954 "src/p.y"
                              { checksumset.type = Hash_Sha1; }
#line 7202 "src/y.tab.c"
    break;

  case 782: /* inode: IF INODE operator NUMBER rate1 THEN action1 recovery_success  */
#line 2957 "src/p.y"
                                                                               {
                        filesystemset.resource = Resource_Inode;
                        filesystemset.operator = (yyvsp[-5].number);
                        filesystemset.limit_absolute = (yyvsp[-4].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 7214 "src/y.tab.c"
    break;

  case 783: /* inode: IF INODE operator value PERCENT rate1 THEN action1 recovery_success  */
#line 2964 "src/p.y"
                                                                                      {
                        filesystemset.resource = Resource_Inode;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_percent = (yyvsp[-5].real);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 7226 "src/y.tab.c"
    break;

  case 784: /* inode: IF INODE TFREE operator NUMBER rate1 THEN action1 recovery_success  */
#line 2971 "src/p.y"
                                                                                     {
                        filesystemset.resource = Resource_InodeFree;
                        filesystemset.operator = (yyvsp[-5].number);
                        filesystemset.limit_absolute = (yyvsp[-4].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 7238 "src/y.tab.c"
    break;

  case 785: /* inode: IF INODE TFREE operator value PERCENT rate1 THEN action1 recovery_success  */
#line 2978 "src/p.y"
                                                                                            {
                        filesystemset.resource = Resource_InodeFree;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_percent = (yyvsp[-5].real);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 7250 "src/y.tab.c"
    break;

  case 786: /* space: IF SPACE operator value unit rate1 THEN action1 recovery_success  */
#line 2987 "src/p.y"
                                                                                   {
                        filesystemset.resource = Resource_Space;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (yyvsp[-5].real) * (yyvsp[-4].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 7262 "src/y.tab.c"
    break;

  case 787: /* space: IF SPACE operator value PERCENT rate1 THEN action1 recovery_success  */
#line 2994 "src/p.y"
                                                                                      {
                        filesystemset.resource = Resource_Space;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_percent = (yyvsp[-5].real);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 7274 "src/y.tab.c"
    break;

  case 788: /* space: IF SPACE TFREE operator value unit rate1 THEN action1 recovery_success  */
#line 3001 "src/p.y"
                                                                                         {
                        filesystemset.resource = Resource_SpaceFree;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (yyvsp[-5].real) * (yyvsp[-4].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 7286 "src/y.tab.c"
    break;

  case 789: /* space: IF SPACE TFREE operator value PERCENT rate1 THEN action1 recovery_success  */
#line 3008 "src/p.y"
                                                                                            {
                        filesystemset.resource = Resource_SpaceFree;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_percent = (yyvsp[-5].real);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 7298 "src/y.tab.c"
    break;

  case 790: /* read: IF READ operator value unit currenttime rate1 THEN action1 recovery_success  */
#line 3017 "src/p.y"
                                                                                              {
                        filesystemset.resource = Resource_ReadBytes;
                        filesystemset.operator = (yyvsp[-7].number);
                        filesystemset.limit_absolute = (yyvsp[-6].real) * (yyvsp[-5].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 7310 "src/y.tab.c"
    break;

  case 791: /* read: IF READ operator NUMBER OPERATION rate1 THEN action1 recovery_success  */
#line 3024 "src/p.y"
                                                                                        {
                        filesystemset.resource = Resource_ReadOperations;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (yyvsp[-5].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 7322 "src/y.tab.c"
    break;

  case 792: /* write: IF WRITE operator value unit currenttime rate1 THEN action1 recovery_success  */
#line 3033 "src/p.y"
                                                                                               {
                        filesystemset.resource = Resource_WriteBytes;
                        filesystemset.operator = (yyvsp[-7].number);
                        filesystemset.limit_absolute = (yyvsp[-6].real) * (yyvsp[-5].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 7334 "src/y.tab.c"
    break;

  case 793: /* write: IF WRITE operator NUMBER OPERATION rate1 THEN action1 recovery_success  */
#line 3040 "src/p.y"
                                                                                         {
                        filesystemset.resource = Resource_WriteOperations;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (yyvsp[-5].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 7346 "src/y.tab.c"
    break;

  case 794: /* servicetime: IF SERVICETIME operator NUMBER MILLISECOND rate1 THEN action1 recovery_success  */
#line 3049 "src/p.y"
                                                                                                 {
                        filesystemset.resource = Resource_ServiceTime;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (yyvsp[-5].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 7358 "src/y.tab.c"
    break;

  case 795: /* servicetime: IF SERVICETIME operator value SECOND rate1 THEN action1 recovery_success  */
#line 3056 "src/p.y"
                                                                                           {
                        filesystemset.resource = Resource_ServiceTime;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (yyvsp[-5].real) * 1000;
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 7370 "src/y.tab.c"
    break;

  case 796: /* fsflag: IF CHANGED FSFLAG rate1 THEN action1  */
#line 3065 "src/p.y"
                                                       {
                        addeventaction(&(fsflagset).action, (yyvsp[0].number), Action_Ignored);
                        addfsflag(&fsflagset);
                  }
#line 7379 "src/y.tab.c"
    break;

  case 797: /* unit: %empty  */
#line 3071 "src/p.y"
                               { (yyval.number64) = Unit_Byte; }
#line 7385 "src/y.tab.c"
    break;

  case 798: /* unit: BYTE  */
#line 3072 "src/p.y"
                               { (yyval.number64) = Unit_Byte; }
#line 7391 "src/y.tab.c"
    break;

  case 799: /* unit: KILOBYTE  */
#line 3073 "src/p.y"
                               { (yyval.number64) = Unit_Kilobyte; }
#line 7397 "src/y.tab.c"
    break;

  case 800: /* unit: MEGABYTE  */
#line 3074 "src/p.y"
                               { (yyval.number64) = Unit_Megabyte; }
#line 7403 "src/y.tab.c"
    break;

  case 801: /* unit: GIGABYTE  */
#line 3075 "src/p.y"
                               { (yyval.number64) = Unit_Gigabyte; }
#line 7409 "src/y.tab.c"
    break;

  case 802: /* permission: IF FAILED PERMISSION NUMBER rate1 THEN action1 recovery_success  */
#line 3078 "src/p.y"
                                                                                  {
                        permset.perm = check_perm((yyvsp[-4].number));
                        addeventaction(&(permset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addperm(&permset);
                  }
#line 7419 "src/y.tab.c"
    break;

  case 803: /* permission: IF CHANGED PERMISSION rate1 THEN action1 recovery_success  */
#line 3083 "src/p.y"
                                                                            {
                        permset.test_changes = true;
                        addeventaction(&(permset).action, (yyvsp[-1].number), Action_Ignored);
                        addperm(&permset);
                  }
#line 7429 "src/y.tab.c"
    break;

  case 804: /* programmatch: IF CONTENT urloperator STRING rate1 THEN action1  */
#line 3090 "src/p.y"
                                                                   {
                        matchset.not = (yyvsp[-4].number) == Operator_Equal ? false : true;
                        matchset.ignore = false;
                        matchset.match_path = NULL;
                        matchset.match_string = (yyvsp[-3].string);
                        addmatch(&matchset, (yyvsp[0].number), 0);
                  }
#line 7441 "src/y.tab.c"
    break;

  case 805: /* programmatch: IF CONTENT CHANGED rate1 THEN action1 recovery_success  */
#line 3097 "src/p.y"
                                                                         {
                        addoutputchange(false, (yyvsp[-1].number), (yyvsp[0].number));
                  }
#line 7449 "src/y.tab.c"
    break;

  case 806: /* programmatch: IF CONTENT NOT CHANGED rate1 THEN action1 recovery_success  */
#line 3100 "src/p.y"
                                                                             {
                        addoutputchange(true, (yyvsp[-1].number), (yyvsp[0].number));
                  }
#line 7457 "src/y.tab.c"
    break;

  case 807: /* match: IF CONTENT urloperator PATH rate1 THEN action1  */
#line 3105 "src/p.y"
                                                                 {
                        matchset.not = (yyvsp[-4].number) == Operator_Equal ? false : true;
                        matchset.ignore = false;
                        matchset.match_path = (yyvsp[-3].string);
                        matchset.match_string = NULL;
                        addmatchpath(&matchset, (yyvsp[0].number));
                        FREE((yyvsp[-3].string));
                  }
#line 7470 "src/y.tab.c"
    break;

  case 808: /* match: IF CONTENT urloperator STRING rate1 THEN action1  */
#line 3113 "src/p.y"
                                                                   {
                        matchset.not = (yyvsp[-4].number) == Operator_Equal ? false : true;
                        matchset.ignore = false;
                        matchset.match_path = NULL;
                        matchset.match_string = (yyvsp[-3].string);
                        addmatch(&matchset, (yyvsp[0].number), 0);
                  }
#line 7482 "src/y.tab.c"
    break;

  case 809: /* match: IGNORE CONTENT urloperator PATH  */
#line 3120 "src/p.y"
                                                  {
                        matchset.not = (yyvsp[-1].number) == Operator_Equal ? false : true;
                        matchset.ignore = true;
                        matchset.match_path = (yyvsp[0].string);
                        matchset.match_string = NULL;
                        addmatchpath(&matchset, Action_Ignored);
                        FREE((yyvsp[0].string));
                  }
#line 7495 "src/y.tab.c"
    break;

  case 810: /* match: IGNORE CONTENT urloperator STRING  */
#line 3128 "src/p.y"
                                                    {
                        matchset.not = (yyvsp[-1].number) == Operator_Equal ? false : true;
                        matchset.ignore = true;
                        matchset.match_path = NULL;
                        matchset.match_string = (yyvsp[0].string);
                        addmatch(&matchset, Action_Ignored, 0);
                  }
#line 7507 "src/y.tab.c"
    break;

  case 811: /* match: IF matchflagnot MATCH PATH rate1 THEN action1  */
#line 3136 "src/p.y"
                                                                {
                        matchset.ignore = false;
                        matchset.match_path = (yyvsp[-3].string);
                        matchset.match_string = NULL;
                        addmatchpath(&matchset, (yyvsp[0].number));
                        FREE((yyvsp[-3].string));
                  }
#line 7519 "src/y.tab.c"
    break;

  case 812: /* match: IF matchflagnot MATCH STRING rate1 THEN action1  */
#line 3143 "src/p.y"
                                                                  {
                        matchset.ignore = false;
                        matchset.match_path = NULL;
                        matchset.match_string = (yyvsp[-3].string);
                        addmatch(&matchset, (yyvsp[0].number), 0);
                  }
#line 7530 "src/y.tab.c"
    break;

  case 813: /* match: IGNORE matchflagnot MATCH PATH  */
#line 3149 "src/p.y"
                                                 {
                        matchset.ignore = true;
                        matchset.match_path = (yyvsp[0].string);
                        matchset.match_string = NULL;
                        addmatchpath(&matchset, Action_Ignored);
                        FREE((yyvsp[0].string));
                  }
#line 7542 "src/y.tab.c"
    break;

  case 814: /* match: IGNORE matchflagnot MATCH STRING  */
#line 3156 "src/p.y"
                                                   {
                        matchset.ignore = true;
                        matchset.match_path = NULL;
                        matchset.match_string = (yyvsp[0].string);
                        addmatch(&matchset, Action_Ignored, 0);
                  }
#line 7553 "src/y.tab.c"
    break;

  case 815: /* matchflagnot: %empty  */
#line 3164 "src/p.y"
                              {
                        matchset.not = false;
                  }
#line 7561 "src/y.tab.c"
    break;

  case 816: /* matchflagnot: NOT  */
#line 3167 "src/p.y"
                      {
                        matchset.not = true;
                  }
#line 7569 "src/y.tab.c"
    break;

  case 817: /* size: IF SIZE operator NUMBER unit rate1 THEN action1 recovery_success  */
#line 3173 "src/p.y"
                                                                                   {
                        sizeset.operator = (yyvsp[-6].number);
                        sizeset.size = ((unsigned long long)(yyvsp[-5].number) * (yyvsp[-4].number));
                        addeventaction(&(sizeset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addsize(&sizeset);
                  }
#line 7580 "src/y.tab.c"
    break;

  case 818: /* size: IF CHANGED SIZE rate1 THEN action1  */
#line 3179 "src/p.y"
                                                     {
                        sizeset.test_changes = true;
                        addeventaction(&(sizeset).action, (yyvsp[0].number), Action_Ignored);
                        addsize(&sizeset);
                  }
#line 7590 "src/y.tab.c"
    break;

  case 819: /* hardlink: IF HARDLINK operator NUMBER rate1 THEN action1 recovery_success  */
#line 3186 "src/p.y"
                                                                                  {
                        nlinkset.operator = (yyvsp[-5].number);
                        nlinkset.nlink = ((unsigned long long)(yyvsp[-4].number));
                        addeventaction(&(nlinkset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addnlink(&nlinkset);
                  }
#line 7601 "src/y.tab.c"
    break;

  case 820: /* hardlink: IF CHANGED HARDLINK rate1 THEN action1  */
#line 3192 "src/p.y"
                                                         {
                        nlinkset.test_changes = true;
                        addeventaction(&(nlinkset).action, (yyvsp[0].number), Action_Ignored);
                        addnlink(&nlinkset);
                  }
#line 7611 "src/y.tab.c"
    break;

  case 821: /* uid: IF FAILED UID STRING rate1 THEN action1 recovery_success  */
#line 3200 "src/p.y"
                                                                           {
                        uidset.uid = get_uid((yyvsp[-4].string), 0);
                        addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        current->uid = adduid(&uidset);
                        FREE((yyvsp[-4].string));
                  }
#line 7622 "src/y.tab.c"
    break;

  case 822: /* uid: IF FAILED UID NUMBER rate1 THEN action1 recovery_success  */
#line 3206 "src/p.y"
                                                                           {
                    uidset.uid = get_uid(NULL, (yyvsp[-4].number));
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->uid = adduid(&uidset);
                  }
#line 7632 "src/y.tab.c"
    break;

  case 823: /* euid: IF FAILED EUID STRING rate1 THEN action1 recovery_success  */
#line 3213 "src/p.y"
                                                                            {
                        uidset.uid = get_uid((yyvsp[-4].string), 0);
                        addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        current->euid = adduid(&uidset);
                        FREE((yyvsp[-4].string));
                  }
#line 7643 "src/y.tab.c"
    break;

  case 824: /* euid: IF FAILED EUID NUMBER rate1 THEN action1 recovery_success  */
#line 3219 "src/p.y"
                                                                            {
                        uidset.uid = get_uid(NULL, (yyvsp[-4].number));
                        addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        current->euid = adduid(&uidset);
                  }
#line 7653 "src/y.tab.c"
    break;

  case 825: /* secattr: IF FAILED SECURITY ATTRIBUTE STRING rate1 THEN action1 recovery_success  */
#line 3226 "src/p.y"
                                                                                          {
                        addsecurityattribute((yyvsp[-4].string), (yyvsp[-1].number), (yyvsp[0].number));
                  }
#line 7661 "src/y.tab.c"
    break;

  case 826: /* secattr: IF FAILED SECURITY ATTRIBUTE PATH rate1 THEN action1 recovery_success  */
#line 3229 "src/p.y"
                                                                                        {
                        addsecurityattribute((yyvsp[-4].string), (yyvsp[-1].number), (yyvsp[0].number));
                  }
#line 7669 "src/y.tab.c"
    break;

  case 827: /* filedescriptorssystem: IF FILEDESCRIPTORS operator NUMBER rate1 THEN action1 recovery_success  */
#line 3234 "src/p.y"
                                                                                               {
                        if (System_Info.statisticsAvailable & Statistics_FiledescriptorsPerSystem)
                                addfiledescriptors((yyvsp[-5].number), false, (long long)(yyvsp[-4].number), -1., (yyvsp[-1].number), (yyvsp[0].number));
                        else
                                yywarning("The per-system filedescriptors statistics is not available on this system\n");
                  }
#line 7680 "src/y.tab.c"
    break;

  case 828: /* filedescriptorssystem: IF FILEDESCRIPTORS operator value PERCENT rate1 THEN action1 recovery_success  */
#line 3240 "src/p.y"
                                                                                                {
                        if (System_Info.statisticsAvailable & Statistics_FiledescriptorsPerSystem)
                                addfiledescriptors((yyvsp[-6].number), false, -1LL, (yyvsp[-5].real), (yyvsp[-1].number), (yyvsp[0].number));
                        else
                                yywarning("The per-system filedescriptors statistics is not available on this system\n");
                  }
#line 7691 "src/y.tab.c"
    break;

  case 829: /* filedescriptorsprocess: IF FILEDESCRIPTORS operator NUMBER rate1 THEN action1 recovery_success  */
#line 3248 "src/p.y"
                                                                                                {
                        if (System_Info.statisticsAvailable & Statistics_FiledescriptorsPerProcess)
                                addfiledescriptors((yyvsp[-5].number), false, (long long)(yyvsp[-4].number), -1., (yyvsp[-1].number), (yyvsp[0].number));
                        else
                                yywarning("The per-process filedescriptors statistics is not available on this system\n");
                  }
#line 7702 "src/y.tab.c"
    break;

  case 830: /* filedescriptorsprocess: IF FILEDESCRIPTORS operator value PERCENT rate1 THEN action1 recovery_success  */
#line 3254 "src/p.y"
                                                                                                {
                        if (System_Info.statisticsAvailable & Statistics_FiledescriptorsPerProcessMax)
                                addfiledescriptors((yyvsp[-6].number), false, -1LL, (yyvsp[-5].real), (yyvsp[-1].number), (yyvsp[0].number));
                        else
                                yywarning("The per-process filedescriptors maximum is not exposed on this system, so we cannot compute usage %%, please use the test with absolute value\n");
                  }
#line 7713 "src/y.tab.c"
    break;

  case 831: /* filedescriptorsprocesstotal: IF TOTAL FILEDESCRIPTORS operator NUMBER rate1 THEN action1 recovery_success  */
#line 3262 "src/p.y"
                                                                                                           {
                        if (System_Info.statisticsAvailable & Statistics_FiledescriptorsPerProcess)
                                addfiledescriptors((yyvsp[-5].number), true, (long long)(yyvsp[-4].number), -1., (yyvsp[-1].number), (yyvsp[0].number));
                        else
                                yywarning("The per-process filedescriptors statistics is not available on this system\n");
                  }
#line 7724 "src/y.tab.c"
    break;

  case 832: /* gid: IF FAILED GID STRING rate1 THEN action1 recovery_success  */
#line 3270 "src/p.y"
                                                                           {
                        gidset.gid = get_gid((yyvsp[-4].string), 0);
                        addeventaction(&(gidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        current->gid = addgid(&gidset);
                        FREE((yyvsp[-4].string));
                  }
#line 7735 "src/y.tab.c"
    break;

  case 833: /* gid: IF FAILED GID NUMBER rate1 THEN action1 recovery_success  */
#line 3276 "src/p.y"
                                                                           {
                        gidset.gid = get_gid(NULL, (yyvsp[-4].number));
                        addeventaction(&(gidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        current->gid = addgid(&gidset);
                  }
#line 7745 "src/y.tab.c"
    break;

  case 834: /* linkstatus: IF FAILED LINK rate1 THEN action1 recovery_success  */
#line 3283 "src/p.y"
                                                                  { /* Deprecated */
                        addeventaction(&(linkstatusset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addlinkstatus(current, &linkstatusset);
                  }
#line 7754 "src/y.tab.c"
    break;

  case 835: /* linkstatus: IF LINK DOWN rate1 THEN action1 recovery_success  */
#line 3287 "src/p.y"
                                                                {
                        linkstatusset.check_invers = false;
                        addeventaction(&(linkstatusset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addlinkstatus(current, &linkstatusset);
                  }
#line 7764 "src/y.tab.c"
    break;

  case 836: /* linkstatus: IF LINK UP rate1 THEN action1 recovery_failure  */
#line 3292 "src/p.y"
                                                              {
                        linkstatusset.check_invers = true;
                        addeventaction(&(linkstatusset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addlinkstatus(current, &linkstatusset);
                  }
#line 7774 "src/y.tab.c"
    break;

  case 837: /* linkspeed: IF CHANGED LINK rate1 THEN action1 recovery_success  */
#line 3299 "src/p.y"
                                                                   {
                        addeventaction(&(linkspeedset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addlinkspeed(current, &linkspeedset);
                  }
#line 7783 "src/y.tab.c"
    break;

  case 838: /* linksaturation: IF SATURATION operator NUMBER PERCENT rate1 THEN action1 recovery_success  */
#line 3304 "src/p.y"
                                                                                           {
                        linksaturationset.operator = (yyvsp[-6].number);
                        linksaturationset.limit = (unsigned long long)(yyvsp[-5].number);
                        addeventaction(&(linksaturationset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addlinksaturation(current, &linksaturationset);
                  }
#line 7794 "src/y.tab.c"
    break;

  case 839: /* upload: IF UPLOAD operator NUMBER unit currenttime rate1 THEN action1 recovery_success  */
#line 3312 "src/p.y"
                                                                                                 {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 7807 "src/y.tab.c"
    break;

  case 840: /* upload: IF TOTAL UPLOAD operator NUMBER unit totaltime rate1 THEN action1 recovery_success  */
#line 3320 "src/p.y"
                                                                                                     {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 7820 "src/y.tab.c"
    break;

  case 841: /* upload: IF TOTAL UPLOAD operator NUMBER unit NUMBER totaltime rate1 THEN action1 recovery_success  */
#line 3328 "src/p.y"
                                                                                                            {
                        bandwidthset.operator = (yyvsp[-8].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-7].number) * (yyvsp[-6].number));
                        bandwidthset.rangecount = (yyvsp[-5].number);
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 7833 "src/y.tab.c"
    break;

  case 842: /* upload: IF UPLOAD operator NUMBER PACKET currenttime rate1 THEN action1 recovery_success  */
#line 3336 "src/p.y"
                                                                                                   {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 7846 "src/y.tab.c"
    break;

  case 843: /* upload: IF TOTAL UPLOAD operator NUMBER PACKET totaltime rate1 THEN action1 recovery_success  */
#line 3344 "src/p.y"
                                                                                                       {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 7859 "src/y.tab.c"
    break;

  case 844: /* upload: IF TOTAL UPLOAD operator NUMBER PACKET NUMBER totaltime rate1 THEN action1 recovery_success  */
#line 3352 "src/p.y"
                                                                                                              {
                        bandwidthset.operator = (yyvsp[-8].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-7].number);
                        bandwidthset.rangecount = (yyvsp[-5].number);
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 7872 "src/y.tab.c"
    break;

  case 845: /* download: IF DOWNLOAD operator NUMBER unit currenttime rate1 THEN action1 recovery_success  */
#line 3362 "src/p.y"
                                                                                                   {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 7885 "src/y.tab.c"
    break;

  case 846: /* download: IF TOTAL DOWNLOAD operator NUMBER unit totaltime rate1 THEN action1 recovery_success  */
#line 3370 "src/p.y"
                                                                                                       {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 7898 "src/y.tab.c"
    break;

  case 847: /* download: IF TOTAL DOWNLOAD operator NUMBER unit NUMBER totaltime rate1 THEN action1 recovery_success  */
#line 3378 "src/p.y"
                                                                                                              {
                        bandwidthset.operator = (yyvsp[-8].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-7].number) * (yyvsp[-6].number));
                        bandwidthset.rangecount = (yyvsp[-5].number);
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 7911 "src/y.tab.c"
    break;

  case 848: /* download: IF DOWNLOAD operator NUMBER PACKET currenttime rate1 THEN action1 recovery_success  */
#line 3386 "src/p.y"
                                                                                                     {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 7924 "src/y.tab.c"
    break;

  case 849: /* download: IF TOTAL DOWNLOAD operator NUMBER PACKET totaltime rate1 THEN action1 recovery_success  */
#line 3394 "src/p.y"
                                                                                                         {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 7937 "src/y.tab.c"
    break;

  case 850: /* download: IF TOTAL DOWNLOAD operator NUMBER PACKET NUMBER totaltime rate1 THEN action1 recovery_success  */
#line 3402 "src/p.y"
                                                                                                                {
                        bandwidthset.operator = (yyvsp[-8].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-7].number);
                        bandwidthset.rangecount = (yyvsp[-5].number);
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 7950 "src/y.tab.c"
    break;

  case 851: /* icmptype: TYPE ICMPECHO  */
#line 3412 "src/p.y"
                                { (yyval.number) = ICMP_ECHO; }
#line 7956 "src/y.tab.c"
    break;

  case 852: /* reminder: %empty  */
#line 3415 "src/p.y"
                                        { mailset.reminder = 0; }
#line 7962 "src/y.tab.c"
    break;

  case 853: /* reminder: REMINDER NUMBER  */
#line 3416 "src/p.y"
                                        { mailset.reminder = (yyvsp[0].number); }
#line 7968 "src/y.tab.c"
    break;

  case 854: /* reminder: REMINDER NUMBER CYCLE  */
#line 3417 "src/p.y"
                                        { mailset.reminder = (yyvsp[-1].number); }
#line 7974 "src/y.tab.c"
    break;


#line 7978 "src/y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 3420 "src/p.y"



/* -------------------------------------------------------- Parser interface */


/**
 * Syntactic error routine
 *
 * This routine is automatically called by the lexer!
 */
void yyerror(const char *s, ...) {
        assert(s);
        char *msg = NULL;
        va_list ap;
        va_start(ap, s);
        msg = Str_vcat(s, ap);
        va_end(ap);
        Log_error("%s:%i: %s '%s'\n", currentfile, lineno, msg, yytext);
        cfg_errflag++;
        FREE(msg);
}


/**
 * Syntactical warning routine
 */
void yywarning(const char *s, ...) {
        assert(s);
        char *msg = NULL;
        va_list ap;
        va_start(ap, s);
        msg = Str_vcat(s, ap);
        va_end(ap);
        Log_warning("%s:%i: %s '%s'\n", currentfile, lineno, msg, yytext);
        FREE(msg);
}


/**
 * Argument error routine
 */
void yyerror2(const char *s, ...) {
        assert(s);
        char *msg = NULL;
        va_list ap;
        va_start(ap, s);
        msg = Str_vcat(s, ap);
        va_end(ap);
        Log_error("%s:%i: %s '%s'\n", argcurrentfile, arglineno, msg, argyytext);
        cfg_errflag++;
        FREE(msg);
}


/**
 * Argument warning routine
 */
void yywarning2(const char *s, ...) {
        assert(s);
        char *msg = NULL;
        va_list ap;
        va_start(ap, s);
        msg = Str_vcat(s, ap);
        va_end(ap);
        Log_warning("%s:%i: %s '%s'\n", argcurrentfile, arglineno, msg, argyytext);
        FREE(msg);
}


/*
 * The Parser hook - start parsing the control file
 * Returns true if parsing succeeded, otherwise false
 */
bool parse(char *controlfile) {
        assert(controlfile);

        if ((yyin = fopen(controlfile,"r")) == (FILE *)NULL) {
                Log_error("Cannot open the control file '%s' -- %s\n", controlfile, STRERROR);
                return false;
        }

        currentfile = Str_dup(controlfile);

        available_statistics(&System_Info);

        /*
         * Creation of the global service list is synchronized
         */
        LOCK(Run.mutex)
        {
                preparse();
                yyparse();
                fclose(yyin);
                postparse();
        }
        END_LOCK;

        FREE(currentfile);

        if (argyytext != NULL)
                FREE(argyytext);

        /*
         * Secure check the monitrc file. The run control file must have the
         * same uid as the REAL uid of this process, it must have permissions
         * no greater than 700 and it must not be a symbolic link.
         */
        if (! file_checkStat(controlfile, "control file", S_IRUSR|S_IWUSR|S_IXUSR))
                return false;

        return cfg_errflag == 0;
}


/* ----------------------------------------------------------------- Private */


/**
 * Initialize objects used by the parser.
 */
static void preparse(void) {
        Service_List = tail = current = NULL;
        /* Set instance incarnation ID */
        time(&Run.incarnation);
        /* Reset lexer */
        buffer_stack_ptr            = 0;
        lineno                      = 1;
        arglineno                   = 1;
        argcurrentfile              = NULL;
        argyytext                   = NULL;
        /* Reset parser */
        Run.limits.sendExpectBuffer  = LIMIT_SENDEXPECTBUFFER;
        Run.limits.fileContentBuffer = LIMIT_FILECONTENTBUFFER;
        Run.limits.httpContentBuffer = LIMIT_HTTPCONTENTBUFFER;
        Run.limits.programOutput     = LIMIT_PROGRAMOUTPUT;
        Run.limits.networkTimeout    = LIMIT_NETWORKTIMEOUT;
        Run.limits.programTimeout    = LIMIT_PROGRAMTIMEOUT;
        Run.limits.stopTimeout       = LIMIT_STOPTIMEOUT;
        Run.limits.startTimeout      = LIMIT_STARTTIMEOUT;
        Run.limits.restartTimeout    = LIMIT_RESTARTTIMEOUT;
        Run.limits.execTimeout       = LIMIT_EXECTIMEOUT;
        Run.onreboot                 = Onreboot_Start;
        Run.mmonitcredentials        = NULL;
        Run.httpd.flags              = Httpd_Disabled | Httpd_Signature;
        Run.httpd.credentials        = NULL;
        memset(&(Run.httpd.socket), 0, sizeof(Run.httpd.socket));
        Run.mailserver_timeout       = SMTP_TIMEOUT;
        Run.eventlist_dir            = NULL;
        Run.eventlist_slots          = -1;
        Run.system                   = NULL;
        Run.mmonits                  = NULL;
        Run.maillist                 = NULL;
        Run.mailservers              = NULL;
        Run.MailFormat.from          = NULL;
        Run.MailFormat.replyto       = NULL;
        Run.MailFormat.subject       = NULL;
        Run.MailFormat.message       = NULL;
        depend_list                  = NULL;
        Run.flags |= Run_HandlerInit | Run_MmonitCredentials;
        for (int i = 0; i <= Handler_Max; i++)
                Run.handler_queue[i] = 0;

        /*
         * Initialize objects
         */
        reset_uidset();
        reset_gidset();
        reset_statusset();
        reset_sizeset();
        reset_nlinkset();
        reset_mailset();
        reset_sslset();
        reset_mailserverset();
        reset_mmonitset();
        reset_responsetimeset();
        reset_portset();
        reset_permset();
        reset_icmpset();
        reset_linkstatusset();
        reset_linkspeedset();
        reset_linksaturationset();
        reset_bandwidthset();
        reset_rateset(&rate);
        reset_rateset(&rate1);
        reset_rateset(&rate2);
        reset_filesystemset();
        reset_resourceset();
        reset_checksumset();
        reset_timestampset();
        reset_actionrateset();
}


/*
 * Check that values are reasonable after parsing
 */
static void postparse(void) {
        if (cfg_errflag)
                return;

        /* If defined - add the last service to the service list */
        if (current) {
                addservice(current);
                current = NULL;
        }

        /* Check that we do not start monit in daemon mode without having a poll time */
        if (Run.polltime <= 0 && ((Run.flags & Run_Daemon) || (Run.flags & Run_Foreground))) {
                Log_error("Poll time is invalid or not defined. Please define poll time in the control file\nas a number (> 0)  or use the -d option when starting monit\n");
                cfg_errflag++;
        }

        if (Run.files.log)
                Run.flags |= Run_Log;

        /* Add the default general system service if not specified explicitly: service name default to hostname */
        if (! Run.system) {
                char hostname[STRLEN];
                if (gethostname(hostname, sizeof(hostname))) {
                        Log_error("Cannot get system hostname -- please add 'check system <name>'\n");
                        cfg_errflag++;
                }
                if (Util_existService(hostname)) {
                        Log_error("'check system' not defined in control file, failed to add automatic configuration (service name %s is used already) -- please add 'check system <name>' manually\n", hostname);
                        cfg_errflag++;
                }
                Run.system = createservice(Service_System, Str_dup(hostname), NULL, check_system);
                addservice(Run.system);
        }
        addeventaction(&(Run.system->action_MONIT_START), Action_Start, Action_Ignored);
        addeventaction(&(Run.system->action_MONIT_STOP), Action_Stop,  Action_Ignored);

        if (Run.mmonits) {
                if (Run.httpd.flags & Httpd_Net) {
                        if (Run.flags & Run_MmonitCredentials) {
                                Auth_T c;
                                for (c = Run.httpd.credentials; c; c = c->next) {
                                        if (c->digesttype == Digest_Cleartext && ! c->is_readonly) {
                                                Run.mmonitcredentials = c;
                                                break;
                                        }
                                }
                                if (! Run.mmonitcredentials)
                                        Log_warning("M/Monit registration with credentials enabled, but no suitable credentials found in monit configuration file -- please add 'allow user:password' option to 'set httpd' statement\n");
                        }
                } else if (Run.httpd.flags & Httpd_Unix) {
                        Log_warning("M/Monit enabled but Monit httpd is using unix socket -- please change 'set httpd' statement to use TCP port in order to be able to manage services on Monit\n");
                } else {
                        Log_warning("M/Monit enabled but no httpd allowed -- please add 'set httpd' statement\n");
                }
        }

        /* Check the sanity of any dependency graph */
        check_depend();

#if defined HAVE_OPENSSL && defined OPENSSL_FIPS
        Ssl_setFipsMode(Run.flags & Run_FipsEnabled);
#endif

        Processor_setHttpPostLimit();
}


static bool _parseOutgoingAddress(char *ip, Outgoing_T *outgoing) {
        struct addrinfo *result, hints = {.ai_flags = AI_NUMERICHOST};
        int status = getaddrinfo(ip, NULL, &hints, &result);
        if (status == 0) {
                outgoing->ip = ip;
                outgoing->addrlen = result->ai_addrlen;
                memcpy(&(outgoing->addr), result->ai_addr, result->ai_addrlen);
                freeaddrinfo(result);
                return true;
        } else {
                yyerror2("IP address parsing failed for %s -- %s", ip, status == EAI_SYSTEM ? STRERROR : gai_strerror(status));
        }
        return false;
}


/*
 * Create a new service object and add any current objects to the
 * service list.
 */
static Service_T createservice(Service_Type type, char *name, char *value, State_Type (*check)(Service_T s)) {
        assert(name);

        check_name(name);

        if (current)
                addservice(current);

        NEW(current);
        current->type = type;
        switch (type) {
                case Service_Directory:
                        NEW(current->inf.directory);
                        break;
                case Service_Fifo:
                        NEW(current->inf.fifo);
                        break;
                case Service_File:
                        NEW(current->inf.file);
                        break;
                case Service_Filesystem:
                        NEW(current->inf.filesystem);
                        break;
                case Service_Net:
                        NEW(current->inf.net);
                        break;
                case Service_Process:
                        NEW(current->inf.process);
                        break;
                default:
                        break;
        }
        Util_resetInfo(current);

        if (type == Service_Program) {
                NEW(current->program);
                current->program->args = command;
                command = NULL;
                current->program->timeout = Run.limits.programTimeout;
        }

        /* Set default values */
        current->onrebootRestored = false;
        current->mode     = Monitor_Active;
        current->monitor  = Monitor_Init;
        current->onreboot = Run.onreboot;
        current->name     = name;
        current->name_urlescaped = Util_urlEncode(name, false);
        current->name_htmlescaped = escapeHTML(StringBuffer_create(16), name);
        current->check    = check;
        current->path     = value;

        /* Initialize general event handlers */
        addeventaction(&(current)->action_DATA,     Action_Alert,     Action_Alert);
        addeventaction(&(current)->action_EXEC,     Action_Alert,     Action_Alert);
        addeventaction(&(current)->action_INVALID,  Action_Restart,   Action_Alert);

        /* Initialize internal event handlers */
        addeventaction(&(current)->action_ACTION,       Action_Alert, Action_Ignored);

        gettimeofday(&current->collected, NULL);

        return current;
}


/*
 * Add a service object to the Service_List
 */
static void addservice(Service_T s) {
        assert(s);

        // Test sanity check
        switch (s->type) {
                case Service_Host:
                        // Verify that a remote service has a port or an icmp list
                        if (! s->portlist && ! s->icmplist) {
                                Log_error("'check host' statement is incomplete: Please specify a port number to test\n or an icmp test at the remote host: '%s'\n", s->name);
                                cfg_errflag++;
                        }
                        break;
                case Service_Program:
                        // Verify that a program test has a status test
                        if (! s->statuslist && ! s->matchlist && ! s->outputchangelist) {
                                Log_error("'check program %s' is incomplete: Please add a 'status' or 'content' test\n", s->name);
                                cfg_errflag++;
                        }
                        char program[PATH_MAX];
                        strncpy(program, s->program->args->arg[0], sizeof(program) - 1);
                        // Require that the program exist before creating the Command object
                        if (File_isExecutable(program)) {
                                s->program->C = Command_new(program, NULL);
                                for (int i = 1; i < s->program->args->length; i++) {
                                        Command_appendArgument(s->program->C, s->program->args->arg[i]);
                                        snprintf(program + strlen(program), sizeof(program) - strlen(program) - 1, " %s", s->program->args->arg[i]);
                                }
                                s->path = Str_dup(program);
                                if (s->program->args->has_uid)
                                        Command_setUid(s->program->C, s->program->args->uid);
                                if (s->program->args->has_gid)
                                        Command_setGid(s->program->C, s->program->args->gid);
                                // Set environment
                                Command_setEnv(s->program->C, "MONIT_SERVICE", s->name);
                        } else {
                                Log_error("A 'check program' statement requires the program to exist '%s'\n", program);
                                cfg_errflag++;
                        }
                        break;
                case Service_Net:
                        if (! s->linkstatuslist) {
                                // Add link status test if not defined
                                addeventaction(&(linkstatusset).action, Action_Alert, Action_Alert);
                                addlinkstatus(s, &linkstatusset);
                        }
                        break;
                case Service_Filesystem:
                        if (! s->nonexistlist && ! s->existlist) {
                                // Add non-existence test if not defined
                                addeventaction(&(nonexistset).action, Action_Restart, Action_Alert);
                                addnonexist(&nonexistset);
                        }
                        if (! s->fsflaglist) {
                                // Add filesystem flags change test if not defined
                                addeventaction(&(fsflagset).action, Action_Alert, Action_Ignored);
                                addfsflag(&fsflagset);
                        }
                        break;
                case Service_Directory:
                case Service_Fifo:
                case Service_File:
                case Service_Process:
                        if (! s->nonexistlist && ! s->existlist) {
                                // Add existence test if not defined
                                addeventaction(&(nonexistset).action, Action_Restart, Action_Alert);
                                addnonexist(&nonexistset);
                        }
                        break;
                default:
                        break;
        }

        // No "every" statement was used, monitor each cycle
        if (s->every.type == Every_Initializing)
                s->every.type = Every_Cycle;

        /* Add the service to the end of the service list */
        if (tail != NULL) {
                tail->next = s;
                tail->next_conf = s;
        } else {
                Service_List = s;
                Service_List_Conf = s;
        }
        tail = s;
}


/*
 * Add entry to service group list
 */
static void addservicegroup(char *name) {
        ServiceGroup_T g;

        assert(name);

        /* Check if service group with the same name is defined already */
        for (g = Service_Group_List; g; g = g->next)
                if (IS(g->name, name))
                        break;

        if (! g) {
                NEW(g);
                g->name = Str_dup(name);
                g->members = List_new();
                g->next = Service_Group_List;
                Service_Group_List = g;
        }

        List_append(g->members, current);
}


/*
 * Add entry to M/Monit hostgroup membership list
 */
static void addhostgroup(char *name) {
        if (! mmonitset.hostgroups)
                mmonitset.hostgroups = List_new();
        List_append(mmonitset.hostgroups, name);
}


/*
 * Add a dependant entry to the current service dependant list
 */
static void adddependant(char *dependant) {
        Dependant_T d;

        assert(dependant);

        NEW(d);

        if (current->dependantlist)
                d->next = current->dependantlist;

        d->dependant = dependant;
        d->dependant_urlescaped = Util_urlEncode(dependant, false);
        d->dependant_htmlescaped = escapeHTML(StringBuffer_create(16), dependant);
        current->dependantlist = d;

}


/*
 * Add the given mailaddress with the appropriate alert notification
 * values and mail attributes to the given mailinglist.
 */
static void addmail(char *mailto, Mail_T f, Mail_T *l) {
        Mail_T m;

        assert(mailto);

        NEW(m);
        m->to       = mailto;
        m->from     = f->from;
        m->replyto  = f->replyto;
        m->subject  = f->subject;
        m->message  = f->message;
        m->events   = f->events;
        m->reminder = f->reminder;

        m->next = *l;
        *l = m;

        reset_mailset();
}


/*
 * Add the given portset to the current service's portlist
 */
static void addport(Port_T *list, Port_T port) {
        assert(port);

        if (port->protocol->check == check_radius && port->type != Socket_Udp)
                yyerror("Radius protocol test supports UDP only");

        Port_T p;
        NEW(p);
        p->is_available       = Connection_Init;
        p->check_invers       = port->check_invers;
        p->type               = port->type;
        p->socket             = port->socket;
        p->family             = port->family;
        p->action             = port->action;
        p->timeout            = port->timeout;
        p->retry              = port->retry;
        p->protocol           = port->protocol;
        p->hostname           = port->hostname;
        p->url_request        = port->url_request;
        p->outgoing           = port->outgoing;

        if (p->family == Socket_Unix) {
                p->target.unix.pathname = port->target.unix.pathname;
        } else {
                p->target.net.port = port->target.net.port;
                if (sslset.flags) {
#ifdef HAVE_OPENSSL
                        p->target.net.ssl.certificate.minimumDays = port->target.net.ssl.certificate.minimumDays;
                        if (sslset.flags && (p->target.net.port == 25 || p->target.net.port == 143 || p->target.net.port == 587))
                                sslset.flags = SSL_StartTLS;
                        _setSSLOptions(&(p->target.net.ssl.options));
#else
                        yyerror("SSL check cannot be activated -- Monit was not built with SSL support");
#endif
                }
        }
        memcpy(&p->parameters, &port->parameters, sizeof(port->parameters));

        if (p->protocol->check == check_http) {
                if (p->parameters.http.checksum) {
                        cleanup_hash_string(p->parameters.http.checksum);
                        if (strlen(p->parameters.http.checksum) == 32)
                                p->parameters.http.hashtype = Hash_Md5;
                        else if (strlen(p->parameters.http.checksum) == 40)
                                p->parameters.http.hashtype = Hash_Sha1;
                        else
                                yyerror2("invalid checksum [%s]", p->parameters.http.checksum);
                } else {
                        p->parameters.http.hashtype = Hash_Unknown;
                }
                if (! p->parameters.http.method) {
                        p->parameters.http.method = Http_Get;
                } else if (p->parameters.http.method == Http_Head) {
                        // Sanity check: if content or checksum test is used, the method Http_Head is not allowed, as we need the content
                        if ((p->url_request && p->url_request->regex) || p->parameters.http.checksum) {
                                yyerror2("if response content or checksum test is enabled, the HEAD method is not allowed");
                        }
                }
        } else if (p->protocol->check == check_mysql) {
                if (p->parameters.mysql.rsaChecksum) {
                        if (! p->parameters.mysql.username)
                                yyerror2("the rsakey checksum test requires credentials to be defined");
                        if (p->target.net.ssl.options.flags != SSL_Disabled)
                                yyerror2("the rsakey checksum test can be used just with unsecured mysql protocol");
                }
        }

        p->responsetime.limit    = responsetimeset.limit;
        p->responsetime.current  = responsetimeset.current;
        p->responsetime.operator = responsetimeset.operator;

        p->next = *list;
        *list = p;

        reset_sslset();
        reset_responsetimeset();
        reset_portset();

}


static void addhttpheader(Port_T port, char *header) {
        if (! port->parameters.http.headers) {
                port->parameters.http.headers = List_new();
        }
        if (Str_startsWith(header, "Connection:") && ! Str_sub(header, "close")) {
                yywarning("We don't recommend setting the Connection header. Monit will always close the connection even if 'keep-alive' is set\n");
        }
        List_append(port->parameters.http.headers, header);
}


/*
 * Add a new resource object to the current service resource list
 */
static void addresource(Resource_T rr) {
        assert(rr);
        if (Run.flags & Run_ProcessEngineEnabled) {
                Resource_T r;
                NEW(r);
                r->resource_id = rr->resource_id;
                r->limit       = rr->limit;
                r->action      = rr->action;
                r->operator    = rr->operator;
                r->next        = current->resourcelist;
                current->resourcelist = r;
        } else {
                yywarning("Cannot activate service check. The process status engine was disabled. On certain systems you must run monit as root to utilize this feature)\n");
        }
        reset_resourceset();
}


/*
 * Add a new file object to the current service timestamp list
 */
static void addtimestamp(Timestamp_T ts) {
        assert(ts);

        Timestamp_T t;
        NEW(t);
        t->type         = ts->type;
        t->operator     = ts->operator;
        t->time         = ts->time;
        t->action       = ts->action;
        t->test_changes = ts->test_changes;

        t->next = current->timestamplist;
        current->timestamplist = t;

        reset_timestampset();
}


/*
 * Add a new object to the current service actionrate list
 */
static void addactionrate(ActionRate_T ar) {
        ActionRate_T a;

        assert(ar);

        if (ar->count > ar->cycle)
                yyerror2("The number of restarts must be less than poll cycles");
        if (ar->count <= 0 || ar->cycle <= 0)
                yyerror2("Zero or negative values not allowed in a action rate statement");

        NEW(a);
        a->count  = ar->count;
        a->cycle  = ar->cycle;
        a->action = ar->action;

        a->next = current->actionratelist;
        current->actionratelist = a;

        reset_actionrateset();
}



/*
 * Add a new Size object to the current service size list
 */
static void addsize(Size_T ss) {
        Size_T s;
        struct stat buf;

        assert(ss);

        NEW(s);
        s->operator     = ss->operator;
        s->size         = ss->size;
        s->action       = ss->action;
        s->test_changes = ss->test_changes;
        /* Get the initial size for future comparison, if the file exists */
        if (s->test_changes) {
                s->initialized = ! stat(current->path, &buf);
                if (s->initialized)
                        s->size = (unsigned long long)buf.st_size;
        }

        s->next = current->sizelist;
        current->sizelist = s;

        reset_sizeset();
}


/*
 * Add a new NLink object to the current service nlink list
 */
static void addnlink(NLink_T ss) {
        NLink_T s;
        struct stat buf;
    
        assert(ss);
    
        NEW(s);
        s->operator     = ss->operator;
        s->nlink        = ss->nlink;
        s->action       = ss->action;
        s->test_changes = ss->test_changes;
        /* Get the initial size for future comparison */
        if (s->test_changes) {
                s->initialized = ! stat(current->path, &buf);
                if (s->initialized)
                        s->nlink = (unsigned long long)buf.st_nlink;
        }
    
        s->next = current->nlinklist;
        current->nlinklist = s;
    
        reset_nlinkset();
}


/*
 * Add a new Uptime object to the current service uptime list
 */
static void adduptime(Uptime_T uu) {
        Uptime_T u;

        assert(uu);

        NEW(u);
        u->operator = uu->operator;
        u->uptime = uu->uptime;
        u->action = uu->action;

        u->next = current->uptimelist;
        current->uptimelist = u;

        reset_uptimeset();
}


/*
 * Add a new Pid object to the current service pid list
 */
static void addpid(Pid_T pp) {
        assert(pp);

        Pid_T p;
        NEW(p);
        p->action = pp->action;

        p->next = current->pidlist;
        current->pidlist = p;

        reset_pidset();
}


/*
 * Add a new PPid object to the current service ppid list
 */
static void addppid(Pid_T pp) {
        assert(pp);

        Pid_T p;
        NEW(p);
        p->action = pp->action;

        p->next = current->ppidlist;
        current->ppidlist = p;

        reset_ppidset();
}


/*
 * Add a new Fsflag object to the current service fsflag list
 */
static void addfsflag(FsFlag_T ff) {
        assert(ff);

        FsFlag_T f;
        NEW(f);
        f->action = ff->action;

        f->next = current->fsflaglist;
        current->fsflaglist = f;

        reset_fsflagset();
}


/*
 * Add a new Nonexist object to the current service list
 */
static void addnonexist(NonExist_T ff) {
        assert(ff);

        NonExist_T f;
        NEW(f);
        f->action = ff->action;

        f->next = current->nonexistlist;
        current->nonexistlist = f;

        reset_nonexistset();
}


static void addexist(Exist_T rule) {
        assert(rule);
        Exist_T r;
        NEW(r);
        r->action = rule->action;
        r->next = current->existlist;
        current->existlist = r;
        reset_existset();
}


/*
 * Set Checksum object in the current service
 */
static void addchecksum(Checksum_T cs) {
        assert(cs);

        cs->initialized = true;

        if (STR_UNDEF(cs->hash)) {
                if (cs->type == Hash_Unknown)
                        cs->type = Hash_Default;
                if (! (Checksum_getChecksum(current->path, cs->type, cs->hash, sizeof(cs->hash)))) {
                        /* If the file doesn't exist, set dummy value */
                        snprintf(cs->hash, sizeof(cs->hash), cs->type == Hash_Md5 ? "00000000000000000000000000000000" : "0000000000000000000000000000000000000000");
                        cs->initialized = false;
                        yywarning2("Cannot compute a checksum for file %s", current->path);
                }
        }

        int len = cleanup_hash_string(cs->hash);
        if (cs->type == Hash_Unknown) {
                if (len == 32) {
                        cs->type = Hash_Md5;
                } else if (len == 40) {
                        cs->type = Hash_Sha1;
                } else {
                        yyerror2("Unknown checksum type [%s] for file %s", cs->hash, current->path);
                        reset_checksumset();
                        return;
                }
        } else if ((cs->type == Hash_Md5 && len != 32) || (cs->type == Hash_Sha1 && len != 40)) {
                yyerror2("Invalid checksum [%s] for file %s", cs->hash, current->path);
                reset_checksumset();
                return;
        }

        Checksum_T c;
        NEW(c);
        c->type         = cs->type;
        c->test_changes = cs->test_changes;
        c->initialized  = cs->initialized;
        c->action       = cs->action;
        snprintf(c->hash, sizeof(c->hash), "%s", cs->hash);

        current->checksum = c;

        reset_checksumset();

}


/*
 * Set Perm object in the current service
 */
static void addperm(Perm_T ps) {
        assert(ps);

        Perm_T p;
        NEW(p);
        p->action = ps->action;
        p->test_changes = ps->test_changes;
        if (p->test_changes) {
                if (! File_exist(current->path))
                        DEBUG("The path '%s' used in the PERMISSION statement refer to a non-existing object\n", current->path);
                else if ((p->perm = File_mod(current->path)) < 0)
                        yyerror2("Cannot get the timestamp for '%s'", current->path);
                else
                        p->perm &= 07777;
        } else {
                p->perm = ps->perm;
        }
        current->perm = p;
        reset_permset();
}


static void addlinkstatus(Service_T s, LinkStatus_T L) {
        assert(L);

        LinkStatus_T l;

        // Sanity check: we don't support link up/down tests mix
        for (l = s->linkstatuslist; l; l = l->next) {
                if (l->check_invers != L->check_invers)
                        yyerror2("Mixing link up and down tests is not supported");
        }
                        
        if (L->check_invers)
                s->inverseStatus = true;

        NEW(l);
        l->check_invers = L->check_invers;
        l->action = L->action;

        l->next = s->linkstatuslist;
        s->linkstatuslist = l;

        reset_linkstatusset();
}


static void addlinkspeed(Service_T s, LinkSpeed_T L) {
        assert(L);

        LinkSpeed_T l;
        NEW(l);
        l->action = L->action;

        l->next = s->linkspeedlist;
        s->linkspeedlist = l;

        reset_linkspeedset();
}


static void addlinksaturation(Service_T s, LinkSaturation_T L) {
        assert(L);

        LinkSaturation_T l;
        NEW(l);
        l->operator = L->operator;
        l->limit = L->limit;
        l->action = L->action;

        l->next = s->linksaturationlist;
        s->linksaturationlist = l;

        reset_linksaturationset();
}


/*
 * Return Bandwidth object
 */
static void addbandwidth(Bandwidth_T *list, Bandwidth_T b) {
        assert(list);
        assert(b);

        if (b->rangecount * b->range > 24 * Time_Hour) {
                yyerror2("Maximum range for total test is 24 hours");
        } else if (b->range == Time_Minute && b->rangecount > 60) {
                yyerror2("Maximum value for [minute(s)] unit is 60");
        } else if (b->range == Time_Hour && b->rangecount > 24) {
                yyerror2("Maximum value for [hour(s)] unit is 24");
        } else if (b->range == Time_Day && b->rangecount > 1) {
                yyerror2("Maximum value for [day(s)] unit is 1");
        } else {
                if (b->range == Time_Day) {
                        // translate last day -> last 24 hours
                        b->rangecount = 24;
                        b->range = Time_Hour;
                }
                Bandwidth_T bandwidth;
                NEW(bandwidth);
                bandwidth->operator = b->operator;
                bandwidth->limit = b->limit;
                bandwidth->rangecount = b->rangecount;
                bandwidth->range = b->range;
                bandwidth->action = b->action;
                bandwidth->next = *list;
                *list = bandwidth;
        }
        reset_bandwidthset();
}


static void appendmatch(Match_T *list, Match_T item) {
        if (*list) {
                /* Find the end of the list (keep the same patterns order as in the config file) */
                Match_T last;
                for (last = *list; last->next; last = last->next)
                        ;
                last->next = item;
        } else {
                *list = item;
        }
}


/*
 * Set Match object in the current service
 */
static void addmatch(Match_T ms, int actionnumber, int linenumber) {
        Match_T m;

        assert(ms);

        NEW(m);
        NEW(m->regex_comp);

        m->match_string = ms->match_string;
        m->match_path   = ms->match_path ? Str_dup(ms->match_path) : NULL;
        m->action       = ms->action;
        m->not          = ms->not;
        m->ignore       = ms->ignore;
        m->next         = NULL;

        addeventaction(&(m->action), actionnumber, Action_Ignored);

        int reg_return = regcomp(m->regex_comp, ms->match_string, REG_NOSUB|REG_EXTENDED);

        if (reg_return != 0) {
                char errbuf[STRLEN];
                regerror(reg_return, ms->regex_comp, errbuf, STRLEN);
                if (m->match_path != NULL)
                        yyerror2("Regex '%s' parsing error: %s on line %i of", ms->match_string, errbuf, linenumber);
                else
                        yyerror("Regex '%s' parsing error: %s", ms->match_string, errbuf);
        }
        appendmatch(m->ignore ? &current->matchignorelist : &current->matchlist, m);
}


static void addmatchpath(Match_T ms, Action_Type actionnumber) {
        assert(ms->match_path);

        FILE *handle = fopen(ms->match_path, "r");
        if (handle == NULL) {
                yyerror2("Cannot read regex match file (%s)", ms->match_path);
                return;
        }

        // The addeventaction() called from addmatch() will reset the command1 to NULL, but we need to duplicate the command for each line, thus need to save it here
        command_t savecommand = command1;
        for (int linenumber = 1; ! feof(handle); linenumber++) {
                char buf[2048];

                if (! fgets(buf, sizeof(buf), handle))
                        continue;

                size_t len = strlen(buf);

                if (len == 0 || buf[0] == '\n')
                        continue;

                if (buf[len - 1] == '\n')
                        buf[len - 1] = 0;

                ms->match_string = Str_dup(buf);

                if (actionnumber == Action_Exec) {
                        if (command1 == NULL) {
                                assert(savecommand);
                                command1 = copycommand(savecommand);
                        }
                }

                addmatch(ms, actionnumber, linenumber);
        }
        if (actionnumber == Action_Exec && savecommand)
                gccmd(&savecommand);

        fclose(handle);
}


/*
 * Set output change object in the current service
 */
static void addoutputchange(bool check_invers, Action_Type failed, Action_Type succeeded) {
        OutputChange_T outputchange;

        NEW(outputchange);
        addeventaction(&(outputchange->action), failed, succeeded);
        outputchange->previous = NULL;
        outputchange->check_invers = check_invers;

        outputchange->next = current->outputchangelist;
        current->outputchangelist = outputchange;
}


/*
 * Set exit status test object in the current service
 */
static void addstatus(Status_T status) {
        Status_T s;
        assert(status);
        NEW(s);
        s->initialized = status->initialized;
        s->return_value = status->return_value;
        s->operator = status->operator;
        s->action = status->action;
        s->next = current->statuslist;
        current->statuslist = s;

        reset_statusset();
}


/*
 * Set Uid object in the current service
 */
static Uid_T adduid(Uid_T u) {
        assert(u);

        Uid_T uid;
        NEW(uid);
        uid->uid = u->uid;
        uid->action = u->action;
        reset_uidset();
        return uid;
}


/*
 * Set Gid object in the current service
 */
static Gid_T addgid(Gid_T g) {
        assert(g);

        Gid_T gid;
        NEW(gid);
        gid->gid = g->gid;
        gid->action = g->action;
        reset_gidset();
        return gid;
}


/*
 * Add a new filesystem to the current service's filesystem list
 */
static void addfilesystem(FileSystem_T ds) {
        FileSystem_T dev;

        assert(ds);

        NEW(dev);
        dev->resource           = ds->resource;
        dev->operator           = ds->operator;
        dev->limit_absolute     = ds->limit_absolute;
        dev->limit_percent      = ds->limit_percent;
        dev->action             = ds->action;

        dev->next               = current->filesystemlist;
        current->filesystemlist = dev;

        reset_filesystemset();

}


/*
 * Add a new icmp object to the current service's icmp list
 */
static void addicmp(Icmp_T is) {
        Icmp_T icmp;

        assert(is);

        NEW(icmp);
        icmp->family        = is->family;
        icmp->type          = is->type;
        icmp->size          = is->size;
        icmp->count         = is->count;
        icmp->timeout       = is->timeout;
        icmp->action        = is->action;
        icmp->outgoing      = is->outgoing;
        icmp->check_invers  = is->check_invers;
        icmp->is_available  = Connection_Init;

        icmp->responsetime.limit    = responsetimeset.limit;
        icmp->responsetime.current  = responsetimeset.current;
        icmp->responsetime.operator = responsetimeset.operator;

        icmp->next          = current->icmplist;
        current->icmplist   = icmp;

        reset_responsetimeset();
        reset_icmpset();
}


/*
 * Set EventAction object
 */
static void addeventaction(EventAction_T *_ea, Action_Type failed, Action_Type succeeded) {
        EventAction_T ea;

        assert(_ea);

        NEW(ea);
        NEW(ea->failed);
        NEW(ea->succeeded);

        ea->failed->id = failed;
        ea->failed->repeat = repeat1;
        ea->failed->count = rate1.count;
        ea->failed->cycles = rate1.cycles;
        if (failed == Action_Exec) {
                assert(command1);
                ea->failed->exec = command1;
                command1 = NULL;
        }

        ea->succeeded->id = succeeded;
        ea->succeeded->repeat = repeat2;
        ea->succeeded->count = rate2.count;
        ea->succeeded->cycles = rate2.cycles;
        if (succeeded == Action_Exec) {
                assert(command2);
                ea->succeeded->exec = command2;
                command2 = NULL;
        }
        *_ea = ea;
        reset_rateset(&rate);
        reset_rateset(&rate1);
        reset_rateset(&rate2);
        repeat = repeat1 = repeat2 = 0;
}


/*
 * Add a generic protocol handler to
 */
static void addgeneric(Port_T port, char *send, char *expect) {
        Generic_T g = port->parameters.generic.sendexpect;
        if (! g) {
                NEW(g);
                port->parameters.generic.sendexpect = g;
        } else {
                while (g->next)
                        g = g->next;
                NEW(g->next);
                g = g->next;
        }
        if (send) {
                g->send = send;
                g->expect = NULL;
        } else if (expect) {
                int reg_return;
                NEW(g->expect);
                reg_return = regcomp(g->expect, expect, REG_NOSUB|REG_EXTENDED);
                FREE(expect);
                if (reg_return != 0) {
                        char errbuf[STRLEN];
                        regerror(reg_return, g->expect, errbuf, STRLEN);
                        yyerror2("Regex parsing error: %s", errbuf);
                }
                g->send = NULL;
        }
}


/*
 * Add the current command object to the current service object's
 * start or stop program.
 */
static void addcommand(int what, unsigned int cmdtimeout) {

        switch (what) {
                case START:   current->start = command; break;
                case STOP:    current->stop = command; break;
                case RESTART: current->restart = command; break;
        }

        command->timeout = cmdtimeout;

        command = NULL;

}


/*
 * Add a new argument to the argument list
 */
static void addargument(char *argument) {

        assert(argument);

        if (! command) {
                check_exec(argument);
                NEW(command);
        }

        if (command->length + 1 >= ARGMAX) {
                yyerror("Exceeded maximum number of program arguments");
                FREE(argument);
        } else {
                command->arg[command->length++] = argument;
                command->arg[command->length] = NULL;
        }
}


/*
 * Setup a url request for the current port object
 */
static void prepare_urlrequest(URL_T U) {

        assert(U);

        /* Only the HTTP protocol is supported for URLs currently. See also the lexer if this is to be changed in the future */
        portset.protocol = Protocol_get(Protocol_HTTP);

        if (urlrequest == NULL)
                NEW(urlrequest);
        urlrequest->url = U;
        portset.hostname = Str_dup(U->hostname);
        portset.target.net.port = U->port;
        portset.url_request = urlrequest;
        portset.type = Socket_Tcp;
        portset.parameters.http.request = Str_cat("%s%s%s", U->path, U->query ? "?" : "", U->query ? U->query : "");
        if (IS(U->protocol, "https"))
                sslset.flags = SSL_Enabled;
}


/*
 * Set the url request for a port
 */
static void  seturlrequest(int operator, char *regex) {

        assert(regex);

        if (! urlrequest)
                NEW(urlrequest);
        urlrequest->operator = operator;
        int reg_return;
        NEW(urlrequest->regex);
        reg_return = regcomp(urlrequest->regex, regex, REG_NOSUB|REG_EXTENDED);
        if (reg_return != 0) {
                char errbuf[STRLEN];
                regerror(reg_return, urlrequest->regex, errbuf, STRLEN);
                yyerror2("Regex parsing error: %s", errbuf);
        }
}


/*
 * Add a new data recipient server to the mmonit server list
 */
static void addmmonit(Mmonit_T mmonit) {
        assert(mmonit->url);

        Mmonit_T c;
        NEW(c);
        c->url = mmonit->url;
        c->compress = MmonitCompress_Init;
        _setSSLOptions(&(c->ssl));
        if (IS(c->url->protocol, "https")) {
#ifdef HAVE_OPENSSL
                c->ssl.flags = SSL_Enabled;
#else
                yyerror("SSL check cannot be activated -- SSL disabled");
#endif
        }
        c->timeout = mmonit->timeout;
        c->hostgroups = mmonit->hostgroups;
        c->next = NULL;

        if (Run.mmonits) {
                Mmonit_T C;
                for (C = Run.mmonits; C->next; C = C->next)
                        /* Empty */ ;
                C->next = c;
        } else {
                Run.mmonits = c;
        }
        reset_sslset();
        reset_mmonitset();
}


/*
 * Add a new smtp server to the mail server list
 */
static void addmailserver(MailServer_T mailserver) {

        MailServer_T s;

        assert(mailserver->host);

        NEW(s);
        s->host        = mailserver->host;
        s->port        = mailserver->port;
        s->username    = mailserver->username;
        s->password    = mailserver->password;

        if (sslset.flags && (mailserver->port == 25 || mailserver->port == 587))
                sslset.flags = SSL_StartTLS;
        _setSSLOptions(&(s->ssl));

        s->next = NULL;

        if (Run.mailservers) {
                MailServer_T l;
                for (l = Run.mailservers; l->next; l = l->next)
                        /* empty */;
                l->next = s;
        } else {
                Run.mailservers = s;
        }
        reset_mailserverset();
}


/*
 * Return uid if found on the system. If the parameter user is NULL
 * the uid parameter is used for looking up the user id on the system,
 * otherwise the user parameter is used.
 */
static uid_t get_uid(char *user, uid_t uid) {
        char buf[4096];
        struct passwd pwd, *result = NULL;
        if (user) {
                if (getpwnam_r(user, &pwd, buf, sizeof(buf), &result) != 0 || ! result) {
                        yyerror2("Requested user not found on the system");
                        return(0);
                }
        } else {
                if (getpwuid_r(uid, &pwd, buf, sizeof(buf), &result) != 0 || ! result) {
                        yyerror2("Requested uid not found on the system");
                        return(0);
                }
        }
        return(pwd.pw_uid);
}


/*
 * Return gid if found on the system. If the parameter group is NULL
 * the gid parameter is used for looking up the group id on the system,
 * otherwise the group parameter is used.
 */
static gid_t get_gid(char *group, gid_t gid) {
        struct group *grd;

        if (group) {
                grd = getgrnam(group);

                if (! grd) {
                        yyerror2("Requested group not found on the system");
                        return(0);
                }

        } else {

                if (! (grd = getgrgid(gid))) {
                        yyerror2("Requested gid not found on the system");
                        return(0);
                }

        }

        return(grd->gr_gid);

}


/*
 * Add a new user id to the current command object.
 */
static void addeuid(uid_t uid) {
        if (! getuid()) {
                command->has_uid = true;
                command->uid = uid;
        } else {
                yyerror("UID statement requires root privileges");
        }
}


/*
 * Add a new group id to the current command object.
 */
static void addegid(gid_t gid) {
        if (! getuid()) {
                command->has_gid = true;
                command->gid = gid;
        } else {
                yyerror("GID statement requires root privileges");
        }
}


/*
 * Reset the logfile if changed
 */
static void setlogfile(char *logfile) {
        if (Run.files.log) {
                if (IS(Run.files.log, logfile)) {
                        FREE(logfile);
                        return;
                } else {
                        FREE(Run.files.log);
                }
        }
        Run.files.log = logfile;
}


/*
 * Reset the pidfile if changed
 */
static void setpidfile(char *pidfile) {
        if (Run.files.pid) {
                if (IS(Run.files.pid, pidfile)) {
                        FREE(pidfile);
                        return;
                } else {
                        FREE(Run.files.pid);
                }
        }
        Run.files.pid = pidfile;
}


/*
 * Reset the idfile if changed
 */
static void setidfile(char *idfile) {
        if (Run.files.id) {
                if (IS(Run.files.id, idfile)) {
                        FREE(idfile);
                        return;
                } else {
                        FREE(Run.files.id);
                }
        }
        Run.files.id = idfile;
}


/*
 * Reset the statefile if changed
 */
static void setstatefile(char *statefile) {
        if (Run.files.state) {
                if (IS(Run.files.state, statefile)) {
                        FREE(statefile);
                        return;
                } else {
                        FREE(Run.files.state);
                }
        }
        Run.files.state = statefile;
}


/*
 * Read a apache htpasswd file and add credentials found for username
 */
static void addhtpasswdentry(char *filename, char *username, Digest_Type dtype) {
        char *ht_username = NULL;
        char *ht_passwd = NULL;
        char buf[STRLEN];
        FILE *handle = NULL;
        int credentials_added = 0;
        char realpath[PATH_MAX] = {};

        assert(filename);

        // Check that the htpasswd is a real file and not e.g. a directory
        if (filename[0] != SEPARATOR_CHAR) {
                if (! File_realPath(filename, realpath)) {
                        yyerror2("Error getting path for the htpasswd file '%s' -- %s\n", filename, STRERROR);
                        return;
                }
        }
        if (! File_isFile(filename)) {
                yyerror2("The htpasswd file '%s' is not a file", filename);
                return;
        }

        if (! (handle = fopen(filename, "r"))) {
                if (username)
                        yyerror2("Cannot read htpasswd (%s) for user %s", filename, username);
                else
                        yyerror2("Cannot read htpasswd (%s)", filename);
                return;
        }

        while (! feof(handle)) {
                char *colonindex = NULL;

                if (! fgets(buf, STRLEN, handle))
                        continue;

                Str_rtrim(buf);
                Str_curtail(buf, "#");

                if (NULL == (colonindex = strchr(buf, ':')))
                continue;

                ht_passwd = Str_dup(colonindex+1);
                *colonindex = '\0';

                /* In case we have a file in /etc/passwd or /etc/shadow style we
                 *  want to remove ":.*$" and Crypt and MD5 hashed dont have a colon
                 */

                if ((NULL != (colonindex = strchr(ht_passwd, ':'))) && (dtype != Digest_Cleartext))
                        *colonindex = '\0';

                ht_username = Str_dup(buf);

                if (username == NULL) {
                        if (addcredentials(ht_username, ht_passwd, dtype, false))
                                credentials_added++;
                } else if (Str_cmp(username, ht_username) == 0)  {
                        if (addcredentials(ht_username, ht_passwd, dtype, false))
                                credentials_added++;
                } else {
                        FREE(ht_passwd);
                        FREE(ht_username);
                }
        }

        if (credentials_added == 0) {
                if (username == NULL)
                        yywarning2("htpasswd file (%s) has no usable credentials", filename);
                else
                        yywarning2("htpasswd file (%s) has no usable credentials for user %s", filename, username);
        }
        fclose(handle);
}


#ifdef HAVE_LIBPAM
static void addpamauth(char* groupname, int readonly) {
        Auth_T prev = NULL;

        assert(groupname);

        if (! Run.httpd.credentials)
                NEW(Run.httpd.credentials);

        Auth_T c = Run.httpd.credentials;
        do {
                if (c->groupname != NULL && IS(c->groupname, groupname)) {
                        yywarning2("PAM group %s was added already, entry ignored", groupname);
                        FREE(groupname);
                        return;
                }
                prev = c;
                c = c->next;
        } while (c != NULL);

        NEW(prev->next);
        c = prev->next;

        c->next        = NULL;
        c->uname       = NULL;
        c->passwd      = NULL;
        c->groupname   = groupname;
        c->digesttype  = Digest_Pam;
        c->is_readonly = readonly;

        DEBUG("Adding PAM group '%s'\n", groupname);

        return;
}
#endif


/*
 * Add Basic Authentication credentials
 */
static bool addcredentials(char *uname, char *passwd, Digest_Type dtype, bool readonly) {
        Auth_T c;

        assert(uname);
        assert(passwd);

        if (! Run.httpd.credentials) {
                NEW(Run.httpd.credentials);
                c = Run.httpd.credentials;
        } else {
                if (Util_getUserCredentials(uname) != NULL) {
                        yywarning2("Credentials for user %s were already added, entry ignored", uname);
                        FREE(uname);
                        FREE(passwd);
                        return false;
                }
                c = Run.httpd.credentials;
                while (c->next != NULL)
                        c = c->next;
                NEW(c->next);
                c = c->next;
        }

        c->next        = NULL;
        c->uname       = uname;
        c->passwd      = passwd;
        c->groupname   = NULL;
        c->digesttype  = dtype;
        c->is_readonly = readonly;

        DEBUG("Adding credentials for user '%s'\n", uname);

        return true;

}


/*
 * Set the syslog and the facilities to be used
 */
static void setsyslog(char *facility) {

        if (! Run.files.log || ihp.logfile) {
                ihp.logfile = true;
                setlogfile(Str_dup("syslog"));
                Run.flags |= Run_UseSyslog;
                Run.flags |= Run_Log;
        }

        if (facility) {
                if (IS(facility,"log_local0"))
                        Run.facility = LOG_LOCAL0;
                else if (IS(facility, "log_local1"))
                        Run.facility = LOG_LOCAL1;
                else if (IS(facility, "log_local2"))
                        Run.facility = LOG_LOCAL2;
                else if (IS(facility, "log_local3"))
                        Run.facility = LOG_LOCAL3;
                else if (IS(facility, "log_local4"))
                        Run.facility = LOG_LOCAL4;
                else if (IS(facility, "log_local5"))
                        Run.facility = LOG_LOCAL5;
                else if (IS(facility, "log_local6"))
                        Run.facility = LOG_LOCAL6;
                else if (IS(facility, "log_local7"))
                        Run.facility = LOG_LOCAL7;
                else if (IS(facility, "log_daemon"))
                        Run.facility = LOG_DAEMON;
                else if (IS(facility, "log_user"))
                        Run.facility = LOG_USER;
                else
                        yyerror2("Invalid syslog facility");
        } else {
                Run.facility = LOG_USER;
        }

}


/*
 * Reset the current sslset for reuse
 */
static void reset_sslset(void) {
        memset(&sslset, 0, sizeof(struct SslOptions_T));
        sslset.version = sslset.verify = sslset.allowSelfSigned = -1;
}


/*
 * Reset the current mailset for reuse
 */
static void reset_mailset(void) {
        memset(&mailset, 0, sizeof(struct Mail_T));
}


/*
 * Reset the mailserver set to default values
 */
static void reset_mailserverset(void) {
        memset(&mailserverset, 0, sizeof(struct MailServer_T));
        mailserverset.port = PORT_SMTP;
}


/*
 * Reset the mmonit set to default values
 */
static void reset_mmonitset(void) {
        memset(&mmonitset, 0, sizeof(struct Mmonit_T));
        mmonitset.timeout = Run.limits.networkTimeout;
}


/*
 * Reset the Port set to default values
 */
static void reset_portset(void) {
        memset(&portset, 0, sizeof(struct Port_T));
        portset.check_invers = false;
        portset.socket = -1;
        portset.type = Socket_Tcp;
        portset.family = Socket_Ip;
        portset.timeout = Run.limits.networkTimeout;
        portset.retry = 1;
        portset.protocol = Protocol_get(Protocol_DEFAULT);
        urlrequest = NULL;
}


/*
 * Reset the Proc set to default values
 */
static void reset_resourceset(void) {
        resourceset.resource_id = 0;
        resourceset.limit = 0;
        resourceset.action = NULL;
        resourceset.operator = Operator_Equal;
}


/*
 * Reset the Timestamp set to default values
 */
static void reset_timestampset(void) {
        timestampset.type = Timestamp_Default;
        timestampset.operator = Operator_Equal;
        timestampset.time = 0;
        timestampset.test_changes = false;
        timestampset.initialized = false;
        timestampset.action = NULL;
}


/*
 * Reset the ActionRate set to default values
 */
static void reset_actionrateset(void) {
        actionrateset.count = 0;
        actionrateset.cycle = 0;
        actionrateset.action = NULL;
}


/*
 * Reset the Size set to default values
 */
static void reset_sizeset(void) {
        sizeset.operator = Operator_Equal;
        sizeset.size = 0;
        sizeset.test_changes = false;
        sizeset.action = NULL;
}


/*
 * Reset the NLink set to default values
 */
static void reset_nlinkset(void) {
        nlinkset.operator = Operator_Equal;
        nlinkset.nlink = 0;
        nlinkset.test_changes = false;
        nlinkset.action = NULL;
}


/*
 * Reset the Uptime set to default values
 */
static void reset_uptimeset(void) {
        uptimeset.operator = Operator_Equal;
        uptimeset.uptime = 0;
        uptimeset.action = NULL;
}


static void reset_responsetimeset(void) {
        responsetimeset.operator = Operator_Less;
        responsetimeset.current = 0.;
        responsetimeset.limit = -1.;
}


static void reset_linkstatusset(void) {
        linkstatusset.check_invers = false;
        linkstatusset.action = NULL;
}


static void reset_linkspeedset(void) {
        linkspeedset.action = NULL;
}


static void reset_linksaturationset(void) {
        linksaturationset.limit = 0.;
        linksaturationset.operator = Operator_Equal;
        linksaturationset.action = NULL;
}


/*
 * Reset the Bandwidth set to default values
 */
static void reset_bandwidthset(void) {
        bandwidthset.operator = Operator_Equal;
        bandwidthset.limit = 0ULL;
        bandwidthset.action = NULL;
}


/*
 * Reset the Pid set to default values
 */
static void reset_pidset(void) {
        pidset.action = NULL;
}


/*
 * Reset the PPid set to default values
 */
static void reset_ppidset(void) {
        ppidset.action = NULL;
}


/*
 * Reset the Fsflag set to default values
 */
static void reset_fsflagset(void) {
        fsflagset.action = NULL;
}


/*
 * Reset the Nonexist set to default values
 */
static void reset_nonexistset(void) {
        nonexistset.action = NULL;
}


static void reset_existset(void) {
        existset.action = NULL;
}


/*
 * Reset the Checksum set to default values
 */
static void reset_checksumset(void) {
        checksumset.type         = Hash_Unknown;
        checksumset.test_changes = false;
        checksumset.action       = NULL;
        *checksumset.hash        = 0;
}


/*
 * Reset the Perm set to default values
 */
static void reset_permset(void) {
        permset.test_changes = false;
        permset.perm = 0;
        permset.action = NULL;
}


/*
 * Reset the Status set to default values
 */
static void reset_statusset(void) {
        statusset.initialized = false;
        statusset.return_value = 0;
        statusset.operator = Operator_Equal;
        statusset.action = NULL;
}


/*
 * Reset the Uid set to default values
 */
static void reset_uidset(void) {
        uidset.uid = 0;
        uidset.action = NULL;
}


/*
 * Reset the Gid set to default values
 */
static void reset_gidset(void) {
        gidset.gid = 0;
        gidset.action = NULL;
}


/*
 * Reset the Filesystem set to default values
 */
static void reset_filesystemset(void) {
        filesystemset.resource = 0;
        filesystemset.operator = Operator_Equal;
        filesystemset.limit_absolute = -1;
        filesystemset.limit_percent = -1.;
        filesystemset.action = NULL;
}


/*
 * Reset the ICMP set to default values
 */
static void reset_icmpset(void) {
        memset(&icmpset, 0, sizeof(struct Icmp_T));
        icmpset.type = ICMP_ECHO;
        icmpset.size = ICMP_SIZE;
        icmpset.count = ICMP_ATTEMPT_COUNT;
        icmpset.timeout = Run.limits.networkTimeout;
}


/*
 * Reset the Rate set to default values
 */
static void reset_rateset(struct rate_t *r) {
        r->count = 1;
        r->cycles = 1;
}


/* ---------------------------------------------------------------- Checkers */


/*
 * Check for unique service name
 */
static void check_name(char *name) {
        assert(name);

        if (Util_existService(name) || (current && IS(name, current->name)))
                yyerror2("Service name conflict, %s already defined", name);
        if (name && *name == '/')
                yyerror2("Service name '%s' must not start with '/' -- ", name);
}


/*
 * Permission statement semantic check
 */
static int check_perm(int perm) {
        int result;
        char *status;
        char buf[STRLEN];

        snprintf(buf, STRLEN, "%d", perm);

        result = (int)strtol(buf, &status, 8);

        if (*status != '\0' || result < 0 || result > 07777)
                yyerror2("Permission statements must have an octal value between 0 and 7777");

        return result;
}


/*
 * Check the dependency graph for errors
 * by doing a topological sort, thereby finding any cycles.
 * Assures that graph is a Directed Acyclic Graph (DAG).
 */
static void check_depend(void) {
        Service_T depends_on = NULL;
        Service_T* dlt = &depend_list; /* the current tail of it                                 */
        bool done;                /* no unvisited nodes left?                               */
        bool found_some;          /* last iteration found anything new ?                    */
        depend_list = NULL;            /* depend_list will be the topological sorted Service_List */

        do {
                done = true;
                found_some = false;
                for (Service_T s = Service_List; s; s = s->next) {
                        Dependant_T d;
                        if (s->visited)
                                continue;
                        done = false; // still unvisited nodes
                        depends_on = NULL;
                        for (d = s->dependantlist; d; d = d->next) {
                                Service_T dp = Util_getService(d->dependant);
                                if (! dp) {
                                        Log_error("Depending service '%s' is not defined in the control file\n", d->dependant);
                                        exit(1);
                                }
                                if (! dp->visited) {
                                        depends_on = dp;
                                }
                        }

                        if (! depends_on) {
                                s->visited = true;
                                found_some = true;
                                *dlt = s;
                                dlt = &s->next_depend;
                        }
                }
        } while (found_some && ! done);

        if (! done) {
                assert(depends_on);
                Log_error("Found a depend loop in the control file involving the service '%s'\n", depends_on->name);
                exit(1);
        }

        assert(depend_list);
        Service_List = depend_list;

        for (Service_T s = depend_list; s; s = s->next_depend)
                s->next = s->next_depend;
}


// Check and warn if the executable does not exist
static void check_exec(char *exec) {
        if (! File_exist(exec))
                yywarning2("Program does not exist:");
        else if (! File_isExecutable(exec))
                yywarning2("Program is not executable:");
}


/* Return a valid max forward value for SIP header */
static int verifyMaxForward(int mf) {
        if (mf == 0) {
                return INT_MAX; // Differentiate uninitialized (0) and explicit zero
        } else if (mf > 0 && mf <= 255) {
                return mf;
        }
        yywarning2("SIP max forward is outside the range [0..255]. Setting max forward to 70");
        return 70;
}


/* -------------------------------------------------------------------- Misc */


/*
 * Cleans up a hash string, tolower and remove byte separators
 */
static int cleanup_hash_string(char *hashstring) {
        int i = 0, j = 0;

        assert(hashstring);

        while (hashstring[i]) {
                if (isxdigit((int)hashstring[i])) {
                        hashstring[j] = tolower((int)hashstring[i]);
                        j++;
                }
                i++;
        }
        hashstring[j] = 0;
        return j;
}


/* Return deep copy of the command */
static command_t copycommand(command_t source) {
        int i;
        command_t copy = NULL;

        NEW(copy);
        copy->length = source->length;
        copy->has_uid = source->has_uid;
        copy->uid = source->uid;
        copy->has_gid = source->has_gid;
        copy->gid = source->gid;
        copy->timeout = source->timeout;
        for (i = 0; i < copy->length; i++)
                copy->arg[i] = Str_dup(source->arg[i]);
        copy->arg[copy->length] = NULL;

        return copy;
}


static void _setPEM(char **store, char *path, const char *description, bool isFile) {
        if (*store) {
                yyerror2("Duplicate %s", description);
                FREE(path);
        } else if (! File_exist(path)) {
                yyerror2("%s doesn't exist", description);
                FREE(path);
        } else if (! (isFile ? File_isFile(path) : File_isDirectory(path))) {
                yyerror2("%s is not a %s", description, isFile ? "file" : "directory");
                FREE(path);
        } else if (! File_isReadable(path)) {
                yyerror2("Cannot read %s", description);
                FREE(path);
        } else {
                sslset.flags = SSL_Enabled;
                *store = path;
        }
}


static void _setSSLOptions(SslOptions_T options) {
        options->allowSelfSigned = sslset.allowSelfSigned;
        options->CACertificateFile = sslset.CACertificateFile;
        options->CACertificatePath = sslset.CACertificatePath;
        options->checksum = sslset.checksum;
        options->checksumType = sslset.checksumType;
        options->ciphers = sslset.ciphers;
        options->clientpemfile = sslset.clientpemfile;
        options->flags = sslset.flags;
        options->pemfile = sslset.pemfile;
        options->pemchain = sslset.pemchain;
        options->pemkey = sslset.pemkey;
        options->verify = sslset.verify;
        options->version = sslset.version;
        reset_sslset();
}


#ifdef HAVE_OPENSSL
static void _setSSLVersion(short version) {
        sslset.flags = SSL_Enabled;
        if (sslset.version == -1)
                sslset.version = version;
        else
                sslset.version |= version;
}
#endif


static void _unsetSSLVersion(short version) {
        if (sslset.version != -1)
                sslset.version &= ~version;
}


static void addsecurityattribute(char *value, Action_Type failed, Action_Type succeeded) {
        SecurityAttribute_T attr;
        NEW(attr);
        addeventaction(&(attr->action), failed, succeeded);
        attr->attribute = value;
        attr->next = current->secattrlist;
        current->secattrlist = attr;
}


static void addfiledescriptors(Operator_Type operator, bool total, long long value_absolute, float value_percent, Action_Type failed, Action_Type succeeded) {
        Filedescriptors_T fds;
        NEW(fds);
        addeventaction(&(fds->action), failed, succeeded);
        fds->total = total;
        fds->limit_absolute = value_absolute;
        fds->limit_percent = value_percent;
        fds->operator = operator;
        fds->next = current->filedescriptorslist;
        current->filedescriptorslist = fds;
}

static void _sanityCheckEveryStatement(Service_T s) {
        if (s->every.type != Every_Initializing) {
                yywarning2("The 'every' statement can be specified only once, the last value will be used\n");
                switch (s->every.type) {
                        case Every_Cron:
                        case Every_NotInCron:
                                FREE(s->every.spec.cron);
                                break;
                        default:
                                break;
                }
        }
}

// Turn back on unreachable code warnings
#if defined(__clang__) || defined(__GNUC__)
#pragma GCC diagnostic pop
#endif
