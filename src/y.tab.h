/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SRC_Y_TAB_H_INCLUDED
# define YY_YY_SRC_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IF = 258,                      /* IF  */
    ELSE = 259,                    /* ELSE  */
    THEN = 260,                    /* THEN  */
    FAILED = 261,                  /* FAILED  */
    SET = 262,                     /* SET  */
    LOGFILE = 263,                 /* LOGFILE  */
    FACILITY = 264,                /* FACILITY  */
    DAEMON = 265,                  /* DAEMON  */
    SYSLOG = 266,                  /* SYSLOG  */
    MAILSERVER = 267,              /* MAILSERVER  */
    HTTPD = 268,                   /* HTTPD  */
    ALLOW = 269,                   /* ALLOW  */
    REJECTOPT = 270,               /* REJECTOPT  */
    ADDRESS = 271,                 /* ADDRESS  */
    INIT = 272,                    /* INIT  */
    TERMINAL = 273,                /* TERMINAL  */
    BATCH = 274,                   /* BATCH  */
    READONLY = 275,                /* READONLY  */
    CLEARTEXT = 276,               /* CLEARTEXT  */
    MD5HASH = 277,                 /* MD5HASH  */
    SHA1HASH = 278,                /* SHA1HASH  */
    CRYPT = 279,                   /* CRYPT  */
    DELAY = 280,                   /* DELAY  */
    PEMFILE = 281,                 /* PEMFILE  */
    PEMKEY = 282,                  /* PEMKEY  */
    PEMCHAIN = 283,                /* PEMCHAIN  */
    ENABLE = 284,                  /* ENABLE  */
    DISABLE = 285,                 /* DISABLE  */
    SSLTOKEN = 286,                /* SSLTOKEN  */
    CIPHER = 287,                  /* CIPHER  */
    CLIENTPEMFILE = 288,           /* CLIENTPEMFILE  */
    ALLOWSELFCERTIFICATION = 289,  /* ALLOWSELFCERTIFICATION  */
    SELFSIGNED = 290,              /* SELFSIGNED  */
    VERIFY = 291,                  /* VERIFY  */
    CERTIFICATE = 292,             /* CERTIFICATE  */
    CACERTIFICATEFILE = 293,       /* CACERTIFICATEFILE  */
    CACERTIFICATEPATH = 294,       /* CACERTIFICATEPATH  */
    VALID = 295,                   /* VALID  */
    INTERFACE = 296,               /* INTERFACE  */
    LINK = 297,                    /* LINK  */
    PACKET = 298,                  /* PACKET  */
    BYTEIN = 299,                  /* BYTEIN  */
    BYTEOUT = 300,                 /* BYTEOUT  */
    PACKETIN = 301,                /* PACKETIN  */
    PACKETOUT = 302,               /* PACKETOUT  */
    SPEED = 303,                   /* SPEED  */
    SATURATION = 304,              /* SATURATION  */
    UPLOAD = 305,                  /* UPLOAD  */
    DOWNLOAD = 306,                /* DOWNLOAD  */
    TOTAL = 307,                   /* TOTAL  */
    UP = 308,                      /* UP  */
    DOWN = 309,                    /* DOWN  */
    IDFILE = 310,                  /* IDFILE  */
    STATEFILE = 311,               /* STATEFILE  */
    SEND = 312,                    /* SEND  */
    EXPECT = 313,                  /* EXPECT  */
    CYCLE = 314,                   /* CYCLE  */
    COUNT = 315,                   /* COUNT  */
    REMINDER = 316,                /* REMINDER  */
    REPEAT = 317,                  /* REPEAT  */
    LIMITS = 318,                  /* LIMITS  */
    SENDEXPECTBUFFER = 319,        /* SENDEXPECTBUFFER  */
    EXPECTBUFFER = 320,            /* EXPECTBUFFER  */
    FILECONTENTBUFFER = 321,       /* FILECONTENTBUFFER  */
    HTTPCONTENTBUFFER = 322,       /* HTTPCONTENTBUFFER  */
    PROGRAMOUTPUT = 323,           /* PROGRAMOUTPUT  */
    NETWORKTIMEOUT = 324,          /* NETWORKTIMEOUT  */
    PROGRAMTIMEOUT = 325,          /* PROGRAMTIMEOUT  */
    STARTTIMEOUT = 326,            /* STARTTIMEOUT  */
    STOPTIMEOUT = 327,             /* STOPTIMEOUT  */
    RESTARTTIMEOUT = 328,          /* RESTARTTIMEOUT  */
    EXECTIMEOUT = 329,             /* EXECTIMEOUT  */
    PIDFILE = 330,                 /* PIDFILE  */
    START = 331,                   /* START  */
    STOP = 332,                    /* STOP  */
    PATHTOK = 333,                 /* PATHTOK  */
    RSAKEY = 334,                  /* RSAKEY  */
    HOST = 335,                    /* HOST  */
    HOSTNAME = 336,                /* HOSTNAME  */
    PORT = 337,                    /* PORT  */
    IPV4 = 338,                    /* IPV4  */
    IPV6 = 339,                    /* IPV6  */
    TYPE = 340,                    /* TYPE  */
    UDP = 341,                     /* UDP  */
    TCP = 342,                     /* TCP  */
    TCPSSL = 343,                  /* TCPSSL  */
    PROTOCOL = 344,                /* PROTOCOL  */
    CONNECTION = 345,              /* CONNECTION  */
    ALERT = 346,                   /* ALERT  */
    NOALERT = 347,                 /* NOALERT  */
    MAILFORMAT = 348,              /* MAILFORMAT  */
    UNIXSOCKET = 349,              /* UNIXSOCKET  */
    SIGNATURE = 350,               /* SIGNATURE  */
    TIMEOUT = 351,                 /* TIMEOUT  */
    RETRY = 352,                   /* RETRY  */
    RESTART = 353,                 /* RESTART  */
    CHECKSUM = 354,                /* CHECKSUM  */
    EVERY = 355,                   /* EVERY  */
    NOTEVERY = 356,                /* NOTEVERY  */
    DEFAULT = 357,                 /* DEFAULT  */
    HTTP = 358,                    /* HTTP  */
    HTTPS = 359,                   /* HTTPS  */
    APACHESTATUS = 360,            /* APACHESTATUS  */
    FTP = 361,                     /* FTP  */
    SMTP = 362,                    /* SMTP  */
    SMTPS = 363,                   /* SMTPS  */
    POP = 364,                     /* POP  */
    POPS = 365,                    /* POPS  */
    IMAP = 366,                    /* IMAP  */
    IMAPS = 367,                   /* IMAPS  */
    CLAMAV = 368,                  /* CLAMAV  */
    NNTP = 369,                    /* NNTP  */
    NTP3 = 370,                    /* NTP3  */
    MYSQL = 371,                   /* MYSQL  */
    MYSQLS = 372,                  /* MYSQLS  */
    DNS = 373,                     /* DNS  */
    WEBSOCKET = 374,               /* WEBSOCKET  */
    MQTT = 375,                    /* MQTT  */
    SSH = 376,                     /* SSH  */
    DWP = 377,                     /* DWP  */
    LDAP2 = 378,                   /* LDAP2  */
    LDAP3 = 379,                   /* LDAP3  */
    RDATE = 380,                   /* RDATE  */
    RSYNC = 381,                   /* RSYNC  */
    TNS = 382,                     /* TNS  */
    PGSQL = 383,                   /* PGSQL  */
    POSTFIXPOLICY = 384,           /* POSTFIXPOLICY  */
    SIP = 385,                     /* SIP  */
    LMTP = 386,                    /* LMTP  */
    GPS = 387,                     /* GPS  */
    RADIUS = 388,                  /* RADIUS  */
    MEMCACHE = 389,                /* MEMCACHE  */
    REDIS = 390,                   /* REDIS  */
    MONGODB = 391,                 /* MONGODB  */
    SIEVE = 392,                   /* SIEVE  */
    SPAMASSASSIN = 393,            /* SPAMASSASSIN  */
    FAIL2BAN = 394,                /* FAIL2BAN  */
    STRING = 395,                  /* STRING  */
    PATH = 396,                    /* PATH  */
    MAILADDR = 397,                /* MAILADDR  */
    MAILFROM = 398,                /* MAILFROM  */
    MAILREPLYTO = 399,             /* MAILREPLYTO  */
    MAILSUBJECT = 400,             /* MAILSUBJECT  */
    MAILBODY = 401,                /* MAILBODY  */
    SERVICENAME = 402,             /* SERVICENAME  */
    STRINGNAME = 403,              /* STRINGNAME  */
    HOSTGROUPNAME = 404,           /* HOSTGROUPNAME  */
    NUMBER = 405,                  /* NUMBER  */
    PERCENT = 406,                 /* PERCENT  */
    LOGLIMIT = 407,                /* LOGLIMIT  */
    CLOSELIMIT = 408,              /* CLOSELIMIT  */
    DNSLIMIT = 409,                /* DNSLIMIT  */
    KEEPALIVELIMIT = 410,          /* KEEPALIVELIMIT  */
    REPLYLIMIT = 411,              /* REPLYLIMIT  */
    REQUESTLIMIT = 412,            /* REQUESTLIMIT  */
    STARTLIMIT = 413,              /* STARTLIMIT  */
    WAITLIMIT = 414,               /* WAITLIMIT  */
    GRACEFULLIMIT = 415,           /* GRACEFULLIMIT  */
    CLEANUPLIMIT = 416,            /* CLEANUPLIMIT  */
    REAL = 417,                    /* REAL  */
    CHECKPROC = 418,               /* CHECKPROC  */
    CHECKFILESYS = 419,            /* CHECKFILESYS  */
    CHECKFILE = 420,               /* CHECKFILE  */
    CHECKDIR = 421,                /* CHECKDIR  */
    CHECKHOST = 422,               /* CHECKHOST  */
    CHECKSYSTEM = 423,             /* CHECKSYSTEM  */
    CHECKFIFO = 424,               /* CHECKFIFO  */
    CHECKPROGRAM = 425,            /* CHECKPROGRAM  */
    CHECKNET = 426,                /* CHECKNET  */
    THREADS = 427,                 /* THREADS  */
    CHILDREN = 428,                /* CHILDREN  */
    METHOD = 429,                  /* METHOD  */
    GET = 430,                     /* GET  */
    HEAD = 431,                    /* HEAD  */
    STATUS = 432,                  /* STATUS  */
    ORIGIN = 433,                  /* ORIGIN  */
    VERSIONOPT = 434,              /* VERSIONOPT  */
    READ = 435,                    /* READ  */
    WRITE = 436,                   /* WRITE  */
    OPERATION = 437,               /* OPERATION  */
    SERVICETIME = 438,             /* SERVICETIME  */
    DISK = 439,                    /* DISK  */
    RESOURCE = 440,                /* RESOURCE  */
    MEMORY = 441,                  /* MEMORY  */
    TOTALMEMORY = 442,             /* TOTALMEMORY  */
    LOADAVG1 = 443,                /* LOADAVG1  */
    LOADAVG5 = 444,                /* LOADAVG5  */
    LOADAVG15 = 445,               /* LOADAVG15  */
    SWAP = 446,                    /* SWAP  */
    MODE = 447,                    /* MODE  */
    ACTIVE = 448,                  /* ACTIVE  */
    PASSIVE = 449,                 /* PASSIVE  */
    MANUAL = 450,                  /* MANUAL  */
    ONREBOOT = 451,                /* ONREBOOT  */
    NOSTART = 452,                 /* NOSTART  */
    LASTSTATE = 453,               /* LASTSTATE  */
    CORE = 454,                    /* CORE  */
    CPU = 455,                     /* CPU  */
    TOTALCPU = 456,                /* TOTALCPU  */
    CPUUSER = 457,                 /* CPUUSER  */
    CPUSYSTEM = 458,               /* CPUSYSTEM  */
    CPUWAIT = 459,                 /* CPUWAIT  */
    CPUNICE = 460,                 /* CPUNICE  */
    CPUHARDIRQ = 461,              /* CPUHARDIRQ  */
    CPUSOFTIRQ = 462,              /* CPUSOFTIRQ  */
    CPUSTEAL = 463,                /* CPUSTEAL  */
    CPUGUEST = 464,                /* CPUGUEST  */
    CPUGUESTNICE = 465,            /* CPUGUESTNICE  */
    GROUP = 466,                   /* GROUP  */
    REQUEST = 467,                 /* REQUEST  */
    DEPENDS = 468,                 /* DEPENDS  */
    BASEDIR = 469,                 /* BASEDIR  */
    SLOT = 470,                    /* SLOT  */
    EVENTQUEUE = 471,              /* EVENTQUEUE  */
    SECRET = 472,                  /* SECRET  */
    HOSTHEADER = 473,              /* HOSTHEADER  */
    UID = 474,                     /* UID  */
    EUID = 475,                    /* EUID  */
    GID = 476,                     /* GID  */
    MMONIT = 477,                  /* MMONIT  */
    INSTANCE = 478,                /* INSTANCE  */
    USERNAME = 479,                /* USERNAME  */
    PASSWORD = 480,                /* PASSWORD  */
    DATABASE = 481,                /* DATABASE  */
    TIME = 482,                    /* TIME  */
    ATIME = 483,                   /* ATIME  */
    CTIME = 484,                   /* CTIME  */
    MTIME = 485,                   /* MTIME  */
    CHANGED = 486,                 /* CHANGED  */
    MILLISECOND = 487,             /* MILLISECOND  */
    SECOND = 488,                  /* SECOND  */
    MINUTE = 489,                  /* MINUTE  */
    HOUR = 490,                    /* HOUR  */
    DAY = 491,                     /* DAY  */
    MONTH = 492,                   /* MONTH  */
    SSLV2 = 493,                   /* SSLV2  */
    SSLV3 = 494,                   /* SSLV3  */
    TLSV1 = 495,                   /* TLSV1  */
    TLSV11 = 496,                  /* TLSV11  */
    TLSV12 = 497,                  /* TLSV12  */
    TLSV13 = 498,                  /* TLSV13  */
    CERTMD5 = 499,                 /* CERTMD5  */
    AUTO = 500,                    /* AUTO  */
    NOSSLV2 = 501,                 /* NOSSLV2  */
    NOSSLV3 = 502,                 /* NOSSLV3  */
    NOTLSV1 = 503,                 /* NOTLSV1  */
    NOTLSV11 = 504,                /* NOTLSV11  */
    NOTLSV12 = 505,                /* NOTLSV12  */
    NOTLSV13 = 506,                /* NOTLSV13  */
    BYTE = 507,                    /* BYTE  */
    KILOBYTE = 508,                /* KILOBYTE  */
    MEGABYTE = 509,                /* MEGABYTE  */
    GIGABYTE = 510,                /* GIGABYTE  */
    INODE = 511,                   /* INODE  */
    SPACE = 512,                   /* SPACE  */
    TFREE = 513,                   /* TFREE  */
    PERMISSION = 514,              /* PERMISSION  */
    SIZE = 515,                    /* SIZE  */
    MATCH = 516,                   /* MATCH  */
    NOT = 517,                     /* NOT  */
    IGNORE = 518,                  /* IGNORE  */
    ACTION = 519,                  /* ACTION  */
    UPTIME = 520,                  /* UPTIME  */
    RESPONSETIME = 521,            /* RESPONSETIME  */
    EXEC = 522,                    /* EXEC  */
    UNMONITOR = 523,               /* UNMONITOR  */
    PING = 524,                    /* PING  */
    PING4 = 525,                   /* PING4  */
    PING6 = 526,                   /* PING6  */
    ICMP = 527,                    /* ICMP  */
    ICMPECHO = 528,                /* ICMPECHO  */
    NONEXIST = 529,                /* NONEXIST  */
    EXIST = 530,                   /* EXIST  */
    INVALID = 531,                 /* INVALID  */
    DATA = 532,                    /* DATA  */
    RECOVERED = 533,               /* RECOVERED  */
    PASSED = 534,                  /* PASSED  */
    SUCCEEDED = 535,               /* SUCCEEDED  */
    URL = 536,                     /* URL  */
    CONTENT = 537,                 /* CONTENT  */
    PID = 538,                     /* PID  */
    PPID = 539,                    /* PPID  */
    FSFLAG = 540,                  /* FSFLAG  */
    REGISTER = 541,                /* REGISTER  */
    CREDENTIALS = 542,             /* CREDENTIALS  */
    URLOBJECT = 543,               /* URLOBJECT  */
    ADDRESSOBJECT = 544,           /* ADDRESSOBJECT  */
    TARGET = 545,                  /* TARGET  */
    TIMESPEC = 546,                /* TIMESPEC  */
    HTTPHEADER = 547,              /* HTTPHEADER  */
    MAXFORWARD = 548,              /* MAXFORWARD  */
    FIPS = 549,                    /* FIPS  */
    SECURITY = 550,                /* SECURITY  */
    ATTRIBUTE = 551,               /* ATTRIBUTE  */
    FILEDESCRIPTORS = 552,         /* FILEDESCRIPTORS  */
    HARDLINK = 553,                /* HARDLINK  */
    GREATER = 554,                 /* GREATER  */
    GREATEROREQUAL = 555,          /* GREATEROREQUAL  */
    LESS = 556,                    /* LESS  */
    LESSOREQUAL = 557,             /* LESSOREQUAL  */
    EQUAL = 558,                   /* EQUAL  */
    NOTEQUAL = 559                 /* NOTEQUAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IF 258
#define ELSE 259
#define THEN 260
#define FAILED 261
#define SET 262
#define LOGFILE 263
#define FACILITY 264
#define DAEMON 265
#define SYSLOG 266
#define MAILSERVER 267
#define HTTPD 268
#define ALLOW 269
#define REJECTOPT 270
#define ADDRESS 271
#define INIT 272
#define TERMINAL 273
#define BATCH 274
#define READONLY 275
#define CLEARTEXT 276
#define MD5HASH 277
#define SHA1HASH 278
#define CRYPT 279
#define DELAY 280
#define PEMFILE 281
#define PEMKEY 282
#define PEMCHAIN 283
#define ENABLE 284
#define DISABLE 285
#define SSLTOKEN 286
#define CIPHER 287
#define CLIENTPEMFILE 288
#define ALLOWSELFCERTIFICATION 289
#define SELFSIGNED 290
#define VERIFY 291
#define CERTIFICATE 292
#define CACERTIFICATEFILE 293
#define CACERTIFICATEPATH 294
#define VALID 295
#define INTERFACE 296
#define LINK 297
#define PACKET 298
#define BYTEIN 299
#define BYTEOUT 300
#define PACKETIN 301
#define PACKETOUT 302
#define SPEED 303
#define SATURATION 304
#define UPLOAD 305
#define DOWNLOAD 306
#define TOTAL 307
#define UP 308
#define DOWN 309
#define IDFILE 310
#define STATEFILE 311
#define SEND 312
#define EXPECT 313
#define CYCLE 314
#define COUNT 315
#define REMINDER 316
#define REPEAT 317
#define LIMITS 318
#define SENDEXPECTBUFFER 319
#define EXPECTBUFFER 320
#define FILECONTENTBUFFER 321
#define HTTPCONTENTBUFFER 322
#define PROGRAMOUTPUT 323
#define NETWORKTIMEOUT 324
#define PROGRAMTIMEOUT 325
#define STARTTIMEOUT 326
#define STOPTIMEOUT 327
#define RESTARTTIMEOUT 328
#define EXECTIMEOUT 329
#define PIDFILE 330
#define START 331
#define STOP 332
#define PATHTOK 333
#define RSAKEY 334
#define HOST 335
#define HOSTNAME 336
#define PORT 337
#define IPV4 338
#define IPV6 339
#define TYPE 340
#define UDP 341
#define TCP 342
#define TCPSSL 343
#define PROTOCOL 344
#define CONNECTION 345
#define ALERT 346
#define NOALERT 347
#define MAILFORMAT 348
#define UNIXSOCKET 349
#define SIGNATURE 350
#define TIMEOUT 351
#define RETRY 352
#define RESTART 353
#define CHECKSUM 354
#define EVERY 355
#define NOTEVERY 356
#define DEFAULT 357
#define HTTP 358
#define HTTPS 359
#define APACHESTATUS 360
#define FTP 361
#define SMTP 362
#define SMTPS 363
#define POP 364
#define POPS 365
#define IMAP 366
#define IMAPS 367
#define CLAMAV 368
#define NNTP 369
#define NTP3 370
#define MYSQL 371
#define MYSQLS 372
#define DNS 373
#define WEBSOCKET 374
#define MQTT 375
#define SSH 376
#define DWP 377
#define LDAP2 378
#define LDAP3 379
#define RDATE 380
#define RSYNC 381
#define TNS 382
#define PGSQL 383
#define POSTFIXPOLICY 384
#define SIP 385
#define LMTP 386
#define GPS 387
#define RADIUS 388
#define MEMCACHE 389
#define REDIS 390
#define MONGODB 391
#define SIEVE 392
#define SPAMASSASSIN 393
#define FAIL2BAN 394
#define STRING 395
#define PATH 396
#define MAILADDR 397
#define MAILFROM 398
#define MAILREPLYTO 399
#define MAILSUBJECT 400
#define MAILBODY 401
#define SERVICENAME 402
#define STRINGNAME 403
#define HOSTGROUPNAME 404
#define NUMBER 405
#define PERCENT 406
#define LOGLIMIT 407
#define CLOSELIMIT 408
#define DNSLIMIT 409
#define KEEPALIVELIMIT 410
#define REPLYLIMIT 411
#define REQUESTLIMIT 412
#define STARTLIMIT 413
#define WAITLIMIT 414
#define GRACEFULLIMIT 415
#define CLEANUPLIMIT 416
#define REAL 417
#define CHECKPROC 418
#define CHECKFILESYS 419
#define CHECKFILE 420
#define CHECKDIR 421
#define CHECKHOST 422
#define CHECKSYSTEM 423
#define CHECKFIFO 424
#define CHECKPROGRAM 425
#define CHECKNET 426
#define THREADS 427
#define CHILDREN 428
#define METHOD 429
#define GET 430
#define HEAD 431
#define STATUS 432
#define ORIGIN 433
#define VERSIONOPT 434
#define READ 435
#define WRITE 436
#define OPERATION 437
#define SERVICETIME 438
#define DISK 439
#define RESOURCE 440
#define MEMORY 441
#define TOTALMEMORY 442
#define LOADAVG1 443
#define LOADAVG5 444
#define LOADAVG15 445
#define SWAP 446
#define MODE 447
#define ACTIVE 448
#define PASSIVE 449
#define MANUAL 450
#define ONREBOOT 451
#define NOSTART 452
#define LASTSTATE 453
#define CORE 454
#define CPU 455
#define TOTALCPU 456
#define CPUUSER 457
#define CPUSYSTEM 458
#define CPUWAIT 459
#define CPUNICE 460
#define CPUHARDIRQ 461
#define CPUSOFTIRQ 462
#define CPUSTEAL 463
#define CPUGUEST 464
#define CPUGUESTNICE 465
#define GROUP 466
#define REQUEST 467
#define DEPENDS 468
#define BASEDIR 469
#define SLOT 470
#define EVENTQUEUE 471
#define SECRET 472
#define HOSTHEADER 473
#define UID 474
#define EUID 475
#define GID 476
#define MMONIT 477
#define INSTANCE 478
#define USERNAME 479
#define PASSWORD 480
#define DATABASE 481
#define TIME 482
#define ATIME 483
#define CTIME 484
#define MTIME 485
#define CHANGED 486
#define MILLISECOND 487
#define SECOND 488
#define MINUTE 489
#define HOUR 490
#define DAY 491
#define MONTH 492
#define SSLV2 493
#define SSLV3 494
#define TLSV1 495
#define TLSV11 496
#define TLSV12 497
#define TLSV13 498
#define CERTMD5 499
#define AUTO 500
#define NOSSLV2 501
#define NOSSLV3 502
#define NOTLSV1 503
#define NOTLSV11 504
#define NOTLSV12 505
#define NOTLSV13 506
#define BYTE 507
#define KILOBYTE 508
#define MEGABYTE 509
#define GIGABYTE 510
#define INODE 511
#define SPACE 512
#define TFREE 513
#define PERMISSION 514
#define SIZE 515
#define MATCH 516
#define NOT 517
#define IGNORE 518
#define ACTION 519
#define UPTIME 520
#define RESPONSETIME 521
#define EXEC 522
#define UNMONITOR 523
#define PING 524
#define PING4 525
#define PING6 526
#define ICMP 527
#define ICMPECHO 528
#define NONEXIST 529
#define EXIST 530
#define INVALID 531
#define DATA 532
#define RECOVERED 533
#define PASSED 534
#define SUCCEEDED 535
#define URL 536
#define CONTENT 537
#define PID 538
#define PPID 539
#define FSFLAG 540
#define REGISTER 541
#define CREDENTIALS 542
#define URLOBJECT 543
#define ADDRESSOBJECT 544
#define TARGET 545
#define TIMESPEC 546
#define HTTPHEADER 547
#define MAXFORWARD 548
#define FIPS 549
#define SECURITY 550
#define ATTRIBUTE 551
#define FILEDESCRIPTORS 552
#define HARDLINK 553
#define GREATER 554
#define GREATEROREQUAL 555
#define LESS 556
#define LESSOREQUAL 557
#define EQUAL 558
#define NOTEQUAL 559

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 341 "src/p.y"

        URL_T     url;
        Address_T address;
        float     real;
        int       number;
        int64_t   number64;
        char     *string;

#line 684 "src/y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */
