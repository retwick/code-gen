/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 10 "file1.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <bits/stdc++.h>
	using namespace std;
	typedef struct node
	{
		int h1,h2,max_path,mainflag;
		char name[50];
		int value;
		int size;
		struct node* child[10];
	}node;	
	int ifmax = 0,whmax =0,mainmax = 0;
	extern char* yytext;
	void DFS(node *root);
	node* root = NULL;
	node *mknode0(int s);
	node *mknode1(int s,node* c1);
	node *mknode2(int s,node *c1,node *c2);
	node *mknode3(int s,node *c1,node *c2,node *c3);
	node *mknode4(int s,node *c1,node *c2,node *c3,node *c4);
	node *mknode5(int s,node *c1,node *c2,node *c3,node *c4,node *c5);
	node *mknode6(int s,node *c1,node *c2,node *c3,node *c4,node *c5,node *c6);
	node *mknode7(int s,node *c1,node *c2,node *c3,node* c4,node *c5,node *c6,node *c7);
	void yyerror(string);
	int yylex(void);
	int debug = 1;
	int var_count = 0;
	int label_start = 0;
	map<string, int> var_offset;
	string data_buffer, code_buffer;
#define YYSTYPE struct node *

#line 100 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    FLOAT_LITERAL = 258,
    INTEGER_LITERAL = 259,
    INT = 260,
    RETURN = 261,
    BREAK = 262,
    CONT = 263,
    VOID = 264,
    FLOAT = 265,
    WHILE = 266,
    IF = 267,
    PRINTF = 268,
    STRING = 269,
    IDENTIFIER = 270,
    ELSE = 271,
    OR = 272,
    EQ = 273,
    NEQ = 274,
    LEQ = 275,
    GEQ = 276,
    AND = 277
  };
#endif
/* Tokens.  */
#define FLOAT_LITERAL 258
#define INTEGER_LITERAL 259
#define INT 260
#define RETURN 261
#define BREAK 262
#define CONT 263
#define VOID 264
#define FLOAT 265
#define WHILE 266
#define IF 267
#define PRINTF 268
#define STRING 269
#define IDENTIFIER 270
#define ELSE 271
#define OR 272
#define EQ 273
#define NEQ 274
#define LEQ 275
#define GEQ 276
#define AND 277

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 195 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   194

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  156

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   277

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    39,     2,     2,     2,    38,    40,     2,
      28,    29,    27,    35,    24,    36,     2,    37,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    23,
      33,    32,    34,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    25,     2,    26,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    30,     2,    31,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    47,    47,    56,    61,    68,    73,    81,    89,    98,
     112,   127,   134,   141,   148,   157,   166,   177,   188,   193,
     199,   206,   213,   218,   229,   234,   241,   246,   251,   256,
     261,   266,   271,   276,   283,   298,   311,   322,   327,   333,
     342,   357,   368,   383,   392,   403,   414,   425,   435,   450,
     458,   466,   474,   482,   490,   498,   506,   514,   522,   530,
     538,   546,   554,   561,   568,   575,   582,   589,   595,   604,
     615,   620,   625,   630,   641,   650,   659,   668,   677,   684,
     691,   696
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FLOAT_LITERAL", "INTEGER_LITERAL",
  "INT", "RETURN", "BREAK", "CONT", "VOID", "FLOAT", "WHILE", "IF",
  "PRINTF", "STRING", "IDENTIFIER", "ELSE", "OR", "EQ", "NEQ", "LEQ",
  "GEQ", "AND", "';'", "','", "'['", "']'", "'*'", "'('", "')'", "'{'",
  "'}'", "'='", "'<'", "'>'", "'+'", "'-'", "'/'", "'%'", "'!'", "'&'",
  "$accept", "program", "decl_list", "decl", "var_decl", "type_spec",
  "func_decl", "params", "param_list", "param", "stmt_list", "stmt",
  "print_stmt", "while_stmt", "compound_stmt", "local_decls", "local_decl",
  "if_stmt", "return_stmt", "break_stmt", "continue_stmt", "assign_stmt",
  "expr", "Pexpr", "integerLit", "floatLit", "identifier", "string",
  "arg_list", "args", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,    59,    44,    91,    93,    42,    40,    41,
     123,   125,    61,    60,    62,    43,    45,    47,    37,    33,
      38
};
# endif

