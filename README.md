# [Programação e Algoritmos](https://mycampus.pt/courses/) - [IADE](https://www.iade.europeia.pt/) <!-- omit in toc -->

## Exemplo de aplicação de testes unitários

O módulo a testar implementa duas funções: a raiz quadrada de um número real, e o maior divisor comum entre dois números inteiros.

### Testes unitários

Os testes unitários são implementados com recurso ao módulo Unity Test, disponível em [Unity Test](https://github.com/ThrowTheSwitch/Unity/). O repositório já inclui o código fonte do módulo, pelo que não é necessário fazer download do mesmo.

### Estrutura do projeto

``` plaintext
.
├── src
│   ├── my_math.h               // cabeçalho do módulo a testar
│   ├── my_math.c               // implementação do módulo a testar
│   └── tester.c                // programa de testes sem Unity Test
├── test
│   ├── test_my_math.c          // testes unitários sobre o módulo my_math
│   ├── unity/unity.h           // cabeçalho do módulo Unity Test
│   ├── unity/unity_internals.h // cabeçalho do módulo Unity Test
│   ├── unity/unity.c           // implementação do módulo Unity Test
│   └── unity/LICENSE.txt       // licença do módulo Unity Test
├── Makefile                    // ficheiro de compilação
└── README.md                   // este ficheiro
```

### Compilação e execução

Para compilar e executar os testes, basta executar o comando `make test` na linha de comandos. O resultado da execução dos testes é apresentado no terminal.

Para também produzir o relatório de cobertura de código, execute o comando `make cov` na linha de comandos.