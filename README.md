# estrutura-de-dados

## Como compilar os exemplos em C
- compilar o arquivo de implementação do cabeçalho: `gcc -c <arquivo que implementa o cabeçalho>.c -o <binário da implementação>.o`
- compilar o arquivo que importa o cabeçalho: `gcc -c <arquivo que importa o cabeçalho>.c -o <binário que importa>.o`
- linkar os binários, o que implementa e o que importa: `gcc <binário da implementação>.o <binário que importa>.o -o <binário final>`
