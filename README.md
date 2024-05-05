# Pesquisa de Opinião sobre um Filme

Este é um programa simples em C que realiza uma pesquisa de opinião sobre um filme, coletando os votos dos espectadores e exibindo os resultados.

## Funcionamento

O programa apresenta uma série de opções para os espectadores avaliarem o filme. Os votos são contabilizados e, ao final da pesquisa, o programa exibe as porcentagens de votos para cada categoria: Ruim, Regular, Bom e Excelente.

## Como Executar

1. Certifique-se de ter um compilador C instalado em seu sistema.
2. Abra um terminal na pasta onde está o arquivo fonte (`pesquisa_filme.c`).
3. Compile o programa usando o compilador C. Por exemplo, usando o GCC:
   ```bash
   gcc -o pesquisa_filme pesquisa_filme.c
   ```
4. Execute o programa:
   ```bash
   ./pesquisa_filme
   ```

## Exemplo de Uso

```
O que vc achou do filme?
1 - Ruim
2 - Regular
3 - Bom
4 - Excelente
Escolha sua opcao: 3
Legal que gostou. Volte sempre
O que vc achou do filme?
1 - Ruim
2 - Regular
3 - Bom
4 - Excelente
Escolha sua opcao: 4
Legal. Favor indicar o filme para seus colegas
O que vc achou do filme?
1 - Ruim
2 - Regular
3 - Bom
4 - Excelente
Escolha sua opcao: 900

Resultado da Pesquisa
Ruim ....: 0%
Regular .: 0%
Bom .....: 66%
Excelente: 33%
```

## Contribuição

Contribuições são bem-vindas! Sinta-se à vontade para abrir uma issue ou enviar um pull request.

## Licença

Este projeto está licenciado sob a [Licença MIT](LICENSE).
