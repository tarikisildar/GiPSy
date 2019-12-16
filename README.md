# GiPSy
Parser for a programming language that targets GIS programming for a Programming Languages Project in Hacettepe University.

## REQUIREMENTS & INSTALLATION
___________________________________
**To install flex and yacc in Ubuntu:**
	1. sudo apt-get install flex
	2. sudo apt-get install bison
  
1. First Compile yacc program

		yacc -d gipsy.y

	It will generate 3 files- _y.tab.c , y.tab.h and y.output_
    
2. Compile lex file

		lex gipsy.l

   It will generate _lex.yy.c_ file
   
3. Run the following commands

	- gcc -o gipsy_parser.out y.tab.c lex.yy.c -lfl -lm
	- ./gipsy_parser\.out < inp
  
  or you can just use make that includes 1, 2 and 3.1, then run 3.2
  
      make
      ./gipsy_parser\.out < inp
