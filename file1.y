%token FLOAT_LITERAL INTEGER_LITERAL INT RETURN BREAK CONT VOID FLOAT WHILE IF PRINTF STRING
%token IDENTIFIER ELSE OR EQ NEQ LEQ GEQ AND
//%type 	program decl_list decl var_decl type_spec func_decl params param_list
//%type 	param stmt_list stmt while_stmt compound_stmt local_decls local_decl
//%type 	if_stmt return_stmt break_stmt continue_stmt assign_stmt expr Pexpr
//%type 	integerLit floatLit identifier arg_list args

%start program

%{
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
%}

%%

program:
	decl_list
	{
		
		$$ = mknode1(1,$1);
		root = $$;
		strcpy($$->name,"program");
	};

decl_list:
	decl_list decl
	{
		$$ = mknode2(2,$1,$2);
		strcpy($$->name,"decl_list");
	}
|	decl
	{
		$$ = mknode1(1,$1);
		strcpy($$->name,"decl_list");
	};

decl:
	var_decl
	{
		$$ = mknode1(1,$1);
		strcpy($$->name,"decl");
	}
|	func_decl
	{
		
		$$ = mknode1(1,$1);
		strcpy($$->name,"decl");
	};

var_decl:
	type_spec identifier ';'
	{
		$3 = mknode0(0);
		strcpy($3->name,";");
		$$ = mknode3(3,$1,$2,$3);
		strcpy($$->name,"var_decl");		
		
	}
|	type_spec identifier ',' var_decl
	{

		$3 = mknode0(0);
		strcpy($3->name,";");
		$$ = mknode4(4,$1,$2,$3,$4);
		strcpy($$->name,"var_decl");
		
	}
|	type_spec identifier '[' integerLit ']' ';'
	{	

		
		$3 = mknode0(0);
		strcpy($3->name,"[");
		$5 = mknode0(0);
		strcpy($5->name,"]");
		$6 = mknode0(0);
		strcpy($6->name,";");
		$$ = mknode6(6,$1,$2,$3,$4,$5,$6);
		strcpy($$->name,"var_decl");
		if(debug) cout<<"declared[]"<<$2->name<<endl;				
	}
|	type_spec identifier '[' integerLit ']' ',' var_decl
	{

		$3 = mknode0(0);
		strcpy($3->name,"[");
		$5 = mknode0(0);
		strcpy($5->name,"]");
		$6 = mknode0(0);
		strcpy($6->name,",");
		$$ = mknode7(7,$1,$2,$3,$4,$5,$6,$7);
		strcpy($$->name,"var_decl");
		if(debug) cout<<"declared [],"<<$2->name<<endl;				
	};

type_spec:
	VOID
	{
		$1 = mknode0(0);
		strcpy($1->name,"VOID");
		$$ = mknode1(1,$1);
		strcpy($$->name,"type_spec");
	}
|	INT
	{
		$1 = mknode0(0);
		strcpy($1->name,"INT");
		$$ = mknode1(1,$1);
		strcpy($$->name,"type_spec");
	}	
|	FLOAT
	{
		$1 = mknode0(0);
		strcpy($1->name,"FLOAT");
		$$ = mknode1(1,$1);
		strcpy($$->name,"type_spec");
	}
|	VOID '*'
	{
		$1 = mknode0(0);
		strcpy($1->name,"VOID");
		$2 = mknode0(0);
		strcpy($2->name,"*");
		$$ = mknode2(2,$1,$2);
		strcpy($$->name,"type_spec");
	}
|	INT '*'
	{
		$1 = mknode0(0);
		strcpy($1->name,"INT");
		$2 = mknode0(0);
		strcpy($2->name,"*");
		$$ = mknode2(2,$1,$2);
		strcpy($$->name,"type_spec");
	}
|	FLOAT '*'
	{
		$1 = mknode0(0);
		strcpy($1->name,"FLOAT");
		$2 = mknode0(0);
		strcpy($2->name,"*");
		$$ = mknode2(2,$1,$2);
		strcpy($$->name,"type_spec");
	};

func_decl:
	type_spec identifier '(' params ')' compound_stmt
	{
		$3 = mknode0(0);
		strcpy($3->name,"(");
		$5 = mknode0(0);
		strcpy($5->name,")");
		$$= mknode6(6,$1,$2,$3,$4,$5,$6);
		strcpy($$->name,"func_decl");
	};

params:
	param_list
	{
		$$ = mknode1(1,$1);
		strcpy($$->name,"params");
	}
|	{
		$$ = mknode0(1);
		strcpy($$->name,"params");
	};

param_list:
	param_list ',' param
	{
		$2 = mknode0(0);
		strcpy($2->name,",");
		$$ = mknode3(3,$1,$2,$3);
		strcpy($$->name,"param_list");
	}
