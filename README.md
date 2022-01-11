<h1>AED_2_Trabalho_5_Arvore_B_banco_de_dados</h1>

Conforme observamos em sala de aula, uma das funções da estrutura em árvore B é prover capacidade de manipulação de inúmeros arquivos, muitas vezes grandes, sob uma hierarquia de sub-conjuntos de entradas menores, cada qual representado por um nó da estrutura. Sua função é simular um banco de dados. Nesse, teremos apenas uma única tabela, composta por nome, idade, cpf que chamaremos de clientes. Nossa tabela deve ter dados aleatórios, o quais podem vir de um banco qualquer da internet ou produzido por vocês a partir de um processo randômico. Teremos nesta tabela 1.000 entradas e cada página da árvore B (i.e., arquivo separado dessa tabela)  sendo representada por 10 dessas entradas de forma ordenada. 

Aplicação: A aplicação de vocês deve ser capaz de mapear esses arquivos com 10 entradas sob o conceito que trabalhamos em sala. Para tanto, considere que cada arquivo seja mapeado por um código que consiga identificar o range de cpfs que estão salvos nele. Nossa árvore tem fator de crescimento m = 2, logo, cada página guardará de 1 a 3 códigos desses. Sua função é prover um menu que consiga: Inserir, Remover e Pesquisar pessoas nesse grupo de arquivos, mantendo sempre a integridade da estrutura e tamanho máximo do arquivo. 


<h2>Descrição do Problema</h2>

1°: Criar uma tabela com 1000 números aleatórios, seguidos de nome e idade.<br>
2°: Dividir as mil informações em arquivos de dez informações.<br>
3°: Inserir esses arquivos na árvore B.<br>
4°: Criar um menu que consiga inserir o arquivo, inserir na mão, pesquisar nos arquivos e remover.<br>

<h2>Árvore B</h2>

A árvore B é ideal para trabalhar com grandes números de arquivos, pois sua arquitetura foi moldada para receber um grande número de dados dispersos, podendo cumprir a organização e busca em tempo polinomial.

<h2>Funcionamento do meu algoritmo</h2>

Inicialização:

~~~
make clean

make

make run
~~~

Dentro do menu, clique em inserir informações do arquivo. Após esse passo a árvore já estará criada e com elementos organizados, daí para frente fica a critério do usuário experimentar as funcionalidades do software. Vale ressaltar que há opções que foram desenvolvidas pelo criador do software para fazer inserções no banco de dados da árvore. 

<h2>Aprendizado</h2>

Fica nítdo, após trabalhar com tal árvore, sua eficiência ao lidar com uma grande quantidade de dados dispersos em um diretório. É uma árvore veloz, ressaltando que o tempo de resposta dá árvore é algo que varia de computador para computador, mas em minha máquina obtive respostas rápidas. Sendo também uma árvore de fácil manuseio.