#define YYPACT_NINF -60

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-60)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      27,   -20,     3,     4,    15,    27,   -60,   -60,    24,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -12,   -60,    27,    45,
      27,   -60,    24,   -60,    29,    24,    38,    32,   -60,    20,
      -1,    46,    50,    27,   -60,    27,    57,   -60,   -60,   -60,
     -60,   -60,   150,    23,    61,    64,    62,    63,    65,    24,
      66,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -22,   -60,   -60,     5,    25,     5,     5,     5,     5,
      69,   156,   -60,   -60,   -23,   -60,   -60,    25,    25,    75,
      43,   -60,   -60,    25,    25,   -60,   -60,    80,   -60,   -60,
     -60,   -60,   -60,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,    25,    25,    82,    83,
     -60,    70,   -60,    25,    78,    72,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
      88,   -60,    96,    90,    95,    95,    24,    97,    89,   -60,
     -60,    25,   -60,   -60,   106,   100,   101,    25,   -60,    95,
     107,   -60,   108,   -60,   -60,   -60
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    12,    11,    13,     0,     2,     4,     5,     0,     6,
      15,    14,    16,     1,     3,    76,     0,     7,     0,     0,
      19,     8,     0,    74,     0,     0,     0,    18,    21,     0,
       0,    22,     0,     0,     9,     0,     0,    38,    17,    20,
      10,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,    33,    29,    27,    37,    28,    30,    31,    32,
      26,     0,    75,    43,     0,     0,     0,     0,     0,     0,
       0,    67,    70,    71,    72,    45,    46,     0,     0,     0,
       0,    36,    24,     0,     0,    65,    72,     0,    64,    63,
      62,    66,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
      77,     0,    39,     0,     0,     0,    73,    49,    50,    51,
      52,    54,    56,    59,    53,    55,    57,    58,    60,    61,
       0,    79,    80,     0,     0,     0,     0,     0,     0,    47,
      69,     0,    68,    35,    41,     0,     0,     0,    78,     0,
       0,    40,     0,    42,    34,    48
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -60,   -60,   -60,   127,   -14,   146,   -60,   -60,   -60,   102,
     -60,   -49,   -60,   -60,   104,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -59,    49,   115,   -60,    -8,   -60,   -60,   -60
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,     8,     9,    26,    27,    28,
      50,    51,    52,    53,    54,    42,    55,    56,    57,    58,
      59,    60,    70,    71,    72,    73,    86,   111,   132,   133
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      16,    82,   106,    83,    21,   107,    87,    10,    62,    23,
      84,    17,    18,    19,    29,    13,    20,    31,   108,   109,
      15,    40,    34,    35,   114,   115,    62,    23,    62,    23,
      11,    12,     1,    65,    61,    74,     2,     3,    15,    15,
      15,    80,    61,    17,    18,    19,    63,   130,   131,    23,
      64,    65,    64,    65,   137,    30,    33,    74,    66,    67,
      66,    67,    68,    69,    68,    69,   112,    32,   113,    74,
      74,    36,    43,    44,    45,    74,    74,    46,    47,    48,
      37,    15,   148,    41,    75,   143,   144,    76,   152,   110,
      77,    78,    92,    79,   136,   139,    37,    81,    74,    74,
     153,    43,    44,    45,   138,    74,    46,    47,    48,   116,
      15,   134,   135,    85,   140,    88,    89,    90,    91,   142,
     141,   147,   149,   146,   151,    37,    61,    61,   145,   150,
     154,   155,    14,    74,    24,    39,    38,     0,     0,    74,
       0,    61,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,     1,    43,    44,    45,     2,
       3,    46,    47,    48,    22,    15,    25,     0,     0,     0,
       0,     0,     0,    93,    94,    95,    96,    97,    98,    25,
      37,    22,     0,    99,     0,     0,     0,     0,    49,   100,
     101,   102,   103,   104,   105
};

