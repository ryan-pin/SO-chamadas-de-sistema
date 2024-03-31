Programas

1 - date 
    A biblioteca <ctime> consegue tempo atual em segundos desde a Epoch, em seguida converte isso para uma estrutura "tm" usando a função "localtime()". Então a função "asctime()" é usada para formatadar a data.

2 - uptime 
    O arquivo "/proc/uptime" é aberto e le o tempo de atividade do sistema em segundos, entao fecha o arquivo. Com o tempo de atividade em segundos, convertemos para horas, minutos e os segundos restantes e é impresso na tela.

3 - copy
