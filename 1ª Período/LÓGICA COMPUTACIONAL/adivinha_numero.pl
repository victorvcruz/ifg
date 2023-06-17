% Regras
jogo_adivinhacao :-
    write('Bem-vindo ao jogo de adivinhação de números!'), nl,
    write('Pense em um número entre 1 e 100.'), nl,
    write('Eu vou tentar adivinhar qual número você escolheu.'), nl,
    write('Digite "s" se o número que eu adivinhar for o correto.'), nl,
    write('Digite "mais" se o número que eu adivinhar for menor.'), nl,
    write('Digite "menos" se o número que eu adivinhar for maior.'), nl,
    nl,
    adivinhar_numero(1, 100).

adivinhar_numero(Min, Max) :-
    Min =< Max,
    Numero is (Min + Max) // 2,
    write('Eu adivinho que o número é '), write(Numero), write('. '), nl,
    write('Digite sua resposta: '), nl,
    read(Resposta),
    processar_resposta(Resposta, Numero, Min, Max).

processar_resposta(s, _, _, _) :-
    write('Eu acertei! Obrigado por jogar.'), nl.
processar_resposta(mais, Numero, Min, Max) :-
    NovoMin is Numero + 1,
    adivinhar_numero(NovoMin, Max).
processar_resposta(menos, Numero, Min, Max) :-
    NovoMax is Numero - 1,
    adivinhar_numero(Min, NovoMax).
processar_resposta(_, Numero, Min, Max) :-
    write('Resposta inválida! Tente novamente.'), nl,
    adivinhar_numero(Min, Max).