static const yytype_int16 yycheck[] =
{
       8,    50,    25,    25,    18,    28,    65,    27,     3,     4,
      32,    23,    24,    25,    22,     0,    28,    25,    77,    78,
      15,    35,    23,    24,    83,    84,     3,     4,     3,     4,
      27,    27,     5,    28,    42,    43,     9,    10,    15,    15,
      15,    49,    50,    23,    24,    25,    23,   106,   107,     4,
      27,    28,    27,    28,   113,    26,    24,    65,    35,    36,
      35,    36,    39,    40,    39,    40,    23,    29,    25,    77,
      78,    25,     6,     7,     8,    83,    84,    11,    12,    13,
      30,    15,   141,    26,    23,   134,   135,    23,   147,    14,
      28,    28,    23,    28,    24,    23,    30,    31,   106,   107,
     149,     6,     7,     8,    26,   113,    11,    12,    13,    29,
      15,    29,    29,    64,    26,    66,    67,    68,    69,    29,
      24,    32,    16,    26,    23,    30,   134,   135,   136,    29,
      23,    23,     5,   141,    19,    33,    32,    -1,    -1,   147,
      -1,   149,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    18,    15,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    33,
      30,    35,    -1,    27,    -1,    -1,    -1,    -1,    42,    33,
      34,    35,    36,    37,    38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     9,    10,    42,    43,    44,    45,    46,    47,
      27,    27,    27,     0,    44,    15,    67,    23,    24,    25,
      28,    45,    46,     4,    65,    46,    48,    49,    50,    67,
      26,    67,    29,    24,    23,    24,    25,    30,    55,    50,
      45,    26,    56,     6,     7,     8,    11,    12,    13,    46,
      51,    52,    53,    54,    55,    57,    58,    59,    60,    61,
      62,    67,     3,    23,    27,    28,    35,    36,    39,    40,
      63,    64,    65,    66,    67,    23,    23,    28,    28,    28,
      67,    31,    52,    25,    32,    64,    67,    63,    64,    64,
      64,    64,    23,    17,    18,    19,    20,    21,    22,    27,
      33,    34,    35,    36,    37,    38,    25,    28,    63,    63,
      14,    68,    23,    25,    63,    63,    29,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      63,    63,    69,    70,    29,    29,    24,    63,    26,    23,
      26,    24,    29,    52,    52,    67,    26,    32,    63,    16,
      29,    23,    63,    52,    23,    23
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    41,    42,    43,    43,    44,    44,    45,    45,    45,
      45,    46,    46,    46,    46,    46,    46,    47,    48,    48,
      49,    49,    50,    50,    51,    51,    52,    52,    52,    52,
      52,    52,    52,    52,    53,    54,    55,    56,    56,    57,
      57,    58,    58,    59,    59,    60,    61,    62,    62,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      64,    64,    64,    64,    65,    66,    67,    68,    69,    69,
      70,    70
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     4,     6,
       7,     1,     1,     1,     2,     2,     2,     6,     1,     0,
       3,     1,     2,     4,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     7,     5,     4,     2,     0,     3,
       6,     5,     7,     2,     3,     2,     2,     4,     7,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     2,     1,     4,     4,
       1,     1,     1,     3,     1,     1,     1,     1,     3,     1,
       1,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 48 "file1.y" /* yacc.c:1646  */
    {
		
		(yyval) = mknode1(1,(yyvsp[0]));
		root = (yyval);
		strcpy((yyval)->name,"program");
	}
#line 1391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 57 "file1.y" /* yacc.c:1646  */
    {
		(yyval) = mknode2(2,(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"decl_list");
	}
#line 1400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 62 "file1.y" /* yacc.c:1646  */
    {
		(yyval) = mknode1(1,(yyvsp[0]));
		strcpy((yyval)->name,"decl_list");
	}
#line 1409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 69 "file1.y" /* yacc.c:1646  */
    {
		(yyval) = mknode1(1,(yyvsp[0]));
		strcpy((yyval)->name,"decl");
	}
#line 1418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 74 "file1.y" /* yacc.c:1646  */
    {
		
		(yyval) = mknode1(1,(yyvsp[0]));
		strcpy((yyval)->name,"decl");
	}
#line 1428 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 82 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[0]) = mknode0(0);
		strcpy((yyvsp[0])->name,";");
		(yyval) = mknode3(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"var_decl");		
		
	}
#line 1440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 90 "file1.y" /* yacc.c:1646  */
    {

		(yyvsp[-1]) = mknode0(0);
		strcpy((yyvsp[-1])->name,";");
		(yyval) = mknode4(4,(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"var_decl");
		
	}
#line 1453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 99 "file1.y" /* yacc.c:1646  */
    {	

		
		(yyvsp[-3]) = mknode0(0);
		strcpy((yyvsp[-3])->name,"[");
		(yyvsp[-1]) = mknode0(0);
		strcpy((yyvsp[-1])->name,"]");
		(yyvsp[0]) = mknode0(0);
		strcpy((yyvsp[0])->name,";");
		(yyval) = mknode6(6,(yyvsp[-5]),(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"var_decl");
		if(debug) cout<<"declared[]"<<(yyvsp[-4])->name<<endl;				
	}
#line 1471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 113 "file1.y" /* yacc.c:1646  */
    {

		(yyvsp[-4]) = mknode0(0);
		strcpy((yyvsp[-4])->name,"[");
		(yyvsp[-2]) = mknode0(0);
		strcpy((yyvsp[-2])->name,"]");
		(yyvsp[-1]) = mknode0(0);
		strcpy((yyvsp[-1])->name,",");
		(yyval) = mknode7(7,(yyvsp[-6]),(yyvsp[-5]),(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"var_decl");
		if(debug) cout<<"declared [],"<<(yyvsp[-5])->name<<endl;				
	}
#line 1488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 128 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[0]) = mknode0(0);
		strcpy((yyvsp[0])->name,"VOID");
		(yyval) = mknode1(1,(yyvsp[0]));
		strcpy((yyval)->name,"type_spec");
	}
#line 1499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 135 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[0]) = mknode0(0);
		strcpy((yyvsp[0])->name,"INT");
		(yyval) = mknode1(1,(yyvsp[0]));
		strcpy((yyval)->name,"type_spec");
	}
#line 1510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 142 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[0]) = mknode0(0);
		strcpy((yyvsp[0])->name,"FLOAT");
		(yyval) = mknode1(1,(yyvsp[0]));
		strcpy((yyval)->name,"type_spec");
	}
#line 1521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 149 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-1]) = mknode0(0);
		strcpy((yyvsp[-1])->name,"VOID");
		(yyvsp[0]) = mknode0(0);
		strcpy((yyvsp[0])->name,"*");
		(yyval) = mknode2(2,(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"type_spec");
	}
#line 1534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 158 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-1]) = mknode0(0);
		strcpy((yyvsp[-1])->name,"INT");
		(yyvsp[0]) = mknode0(0);
		strcpy((yyvsp[0])->name,"*");
		(yyval) = mknode2(2,(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"type_spec");
	}
#line 1547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 167 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-1]) = mknode0(0);
		strcpy((yyvsp[-1])->name,"FLOAT");
		(yyvsp[0]) = mknode0(0);
		strcpy((yyvsp[0])->name,"*");
		(yyval) = mknode2(2,(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"type_spec");
	}
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 178 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-3]) = mknode0(0);
		strcpy((yyvsp[-3])->name,"(");
		(yyvsp[-1]) = mknode0(0);
		strcpy((yyvsp[-1])->name,")");
		(yyval)= mknode6(6,(yyvsp[-5]),(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"func_decl");
	}
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 189 "file1.y" /* yacc.c:1646  */
    {
		(yyval) = mknode1(1,(yyvsp[0]));
		strcpy((yyval)->name,"params");
	}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 193 "file1.y" /* yacc.c:1646  */
    {
		(yyval) = mknode0(1);
		strcpy((yyval)->name,"params");
	}
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 200 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-1]) = mknode0(0);
		strcpy((yyvsp[-1])->name,",");
		(yyval) = mknode3(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"param_list");
	}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 207 "file1.y" /* yacc.c:1646  */
    {
		(yyval) = mknode1(1,(yyvsp[0]));
		strcpy((yyval)->name,"param_list");
	}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 214 "file1.y" /* yacc.c:1646  */
    {
		(yyval) = mknode2(2,(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"param");
	}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 219 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-1]) = mknode0(0);
		strcpy((yyvsp[-1])->name,"[");
		(yyvsp[0]) = mknode0(0);
		strcpy((yyvsp[0])->name,"]");
		(yyval) = mknode4(4,(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"param");
	}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 230 "file1.y" /* yacc.c:1646  */
    {
		(yyval) = mknode2(2,(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"stmt_list");
	}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 235 "file1.y" /* yacc.c:1646  */
    {
		(yyval) = mknode1(1,(yyvsp[0]));
		strcpy((yyval)->name,"stmt_list");
	}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 242 "file1.y" /* yacc.c:1646  */
    {
		(yyval) = mknode1(1,(yyvsp[0]));
		strcpy((yyval)->name,"stmt");
	}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 247 "file1.y" /* yacc.c:1646  */
    {
		(yyval) = mknode1(1,(yyvsp[0]));
		strcpy((yyval)->name,"stmt");
	}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 252 "file1.y" /* yacc.c:1646  */
    {
		(yyval) = mknode1(1,(yyvsp[0]));
		strcpy((yyval)->name,"stmt");
	}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 257 "file1.y" /* yacc.c:1646  */
    {
		(yyval) = mknode1(1,(yyvsp[0]));
		strcpy((yyval)->name,"stmt");
	}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 262 "file1.y" /* yacc.c:1646  */
    {
		(yyval) = mknode1(1,(yyvsp[0]));
		strcpy((yyval)->name,"stmt");
	}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 267 "file1.y" /* yacc.c:1646  */
    {
		(yyval) = mknode1(1,(yyvsp[0]));
		strcpy((yyval)->name,"stmt");
	}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 272 "file1.y" /* yacc.c:1646  */
    {
		(yyval) = mknode1(1,(yyvsp[0]));
		strcpy((yyval)->name,"stmt");
	}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 277 "file1.y" /* yacc.c:1646  */
    {
		(yyval) = mknode1(1,(yyvsp[0]));
		strcpy((yyval)->name,"stmt");

	}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 284 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-6]) = mknode0(0);
		(yyvsp[-5]) = mknode0(0);

		(yyvsp[-3]) = mknode0(0);
				
		(yyvsp[-1]) = mknode0(0);
		(yyvsp[0]) = mknode0(0);

		(yyval) = mknode7(6,(yyvsp[-6]),(yyvsp[-5]),(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));		
		strcpy((yyval)->name,"print_stmt");

	}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 299 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-4]) = mknode0(0);
		strcpy((yyvsp[-4])->name,"WHILE");
		(yyvsp[-3]) = mknode0(0);
		strcpy((yyvsp[-3])->name,"(");
		(yyvsp[-1]) = mknode0(0);
		strcpy((yyvsp[-1])->name,")");
		(yyval) = mknode5(5,(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"while_stmt");
	}
