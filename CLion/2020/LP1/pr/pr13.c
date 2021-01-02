#include "pr13.h"
//
// Created by fjvsl on 17/12/2020.
//
/*
 * Adicionar ao projecto (dica do prof)
 * Edificio{
 * ESTUDIO_ARRAY estudios;
 * }
 * ESTUDIO_ARRAY{
 * n_estudios
 * size_estudios;
 * ESTUDIO * estudios
 * }
 */
#include "pr10.h"
int main_pr13(){

}
GAME create_game(const char *pnames[], int size){
    GAME g={NULL};
    for(int i=0; i<size; i++){
        insert_player(&g, pnames[i]);
        return g;
    }
}
void insert_player(GAME *pg, const char player[]){
    PLAYER * pp=(PLAYER *)malloc(sizeof(PLAYER));
    pp->pusername=(char*)malloc(strlen(player)+1);
    strcpy(pp->pusername, player); // Cria o player
    pp->deck.n_cards=pp->deck.size_cards=0;// size_cards(Numero de cartas alocadas
    pp->deck.pcards=NULL;
    pp->pnext=NULL;
    if(pg->pplayers==NULL){
        pg->pplayers=pp;
        return;
    }
    PLAYER*pcurrent=pg->pplayers, *pprev=NULL;
    while(pcurrent!=NULL && strcmp(pcurrent->pusername, player)<0){
        pprev=pcurrent;
        pcurrent=pcurrent->pnext;
    }
    if(pcurrent==pg->pplayers){
        pp->pnext=pg->pplayers;
        pg->pplayers=pp;
        return;
    }
    pp->pnext=pcurrent;
    pprev->pnext=pp;
}
PLAYER*find_player(GAME*pg, const char *name){
    PLAYER *pp=pg->pplayers;
    while (pp!=NULL){
        if(strcmp(pp->pusername, name)==0){
            return pp;
        }
        pp=pp->pnext;
    }
    return NULL;
}

void insert_card(GAME *pg, const char player[], char id, char suit, int points){
    PLAYER*pp=find_player(pg, player);
    if(pp->deck.n_cards>=pp->deck.size_cards){
        if(pp->deck.size_cards==0){
            pp->deck.size_cards=2;
        }
        else{
            pp->deck.size_cards*=2;
        }
        pp->deck.pcards=(CARD*)realloc(pp->deck.pcards, sizeof(CARD)*pp->deck.size_cards);
    }
    CARD*pc=pp->deck.pcards+pp->deck.n_cards;
    pc->cardId=id;
    pc->cardSuit=suit;
    pc->cardPoints=points;
    pp->deck.n_cards;
}
void print_game(GAME g){
    PLAYER*pp=g.pplayers;
    while (pp!=NULL){
        printf("PLAYER: %s\n", pp->pusername);
        CARD*pc=pp->deck.pcards;
        for(int i=0; i<pp->deck.n_cards;i++){
            printf("CARD: %c %c %d\n", pc->cardId, pc->cardSuit, pc->cardPoints);
        }
        pp=pp->pnext;
    }
}