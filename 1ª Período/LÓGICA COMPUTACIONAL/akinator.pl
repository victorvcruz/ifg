pessoa(victor).
pessoa(arthur).
pessoa(elisa).
pessoa(filipe).
pessoa(julia).
pessoa(debora).
pessoa(joaquim).

sexo(victor, homem).
sexo(arthur, homem).
sexo(elisa, mulher).
sexo(filipe, homem).
sexo(julia, mulher).
sexo(debora, mulher).
sexo(joaquim, homem).

idade(victor, 18).
idade(arthur, 19).
idade(elisa, 23).
idade(filipe, 18).
idade(julia, 20).
idade(debora, 24).
idade(joaquim, 26).

tamanho(victor, medio).
tamanho(arthur, medio).
tamanho(elisa, baixo).
tamanho(filipe, alto).
tamanho(julia, medio).
tamanho(debora, baixo).
tamanho(joaquim, medio).

civil(victor, fica).
civil(arthur, solteiro).
civil(elisa, namora).
civil(filipe, namora).
civil(julia, fica).
civil(debora, fica).
civil(joaquim, namora).

encontrada(Encontrou, CondPessoa, Pessoa) :-
    findall(Pessoa, CondPessoa, Pessoas),
    length(Pessoas, N),
    (
        N > 1 ->
            Encontrou = nao
        ; N = 1 ->
            Encontrou = sim,
            nth0(0, Pessoas, Pessoa)
        ; Encontrou = nao
    ).

perguntar_sexo(Sexo) :-
    write('Seu sexo é uma mulher?'), nl,
    read(Mulher),

    (Mulher = sim ->
        Sexo = mulher
    ; Sexo = homem
    ).

perguntar_idade(Idade) :-
    write('Possui mais de 20 anos?'), nl,
    read(VinteMais),
    (
        VinteMais = sim ->
            idade(_, X),
            X > 20,
            Idade = X
        ;
            idade(_, X),
            X =< 20,
            Idade = X
    ).  

filtrar_por_idade(Idade, PessoasFiltradas) :-
    findall(Pessoa, (pessoa(Pessoa), idade(Pessoa, PessoaIdade), (
        (Idade > 20, PessoaIdade > 20) ; (Idade =< 20, PessoaIdade =< 20)
    )), PessoasFiltradas).   

perguntar_tamanho(Tamanho) :-
    write('A pessoa é baixa?'), nl,
    read(Baixo),

    (Baixo = sim ->
        Tamanho = baixo
    ;
        write('A pessoa é de tamanho médio?'), nl,
        read(Medio),
        (
          Medio = sim ->
            Tamanho = medio
            ; Tamanho = alto
        )
    ).

perguntar_civil(Civil) :-
    write('Ela é solteira?'), nl,
    read(Solteira),

    (Solteira = sim ->
        Civil = solteiro
    ;   
        write('A pessoa namora?'), nl,
        read(Namora),
        (
          Namora = sim ->
            Civil = namora
            ; Civil = fica
        )
    ).   

akinator :-
    write('Pense em uma pessoa entre: victor, arthur, elisa, filipe, julia, debora, joaquim'), nl,
    write('Digite "sim" ou "nao".'), nl,

    perguntar_sexo(Sexo),

    encontrada(Encontrou, (pessoa(Pessoa), sexo(Pessoa, Sexo)), Pessoa),
    (
        Encontrou = sim -> 
            write('A pessoa é: '), write(Pessoa), nl
        ;

        perguntar_idade(Idade),
        filtrar_por_idade(Idade, PessoasFiltradas),

        encontrada(Encontrou2, (pessoa(Pessoa), sexo(Pessoa, Sexo), member(Pessoa, PessoasFiltradas)), Pessoa),
        (
            Encontrou2 = sim -> 
                write('A pessoa é: '), write(Pessoa), nl
            ;   

            perguntar_tamanho(Tamanho),

            encontrada(Encontrou3, (pessoa(Pessoa), sexo(Pessoa, Sexo), member(Pessoa, PessoasFiltradas), tamanho(Pessoa, Tamanho)), Pessoa),
            (
                Encontrou3 = sim ->
                    write('A pessoa é: '), write(Pessoa), nl
                ;
                    perguntar_civil(Civil),

                    encontrada(Encontrou4, (pessoa(Pessoa), sexo(Pessoa, Sexo), member(Pessoa, PessoasFiltradas), tamanho(Pessoa, Tamanho), civil(Pessoa, Civil)), Pessoa),
                    (
                        Encontrou4 = sim ->
                            write('A pessoa é: '), write(Pessoa), nl
                        ;
                            write('Pessoa não existe')
                    )
            )
        )
    ).