#line 1757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 312 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-3]) = mknode0(0);
		strcpy((yyvsp[-3])->name,"{");
		(yyvsp[0]) = mknode0(0);
		strcpy((yyvsp[0])->name,"}");
		(yyval) = mknode4(4,(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"compound_stmt");
	}
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 323 "file1.y" /* yacc.c:1646  */
    {
		(yyval) = mknode2(2,(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"local_decls");
	}
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 327 "file1.y" /* yacc.c:1646  */
    {
		(yyval) = mknode0(1);
		strcpy((yyval)->name,"local_decls");
	}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 334 "file1.y" /* yacc.c:1646  */
    {
//		cout<<"declared "<<$2->name<<"\n";
		
		(yyvsp[0]) = mknode0(0);
		strcpy((yyvsp[0])->name,";");
		(yyval) = mknode3(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"local_decl");
	}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 343 "file1.y" /* yacc.c:1646  */
    {

				
		(yyvsp[-3]) = mknode0(0);
		strcpy((yyvsp[-3])->name,"[");
		(yyvsp[-1]) = mknode0(0);
		strcpy((yyvsp[-1])->name,"]");
		(yyvsp[0]) = mknode0(0);
		strcpy((yyvsp[0])->name,";");
		(yyval) = mknode6(6,(yyvsp[-5]),(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"local_decl");
	}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 358 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-4]) = mknode0(0);
		strcpy((yyvsp[-4])->name,"IF");
		(yyvsp[-3]) = mknode0(0);
		strcpy((yyvsp[-3])->name,"(");
		(yyvsp[-1]) = mknode0(0);
		strcpy((yyvsp[-1])->name,")");
		(yyval) = mknode5(5,(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"if_stmt");
	}
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 369 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-6]) = mknode0(0);
		strcpy((yyvsp[-6])->name,"IF");
		(yyvsp[-5]) = mknode0(0);
		strcpy((yyvsp[-5])->name,"(");
		(yyvsp[-3]) = mknode0(0);
		strcpy((yyvsp[-3])->name,")");
		(yyvsp[-1]) = mknode0(0);
		strcpy((yyvsp[-1])->name,"ELSE");
		(yyval) = mknode7(7,(yyvsp[-6]),(yyvsp[-5]),(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"if_stmt");
	}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 384 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-1]) = mknode0(0);
		strcpy((yyvsp[-1])->name,"RETURN");
		(yyvsp[0]) = mknode0(0);
		strcpy((yyvsp[0])->name,";");
		(yyval) = mknode2(2,(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"return_stmt");
	}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 393 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-2]) = mknode0(0);
		strcpy((yyvsp[-2])->name,"RETURN");
		(yyvsp[0]) = mknode0(0);
		strcpy((yyvsp[0])->name,";");
		(yyval) = mknode3(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"return_stmt");
	}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 404 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-1]) = mknode0(0);
		strcpy((yyvsp[-1])->name,"BREAK");
		(yyvsp[0]) = mknode0(0);
		strcpy((yyvsp[0])->name,";");
		(yyval) = mknode2(2,(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"break_stmt");
	}
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 415 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-1]) = mknode0(0);
		strcpy((yyvsp[-1])->name,"CONT");
		(yyvsp[0]) = mknode0(0);
		strcpy((yyvsp[0])->name,";");
		(yyval) = mknode2(2,(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"continue_stmt");
	}
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 426 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-2]) = mknode2(2,(yyvsp[-3]),(yyvsp[-1]));
		strcpy((yyvsp[-2])->name,"=");
		(yyvsp[0]) = mknode0(0);
		strcpy((yyvsp[0])->name,";");
		(yyval) = mknode2(2,(yyvsp[-2]),(yyvsp[0]));
		
		strcpy((yyval)->name,"assign_stmt");
	}
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 436 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-5]) = mknode0(0);
		strcpy((yyvsp[-5])->name,"[");
		(yyvsp[-3]) = mknode0(0);
		strcpy((yyvsp[-3])->name,"]");
		(yyvsp[0]) = mknode0(0);
		strcpy((yyvsp[0])->name,";");
		(yyvsp[-2]) = mknode5(5,(yyvsp[-6]),(yyvsp[-5]),(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-1]));
		strcpy((yyvsp[-2])->name,"=");
		(yyval) = mknode2(2,(yyvsp[-2]),(yyvsp[0]));
		strcpy((yyval)->name,"assign_stmt");
	}
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 451 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-1]) = mknode2(2,(yyvsp[-2]),(yyvsp[0]));
		strcpy((yyvsp[-1])->name,"OR");
		(yyval) = mknode1(1,(yyvsp[-1]));
		strcpy((yyval)->name,"expr");
		(yyval)->value = (yyvsp[-2])->value || (yyvsp[0])->value;
	}
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 459 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-1]) = mknode2(2,(yyvsp[-2]),(yyvsp[0]));
		strcpy((yyvsp[-1])->name,"EQ");
		(yyval) = mknode1(1,(yyvsp[-1]));
		strcpy((yyval)->name,"expr");
		(yyval)->value = (yyvsp[-2])->value == (yyvsp[0])->value;
	}
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 467 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-1]) = mknode2(2,(yyvsp[-2]),(yyvsp[0]));
		strcpy((yyvsp[-1])->name,"NEQ");
		(yyval) = mknode1(1,(yyvsp[-1]));
		strcpy((yyval)->name,"expr");
		(yyval)->value = (yyvsp[-2])->value != (yyvsp[0])->value;
	}
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 475 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-1]) = mknode2(2,(yyvsp[-2]),(yyvsp[0]));
		strcpy((yyvsp[-1])->name,"LEQ");
		(yyval) = mknode1(1,(yyvsp[-1]));
		strcpy((yyval)->name,"expr");
		(yyval)->value = (yyvsp[-2])->value <= (yyvsp[0])->value;
	}
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 483 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-1]) = mknode2(2,(yyvsp[-2]),(yyvsp[0]));
		strcpy((yyvsp[-1])->name,"<");
		(yyval) = mknode1(1,(yyvsp[-1]));
		strcpy((yyval)->name,"expr");
		(yyval)->value = (yyvsp[-2])->value < (yyvsp[0])->value;
	}
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 491 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-1]) = mknode2(2,(yyvsp[-2]),(yyvsp[0]));
		strcpy((yyvsp[-1])->name,"GEQ");
		(yyval) = mknode1(1,(yyvsp[-1]));
		strcpy((yyval)->name,"expr");
		(yyval)->value = (yyvsp[-2])->value >= (yyvsp[0])->value;
	}
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 499 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-1]) = mknode2(2,(yyvsp[-2]),(yyvsp[0]));
		strcpy((yyvsp[-1])->name,">");
		(yyval) = mknode1(1,(yyvsp[-1]));
		strcpy((yyval)->name,"expr");
		(yyval)->value = (yyvsp[-2])->value > (yyvsp[0])->value;
	}
