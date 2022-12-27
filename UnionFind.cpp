#include "UnionFind.h"

UnionFind::UnionFind() : allPlayers(HashMap()) {}

void UnionFind::makeSet(shared_ptr<Player> player, shared_ptr<Team> team)
{
    allPlayers.insertElement(player, team);
}

void unionTeams(shared_ptr<Team> boughtTeam, shared_ptr<Team> buyerTeam)
{
    voi
    if(boughtTeam->getNumOfPlayers() <= buyerTeam->getNumOfPlayers()) {

    }
}