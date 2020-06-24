/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_TABSINTATICA_TAB_H_INCLUDED
# define YY_YY_TABSINTATICA_TAB_H_INCLUDED
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
    TIPO = 258,
    NUMERO_REAL = 259,
    INTEIRO = 260,
    ATRIBUICAO = 261,
    DIFERENTE = 262,
    IDENTIFICADOR = 263,
    MAIS = 264,
    MENOS = 265,
    ASTERISCO = 266,
    BARRA = 267,
    POTENCIA = 268,
    FIM_LINHA = 269,
    TABULACAO = 270,
    E = 271,
    OU = 272,
    MAIS_ATRIBUICAO = 273,
    MENOS_ATRIBUICAO = 274,
    ASTERISCO_ATRIBUICAO = 275,
    BARRA_ATRIBUICAO = 276,
    MENOR = 277,
    MAIOR = 278,
    MAIOR_IGUAL = 279,
    MENOR_IGUAL = 280,
    IGUAL = 281,
    EXCLAMACAO = 282,
    COMENTARIO = 283,
    E_COMERCIAL = 284,
    BARRA_VERTICAL = 285,
    DOIS_PONTOS = 286,
    PONTO_E_VIRGULA = 287,
    VIRGULA = 288,
    CHAVE_ESQUERDA = 289,
    CHAVE_DIREITA = 290,
    COLCHETE_ESQUERDO = 291,
    COLCHETE_DIREITO = 292,
    PARENTESIS_ESQUERDO = 293,
    PARENTESIS_DIREITO = 294,
    ASPAS = 295,
    INCLUA = 296,
    PRINCIPAL = 297,
    DEFINA = 298,
    LEIA = 299,
    ESCREVA = 300,
    PROFESSOR = 301,
    SE = 302,
    SENAO = 303,
    PARA = 304,
    DE = 305,
    ATE = 306,
    PARE = 307,
    ENQUANTO = 308,
    FACA = 309,
    REPITA = 310,
    RETORNE = 311
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 23 "TabSintatica.y"

	int number;
	char caracter;
	char* string;

#line 120 "TabSintatica.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TABSINTATICA_TAB_H_INCLUDED  */
