Desafio: nível mestre
Implementando Comparações Avançadas com Atributos Múltiplos em C


Este é o desafio final do Super Trunfo! Coloque em prática tudo o que você aprendeu e mostre suas habilidades de programação!


O que você vai fazer


Prepare-se para o desafio final do Super Trunfo!Agor você integrará tudo o que aprendeu sobre estruturas de decisão em C para criar uma lógica de comparação ainda mais sofisticada. Você permitirá que o jogador escolha dois atributos para comparar as cartas de países, implementará menus dinâmicos com switch e usará o operador ternário para tornar seu código mais elegante. Este desafio é a culminação dos desafios anteriores, onde você cadastrou as cartas e implementou a comparação com um único atributo.


Requisitos funcionais


Escolha de Dois Atributos: O sistema deve permitir que o jogador escolha dois atributos numéricos diferentes para a comparação das cartas, através de menus interativos. Implemente a lógica necessária para garantir que o jogador não possa selecionar o mesmo atributo duas vezes.
 
Comparação com Múltiplos Atributos: Implemente a lógica para comparar as duas cartas com base nos dois atributos escolhidos. Para cada atributo, a regra geral é: vence a carta com o maior valor. A exceção continua sendo a Densidade Demográfica, onde vence a carta com o menor valor.
 
Soma dos Atributos: Após comparar os dois atributos individualmente, o sistema deve somar os valores dos atributos para cada carta. A carta com a maior soma vence a rodada.
 
Tratamento de Empates: Implemente a lógica para tratar empates. Se a soma dos atributos das duas cartas for igual, exiba a mensagem "Empate!".
 
Menus Dinâmicos: Crie menus interativos e dinâmicos usando switch. "Dinâmicos" significa que, por exemplo, após o jogador escolher o primeiro atributo, esse atributo não deve mais aparecer como opção para a escolha do segundo atributo.
 
Exibição Clara do Resultado: Mostre o resultado da comparação de forma clara e organizada, incluindo:
 
O nome dos dois países.
 
Os dois atributos usados na comparação.
 
Os valores de cada atributo para cada carta.
 
A soma dos atributos para cada carta.
 
Qual carta venceu (ou se houve empate).

Requisitos não funcionais


Usabilidade: A interface do usuário deve ser intuitiva e fácil de navegar, com mensagens claras e instruções para cada etapa.
 
Performance: O sistema deve executar as comparações e exibir os resultados rapidamente.
 
Manutenibilidade: Escreva um código bem estruturado, organizado, com indentação consistente e comentários explicativos. Use nomes de variáveis descritivos.
 
Confiabilidade: O sistema deve ser robusto e lidar com entradas inválidas do usuário de forma adequada, exibindo mensagens de erro apropriadas e evitando travamentos. Utilize o default no switch para tratar opções inválidas.

Simplificações para o nível avançado


Você pode continuar usando as cartas pré-cadastradas dos desafios anteriores. Não precisa reimplementar o cadastro.
 
Foque na integração de todos os elementos: menus dinâmicos com switch, comparações com if-else (e aninhamentos), operador ternário, cálculo da soma dos atributos e tratamento de empates.
 
A comparação é feita entre apenas duas cartas.