|	param
	{
		$$ = mknode1(1,$1);
		strcpy($$->name,"param_list");
	};

param:
	type_spec identifier
	{
		$$ = mknode2(2,$1,$2);
		strcpy($$->name,"param");
	}
|	type_spec identifier '[' ']' 
	{
		$3 = mknode0(0);
		strcpy($3->name,"[");
		$4 = mknode0(0);
		strcpy($4->name,"]");
		$$ = mknode4(4,$1,$2,$3,$4);
		strcpy($$->name,"param");
	};

stmt_list:
	stmt_list stmt
	{
		$$ = mknode2(2,$1,$2);
		strcpy($$->name,"stmt_list");
	}
|	stmt
	{
		$$ = mknode1(1,$1);
		strcpy($$->name,"stmt_list");
	};

stmt:
	assign_stmt
	{
		$$ = mknode1(1,$1);
		strcpy($$->name,"stmt");
	}
|	compound_stmt
	{
		$$ = mknode1(1,$1);
		strcpy($$->name,"stmt");
	}
|	if_stmt
	{
		$$ = mknode1(1,$1);
		strcpy($$->name,"stmt");
	}
|	while_stmt
	{
		$$ = mknode1(1,$1);
		strcpy($$->name,"stmt");
	}
|	return_stmt
	{
		$$ = mknode1(1,$1);
		strcpy($$->name,"stmt");
	}
|	break_stmt
	{
		$$ = mknode1(1,$1);
		strcpy($$->name,"stmt");
	}
|	continue_stmt
	{
		$$ = mknode1(1,$1);
		strcpy($$->name,"stmt");
	}
|	print_stmt
	{
		$$ = mknode1(1,$1);
		strcpy($$->name,"stmt");

	};
print_stmt:
	PRINTF '(' string  ',' identifier ')' ';'
	{
		$1 = mknode0(0);
		$2 = mknode0(0);

		$4 = mknode0(0);
				
		$6 = mknode0(0);
		$7 = mknode0(0);

		$$ = mknode7(6,$1,$2,$3,$4,$5,$6,$7);		
		strcpy($$->name,"print_stmt");

	}
while_stmt:
	WHILE '(' expr ')' stmt
	{
		$1 = mknode0(0);
		strcpy($1->name,"WHILE");
		$2 = mknode0(0);
		strcpy($2->name,"(");
		$4 = mknode0(0);
		strcpy($4->name,")");
		$$ = mknode5(5,$1,$2,$3,$4,$5);
		strcpy($$->name,"while_stmt");
	};

compound_stmt:
	'{' local_decls stmt_list '}'
	{
		$1 = mknode0(0);
		strcpy($1->name,"{");
		$4 = mknode0(0);
		strcpy($4->name,"}");
		$$ = mknode4(4,$1,$2,$3,$4);
		strcpy($$->name,"compound_stmt");
	};

local_decls:
	local_decls local_decl
	{
		$$ = mknode2(2,$1,$2);
		strcpy($$->name,"local_decls");
	}
|	{
		$$ = mknode0(1);
		strcpy($$->name,"local_decls");
	};

local_decl:
	type_spec identifier ';'
	{
//		cout<<"declared "<<$2->name<<"\n";
		
		$3 = mknode0(0);
		strcpy($3->name,";");
		$$ = mknode3(3,$1,$2,$3);
		strcpy($$->name,"local_decl");
	}
|	type_spec identifier '[' expr ']' ';'
	{

				
		$3 = mknode0(0);
		strcpy($3->name,"[");
		$5 = mknode0(0);
		strcpy($5->name,"]");
		$6 = mknode0(0);
		strcpy($6->name,";");
		$$ = mknode6(6,$1,$2,$3,$4,$5,$6);
		strcpy($$->name,"local_decl");
	};

if_stmt:
	IF '(' expr ')' stmt
	{
		$1 = mknode0(0);
		strcpy($1->name,"IF");
		$2 = mknode0(0);
		strcpy($2->name,"(");
		$4 = mknode0(0);
		strcpy($4->name,")");
		$$ = mknode5(5,$1,$2,$3,$4,$5);
		strcpy($$->name,"if_stmt");
	}
|	IF '(' expr ')' stmt ELSE stmt
	{
		$1 = mknode0(0);
		strcpy($1->name,"IF");
		$2 = mknode0(0);
		strcpy($2->name,"(");
		$4 = mknode0(0);
		strcpy($4->name,")");
		$6 = mknode0(0);
		strcpy($6->name,"ELSE");
		$$ = mknode7(7,$1,$2,$3,$4,$5,$6,$7);
		strcpy($$->name,"if_stmt");
	};