#line 2017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 507 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-1]) = mknode2(2,(yyvsp[-2]),(yyvsp[0]));
		strcpy((yyvsp[-1])->name,"AND");
		(yyval) = mknode1(1,(yyvsp[-1]));
		strcpy((yyval)->name,"expr");
		(yyval)->value = (yyvsp[-2])->value && (yyvsp[0])->value;
	}
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 515 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-1]) = mknode2(2,(yyvsp[-2]),(yyvsp[0]));
		strcpy((yyvsp[-1])->name,"+");
		(yyval) = mknode1(1,(yyvsp[-1]));
		strcpy((yyval)->name,"expr");
		
	}
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 523 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-1]) = mknode2(2,(yyvsp[-2]),(yyvsp[0]));
		strcpy((yyvsp[-1])->name,"-");
		(yyval) = mknode1(1,(yyvsp[-1]));
		strcpy((yyval)->name,"expr");
		
	}
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 531 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-1]) = mknode2(2,(yyvsp[-2]),(yyvsp[0]));
		strcpy((yyvsp[-1])->name,"*");
		(yyval) = mknode1(1,(yyvsp[-1]));
		strcpy((yyval)->name,"expr");
		
	}
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 539 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-1]) = mknode2(2,(yyvsp[-2]),(yyvsp[0]));
		strcpy((yyvsp[-1])->name,"/");
		(yyval) = mknode1(1,(yyvsp[-1]));
		strcpy((yyval)->name,"expr");
		
	}
#line 2077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 547 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-1]) = mknode2(2,(yyvsp[-2]),(yyvsp[0]));
		strcpy((yyvsp[-1])->name,"%");
		(yyval) = mknode1(1,(yyvsp[-1]));
		strcpy((yyval)->name,"expr");
		
	}
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 555 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-1]) = mknode0(0);
		strcpy((yyvsp[-1])->name,"!");
		(yyval) = mknode2(2,(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"expr");
	}
#line 2100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 562 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-1]) = mknode0(0);
		strcpy((yyvsp[-1])->name,"-");
		(yyval) = mknode2(2,(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"expr");
	}
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 569 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-1]) = mknode0(0);
		strcpy((yyvsp[-1])->name,"+");
		(yyval) = mknode2(2,(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"expr");
	}
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 576 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-1]) = mknode0(0);
		strcpy((yyvsp[-1])->name,"*");
		(yyval) = mknode2(2,(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"expr");
	}
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 583 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-1]) = mknode0(0);
		strcpy((yyvsp[-1])->name,"&");
		(yyval) = mknode2(2,(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"expr");
	}
