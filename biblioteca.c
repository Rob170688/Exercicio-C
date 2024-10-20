#include <stdio.h>
struct Endereco{
	char rua[50];
	int numero;
	char cidade[50];
	char estado[3];
	int cep;
};
struct Livro{
	char titulo[30];
	char autor[50];
	int ano_de_publ;
	int ISBN;
};
struct Biblioteca{
	char nome[100];
	struct Endereco endereco;
	struct Livro livro[1];
};
int main(){

	struct Endereco endereco = {"RuaQualquer", 1000, "Toritama", "PE", 5512500};
	struct Livro livro1 = {"A verdade.", "Desconhecido", 2020, 46456464};
	struct Biblioteca biblio = {"Torre Livros", endereco, livro1};
	printf("Biblioteca: %s \n", biblio.nome);
	printf("Endereço: %s, %d, %s, %s, %d \n", endereco.rua, endereco.numero, endereco.cidade, endereco.estado, endereco.cep);
	printf("Livro: %s, %s, %d, %d \n", livro1.titulo, livro1.autor, livro1.ano_de_publ, livro1.ISBN);	
	return 0;
}