return_stmt:
	RETURN ';'
	{
		$1 = mknode0(0);
		strcpy($1->name,"RETURN");
		$2 = mknode0(0);
		strcpy($2->name,";");
		$$ = mknode2(2,$1,$2);
		strcpy($$->name,"return_stmt");
	}
|	RETURN expr ';'
	{
		$1 = mknode0(0);
		strcpy($1->name,"RETURN");
		$3 = mknode0(0);
		strcpy($3->name,";");
		$$ = mknode3(3,$1,$2,$3);
		strcpy($$->name,"return_stmt");
	};

break_stmt:
	BREAK ';'
	{
		$1 = mknode0(0);
		strcpy($1->name,"BREAK");
		$2 = mknode0(0);
		strcpy($2->name,";");
		$$ = mknode2(2,$1,$2);
		strcpy($$->name,"break_stmt");
	};

continue_stmt:
	CONT ';'
	{
		$1 = mknode0(0);
		strcpy($1->name,"CONT");
		$2 = mknode0(0);
		strcpy($2->name,";");
		$$ = mknode2(2,$1,$2);
		strcpy($$->name,"continue_stmt");
	};

assign_stmt:
	identifier '=' expr ';'
	{
		$2 = mknode2(2,$1,$3);
		strcpy($2->name,"=");
		$4 = mknode0(0);
		strcpy($4->name,";");
		$$ = mknode2(2,$2,$4);
		
		strcpy($$->name,"assign_stmt");
	}
|	identifier '[' expr ']' '=' expr ';'
	{
		$2 = mknode0(0);
		strcpy($2->name,"[");
		$4 = mknode0(0);
		strcpy($4->name,"]");
		$7 = mknode0(0);
		strcpy($7->name,";");
		$5 = mknode5(5,$1,$2,$3,$4,$6);
		strcpy($5->name,"=");
		$$ = mknode2(2,$5,$7);
		strcpy($$->name,"assign_stmt");
	};

expr:
	Pexpr OR Pexpr
	{
		$2 = mknode2(2,$1,$3);
		strcpy($2->name,"OR");
		$$ = mknode1(1,$2);
		strcpy($$->name,"expr");
		$$->value = $1->value || $3->value;
	}
|	Pexpr EQ Pexpr
	{
		$2 = mknode2(2,$1,$3);
		strcpy($2->name,"EQ");
		$$ = mknode1(1,$2);
		strcpy($$->name,"expr");
		$$->value = $1->value == $3->value;
	}
|	Pexpr NEQ Pexpr
	{
		$2 = mknode2(2,$1,$3);
		strcpy($2->name,"NEQ");
		$$ = mknode1(1,$2);
		strcpy($$->name,"expr");
		$$->value = $1->value != $3->value;
	}
|	Pexpr LEQ Pexpr
	{
		$2 = mknode2(2,$1,$3);
		strcpy($2->name,"LEQ");
		$$ = mknode1(1,$2);
		strcpy($$->name,"expr");
		$$->value = $1->value <= $3->value;
	}
|	Pexpr '<' Pexpr
	{
		$2 = mknode2(2,$1,$3);
		strcpy($2->name,"<");
		$$ = mknode1(1,$2);
		strcpy($$->name,"expr");
		$$->value = $1->value < $3->value;
	}
|	Pexpr GEQ Pexpr
	{
		$2 = mknode2(2,$1,$3);
		strcpy($2->name,"GEQ");
		$$ = mknode1(1,$2);
		strcpy($$->name,"expr");
		$$->value = $1->value >= $3->value;
	}
|	Pexpr '>' Pexpr
	{
		$2 = mknode2(2,$1,$3);
		strcpy($2->name,">");
		$$ = mknode1(1,$2);
		strcpy($$->name,"expr");
		$$->value = $1->value > $3->value;
	}
|	Pexpr AND Pexpr
	{
		$2 = mknode2(2,$1,$3);
		strcpy($2->name,"AND");
		$$ = mknode1(1,$2);
		strcpy($$->name,"expr");
		$$->value = $1->value && $3->value;
	}
|	Pexpr '+' Pexpr
	{
		$2 = mknode2(2,$1,$3);
		strcpy($2->name,"+");
		$$ = mknode1(1,$2);
		strcpy($$->name,"expr");
		
	}
|	Pexpr '-' Pexpr
	{
		$2 = mknode2(2,$1,$3);
		strcpy($2->name,"-");
		$$ = mknode1(1,$2);
		strcpy($$->name,"expr");
		
	}
|	Pexpr '*' Pexpr
	{
		$2 = mknode2(2,$1,$3);
		strcpy($2->name,"*");
		$$ = mknode1(1,$2);
		strcpy($$->name,"expr");
		
	}