#line 2144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 590 "file1.y" /* yacc.c:1646  */
    {
		(yyval) = mknode1(1,(yyvsp[0]));
		strcpy((yyval)->name,"expr");
		
	}
#line 2154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 596 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-2]) = mknode0(0);
		(yyvsp[0]) = mknode0(0);
		strcpy((yyvsp[-2])->name,"(");
		strcpy((yyvsp[0])->name,")");			
		(yyval) = mknode4(4,(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"expr");
	}
#line 2167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 605 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-2]) = mknode0(0);
		(yyvsp[0]) = mknode0(0);
		strcpy((yyvsp[-2])->name,"[");
		strcpy((yyvsp[0])->name,"]");
		(yyval) = mknode4(4,(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"expr");
	}
#line 2180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 616 "file1.y" /* yacc.c:1646  */
    {
		(yyval) = mknode1(1,(yyvsp[0]));
		strcpy((yyval)->name,"Pexpr");
	}
#line 2189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 621 "file1.y" /* yacc.c:1646  */
    {
		(yyval) = mknode1(1,(yyvsp[0]));
		strcpy((yyval)->name,"Pexpr");
	}
#line 2198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 626 "file1.y" /* yacc.c:1646  */
    {
		(yyval) = mknode1(1,(yyvsp[0]));
		strcpy((yyval)->name,"Pexpr");
	}
#line 2207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 631 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-2]) = mknode0(0);
		(yyvsp[0]) = mknode0(0);
		strcpy((yyvsp[-2])->name,"(");
		strcpy((yyvsp[0])->name,")");
		(yyval) = mknode3(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"Pexpr");
	}
#line 2220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 642 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[0]) = mknode0(0);
		strcpy((yyvsp[0])->name,yytext);
		(yyval) = mknode1(1,(yyvsp[0]));
		strcpy((yyval)->name,"integerLit");	
	}
#line 2231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 651 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[0]) = mknode0(0);
		strcpy((yyvsp[0])->name,yytext);
		(yyval) = mknode1(1,(yyvsp[0]));
		strcpy((yyval)->name,"floatLit");
	}
#line 2242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 660 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[0]) = mknode0(0);
		strcpy((yyvsp[0])->name,yytext);
		(yyval) = mknode1(1,(yyvsp[0]));

		strcpy((yyval)->name,"identifier");
	}
#line 2254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 669 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[0]) = mknode0(0);
		strcpy((yyvsp[0])->name,yytext);
		(yyval) = mknode1(1,(yyvsp[0]));
		strcpy((yyval)->name,"string");
	}
#line 2265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 678 "file1.y" /* yacc.c:1646  */
    {
		(yyvsp[-1]) = mknode0(0);
		strcpy((yyvsp[-1])->name,",");
		(yyval) = mknode3(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));
		strcpy((yyval)->name,"arg_list");
	}
#line 2276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 685 "file1.y" /* yacc.c:1646  */
    {
		(yyval) = mknode1(1,(yyvsp[0]));
		strcpy((yyval)->name,"arg_list");
	}
#line 2285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 692 "file1.y" /* yacc.c:1646  */
    {
		(yyval) = mknode1(1,(yyvsp[0]));
		strcpy((yyval)->name,"args");
	}
#line 2294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 696 "file1.y" /* yacc.c:1646  */
    {
		(yyval) = mknode0(1);
		strcpy((yyval)->name,"args");
	}
#line 2303 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2307 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 703 "file1.y" /* yacc.c:1906  */


void yyerror(string s) {
    printf("Invalid Input\n");
	exit(0);
}

void print(node* root, int l){
	cout<<root->name<<" "<<l<<endl;
	for(int i=0; i < (root->size); ++i){
		print(root->child[i], l+1);
	}
}

void print_init(){
cout<<"	.file	\"hello.c\"\n";
cout<<"	.section	.rodata\n";
cout<<".LC0:\n";
cout<<"	.string	\"%d\\n\"\n";
cout<<"	.text\n";
cout<<"	.globl	main\n";
cout<<"	.type	main, @function\n";
cout<<"main:\n";
cout<<"	pushq	%rbp\n";
cout<<"	movq	%rsp, %rbp\n";
cout<<" subq $4000, %rsp\n";
}

void print_end(){

cout<<"\tleave\n";
cout<<"\tret\n";
cout<<"\t.size	main, .-main\n";
cout<<"\t.ident	\"GCC: (Debian 4.9.2-10) 4.9.2\"\n";
cout<<"\t.section	.note.GNU-stack,\"\",@progbits\n";

}

int main()
{
	//extern int yydebug;yydebug = 1;	
	yyparse();
	print_init();
	if(root != NULL)
	{	
		DFS(root);
	}	
	else
	{
		return 0;
	}

	//print(root, 0);
	print_end();
	return 0;
}


