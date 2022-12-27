
#ifndef WET2_NODE_H
#define WET2_NODE_H

#include "Player.h"
#include "Team.h"
#include <memory>
#include "wet2util.h"

class Node
{
private:
    shared_ptr<Player> m_player;
    Node* m_next;
    shared_ptr<Team> m_team;
    permutation_t m_buyingTeamSpirit;

public:
    Node(shared_ptr<Player> other);
    Node();
    ~Node();
    Node& operator=(Node& other);
    //getters and setters
    shared_ptr<Player> getPlayer();
    void setPlayer(shared_ptr<Player> p);

    Node* getNext();
    void setNext(Node* next);

    shared_ptr<Team> getTeam();
    void setTeam(shared_ptr<Team> team);

    bool getIsRoot();

    permutation_t getBuyingTeamSpirit();
    void setBuyingTeamSpirit(permutation_t other);
};

#endif //WET2_NODE_H
