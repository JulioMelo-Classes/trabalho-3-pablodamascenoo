# Snaze


* [Compilação](#compilação)
* [Execução](#execução)

## Compilação


Digite no terminal para compilar com cmake:
```console
mkdir build
cd build
cmake ..
cmake --build .
```


## Execução

Para executar o programa, dentro da pasta build digite o seguinte comando:
```console
./snake PATH
```

Sendo PATH o caminho até os arquivos que contem os labirintos.

## Avaliação CP1

### Snake/Pacman
O jogo deveria conter o modo snake/pacman. Em ambos os modos não é possível andar pra trás. No modo snake deve ser desenhado o corpo.

**Avaliação**

50% apenas o modo pacman foi feito

### Render.ui
O jogo deveria desenhar a UI corretamente, mostrando ao menos as vidas, o nível e o score.

**Avaliação**

não implementado

### Render.mapa
O jogo deveria desenhar o mapa corretamente, com base no arquivo passado como argumento. Ok

**Avaliação**

ok

### Render.snake
O jogo deveria desenhar a snake corretamente.

**Avaliação**
Neste caso vou considerar Ok, pois estou mais preocupado com o posicionamento e movimentação da snake no mapa.

### Logic.colisão e Logic.comida

O jogo deve se comportar corretamente quando ocorre uma colisão com comida e com paredes.

**Avaliação**

Vou considera 60% uma vez que existem bugs quando a cobrinha colide com a comida ou com as paredes, o que deixa o jogo executando mas sem snake sendo mostrada.

### Transição de mapas
O jogo deve ter transição de mapa uma vez que um mapa é terminado.

**Avaliação**

Não implementado.

### Interação com o usuário
O jogo deve perguntar ao usuário se quer continuar/reiniciar o nível/reiniciar o jogo a cada transição de mapa

**Avaliação**

Não implementado

### Classe Level ou similar
O software deve encapsular as funcionalidades do nível em uma classe.

**Avaliação**

Ok

### Classe Player ou similar
O software deve encapsular as decisões do jogo em uma classe.

**Avaliação**

Ok

### Classe Snake ou similar
O software deve encapsular as funcionalidades relacionadas à snake em uma classe. 

**Avaliação**

OK

## Comentários gerais CP1
- Acho que com o que você tem, daria para você tentar entregar o CP2 usando apenas 1 mapa ao invés de entregar as transições de mapa.
- Além disso você poderia entregar o modo snake além do modo pacman.