void expression_eval(node *root){

	for(int i=0; i<root->size; ++i){
		expression_eval(root->child[i]);
	}

	if(strcmp(root->name, "integerLit") == 0 ){

		cout<<"\tpushq\t$"<<atoi((root->child[0])->name)<<"\n";  
	}
	if(strcmp(root->name,"identifier") == 0  ){

		cout<<"\tpushq\t"<<-4*var_offset[(root->child[0])->name]<<"(%rbp)\n"; 

	}
	if( (strcmp(root->name,"expr") == 0) && root->size == 1  ){
	
		if(strcmp (root->child[0]->name, "+") == 0 ){
			//addition
			cout<<"\tpop\t%rbx\n";
			cout<<"\tpop\t%rax\n";	
				cout<<"\taddl\t%ebx, %eax\n";
			cout<<"\tpushq\t%rax\n";

		}

		if(strcmp(root->child[0]->name, "-") == 0){
			cout<<"\tpop\t%rbx\n";
			cout<<"\tpop\t%rax\n";
				cout<<"\tsubl\t%ebx, %eax\n";
			cout<<"\tpushq\t%rax\n";
		}
		if(strcmp(root->child[0]->name, "*")== 0){
			cout<<"\tpop\t%rbx\n";
			cout<<"\tpop\t%rax\n";
				cout<<"\timull\t%ebx, %eax\n";
			cout<<"\tpushq\t%rax\n";
		}
		if(strcmp(root->child[0]->name, "/")== 0){
			cout<<"\tpop\t%rbx\n";
			cout<<"\tpop\t%rax\n";
				cout<<"\tcltd\n";
				cout<<"\tidivl\t%ebx\n";
			cout<<"\tpushq\t%rax\n";
		}
		if(strcmp(root->child[0]->name , "%")== 0){
			cout<<"\tpop\t%rbx\n";
			cout<<"\tpop\t%rax\n";
				cout<<"\tcltd\n";
				cout<<"\tidivl\t%ebx\n";
				//cout<<"\tmovl\t%edx, %eax\n";
			cout<<"\tpushq\t%rdx\n";
		}
		if(strcmp(root->child[0]->name , "OR")== 0){

			cout<<"\tpop\t%rbx\n";
			cout<<"\tpop\t%rax\n";
			
			cout<<"\tcmpl $0, %eax\n";
			cout<<"jne\t.L"<<label_start<<"\n";
			cout<<"\tcmpl $0, %ebx\n";
			cout<<"je\t.L"<<label_start+1<<"\n";
		cout<<".L"<<label_start<<":\n";
			cout<<"\tmovl\t$1, %eax\n";
			cout<<"\tjmp\t.L"<<label_start+2<<"\n";
		cout<<".L"<<label_start+1<<":\n";
			cout<<"\tmovl $0, %eax\n";
		cout<<".L"<<label_start+2<<":\n";			
			cout<<"\tpushq\t%rax\n";	
			label_start += 3;
			
		}
		if(strcmp(root->child[0]->name , "AND")== 0){
			
			cout<<"\tpop\t%rbx\n";
			cout<<"\tpop\t%rax\n";
			
			cout<<"\tcmp $0, %eax\n";
			cout<<"je\t.L"<<label_start<<"\n";
			cout<<"\tcmp $0, %ebx\n";
			cout<<"je\t.L"<<label_start<<"\n";
			cout<<"\tmovl\t$1, %eax\n";
			cout<<"\tjmp\t.L"<<label_start+1<<"\n";
		cout<<".L"<<label_start<<":\n";
			cout<<"\tmovl $0, %eax\n";
		cout<<".L"<<label_start+1<<":\n";			
			cout<<"\tpushq\t%rax\n";	
			label_start += 2;
		}
		if(strcmp(root->child[0]->name , "NEQ")== 0){
			cout<<"\tpop\t%rbx\n";
			cout<<"\tpop\t%rax\n";
				cout<<"\tcmpl\t%ebx, %eax\n";
			cout<<"\tsetne\t%al\n";
			cout<<"\tpushq\t%rax\n";	
		}
		if(strcmp(root->child[0]->name , "EQ")== 0){
			cout<<"\tpop\t%rbx\n";
			cout<<"\tpop\t%rax\n";
				cout<<"\tcmpl\t%ebx, %eax\n";
			cout<<"\tsete\t%al\n";
			cout<<"\tpushq\t%rax\n";	
		}
		if(strcmp(root->child[0]->name , "LEQ")== 0){
			cout<<"\tpop\t%rbx\n";
			cout<<"\tpop\t%rax\n";
				cout<<"\tcmpl\t%ebx, %eax\n";
			cout<<"\tsetle\t%al\n";
			cout<<"\tpushq\t%rax\n";	
		}
		if(strcmp(root->child[0]->name , "GEQ")== 0){
			cout<<"\tpop\t%rbx\n";
			cout<<"\tpop\t%rax\n";
				cout<<"\tcmpl\t%ebx, %eax\n";
			cout<<"\tsetge\t%al\n";
			cout<<"\tpushq\t%rax\n";
		}
		if(strcmp(root->child[0]->name , "<")== 0){
			cout<<"\tpop\t%rbx\n";
			cout<<"\tpop\t%rax\n";
				cout<<"\tcmpl\t%ebx, %eax\n";
			cout<<"\tsetl\t%al\n";
			cout<<"\tpushq\t%rax\n";	
		}
		if(strcmp(root->child[0]->name , ">") == 0){
			cout<<"\tpop\t%rbx\n";
			cout<<"\tpop\t%rax\n";
				cout<<"\tcmpl\t%ebx, %eax\n";
			cout<<"\tsetg\t%al\n";
			cout<<"\tpushq\t%rax\n";	
		}

		//if epxr -> Pexpr 
	}

	if( (strcmp(root->name,"expr") == 0) && root->size == 2  ){
		//!P -P +P *P &P
		if(strcmp(root->child[0]->name, "!")  == 0){
			/*
			cmpl	$0, -4(%rbp)
			sete	%al
			movzbl	%al, %eax
			movl	%eax, -12(%rbp)
			*/
			cout<<"\tpop\t%rbx\n";
			cout<<"\tcmpl\t$0, %ebx\n";
			cout<<"\tsete %al\n";
			cout<<"\tmovzbl\t%al, %eax\n";
			cout<<"\tpushq\t%rax\n";
		}
		if(strcmp(root->child[0]->name, "-")  == 0){
			/*
	movl	-4(%rbp), %eax
	negl	%eax
	movl	%eax, -12(%rbp)
			*/
			cout<<"\tpop\t%rax\n";
			cout<<"\tnegl %eax\n";
			cout<<"\tpushq\t%rax\n";	
		}
	}

}