|	Pexpr '/' Pexpr
	{
		$2 = mknode2(2,$1,$3);
		strcpy($2->name,"/");
		$$ = mknode1(1,$2);
		strcpy($$->name,"expr");
		
	}
|	Pexpr '%' Pexpr
	{
		$2 = mknode2(2,$1,$3);
		strcpy($2->name,"%");
		$$ = mknode1(1,$2);
		strcpy($$->name,"expr");
		
	}
|	'!' Pexpr
	{
		$1 = mknode0(0);
		strcpy($1->name,"!");
		$$ = mknode2(2,$1,$2);
		strcpy($$->name,"expr");
	}
|	'-' Pexpr
	{
		$1 = mknode0(0);
		strcpy($1->name,"-");
		$$ = mknode2(2,$1,$2);
		strcpy($$->name,"expr");
	}
|	'+' Pexpr
	{
		$1 = mknode0(0);
		strcpy($1->name,"+");
		$$ = mknode2(2,$1,$2);
		strcpy($$->name,"expr");
	}
|	'*' Pexpr
	{
		$1 = mknode0(0);
		strcpy($1->name,"*");
		$$ = mknode2(2,$1,$2);
		strcpy($$->name,"expr");
	}
|	'&' Pexpr
	{
		$1 = mknode0(0);
		strcpy($1->name,"&");
		$$ = mknode2(2,$1,$2);
		strcpy($$->name,"expr");
	}
|	Pexpr
	{
		$$ = mknode1(1,$1);
		strcpy($$->name,"expr");
		
	}
|	identifier '(' args ')'
	{
		$2 = mknode0(0);
		$4 = mknode0(0);
		strcpy($2->name,"(");
		strcpy($4->name,")");			
		$$ = mknode4(4,$1,$2,$3,$4);
		strcpy($$->name,"expr");
	}
|	identifier '[' expr ']'
	{
		$2 = mknode0(0);
		$4 = mknode0(0);
		strcpy($2->name,"[");
		strcpy($4->name,"]");
		$$ = mknode4(4,$1,$2,$3,$4);
		strcpy($$->name,"expr");
	};

Pexpr:
	integerLit
	{
		$$ = mknode1(1,$1);
		strcpy($$->name,"Pexpr");
	}
|	floatLit
	{
		$$ = mknode1(1,$1);
		strcpy($$->name,"Pexpr");
	}
|	identifier
	{
		$$ = mknode1(1,$1);
		strcpy($$->name,"Pexpr");
	}
|	'(' expr ')'
	{
		$1 = mknode0(0);
		$3 = mknode0(0);
		strcpy($1->name,"(");
		strcpy($3->name,")");
		$$ = mknode3(3,$1,$2,$3);
		strcpy($$->name,"Pexpr");
	};

integerLit:
	INTEGER_LITERAL
	{
		$1 = mknode0(0);
		strcpy($1->name,yytext);
		$$ = mknode1(1,$1);
		strcpy($$->name,"integerLit");	
	};

floatLit:
	FLOAT_LITERAL
	{
		$1 = mknode0(0);
		strcpy($1->name,yytext);
		$$ = mknode1(1,$1);
		strcpy($$->name,"floatLit");
	};

identifier:
	IDENTIFIER
	{
		$1 = mknode0(0);
		strcpy($1->name,yytext);
		$$ = mknode1(1,$1);

		strcpy($$->name,"identifier");
	};
string:
	STRING
	{
		$1 = mknode0(0);
		strcpy($1->name,yytext);
		$$ = mknode1(1,$1);
		strcpy($$->name,"string");
	}

arg_list:
	arg_list ',' expr
	{
		$2 = mknode0(0);
		strcpy($2->name,",");
		$$ = mknode3(3,$1,$2,$3);
		strcpy($$->name,"arg_list");
	}
|	expr
	{
		$$ = mknode1(1,$1);
		strcpy($$->name,"arg_list");
	};

args:
	arg_list
	{
		$$ = mknode1(1,$1);
		strcpy($$->name,"args");
	}
|	{
		$$ = mknode0(1);
		strcpy($$->name,"args");
	};



%%

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
				cout<<"\tmovl\t%ebx, %eax\n";
			cout<<"\tpushq\t%rax\n";
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
		//cout<<".enter_while\n";
		cout<<"jmp .L"<<label_start<<"\n";
	cout<<".L"<<label_start+1<<":\n";
		DFS(root->child[4]);
		
	cout<<".L"<<label_start<<":\n";
		expression_eval(root->child[2]);
		
		cout<<"\tpop\t%rax\n";			
		cout<<"\tcmpl\t$0, %eax\n";
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