void DFS(node *root)
{

	int num = root->size;
	int i;
	for(i=0;i<num;i++)
	{
//		if(strcmp(root->name,"assign_stmt") == 0 && i==0 ){ continue; }
		if(!(strcmp(root->name,"if_stmt") == 0 || strcmp(root->name,"while_stmt") == 0 )) DFS(root->child[i]);

	}


	if(strcmp(root->name,"print_stmt") == 0)
	{
	/*
		movl	-4(%rbp), %eax
		movl	%eax, %esi
		movl	$.LC0, %edi
		movl	$0, %eax
	*/

		cout<<"\tmovl\t"<<var_offset[(root->child[4])->child[0]->name]*(-4)<<"(%rbp), %eax\n";
		cout<<"\tmovl\t%eax, %esi\n";
		cout<<"\tmovl\t$.LC0"<<", %edi\n";
		cout<<"\tmovl\t$0, \t"<<"%eax\n";
		cout<<"\tcall\tprintf\n";		
		
	}
	if(strcmp(root->name,"local_decl") == 0)
	{
		var_offset[root->child[1]->child[0]->name] = (++var_count);
	}

	if(strcmp(root->name,"assign_stmt") == 0)
	{
		expression_eval(root->child[0]->child[1]);
		//rbx == rax
		cout<<"\tpop\t%rbx\n";	
		cout<<"\tmovl\t %ebx, ";

		cout<<var_offset[root->child[0]->child[0]->child[0]->name]*-4<<"(%rbp)"<<endl;

	}
	if(strcmp(root->name,"if_stmt") == 0 && root->size == 5){
		//if then

		expression_eval(root->child[2]);

		cout<<"\tpop\t%rbx\n";			
		cout<<"\tcmpl\t$0, %ebx\n";
		cout<<"\tje .L"<<label_start<<"\n";

		DFS(root->child[4]);
		

	cout<<".L"<<label_start<<":\n";
		label_start+=1;
	}
	if(strcmp(root->name,"if_stmt") == 0 && root->size == 7){
		//if then else
		expression_eval(root->child[2]);
		

		cout<<"\tpop\t%rbx\n";		
		cout<<"\tcmpl\t$0, %ebx\n";	
		cout<<"\tje .L"<<label_start<<"\n";

		DFS(root->child[4]);

		cout<<"\t jmp .L"<<label_start+1<<"\n";

		cout<<".L"<<label_start<<":\n";
		DFS(root->child[6]);

		cout<<".L"<<label_start+1<<":\n";

		label_start+=2;

	}
	if(strcmp(root->name,"while_stmt") == 0){

		cout<<"\tjmp .L"<<label_start<<"\n";

	cout<<".L"<<label_start+1<<":\n";
		DFS(root->child[4]);
		
	cout<<".L"<<label_start<<":\n";
		expression_eval(root->child[2]);
		cout<<"\tpop\t%rbx\n";			
		cout<<"\tcmpl\t$0, %ebx\n";
		cout<<"\tjne .L"<<label_start+1<<"\n";


		
		
		label_start += 2;
	}
	return;
}

node *mknode7(int s,node *c1,node *c2,node *c3,node* c4,node *c5,node *c6,node *c7)
{
	node* nn = (node *)malloc(sizeof(node));
	nn->child[0] = c1;
	nn->child[1] = c2;
	nn->child[2] = c3;
	nn->child[3] = c4;
	nn->child[4] = c5;
	nn->child[5] = c6;
	nn->child[6] = c7;
	nn->size = 7;
	return nn;
}

node *mknode6(int s,node *c1,node *c2,node *c3,node* c4,node *c5,node *c6)
{
	node* nn = (node *)malloc(sizeof(node));
	nn->child[0] = c1;
	nn->child[1] = c2;
	nn->child[2] = c3;
	nn->child[3] = c4;
	nn->child[4] = c5;
	nn->child[5] = c6;
	nn->size = 6;
	return nn;
}

node *mknode5(int s,node *c1,node *c2,node *c3,node* c4,node *c5)
{
	node* nn = (node *)malloc(sizeof(node));
	nn->child[0] = c1;
	nn->child[1] = c2;
	nn->child[2] = c3;
	nn->child[3] = c4;
	nn->child[4] = c5;
	nn->size = 5;
	return nn;
}

node *mknode4(int s,node *c1,node *c2,node *c3,node* c4)
{
	node* nn = (node *)malloc(sizeof(node));
	nn->child[0] = c1;
	nn->child[1] = c2;
	nn->child[2] = c3;
	nn->child[3] = c4;
	nn->size = 4;
	return nn;
}

node *mknode3(int s,node *c1,node *c2,node *c3)
{
	node* nn = (node *)malloc(sizeof(node));
	nn->child[0] = c1;
	nn->child[1] = c2;
	nn->child[2] = c3;
	nn->size = 3;
	return nn;
}

node *mknode2(int s,node *c1,node *c2)
{
	node* nn = (node *)malloc(sizeof(node));
	nn->child[0] = c1;
	nn->child[1] = c2;
	nn->size = 2;
	return nn;
}

node *mknode1(int s,node *c1)
{
	node* nn = (node *)malloc(sizeof(node));
	nn->child[0] = c1;
	nn->size = 1;
	return nn;
}

node *mknode0(int s)
{
	node* nn = (node *)malloc(sizeof(node));
	if(s == 0)
	{
		nn->size = 0;
	}
	if(s == 1)
	{
		node* nnc = (node *)malloc(sizeof(node));
		nnc->size = 0;
		strcpy(nnc->name,"#EPS");
		nn->child[0] = nnc;
		nn->size = 1;
	}
	return nn;
}
